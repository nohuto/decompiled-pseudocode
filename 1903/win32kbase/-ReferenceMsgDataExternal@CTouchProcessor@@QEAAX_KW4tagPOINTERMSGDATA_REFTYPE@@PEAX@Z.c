/*
 * XREFs of ?ReferenceMsgDataExternal@CTouchProcessor@@QEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x1C0171880
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C002E6D4 (WPP_RECORDER_SF_.c)
 *     ??0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@@Z @ 0x1C00A4DE8 (--0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@@Z.c)
 *     ?UnLock@CInpLockGuard@@QEAAXXZ @ 0x1C00A4FC0 (-UnLock@CInpLockGuard@@QEAAXXZ.c)
 *     ?ReferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x1C01717A8 (-ReferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z.c)
 */

void __fastcall CTouchProcessor::ReferenceMsgDataExternal(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v4; // rdi
  __int64 v6; // rcx
  int v7; // edx
  CInpLockGuard *v8; // [rsp+30h] [rbp-28h] BYREF
  int v9; // [rsp+38h] [rbp-20h]

  v4 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      a2,
      7,
      298,
      (__int64)&WPP_06d7dff703a03015e007562f188a8383_Traceguids);
  }
  CInpLockGuardExclusiveIfNeeded::CInpLockGuardExclusiveIfNeeded(
    (CInpLockGuardExclusiveIfNeeded *)&v8,
    (struct CInpLockGuard *)(a1 + 48));
  CTouchProcessor::ReferenceMsgData(v6, v4, a3);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v7) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v7,
      7,
      299,
      (__int64)&WPP_06d7dff703a03015e007562f188a8383_Traceguids);
  }
  if ( !v9 )
    CInpLockGuard::UnLock(v8);
}
