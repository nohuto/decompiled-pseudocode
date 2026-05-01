/*
 * XREFs of ?_SnapApplicationToLocation@CApplicationFrameService@@AEAAJPEAUIImmersiveApplication@@W4SNAP_LOCATION@@@Z @ 0x18015E570
 * Callers:
 *     ?OnCommand@CApplicationFrameService@@UEAAJPEAUIApplicationFrame@@PEBU_GUID@@K@Z @ 0x180047460 (-OnCommand@CApplicationFrameService@@UEAAJPEAUIApplicationFrame@@PEBU_GUID@@K@Z.c)
 * Callees:
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x180034EE0 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180065FF0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetViewForApplication@ApplicationViewHelpers@@YAJPEAUIUnknown@@PEAUIImmersiveApplication@@PEAPEAUIApplicationView@@@Z @ 0x180069D68 (-GetViewForApplication@ApplicationViewHelpers@@YAJPEAUIUnknown@@PEAUIImmersiveApplication@@PEAPE.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ?IsEnabled@CAppManagerTelemetry@@SA_NE_K@Z @ 0x180133850 (-IsEnabled@CAppManagerTelemetry@@SA_NE_K@Z.c)
 *     ??$FrameSnapInvoked@PEBGPEBGI@CAppManagerTelemetry@@SAX$$QEAPEBG0$$QEAI@Z @ 0x18015A278 (--$FrameSnapInvoked@PEBGPEBGI@CAppManagerTelemetry@@SAX$$QEAPEBG0$$QEAI@Z.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall CApplicationFrameService::_SnapApplicationToLocation(
        __int64 a1,
        struct IUnknown *a2,
        unsigned int a3)
{
  struct IApplicationView **v6; // r9
  int ViewForApplication; // ebx
  unsigned __int64 v8; // r9
  __int64 v9; // rdx
  int v10; // eax
  char v11; // cl
  ULONG (__stdcall *AddRef)(IUnknown *); // rbx
  int v13; // eax
  __int64 v14; // rdx
  HRESULT (__stdcall *QueryInterface)(IUnknown *, const IID *const, void **); // rbx
  int v17; // [rsp+30h] [rbp-49h] BYREF
  IUnknown *punk; // [rsp+38h] [rbp-41h] BYREF
  void *ppvOut; // [rsp+40h] [rbp-39h] BYREF
  __int64 v20; // [rsp+48h] [rbp-31h] BYREF
  IUnknown *v21; // [rsp+50h] [rbp-29h] BYREF
  __int64 v22; // [rsp+58h] [rbp-21h]
  __int64 v23; // [rsp+60h] [rbp-19h]
  const WCHAR *v24; // [rsp+68h] [rbp-11h] BYREF
  __int64 v25; // [rsp+70h] [rbp-9h]
  __int64 v26; // [rsp+78h] [rbp-1h]
  LPCWSTR v27[2]; // [rsp+80h] [rbp+7h] BYREF
  int v28[4]; // [rsp+90h] [rbp+17h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+5Fh]

  v27[1] = (LPCWSTR)-2LL;
  v20 = 0LL;
  ppvOut = 0LL;
  punk = 0LL;
  v17 = 2;
  (*(void (__fastcall **)(__int64, GUID *, IUnknown **))(*(_QWORD *)a1 + 32LL))(
    a1,
    &GUID_00000000_0000_0000_c000_000000000046,
    &punk);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v20);
  ViewForApplication = ApplicationViewHelpers::GetViewForApplication(punk, a2, (struct IImmersiveApplication *)&v20, v6);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&punk);
  if ( ViewForApplication >= 0 )
  {
    punk = 0LL;
    v17 = 9;
    (*(void (__fastcall **)(__int64, GUID *, IUnknown **))(*(_QWORD *)a1 + 32LL))(
      a1,
      &GUID_00000000_0000_0000_c000_000000000046,
      &punk);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
    ViewForApplication = IUnknown_QueryService(
                           punk,
                           &GUID_fff59320_db70_4865_8fed_8b502d692f12,
                           &GUID_fff59320_db70_4865_8fed_8b502d692f12,
                           &ppvOut);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&punk);
    if ( ViewForApplication < 0 )
    {
      v8 = (unsigned int)ViewForApplication;
      v9 = 1453LL;
      goto LABEL_7;
    }
    v10 = (*(__int64 (__fastcall **)(void *, __int64, _QWORD, _QWORD, int *))(*(_QWORD *)ppvOut + 24LL))(
            ppvOut,
            v20,
            a3,
            0LL,
            v28);
    ViewForApplication = v10;
    if ( v10 < 0 )
    {
      v8 = (unsigned int)v10;
      v9 = 1456LL;
      goto LABEL_7;
    }
    if ( CAppManagerTelemetry::IsEnabled(v11) )
    {
      v24 = 0LL;
      v25 = 0LL;
      v26 = 0LL;
      v21 = 0LL;
      v22 = 0LL;
      v23 = 0LL;
      AddRef = a2->lpVtbl[1].AddRef;
      Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v24);
      v25 = -1LL;
      v26 = -1LL;
      v13 = ((__int64 (__fastcall *)(struct IUnknown *, const WCHAR **))AddRef)(a2, &v24);
      ViewForApplication = v13;
      if ( v13 < 0 )
      {
        v14 = 1463LL;
LABEL_13:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v14,
          (__int64)"pcshell\\twinui\\appmanager\\lib\\appframeservice.cpp",
          (const char *)(unsigned int)v13);
        Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v21);
        Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v24);
        goto LABEL_16;
      }
      QueryInterface = a2->lpVtbl[5].QueryInterface;
      Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v21);
      v22 = -1LL;
      v23 = -1LL;
      v13 = ((__int64 (__fastcall *)(struct IUnknown *, _QWORD, IUnknown **))QueryInterface)(a2, 0LL, &v21);
      ViewForApplication = v13;
      if ( v13 < 0 )
      {
        v14 = 1464LL;
        goto LABEL_13;
      }
      v17 = a3;
      punk = v21;
      v27[0] = v24;
      CAppManagerTelemetry::FrameSnapInvoked<unsigned short const *,unsigned short const *,unsigned int>(
        v27,
        (LPCWSTR *)&punk,
        (__int64)&v17);
      Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v21);
      Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v24);
    }
    ViewForApplication = 0;
    goto LABEL_16;
  }
  v8 = (unsigned int)ViewForApplication;
  v9 = 1452LL;
LABEL_7:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v9,
    (__int64)"pcshell\\twinui\\appmanager\\lib\\appframeservice.cpp",
    (const char *)v8);
LABEL_16:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v20);
  return (unsigned int)ViewForApplication;
}
