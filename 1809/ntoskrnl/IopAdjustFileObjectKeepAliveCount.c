/*
 * XREFs of IopAdjustFileObjectKeepAliveCount @ 0x140284A38
 * Callers:
 *     IoDecrementKeepAliveCount @ 0x1402845E0 (IoDecrementKeepAliveCount.c)
 *     IoIncrementKeepAliveCount @ 0x140284710 (IoIncrementKeepAliveCount.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x1400630D0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14008CE80 (KeAcquireSpinLockRaiseToDpc.c)
 *     IopGetSetSpecificExtension @ 0x14008CFBC (IopGetSetSpecificExtension.c)
 *     IopGetFileObjectExtension @ 0x1400B78B0 (IopGetFileObjectExtension.c)
 *     IopVerifierExAllocatePool_0 @ 0x1400DD8DC (IopVerifierExAllocatePool_0.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IopAdjustFileObjectKeepAliveCount(__int64 a1, __int64 a2, int a3, __int64 a4, _QWORD *a5)
{
  _QWORD *Pool_0; // rdi
  PVOID v6; // rsi
  __int64 result; // rax
  unsigned int v10; // ebx
  __int64 v11; // r14
  KIRQL v12; // al
  __int64 *v13; // rcx
  KIRQL v14; // r13
  _DWORD *v15; // rax
  bool v16; // al
  int v17; // edx
  int v18; // edx
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 FileObjectExtension; // [rsp+30h] [rbp-38h] BYREF
  PKSPIN_LOCK SpinLock; // [rsp+38h] [rbp-30h]
  _DWORD *v23; // [rsp+88h] [rbp+20h]

  v23 = (_DWORD *)a4;
  Pool_0 = 0LL;
  v6 = 0LL;
  if ( a3 )
  {
    LOBYTE(a4) = 1;
    result = IopGetSetSpecificExtension(a1, 1u, 0x20u, a4, &FileObjectExtension, 0LL);
    v10 = result;
    if ( (int)result < 0 )
      return result;
    Pool_0 = IopVerifierExAllocatePool_0(NonPagedPoolNx, 0x20uLL);
    if ( Pool_0 )
    {
      v6 = IopVerifierExAllocatePool_0(NonPagedPoolNx, 0x38uLL);
      if ( !v6 )
      {
        ExFreePoolWithTag(Pool_0, 0);
        Pool_0 = 0LL;
      }
    }
    v11 = FileObjectExtension;
  }
  else
  {
    v10 = 0;
    FileObjectExtension = IopGetFileObjectExtension(a1, 1, 0LL);
    v11 = FileObjectExtension;
    if ( !FileObjectExtension )
      return 3221225485LL;
  }
  SpinLock = (PKSPIN_LOCK)(a1 + 184);
  v12 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 184));
  v13 = *(__int64 **)(v11 + 24);
  v14 = v12;
  if ( v13 )
  {
    while ( v13[1] != a2 )
    {
      v13 = (__int64 *)*v13;
      if ( !v13 )
        goto LABEL_10;
    }
    v17 = *((_DWORD *)v13 + 4);
    if ( a3 )
      v18 = v17 + 1;
    else
      v18 = v17 - 1;
    *((_DWORD *)v13 + 4) = v18;
    *a5 = v13[3];
    *v23 = v18;
  }
  else
  {
LABEL_10:
    if ( a3 )
    {
      if ( Pool_0 )
      {
        memset(Pool_0, 0, 0x20uLL);
        memset(v6, 0, 0x38uLL);
        *Pool_0 = *(_QWORD *)(v11 + 24);
        *(_QWORD *)(v11 + 24) = Pool_0;
        Pool_0[1] = a2;
        *((_DWORD *)Pool_0 + 4) = 1;
        Pool_0[3] = v6;
        *((_QWORD *)v6 + 3) = a2;
        *((_QWORD *)v6 + 5) = a1;
        v16 = 0;
        if ( (*(_DWORD *)(a1 + 80) & 0x20000000) != 0 )
        {
          v15 = *(_DWORD **)(a1 + 208);
          if ( !v15 || (*v15 & 8) == 0 )
            v16 = 1;
        }
        *((_BYTE *)v6 + 18) = v16;
        Pool_0 = 0LL;
        *a5 = v6;
        v6 = 0LL;
        *v23 = 1;
      }
      else
      {
        v10 = -1073741670;
      }
    }
    else
    {
      v10 = -1073741811;
    }
  }
  KxReleaseSpinLock(SpinLock);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v14 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
  }
  __writecr8(v14);
  if ( Pool_0 )
    ExFreePoolWithTag(Pool_0, 0);
  if ( v6 )
    ExFreePoolWithTag(v6, 0);
  return v10;
}
