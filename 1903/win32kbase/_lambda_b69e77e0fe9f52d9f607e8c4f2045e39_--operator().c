/*
 * XREFs of _lambda_b69e77e0fe9f52d9f607e8c4f2045e39_::operator() @ 0x1C00BF3F8
 * Callers:
 *     _lambda_b69e77e0fe9f52d9f607e8c4f2045e39_::_lambda_invoker_cdecl_ @ 0x1C00BF3E0 (_lambda_b69e77e0fe9f52d9f607e8c4f2045e39_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C00320D0 (RIMLockExclusive.c)
 *     WPP_RECORDER_SF_q @ 0x1C0038944 (WPP_RECORDER_SF_q.c)
 *     ?UnLockExclusive@CInpPushLock@@QEAAXXZ @ 0x1C0054C20 (-UnLockExclusive@CInpPushLock@@QEAAXXZ.c)
 *     RIMUnRegisterForInputDeviceTypeClassNotifications @ 0x1C006C1B8 (RIMUnRegisterForInputDeviceTypeClassNotifications.c)
 */

void __fastcall lambda_b69e77e0fe9f52d9f607e8c4f2045e39_::operator()(__int64 a1, __int64 a2)
{
  unsigned int i; // edi
  int v4; // edx

  if ( !*(_DWORD *)(a2 + 864) )
  {
    RIMLockExclusive(a2 + 104);
    if ( !*(_BYTE *)(a2 + 81) && !*(_BYTE *)(a2 + 80) )
    {
      for ( i = 0; i <= 2; ++i )
      {
        if ( (int)RIMUnRegisterForInputDeviceTypeClassNotifications(a2, i) < 0
          && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v4) = 4;
          WPP_RECORDER_SF_q((_DWORD)gRimLog, v4, 1, 122, (__int64)&WPP_2d6ecbd811d03edf33b26cf20b4442f4_Traceguids, a2);
        }
      }
    }
    CInpPushLock::UnLockExclusive((CInpPushLock *)(a2 + 104));
  }
}
