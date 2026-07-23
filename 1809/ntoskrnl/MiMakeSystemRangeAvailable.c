/*
 * XREFs of MiMakeSystemRangeAvailable @ 0x1400280B0
 * Callers:
 *     MiReturnSystemVa @ 0x14002840C (MiReturnSystemVa.c)
 * Callees:
 *     MiNonPagedPoolToNode @ 0x1400261A4 (MiNonPagedPoolToNode.c)
 *     RtlClearBitsEx @ 0x140027F20 (RtlClearBitsEx.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14007DE80 (KeAcquireInStackQueuedSpinLock.c)
 *     KxReleaseQueuedSpinLock @ 0x1400BC6A0 (KxReleaseQueuedSpinLock.c)
 *     MiSystemVaToDynamicBitmap @ 0x1400F7280 (MiSystemVaToDynamicBitmap.c)
 *     MiReleaseSessionVa @ 0x140138184 (MiReleaseSessionVa.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 */

__int64 __fastcall MiMakeSystemRangeAvailable(
        ULONG_PTR BugCheckParameter2,
        ULONG_PTR BugCheckParameter3,
        unsigned int a3)
{
  ULONG_PTR BugCheckParameter4; // rbp
  ULONG_PTR v4; // rdi
  unsigned __int64 *p_Region; // rsi
  unsigned __int64 *v8; // r15
  ULONG_PTR v9; // rbx
  ULONG_PTR v10; // r11
  unsigned __int8 v11; // al
  unsigned __int8 OldIrql; // bl
  __int64 result; // rax
  unsigned __int64 v14; // rcx
  __int64 *v15; // rdx
  __int64 v16; // r9
  __int64 *v17; // r10
  unsigned __int64 v18; // rax
  bool i; // zf
  struct _KPRCB *CurrentPrcb; // rcx
  _QWORD v21[2]; // [rsp+30h] [rbp-48h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+40h] [rbp-38h] BYREF

  BugCheckParameter4 = (int)a3;
  v4 = BugCheckParameter3 >> 21;
  if ( a3 == 1 )
    return MiReleaseSessionVa(BugCheckParameter2, (unsigned int)v4);
  if ( a3 == 5 )
    p_Region = &qword_14043B118[25 * (unsigned int)MiNonPagedPoolToNode(BugCheckParameter2) + 11].Region;
  else
    p_Region = (unsigned __int64 *)MiSystemVaToDynamicBitmap(a3);
  v8 = p_Region;
  v9 = (BugCheckParameter2 - p_Region[4]) >> 21;
  if ( (_DWORD)BugCheckParameter4 == 14 )
  {
    v8 = v21;
    v18 = p_Region[2];
    v21[1] = p_Region[1];
    v21[0] = v18;
  }
  KeAcquireInStackQueuedSpinLock(p_Region + 8, &LockHandle);
  v10 = v9 + v4 - 1;
  if ( v10 >= *v8 )
    goto LABEL_35;
  if ( v4 > 1 )
  {
    v14 = v8[1];
    v15 = (__int64 *)(v14 + 8 * (v9 >> 6));
    v16 = *v15;
    v17 = (__int64 *)(v14 + 8 * (v10 >> 6));
    if ( v15 != v17 )
    {
      for ( i = ((-1LL << v9) & v16) == -1LL << v9; ; i = *v15 == -1 )
      {
        if ( !i )
          goto LABEL_35;
        if ( ++v15 == v17 )
          break;
      }
      if ( ((0xFFFFFFFFFFFFFFFFuLL >> ~(_BYTE)v10) & *v15) == 0xFFFFFFFFFFFFFFFFuLL >> ~(_BYTE)v10 )
        goto LABEL_11;
      v11 = 0;
      goto LABEL_10;
    }
    if ( ((0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)v4) << v9) & v16) == 0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)v4) << v9 )
      goto LABEL_11;
LABEL_35:
    KeBugCheckEx(0x1Au, 0x2104uLL, BugCheckParameter2, BugCheckParameter3, BugCheckParameter4);
  }
  if ( v4 != 1 )
    goto LABEL_35;
  v11 = _bittest64((const signed __int64 *)v8[1], v9);
LABEL_10:
  if ( !v11 )
    goto LABEL_35;
LABEL_11:
  RtlClearBitsEx((__int64)v8, v9, v4);
  if ( (_DWORD)BugCheckParameter4 == 14 )
  {
    LODWORD(BugCheckParameter4) = 9;
    if ( v9 < p_Region[6] )
      p_Region[6] = v9;
  }
  else if ( v9 < p_Region[3] )
  {
    p_Region[3] = v9;
  }
  _InterlockedExchangeAdd64(&qword_14043C990[(int)BugCheckParameter4], -(__int64)v4);
  if ( (_DWORD)BugCheckParameter4 == 8 )
    qword_14043B288 += BugCheckParameter3;
  KxReleaseQueuedSpinLock(&LockHandle);
  OldIrql = LockHandle.OldIrql;
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  result = OldIrql;
  __writecr8(OldIrql);
  return result;
}
