/*
 * XREFs of ?_TagDividerBitmap@CAppTransitionManager@@AEAAJPEAUIAppLayoutOperation@@@Z @ 0x1803A7ED8
 * Callers:
 *     ?BeginAppTransitionAnimationRequest@CAppTransitionManager@@UEAAJPEAUIUnknown@@PEAUIImmersiveMonitor@@PEAUIImmersiveApplicationManagerSafeForSyncCallouts@@@Z @ 0x1803A5EE0 (-BeginAppTransitionAnimationRequest@CAppTransitionManager@@UEAAJPEAUIUnknown@@PEAUIImmersiveMoni.c)
 * Callees:
 *     ??$?0PEAX$$V@?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@QEAA@$$QEAPEAX@Z @ 0x180027DDC (--$-0PEAX$$V@-$unique_any_t@V-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseH.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     memset_0 @ 0x18008A73A (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180122920 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHBITMAP__@@P6AHPEAX@Z$1?DeleteObject@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1801DA4B4 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUHBITMAP__@@P6AHPEAX@Z$1-DeleteObject@.c)
 *     ?_PaintDividerForDWM@CAppTransitionManager@@AEAAJPEAUHDC__@@PEAUHBITMAP__@@PEAUtagBITMAPINFO@@W4DEVICE_SCALE_FACTOR@@@Z @ 0x1803A7758 (-_PaintDividerForDWM@CAppTransitionManager@@AEAAJPEAUHDC__@@PEAUHBITMAP__@@PEAUtagBITMAPINFO@@W4.c)
 *     ?ComputeGutterWidth@ImmersiveApplicationLayout@@YAHPEBULAYOUT_ENVIRONMENT_DETAILS@@@Z @ 0x18042E040 (-ComputeGutterWidth@ImmersiveApplicationLayout@@YAHPEBULAYOUT_ENVIRONMENT_DETAILS@@@Z.c)
 */

__int64 __fastcall CAppTransitionManager::_TagDividerBitmap(
        CAppTransitionManager *this,
        struct IAppLayoutOperation *a2)
{
  int v3; // eax
  unsigned int LastError; // esi
  __int64 v5; // r9
  __int64 v6; // rdx
  const struct LAYOUT_ENVIRONMENT_DETAILS *v7; // rdx
  int v8; // eax
  HDC CompatibleDC; // rbx
  CAppTransitionManager *v10; // rcx
  const char *v11; // r9
  int v12; // eax
  __int64 v13; // rdx
  HWND ShellWindow; // rax
  HBITMAP v16; // [rsp+30h] [rbp-39h] BYREF
  __int64 v17; // [rsp+38h] [rbp-31h] BYREF
  HBITMAP v18; // [rsp+40h] [rbp-29h] BYREF
  int v19; // [rsp+48h] [rbp-21h] BYREF
  int v20; // [rsp+4Ch] [rbp-1Dh]
  int v21; // [rsp+50h] [rbp-19h]
  int v22; // [rsp+54h] [rbp-15h]
  BITMAPINFO pbmi; // [rsp+58h] [rbp-11h] BYREF
  _BYTE v24[4]; // [rsp+88h] [rbp+1Fh] BYREF
  int v25; // [rsp+8Ch] [rbp+23h]
  int v26; // [rsp+94h] [rbp+2Bh]
  enum DEVICE_SCALE_FACTOR v27; // [rsp+98h] [rbp+2Fh]
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+5Fh]

  v17 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v17);
  v3 = (*(__int64 (__fastcall **)(struct IAppLayoutOperation *, __int64 *))(*(_QWORD *)a2 + 48LL))(a2, &v17);
  LastError = v3;
  if ( v3 >= 0 )
  {
    (*(void (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v17 + 24LL))(v17, v24);
    v8 = ImmersiveApplicationLayout::ComputeGutterWidth((ImmersiveApplicationLayout *)v24, v7);
    v19 = 0;
    v20 = 0;
    v21 = v8;
    v22 = v26 - v25;
    if ( v8 > 0 && v26 - v25 > 0 )
    {
      CompatibleDC = CreateCompatibleDC(0LL);
      if ( !CompatibleDC )
      {
        LastError = -2147024882;
        v6 = 628LL;
        v5 = 2147942414LL;
        goto LABEL_3;
      }
      memset_0(&pbmi.bmiHeader.biWidth, 0, 0x28uLL);
      pbmi.bmiHeader.biCompression = 0;
      pbmi.bmiHeader.biWidth = v21 - v19;
      pbmi.bmiHeader.biHeight = v20 - v22;
      pbmi.bmiHeader.biSize = 40;
      *(_DWORD *)&pbmi.bmiHeader.biPlanes = 2097153;
      v18 = CreateDIBSection(CompatibleDC, &pbmi, 0, 0LL, 0LL, 0);
      wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>(
        &v16,
        &v18);
      if ( !v16 )
      {
        LastError = wil::details::in1diag3::Return_GetLastError(
                      retaddr,
                      (void *)0x27F,
                      (__int64)"pcshell\\twinui\\apptransitionmanager\\lib\\apptransitionmanager.cpp",
                      v11);
LABEL_15:
        wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HBITMAP__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HBITMAP__ *,HBITMAP__ *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HBITMAP__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HBITMAP__ *,HBITMAP__ *,0,std::nullptr_t>>>((void **)&v16);
        DeleteDC(CompatibleDC);
        goto LABEL_18;
      }
      v12 = CAppTransitionManager::_PaintDividerForDWM(v10, CompatibleDC, v16, &pbmi, v27);
      LastError = v12;
      if ( v12 < 0 )
      {
        v13 = 641LL;
LABEL_14:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v13,
          (__int64)"pcshell\\twinui\\apptransitionmanager\\lib\\apptransitionmanager.cpp",
          (const char *)(unsigned int)v12);
        goto LABEL_15;
      }
      ShellWindow = GetShellWindow();
      v12 = DwmpTransitionBitmap(ShellWindow, v16, 22LL, &v19, &v19);
      LastError = v12;
      if ( v12 < 0 )
      {
        v13 = 644LL;
        goto LABEL_14;
      }
      wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HBITMAP__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HBITMAP__ *,HBITMAP__ *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HBITMAP__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HBITMAP__ *,HBITMAP__ *,0,std::nullptr_t>>>((void **)&v16);
      DeleteDC(CompatibleDC);
    }
    LastError = 0;
    goto LABEL_18;
  }
  v5 = (unsigned int)v3;
  v6 = 619LL;
LABEL_3:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v6,
    (__int64)"pcshell\\twinui\\apptransitionmanager\\lib\\apptransitionmanager.cpp",
    (const char *)v5);
LABEL_18:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v17);
  return LastError;
}
