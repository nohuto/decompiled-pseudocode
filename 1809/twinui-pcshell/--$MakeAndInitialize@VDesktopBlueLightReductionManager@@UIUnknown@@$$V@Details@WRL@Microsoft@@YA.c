/*
 * XREFs of ??$MakeAndInitialize@VDesktopBlueLightReductionManager@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x180135C94
 * Callers:
 *     ?CreateInstance@?$SimpleClassFactory@VDesktopBlueLightReductionManager@@$0A@@WRL@Microsoft@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x180136640 (-CreateInstance@-$SimpleClassFactory@VDesktopBlueLightReductionManager@@$0A@@WRL@Microsoft@@UEAA.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x1800390B0 (InlineIsEqualGUID.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180084460 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00U?$ImplementsMarker@VCWRLObjectWithGITSite@@@Details@23@VCImmersiveShellComponent@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1800E6028 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00U-$ImplementsMarker@VCW.c)
 *     ??0DesktopBlueLightReductionManager@@QEAA@XZ @ 0x180136198 (--0DesktopBlueLightReductionManager@@QEAA@XZ.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00UIImmersiveMonitorNotification@@UIImmersiveSessionIdleNotification@@VFtmBase@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1801365CC (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00UIImmersiv_ea_1801365CC.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCImmersiveShellComponentWithGITSite@@UIImmersiveWindowMessageNotification@@UIImmersiveMonitorNotification@@UIImmersiveSessionIdleNotification@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180136D80 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCIm_ea_180136D80.c)
 *     ?RuntimeClassInitialize@DesktopBlueLightReductionManager@@QEAAJXZ @ 0x180136EF4 (-RuntimeClassInitialize@DesktopBlueLightReductionManager@@QEAAJXZ.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<DesktopBlueLightReductionManager,IUnknown,>(
        DesktopBlueLightReductionManager **a1)
{
  DesktopBlueLightReductionManager *v2; // rax
  int CanCastTo; // ebx
  DesktopBlueLightReductionManager *v4; // rdi
  _DWORD *v5; // rdx
  _DWORD *v6; // r10
  DesktopBlueLightReductionManager *v7; // r8
  __int64 v8; // r10

  *a1 = 0LL;
  v2 = (DesktopBlueLightReductionManager *)operator new(0xD8uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( !v2 )
    return (unsigned int)-2147024882;
  v4 = DesktopBlueLightReductionManager::DesktopBlueLightReductionManager(v2);
  CanCastTo = DesktopBlueLightReductionManager::RuntimeClassInitialize(v4);
  if ( CanCastTo >= 0 )
  {
    *a1 = 0LL;
    if ( !InlineIsEqualGUID(&GUID_00000000_0000_0000_c000_000000000046, &GUID_00000000_0000_0000_c000_000000000046) )
    {
      CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<CWRLObjectWithGITSite>,CImmersiveShellComponent>::CanCastTo(
                    (__int64)v4,
                    v5,
                    a1);
      if ( CanCastTo == -2147467262 )
      {
        if ( InlineIsEqualGUID(v6, &GUID_f4b0e171_08a9_413c_b179_71d7602d8ef0) )
        {
          *a1 = v7;
          CanCastTo = 0;
LABEL_10:
          (*(void (__fastcall **)(DesktopBlueLightReductionManager *))(*(_QWORD *)*a1 + 8LL))(*a1);
          goto LABEL_12;
        }
        CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IImmersiveMonitorNotification,IImmersiveSessionIdleNotification,Microsoft::WRL::FtmBase>::CanCastTo(
                      (char *)v7 + 8,
                      v8,
                      a1);
      }
      if ( CanCastTo < 0 )
        goto LABEL_12;
      goto LABEL_10;
    }
    *a1 = v4;
    (*(void (__fastcall **)(DesktopBlueLightReductionManager *))(*(_QWORD *)v4 + 8LL))(v4);
    CanCastTo = 0;
  }
LABEL_12:
  if ( v4 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CImmersiveShellComponentWithGITSite,IImmersiveWindowMessageNotification,IImmersiveMonitorNotification,IImmersiveSessionIdleNotification,Microsoft::WRL::FtmBase>::Release(v4);
  return (unsigned int)CanCastTo;
}
