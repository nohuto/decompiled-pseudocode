/*
 * XREFs of PopWatchdogWorker @ 0x1402E5120
 * Callers:
 *     <none>
 * Callees:
 *     PopUpdateWatchdogNoWorkersEvent @ 0x14000630C (PopUpdateWatchdogNoWorkersEvent.c)
 *     KxReleaseSpinLock @ 0x1400630D0 (KxReleaseSpinLock.c)
 *     MmGetSessionById @ 0x14007E4D0 (MmGetSessionById.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14008CE80 (KeAcquireSpinLockRaiseToDpc.c)
 *     MmDetachSession @ 0x14011A630 (MmDetachSession.c)
 *     MmAttachSession @ 0x14011A6C0 (MmAttachSession.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     PopResolveWatchdogParam @ 0x1402E5048 (PopResolveWatchdogParam.c)
 *     MmQuitNextSession @ 0x1406D08F0 (MmQuitNextSession.c)
 */

__int64 __fastcall PopWatchdogWorker(__int64 a1)
{
  bool v2; // r12
  KIRQL v3; // si
  struct _KPRCB *CurrentPrcb; // rcx
  _KPROCESS *SessionById; // rsi
  ULONG_PTR v6; // r13
  ULONG_PTR BugCheckParameter4; // rax
  KIRQL v8; // al
  KIRQL v9; // r13
  struct _KPRCB *v10; // rcx
  __int64 result; // rax
  struct _KPRCB *v12; // rcx
  __int64 BugCheckParameter3; // [rsp+48h] [rbp-59h]
  __int64 BugCheckParameter2; // [rsp+50h] [rbp-51h]
  ULONG BugCheckCode[4]; // [rsp+58h] [rbp-49h]
  __int128 v16; // [rsp+68h] [rbp-39h]
  __int128 v17; // [rsp+78h] [rbp-29h]
  __int128 v18; // [rsp+88h] [rbp-19h]
  __int64 v19; // [rsp+98h] [rbp-9h]
  _BYTE v20[48]; // [rsp+A8h] [rbp+7h] BYREF

  v2 = 0;
  v3 = KeAcquireSpinLockRaiseToDpc(&PopWatchdogLock);
  if ( *(_BYTE *)(a1 + 216) && MEMORY[0xFFFFF78000000008] >= *(_QWORD *)(a1 + 208) )
  {
    *(_OWORD *)BugCheckCode = *(_OWORD *)(a1 + 224);
    v16 = *(_OWORD *)(a1 + 240);
    v17 = *(_OWORD *)(a1 + 256);
    v19 = *(_QWORD *)(a1 + 288);
    v18 = *(_OWORD *)(a1 + 272);
    KxReleaseSpinLock(&PopWatchdogLock);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v3 < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
    __writecr8(v3);
    if ( BugCheckCode[1] == -1 )
      SessionById = 0LL;
    else
      SessionById = (_KPROCESS *)MmGetSessionById(BugCheckCode[1]);
    if ( SessionById )
      v2 = (int)MmAttachSession(SessionById, (__int64)v20) >= 0;
    v6 = PopResolveWatchdogParam(v16, v18);
    BugCheckParameter2 = PopResolveWatchdogParam(*((__int64 *)&v16 + 1), SBYTE1(v18));
    BugCheckParameter3 = PopResolveWatchdogParam(v17, SBYTE2(v18));
    BugCheckParameter4 = PopResolveWatchdogParam(*((__int64 *)&v17 + 1), SBYTE3(v18));
    if ( !*((_QWORD *)&v18 + 1) )
      KeBugCheckEx(BugCheckCode[2], v6, BugCheckParameter2, BugCheckParameter3, BugCheckParameter4);
    (*((void (__fastcall **)(__int64, _QWORD, ULONG_PTR, __int64, __int64, ULONG_PTR))&v18 + 1))(
      v19,
      BugCheckCode[2],
      v6,
      BugCheckParameter2,
      BugCheckParameter3,
      BugCheckParameter4);
    v8 = KeAcquireSpinLockRaiseToDpc(&PopWatchdogLock);
    *(_BYTE *)(a1 + 21) = 0;
    v9 = v8;
    PopUpdateWatchdogNoWorkersEvent(a1);
    KxReleaseSpinLock(&PopWatchdogLock);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v9 < 2u )
    {
      v10 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v10->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick((__int64)v10);
    }
    result = v9;
    __writecr8(v9);
    if ( v2 )
    {
      MmDetachSession((__int64)SessionById, (__int64)v20);
      return MmQuitNextSession(SessionById);
    }
  }
  else
  {
    *(_BYTE *)(a1 + 21) = 0;
    PopUpdateWatchdogNoWorkersEvent(a1);
    KxReleaseSpinLock(&PopWatchdogLock);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v3 < 2u )
    {
      v12 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v12->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick((__int64)v12);
    }
    result = v3;
    __writecr8(v3);
  }
  return result;
}
