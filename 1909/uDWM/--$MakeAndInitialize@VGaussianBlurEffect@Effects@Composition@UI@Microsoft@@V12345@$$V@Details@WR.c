/*
 * XREFs of ??$MakeAndInitialize@VGaussianBlurEffect@Effects@Composition@UI@Microsoft@@V12345@$$V@Details@WRL@Microsoft@@YAJPEAPEAVGaussianBlurEffect@Effects@Composition@UI@2@@Z @ 0x18003D8A8
 * Callers:
 *     ?CreateHostBackdropBrush@UI@WindowsInternal@@YAJPEAUIDCompositionDesktopDevicePartner@@PEAPEAUICompositionBrush@Composition@1Windows@@@Z @ 0x18003D4E4 (-CreateHostBackdropBrush@UI@WindowsInternal@@YAJPEAUIDCompositionDesktopDevicePartner@@PEAPEAUIC.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VGaussianBlurEffect@Effects@Composition@UI@Microsoft@@@WRL@Microsoft@@IEAAKXZ @ 0x18003C7DC (-InternalRelease@-$ComPtr@VGaussianBlurEffect@Effects@Composition@UI@Microsoft@@@WRL@Microsoft@@.c)
 *     ??0GaussianBlurEffect@Effects@Composition@UI@Microsoft@@QEAA@XZ @ 0x18003D948 (--0GaussianBlurEffect@Effects@Composition@UI@Microsoft@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x18004FB50 (_guard_dispatch_icall_nop.c)
 *     ?IncrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ @ 0x1800BA06C (-IncrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<Microsoft::UI::Composition::Effects::GaussianBlurEffect,Microsoft::UI::Composition::Effects::GaussianBlurEffect,>(
        __int64 *a1)
{
  unsigned int v1; // ebx
  Microsoft::UI::Composition::Effects::GaussianBlurEffect *v3; // rax
  __int64 v4; // rax
  __int64 v5; // r10
  signed __int64 v6; // rax
  signed __int64 v7; // rtt
  __int64 v9; // [rsp+30h] [rbp+8h] BYREF
  Microsoft::UI::Composition::Effects::GaussianBlurEffect *v10; // [rsp+38h] [rbp+10h]

  v1 = 0;
  *a1 = 0LL;
  v3 = (Microsoft::UI::Composition::Effects::GaussianBlurEffect *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                                                                    WPF::g_pProcessHeap,
                                                                    88LL);
  v10 = v3;
  if ( v3 )
  {
    v4 = Microsoft::UI::Composition::Effects::GaussianBlurEffect::GaussianBlurEffect(v3);
    v9 = v4;
    v5 = v4;
    if ( v4 )
    {
      v6 = *(_QWORD *)(v4 + 48);
      while ( v6 >= 0 )
      {
        if ( (_DWORD)v6 != 0x7FFFFFFF )
        {
          v7 = v6;
          v6 = _InterlockedCompareExchange64((volatile signed __int64 *)(v5 + 48), v6 + 1, v6);
          if ( v7 != v6 )
            continue;
        }
        goto LABEL_10;
      }
      Microsoft::WRL::Details::StrongReference::IncrementStrongReference((Microsoft::WRL::Details::StrongReference *)(2 * v6 + 16));
    }
LABEL_10:
    *a1 = v5;
    Microsoft::WRL::ComPtr<Microsoft::UI::Composition::Effects::GaussianBlurEffect>::InternalRelease(&v9);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v1;
}
