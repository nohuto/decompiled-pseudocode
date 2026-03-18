/*
 * XREFs of ?MarkPointerMessageGenerated@CTouchProcessor@@QEAAXI_JHPEAX@Z @ 0x1C016E1C0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C002E6D4 (WPP_RECORDER_SF_.c)
 *     ??0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@@Z @ 0x1C00A4DE8 (--0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@@Z.c)
 *     ?UnLock@CInpLockGuard@@QEAAXXZ @ 0x1C00A4FC0 (-UnLock@CInpLockGuard@@QEAAXXZ.c)
 *     ?ReferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x1C01717A8 (-ReferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z.c)
 *     ?SetPointerInfoNodeMessagePosted@CTouchProcessor@@IEAAH_KIH@Z @ 0x1C0173E30 (-SetPointerInfoNodeMessagePosted@CTouchProcessor@@IEAAH_KIH@Z.c)
 *     IsPointerInputMessageWithState @ 0x1C0176CDC (IsPointerInputMessageWithState.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01CAB94 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CTouchProcessor::MarkPointerMessageGenerated(
        CTouchProcessor *this,
        unsigned int a2,
        unsigned __int64 a3,
        int a4)
{
  unsigned int v6; // ebx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rcx
  int v12; // edx
  CInpLockGuard *v13; // [rsp+30h] [rbp-28h] BYREF
  int v14; // [rsp+38h] [rbp-20h]

  v6 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      a2,
      7,
      81,
      (__int64)&WPP_06d7dff703a03015e007562f188a8383_Traceguids);
  }
  CInpLockGuardExclusiveIfNeeded::CInpLockGuardExclusiveIfNeeded(
    (CInpLockGuardExclusiveIfNeeded *)&v13,
    (CTouchProcessor *)((char *)this + 48));
  if ( !(unsigned int)IsPointerInputMessageWithState(v6) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v9, v8, v10);
  CTouchProcessor::SetPointerInfoNodeMessagePosted(this, a3, v6, a4);
  CTouchProcessor::ReferenceMsgData(v11, a3, 2LL);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v12) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v12,
      7,
      82,
      (__int64)&WPP_06d7dff703a03015e007562f188a8383_Traceguids);
  }
  if ( !v14 )
    CInpLockGuard::UnLock(v13);
}
