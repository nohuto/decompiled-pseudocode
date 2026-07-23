/*
 * XREFs of ViSpecialFreeCommonBuffer @ 0x14092F900
 * Callers:
 *     VfFreeCommonBuffer @ 0x14092BF70 (VfFreeCommonBuffer.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x1400630D0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14008CE80 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     DECREMENT_COMMON_BUFFERS @ 0x14092A324 (DECREMENT_COMMON_BUFFERS.c)
 *     VF_FIND_BUFFER @ 0x14092A79C (VF_FIND_BUFFER.c)
 *     ViCheckPadding @ 0x14092DE08 (ViCheckPadding.c)
 */

unsigned __int16 *__fastcall ViSpecialFreeCommonBuffer(
        void (__fastcall *a1)(_QWORD, _QWORD, _QWORD, _QWORD, char),
        _QWORD *a2,
        void *a3,
        char a4)
{
  unsigned __int16 *result; // rax
  unsigned __int16 *v9; // rbx
  KIRQL v10; // r14
  __int64 v11; // r9
  unsigned __int16 **v12; // rdx
  struct _KPRCB *CurrentPrcb; // rcx
  char v14; // [rsp+20h] [rbp-28h]

  result = VF_FIND_BUFFER(a2 + 10, (__int64)a3);
  v9 = result;
  if ( result )
  {
    ViCheckPadding(*((_QWORD *)result + 2), *((_DWORD *)result + 1), *((_QWORD *)result + 3), *((_DWORD *)result + 2));
    v10 = KeAcquireSpinLockRaiseToDpc(a2 + 12);
    v11 = *((_QWORD *)v9 + 6);
    v12 = (unsigned __int16 **)*((_QWORD *)v9 + 7);
    if ( *(unsigned __int16 **)(v11 + 8) != v9 + 24 || *v12 != v9 + 24 )
      __fastfail(3u);
    *v12 = (unsigned __int16 *)v11;
    *(_QWORD *)(v11 + 8) = v12;
    KxReleaseSpinLock(a2 + 12);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v10 < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
    __writecr8(v10);
    memset(a3, 0, *((unsigned int *)v9 + 2));
    v14 = a4;
    a1(a2[2], *((unsigned int *)v9 + 1), *((_QWORD *)v9 + 4), *((_QWORD *)v9 + 2), v14);
    DECREMENT_COMMON_BUFFERS((__int64)a2);
    ExFreePoolWithTag(v9, 0);
    return (unsigned __int16 *)1;
  }
  return result;
}
