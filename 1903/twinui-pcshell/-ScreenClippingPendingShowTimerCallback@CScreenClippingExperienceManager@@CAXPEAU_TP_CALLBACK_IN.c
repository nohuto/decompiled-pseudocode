/*
 * XREFs of ?ScreenClippingPendingShowTimerCallback@CScreenClippingExperienceManager@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x1801B2570
 * Callers:
 *     <none>
 * Callees:
 *     ?HandleScreenClippingPendingShowReturn@CScreenClippingExperienceManager@@AEAAXXZ @ 0x1801AED10 (-HandleScreenClippingPendingShowReturn@CScreenClippingExperienceManager@@AEAAXXZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$0BD@@WRL@Microsoft@@$00$00$0A@UIBuffer@Streams@Storage@Windows@@U?$CloakedIid@UIBufferByteAccess@Streams@Storage@Windows@@@23@U?$CloakedIid@UIMarshal@@@23@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1801B1F40 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$0BD@@WRL@Microsoft@@$00$00$0A@UIB_ea_1801B1F40.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CScreenClippingExperienceManager::ScreenClippingPendingShowTimerCallback(
        PTP_CALLBACK_INSTANCE Instance,
        volatile signed __int64 *Context,
        PTP_TIMER Timer)
{
  signed __int64 v4; // rax
  signed __int64 v5; // rtt

  if ( Context )
  {
    v4 = *((_QWORD *)Context + 9);
    while ( v4 >= 0 )
    {
      v5 = v4;
      v4 = _InterlockedCompareExchange64(Context + 9, v4 + 1, v4);
      if ( v5 == v4 )
        goto LABEL_7;
    }
    _InterlockedIncrement((volatile signed __int32 *)(2 * v4 + 16));
  }
LABEL_7:
  CScreenClippingExperienceManager::HandleScreenClippingPendingShowReturn((CScreenClippingExperienceManager *)Context);
  if ( Context )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<19>,1,1,0,Windows::Storage::Streams::IBuffer,Microsoft::WRL::CloakedIid<Windows::Storage::Streams::IBufferByteAccess>,Microsoft::WRL::CloakedIid<IMarshal>,Microsoft::WRL::FtmBase>::Release(Context);
}
