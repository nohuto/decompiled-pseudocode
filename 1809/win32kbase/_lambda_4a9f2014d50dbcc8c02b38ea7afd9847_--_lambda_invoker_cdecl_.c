/*
 * XREFs of _lambda_4a9f2014d50dbcc8c02b38ea7afd9847_::_lambda_invoker_cdecl_ @ 0x1C00AD100
 * Callers:
 *     <none>
 * Callees:
 *     RIMLockExclusive @ 0x1C0031320 (RIMLockExclusive.c)
 *     WPP_RECORDER_SF_q @ 0x1C004F724 (WPP_RECORDER_SF_q.c)
 *     RIMUnRegisterForInputDeviceTypeClassNotifications @ 0x1C0050744 (RIMUnRegisterForInputDeviceTypeClassNotifications.c)
 *     ?UnLockExclusive@CInpPushLock@@QEAAXXZ @ 0x1C00514E0 (-UnLockExclusive@CInpPushLock@@QEAAXXZ.c)
 */

void __fastcall lambda_4a9f2014d50dbcc8c02b38ea7afd9847_::_lambda_invoker_cdecl_(__int64 a1)
{
  unsigned int i; // edi

  if ( !*(_DWORD *)(a1 + 864) )
  {
    RIMLockExclusive(a1 + 104);
    if ( !*(_BYTE *)(a1 + 81) && !*(_BYTE *)(a1 + 80) )
    {
      for ( i = 0; i <= 2; ++i )
      {
        if ( (int)RIMUnRegisterForInputDeviceTypeClassNotifications(a1, i) < 0 )
          WPP_RECORDER_SF_q(gRimLog, 3u, 0x16u, 0x7Cu, (__int64)&WPP_ff8d7d31783c3bc296050c767c63afe6_Traceguids, a1);
      }
    }
    CInpPushLock::UnLockExclusive((CInpPushLock *)(a1 + 104));
  }
}
