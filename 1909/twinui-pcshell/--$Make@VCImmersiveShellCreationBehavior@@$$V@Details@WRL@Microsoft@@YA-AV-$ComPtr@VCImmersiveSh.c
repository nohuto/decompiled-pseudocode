/*
 * XREFs of ??$Make@VCImmersiveShellCreationBehavior@@$$V@Details@WRL@Microsoft@@YA?AV?$ComPtr@VCImmersiveShellCreationBehavior@@@12@XZ @ 0x1801F3ABC
 * Callers:
 *     ?CreateImmersiveShellController@CImmersiveShellBuilder@@UEAAJPEAPEAUIImmersiveShellController@@@Z @ 0x1801F4290 (-CreateImmersiveShellController@CImmersiveShellBuilder@@UEAAJPEAPEAUIImmersiveShellController@@@.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtmBase@23@UIDiscoverRecentItem@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180075CF0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtmBase@23@UIDis.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180089C34 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x18008A73A (memset_0.c)
 *     ??0CImmersiveShellCreationBehavior@@QEAA@XZ @ 0x1801F3D88 (--0CImmersiveShellCreationBehavior@@QEAA@XZ.c)
 */

__int64 *__fastcall Microsoft::WRL::Details::Make<CImmersiveShellCreationBehavior,>(__int64 *a1)
{
  CImmersiveShellCreationBehavior *v2; // rax
  CImmersiveShellCreationBehavior *v3; // rbx
  volatile int *v4; // rdx
  CImmersiveShellCreationBehavior *v5; // rbx

  *a1 = 0LL;
  v2 = (CImmersiveShellCreationBehavior *)operator new(0x70uLL, (const struct std::nothrow_t *)&std::nothrow);
  v3 = v2;
  if ( v2 )
  {
    memset_0(v2, 0, 0x70uLL);
    v5 = CImmersiveShellCreationBehavior::CImmersiveShellCreationBehavior(v3);
    if ( *a1 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Microsoft::WRL::FtmBase,IDiscoverRecentItem>::Release(
        *a1,
        v4);
    *a1 = (__int64)v5;
  }
  return a1;
}
