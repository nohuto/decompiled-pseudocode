/*
 * XREFs of ?s_LoadIconSync@CWinRTAppIconLoader@@SAJPEAUIWinRTApplicationView@@AEBUtagSIZE@@11IPEAPEAUHBITMAP__@@@Z @ 0x1802EB7C8
 * Callers:
 *     _lambda_637b889d7309fa55c34979987552fc96_::operator() @ 0x1802EB378 (_lambda_637b889d7309fa55c34979987552fc96_--operator().c)
 * Callees:
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18002D674 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?LoadImmersiveIcon@ImmersiveIcons@@YAJUtagSIZE@@00KI_NPEBGPEAPEAUHBITMAP__@@@Z @ 0x1803AB054 (-LoadImmersiveIcon@ImmersiveIcons@@YAJUtagSIZE@@00KI_NPEBGPEAPEAUHBITMAP__@@@Z.c)
 */

__int64 __fastcall CWinRTAppIconLoader::s_LoadIconSync(
        struct IWinRTApplicationView *a1,
        const struct tagSIZE *a2,
        const struct tagSIZE *a3,
        const struct tagSIZE *a4,
        unsigned int a5,
        HBITMAP *a6)
{
  int v10; // eax
  unsigned int v11; // ebx
  __int64 v12; // rbx
  int ImmersiveIcon; // eax
  struct tagSIZE v14; // r9
  __int64 v15; // rdx
  unsigned __int16 *v17; // [rsp+40h] [rbp-20h] BYREF
  __int64 v18; // [rsp+48h] [rbp-18h]
  __int64 v19; // [rsp+50h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]
  __int64 v21; // [rsp+80h] [rbp+20h] BYREF

  v21 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v21);
  v10 = (*(__int64 (__fastcall **)(struct IWinRTApplicationView *, __int64 *))(*(_QWORD *)a1 + 24LL))(a1, &v21);
  v11 = v10;
  if ( v10 >= 0 )
  {
    v17 = 0LL;
    v18 = 0LL;
    v19 = 0LL;
    v12 = v21;
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v17);
    v18 = -1LL;
    v19 = -1LL;
    ImmersiveIcon = (*(__int64 (__fastcall **)(__int64, unsigned __int16 **))(*(_QWORD *)v12 + 32LL))(v12, &v17);
    v11 = ImmersiveIcon;
    if ( ImmersiveIcon >= 0 )
    {
      ImmersiveIcon = ImmersiveIcons::LoadImmersiveIcon(
                        *(ImmersiveIcons **)a2,
                        *a3,
                        *a4,
                        v14,
                        a5,
                        1,
                        v17,
                        (const unsigned __int16 *)a6,
                        (HBITMAP *)v17);
      v11 = ImmersiveIcon;
      if ( ImmersiveIcon >= 0 )
      {
LABEL_8:
        Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v17);
        goto LABEL_9;
      }
      v15 = 85LL;
    }
    else
    {
      v15 = 84LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v15,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\immersiveappiconloader.cpp",
      (const char *)(unsigned int)ImmersiveIcon);
    goto LABEL_8;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x52,
    (__int64)"pcshell\\twinui\\multitaskingview\\lib\\immersiveappiconloader.cpp",
    (const char *)(unsigned int)v10);
LABEL_9:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v21);
  return v11;
}
