/*
 * XREFs of IopSetLockOperationProcess @ 0x14008C644
 * Callers:
 *     NtLockFile @ 0x1405FB000 (NtLockFile.c)
 *     IopCloseFile @ 0x14063AB30 (IopCloseFile.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x1400630D0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14008CE80 (KeAcquireSpinLockRaiseToDpc.c)
 *     IopVerifierExAllocatePool @ 0x14008CF8C (IopVerifierExAllocatePool.c)
 *     IopGetSetSpecificExtension @ 0x14008CFBC (IopGetSetSpecificExtension.c)
 *     IopGetFileObjectExtension @ 0x1400B78B0 (IopGetFileObjectExtension.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IopSetLockOperationProcess(__int64 a1, __int64 a2, char a3, __int64 a4)
{
  _QWORD *v4; // rbx
  char v5; // r14
  __int64 result; // rax
  __int64 v10; // rcx
  unsigned int v11; // edi
  __int64 Pool; // rax
  __int64 v13; // rsi
  KIRQL v14; // al
  __int64 v15; // rdx
  KIRQL v16; // r13
  _QWORD *v17; // rcx
  struct _KPRCB *CurrentPrcb; // rcx
  char v19; // [rsp+78h] [rbp+10h]
  __int64 FileObjectExtension; // [rsp+88h] [rbp+20h] BYREF

  v4 = 0LL;
  v5 = 0;
  if ( !a2 )
    return 3221225485LL;
  if ( a3 )
  {
    v11 = 0;
    FileObjectExtension = IopGetFileObjectExtension(a1, 1LL, 0LL, a4);
    v13 = FileObjectExtension;
    if ( !FileObjectExtension )
      return 3221225473LL;
  }
  else
  {
    LOBYTE(a4) = 1;
    result = IopGetSetSpecificExtension(a1, 1LL, 32LL, a4, &FileObjectExtension, 0LL);
    v11 = result;
    if ( (int)result < 0 )
      return result;
    Pool = IopVerifierExAllocatePool(v10, 16LL);
    v13 = FileObjectExtension;
    v4 = (_QWORD *)Pool;
  }
  v14 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 184));
  v15 = *(_QWORD *)(v13 + 16);
  v16 = v14;
  v19 = *(_BYTE *)(a1 + 72);
  if ( v15 )
  {
    v17 = *(_QWORD **)(v13 + 16);
    while ( v17[1] != a2 )
    {
      v17 = (_QWORD *)*v17;
      if ( !v17 )
        goto LABEL_18;
    }
    v5 = 1;
  }
  else
  {
LABEL_18:
    if ( !a3 )
    {
      if ( v4 )
      {
        *v4 = v15;
        *(_QWORD *)(v13 + 16) = v4;
        v4[1] = a2;
      }
      else
      {
        v11 = -1073741670;
      }
    }
  }
  KxReleaseSpinLock((PKSPIN_LOCK)(a1 + 184));
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v16 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  __writecr8(v16);
  if ( v5 && v4 )
    ExFreePoolWithTag(v4, 0);
  if ( a3 )
  {
    if ( v19 && v5 )
      return 0LL;
    return 3221225473LL;
  }
  return v11;
}
