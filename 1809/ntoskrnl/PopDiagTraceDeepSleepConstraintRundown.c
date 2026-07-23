/*
 * XREFs of PopDiagTraceDeepSleepConstraintRundown @ 0x140142474
 * Callers:
 *     PopDiagTraceControlCallback @ 0x140588FE0 (PopDiagTraceControlCallback.c)
 * Callees:
 *     EtwEventEnabled @ 0x14005B2D0 (EtwEventEnabled.c)
 *     KxReleaseSpinLock @ 0x1400630D0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14008CE80 (KeAcquireSpinLockRaiseToDpc.c)
 *     EtwWriteEx @ 0x1400CAE40 (EtwWriteEx.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

void PopDiagTraceDeepSleepConstraintRundown()
{
  unsigned __int16 v0; // bx
  unsigned int v1; // eax
  unsigned int v2; // r8d
  unsigned __int8 v3; // di
  unsigned __int64 v4; // rcx
  ULONG UserDataCount; // r9d
  bool v6; // zf
  _DWORD *v7; // rcx
  __int64 v8; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned __int16 v10; // [rsp+40h] [rbp-F8h] BYREF
  _DWORD v11[10]; // [rsp+48h] [rbp-F0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+70h] [rbp-C8h] BYREF
  _QWORD v13[20]; // [rsp+80h] [rbp-B8h]

  v0 = 0;
  if ( PopDiagHandleRegistered && EtwEventEnabled(PopDiagHandle, &POP_ETW_DEEP_SLEEP_CONSTRAINT_RUNDOWN) )
  {
    LOBYTE(v1) = KeAcquireSpinLockRaiseToDpc(&PopDeepSleepDisengageReasonLock);
    v2 = PopDeepSleepDisengageReasonMask;
    v3 = v1;
    *(_QWORD *)&UserData.Size = 2LL;
    v4 = (unsigned int)PopDeepSleepDisengageReasonMask
       - (((unsigned __int64)(unsigned int)PopDeepSleepDisengageReasonMask >> 1) & 0x5555555555555555LL);
    v10 = (0x101010101010101LL
         * (((v4 & 0x3333333333333333LL)
           + ((v4 >> 2) & 0x3333333333333333LL)
           + (((v4 & 0x3333333333333333LL) + ((v4 >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 56;
    UserDataCount = v10 + 1;
    UserData.Ptr = (ULONGLONG)&v10;
    v6 = !_BitScanForward(&v1, PopDeepSleepDisengageReasonMask);
    v11[0] = v1;
    if ( !v6 )
    {
      v7 = v11;
      do
      {
        v2 &= v2 - 1;
        v8 = 2LL * v0++;
        v13[v8] = v7;
        v13[v8 + 1] = 4LL;
        v7 = &v11[v0];
        v6 = !_BitScanForward((unsigned int *)&v8, v2);
        *v7 = v8;
      }
      while ( !v6 );
    }
    EtwWriteEx(PopDiagHandle, &POP_ETW_DEEP_SLEEP_CONSTRAINT_RUNDOWN, 0LL, 0, 0LL, 0LL, UserDataCount, &UserData);
    KxReleaseSpinLock(&PopDeepSleepDisengageReasonLock);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v3 < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    __writecr8(v3);
  }
}
