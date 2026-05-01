/*
 * XREFs of ??$MakeAndInitialize@VTrayNotifyCallback@SystemTray@@V12@AEAPEAUHSTRING__@@@Details@WRL@Microsoft@@YAJPEAPEAVTrayNotifyCallback@SystemTray@@AEAPEAUHSTRING__@@@Z @ 0x18033DDDC
 * Callers:
 *     ?RuntimeClassInitialize@TrayInfoTipDisplayInfo@SystemTray@@QEAAJPEAUHSTRING__@@@Z @ 0x18033EB38 (-RuntimeClassInitialize@TrayInfoTipDisplayInfo@SystemTray@@QEAAJPEAUHSTRING__@@@Z.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U?$IAsyncOperationCompletedHandler@PEAVAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@@@Foundation@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18007F520 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U-$IAsyncOperatio.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800870F0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0TrayNotifyCallback@SystemTray@@QEAA@XZ @ 0x18033DE68 (--0TrayNotifyCallback@SystemTray@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@TrayNotifyCallback@SystemTray@@QEAAJPEAUHSTRING__@@@Z @ 0x18033F108 (-RuntimeClassInitialize@TrayNotifyCallback@SystemTray@@QEAAJPEAUHSTRING__@@@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<SystemTray::TrayNotifyCallback,SystemTray::TrayNotifyCallback,HSTRING__ * &>(
        volatile signed __int32 **a1,
        HSTRING *a2)
{
  SystemTray::TrayNotifyCallback *v4; // rax
  int v5; // edi
  volatile signed __int32 *v6; // rbx

  *a1 = 0LL;
  v4 = (SystemTray::TrayNotifyCallback *)operator new(0x58uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v4 )
  {
    v6 = (volatile signed __int32 *)SystemTray::TrayNotifyCallback::TrayNotifyCallback(v4);
    v5 = SystemTray::TrayNotifyCallback::RuntimeClassInitialize((SystemTray::TrayNotifyCallback *)v6, *a2);
    if ( v5 >= 0 )
    {
      if ( v6 )
        _InterlockedIncrement(v6 + 3);
      *a1 = v6;
      v5 = 0;
    }
    if ( v6 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Foundation::IAsyncOperationCompletedHandler<Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem *>>::Release(v6);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v5;
}
