/*
 * XREFs of ??$MakeAndInitialize@VTrayInfoTipDisplayInfo@SystemTray@@V12@PEAUHSTRING__@@@Details@WRL@Microsoft@@YAJPEAPEAVTrayInfoTipDisplayInfo@SystemTray@@$$QEAPEAUHSTRING__@@@Z @ 0x18033D594
 * Callers:
 *     ?RuntimeClassInitialize@TrayInfoTipAppInfo@SystemTray@@QEAAJPEAUHSTRING__@@@Z @ 0x18033D9D4 (-RuntimeClassInitialize@TrayInfoTipAppInfo@SystemTray@@QEAAJPEAUHSTRING__@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800870F0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIAppDisplayInfo@ApplicationModel@Windows@@UIInternalAppInfo@5Extensions@Internal@6@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18033C6B0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIApp_ea_18033C6B0.c)
 *     ??0TrayInfoTipDisplayInfo@SystemTray@@QEAA@XZ @ 0x18033D700 (--0TrayInfoTipDisplayInfo@SystemTray@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@TrayInfoTipDisplayInfo@SystemTray@@QEAAJPEAUHSTRING__@@@Z @ 0x18033EB38 (-RuntimeClassInitialize@TrayInfoTipDisplayInfo@SystemTray@@QEAAJPEAUHSTRING__@@@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<SystemTray::TrayInfoTipDisplayInfo,SystemTray::TrayInfoTipDisplayInfo,HSTRING__ *>(
        volatile signed __int64 **a1,
        HSTRING *a2)
{
  SystemTray::TrayInfoTipDisplayInfo *v4; // rax
  int v5; // edi
  volatile signed __int64 *v6; // rbx
  signed __int64 v7; // rax
  signed __int64 v8; // rtt

  *a1 = 0LL;
  v4 = (SystemTray::TrayInfoTipDisplayInfo *)operator new(0x68uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v4 )
  {
    v6 = (volatile signed __int64 *)SystemTray::TrayInfoTipDisplayInfo::TrayInfoTipDisplayInfo(v4);
    v5 = SystemTray::TrayInfoTipDisplayInfo::RuntimeClassInitialize((SystemTray::TrayInfoTipDisplayInfo *)v6, *a2);
    if ( v5 >= 0 )
    {
      if ( v6 )
      {
        v7 = *((_QWORD *)v6 + 8);
        while ( v7 >= 0 )
        {
          v8 = v7;
          v7 = _InterlockedCompareExchange64(v6 + 8, v7 + 1, v7);
          if ( v8 == v7 )
            goto LABEL_10;
        }
        _InterlockedIncrement((volatile signed __int32 *)(2 * v7 + 16));
      }
LABEL_10:
      *a1 = v6;
      v5 = 0;
    }
    if ( v6 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::ApplicationModel::IAppDisplayInfo,Windows::Internal::Extensions::ApplicationModel::IInternalAppInfo,Microsoft::WRL::FtmBase>::Release(v6);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v5;
}
