/*
 * XREFs of ??$MakeAndInitialize@VCustomShellManager@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x18008C010
 * Callers:
 *     ?CreateInstance@?$SimpleClassFactory@VCustomShellManager@@$0A@@WRL@Microsoft@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x18008C520 (-CreateInstance@-$SimpleClassFactory@VCustomShellManager@@$0A@@WRL@Microsoft@@UEAAJPEAUIUnknown@.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x1800390B0 (InlineIsEqualGUID.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCImmersiveShellComponentWithGITSite@@UICustomShellManager@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180076910 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCIm_ea_180076910.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180084460 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??1?$MakeAllocator@VTaskFlowImmersiveShellBroker@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x180089B50 (--1-$MakeAllocator@VTaskFlowImmersiveShellBroker@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??0CustomShellManager@@QEAA@XZ @ 0x18008C294 (--0CustomShellManager@@QEAA@XZ.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$0A@U?$ImplementsMarker@VCImmersiveShellComponentWithGITSite@@@Details@23@UICustomShellManager@@VFtmBase@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x18008C4B4 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$0A@U-$ImplementsMarker@VC.c)
 *     ?RuntimeClassInitialize@CustomShellManager@@QEAAJXZ @ 0x18008C778 (-RuntimeClassInitialize@CustomShellManager@@QEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CustomShellManager,IUnknown,>(CustomShellManager **a1)
{
  void *v2; // rax
  int CanCastTo; // edi
  CustomShellManager *v4; // rbx
  volatile int *v5; // rdx
  __int64 v6; // rdx
  void *v8; // [rsp+50h] [rbp+8h] BYREF
  void *v9; // [rsp+58h] [rbp+10h]
  void *v10; // [rsp+60h] [rbp+18h]

  *a1 = 0LL;
  v2 = operator new(0xB0uLL, (const struct std::nothrow_t *)&std::nothrow);
  v8 = v2;
  v9 = v2;
  if ( v2 )
  {
    v10 = v2;
    v4 = CustomShellManager::CustomShellManager((CustomShellManager *)v2);
    v8 = 0LL;
    CanCastTo = CustomShellManager::RuntimeClassInitialize(v4);
    if ( CanCastTo >= 0 )
    {
      *a1 = 0LL;
      if ( InlineIsEqualGUID(&GUID_00000000_0000_0000_c000_000000000046, &GUID_00000000_0000_0000_c000_000000000046) )
      {
        *a1 = v4;
        (*(void (__fastcall **)(CustomShellManager *))(*(_QWORD *)v4 + 8LL))(v4);
        CanCastTo = 0;
      }
      else
      {
        CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<CImmersiveShellComponentWithGITSite>,ICustomShellManager,Microsoft::WRL::FtmBase>::CanCastTo(
                      v4,
                      v6,
                      a1);
        if ( CanCastTo >= 0 )
          (*(void (__fastcall **)(CustomShellManager *))(*(_QWORD *)*a1 + 8LL))(*a1);
      }
    }
    if ( v4 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CImmersiveShellComponentWithGITSite,ICustomShellManager,Microsoft::WRL::FtmBase>::Release(
        (__int64)v4,
        v5);
  }
  else
  {
    CanCastTo = -2147024882;
  }
  Microsoft::WRL::Details::MakeAllocator<TaskFlowImmersiveShellBroker>::~MakeAllocator<TaskFlowImmersiveShellBroker>(&v8);
  return (unsigned int)CanCastTo;
}
