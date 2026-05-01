/*
 * XREFs of ??$Make@VCImmersiveShellCreationBehavior@@$$V@Details@WRL@Microsoft@@YA?AV?$ComPtr@VCImmersiveShellCreationBehavior@@@12@XZ @ 0x1801D445C
 * Callers:
 *     ?CreateImmersiveShellController@CImmersiveShellBuilder@@UEAAJPEAPEAUIImmersiveShellController@@@Z @ 0x1801D4C30 (-CreateImmersiveShellController@CImmersiveShellBuilder@@UEAAJPEAPEAUIImmersiveShellController@@@.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800870F0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x180087BFA (memset_0.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtmBase@23@UIDiscoverRecentItem@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180116180 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtmBase@23@UIDis.c)
 *     ??0CImmersiveShellCreationBehavior@@QEAA@XZ @ 0x1801D4728 (--0CImmersiveShellCreationBehavior@@QEAA@XZ.c)
 */

volatile signed __int32 **__fastcall Microsoft::WRL::Details::Make<CImmersiveShellCreationBehavior,>(
        volatile signed __int32 **a1)
{
  CImmersiveShellCreationBehavior *v2; // rax
  CImmersiveShellCreationBehavior *v3; // rbx
  CImmersiveShellCreationBehavior *v4; // rbx

  *a1 = 0LL;
  v2 = (CImmersiveShellCreationBehavior *)operator new(0x70uLL, (const struct std::nothrow_t *)&std::nothrow);
  v3 = v2;
  if ( v2 )
  {
    memset_0(v2, 0, 0x70uLL);
    v4 = CImmersiveShellCreationBehavior::CImmersiveShellCreationBehavior(v3);
    if ( *a1 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Microsoft::WRL::FtmBase,IDiscoverRecentItem>::Release(*a1);
    *a1 = (volatile signed __int32 *)v4;
  }
  return a1;
}
