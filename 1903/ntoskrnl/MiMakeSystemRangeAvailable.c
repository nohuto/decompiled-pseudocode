/*
 * XREFs of MiMakeSystemRangeAvailable @ 0x1400AB9CC
 * Callers:
 *     MiReturnSystemVa @ 0x1400AB840 (MiReturnSystemVa.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14003DF00 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140044720 (KeAcquireInStackQueuedSpinLock.c)
 *     RtlClearBitsEx @ 0x1400ACE50 (RtlClearBitsEx.c)
 *     MiSystemVaToDynamicBitmap @ 0x1400ACF94 (MiSystemVaToDynamicBitmap.c)
 *     MiNonPagedPoolToNode @ 0x140136DA0 (MiNonPagedPoolToNode.c)
 *     MiReleaseSessionVa @ 0x14013B020 (MiReleaseSessionVa.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 */

__int64 __fastcall MiMakeSystemRangeAvailable(
        ULONG_PTR BugCheckParameter2,
        ULONG_PTR BugCheckParameter3,
        __int64 a3,
        __int64 a4)
{
  ULONG_PTR BugCheckParameter4; // rbp
  ULONG_PTR v5; // rdi
  _SLIST_HEADER *v8; // rsi
  _SLIST_HEADER *v9; // r15
  ULONG_PTR v10; // rbx
  ULONG_PTR v11; // r11
  unsigned __int8 v12; // al
  unsigned __int8 OldIrql; // bl
  __int64 result; // rax
  unsigned __int64 v15; // rcx
  __int64 *v16; // rdx
  __int64 v17; // r9
  __int64 *v18; // r10
  unsigned __int64 Alignment; // rax
  bool i; // zf
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned __int64 v22; // [rsp+30h] [rbp-48h] BYREF
  unsigned __int64 Region; // [rsp+38h] [rbp-40h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+40h] [rbp-38h] BYREF

  BugCheckParameter4 = (int)a3;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v5 = BugCheckParameter3 >> 21;
  v22 = 0LL;
  Region = 0LL;
  if ( (_DWORD)a3 == 1 )
    return MiReleaseSessionVa(BugCheckParameter2, (unsigned int)v5);
  if ( (_DWORD)a3 == 5 )
    v8 = &qword_140465A58[11 * (unsigned int)MiNonPagedPoolToNode(BugCheckParameter2) + 4];
  else
    v8 = (_SLIST_HEADER *)MiSystemVaToDynamicBitmap((unsigned int)a3, BugCheckParameter3, a3, a4);
  v9 = v8;
  v10 = (BugCheckParameter2 - v8[2].Alignment) >> 21;
  if ( (_DWORD)BugCheckParameter4 == 13 )
  {
    v9 = (_SLIST_HEADER *)&v22;
    Alignment = v8[1].Alignment;
    Region = v8->Region;
    v22 = Alignment;
  }
  KeAcquireInStackQueuedSpinLock(&v8[4].Alignment, &LockHandle);
  v11 = v10 + v5 - 1;
  if ( v11 >= v9->Alignment )
    goto LABEL_35;
  if ( v5 > 1 )
  {
    v15 = v9->Region;
    v16 = (__int64 *)(v15 + 8 * (v10 >> 6));
    v17 = *v16;
    v18 = (__int64 *)(v15 + 8 * (v11 >> 6));
    if ( v16 != v18 )
    {
      for ( i = ((-1LL << v10) & v17) == -1LL << v10; ; i = *v16 == -1 )
      {
        if ( !i )
          goto LABEL_35;
        if ( ++v16 == v18 )
          break;
      }
      if ( ((0xFFFFFFFFFFFFFFFFuLL >> ~(_BYTE)v11) & *v16) == 0xFFFFFFFFFFFFFFFFuLL >> ~(_BYTE)v11 )
        goto LABEL_11;
      v12 = 0;
      goto LABEL_10;
    }
    if ( ((0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)v5) << v10) & v17) == 0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)v5) << v10 )
      goto LABEL_11;
LABEL_35:
    KeBugCheckEx(0x1Au, 0x2104uLL, BugCheckParameter2, BugCheckParameter3, BugCheckParameter4);
  }
  if ( v5 != 1 )
    goto LABEL_35;
  v12 = _bittest64((const signed __int64 *)v9->Region, v10);
LABEL_10:
  if ( !v12 )
    goto LABEL_35;
LABEL_11:
  RtlClearBitsEx(v9, v10, v5);
  if ( (_DWORD)BugCheckParameter4 == 13 )
  {
    LODWORD(BugCheckParameter4) = 9;
    if ( v10 < v8[3].Alignment )
      v8[3].Alignment = v10;
  }
  else if ( v10 < v8[1].Region )
  {
    v8[1].Region = v10;
  }
  _InterlockedExchangeAdd64(&qword_1404673C8[(int)BugCheckParameter4], -(__int64)v5);
  if ( (_DWORD)BugCheckParameter4 == 8 )
    qword_140465C08 += BugCheckParameter3;
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
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
