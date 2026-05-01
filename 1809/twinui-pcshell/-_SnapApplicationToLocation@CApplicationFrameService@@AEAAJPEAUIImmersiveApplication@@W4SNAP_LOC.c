/*
 * XREFs of ?_SnapApplicationToLocation@CApplicationFrameService@@AEAAJPEAUIImmersiveApplication@@W4SNAP_LOCATION@@@Z @ 0x1801176B0
 * Callers:
 *     ?OnCommand@CApplicationFrameService@@UEAAJPEAUIApplicationFrame@@PEBU_GUID@@K@Z @ 0x1800499E0 (-OnCommand@CApplicationFrameService@@UEAAJPEAUIApplicationFrame@@PEBU_GUID@@K@Z.c)
 * Callees:
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18002D674 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180060730 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetViewForApplication@ApplicationViewHelpers@@YAJPEAUIUnknown@@PEAUIImmersiveApplication@@PEAPEAUIApplicationView@@@Z @ 0x1800658D8 (-GetViewForApplication@ApplicationViewHelpers@@YAJPEAUIUnknown@@PEAUIImmersiveApplication@@PEAPE.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?IsEnabled@CAppManagerTelemetry@@SA_NE_K@Z @ 0x1800EFB84 (-IsEnabled@CAppManagerTelemetry@@SA_NE_K@Z.c)
 *     ??$FrameSnapInvoked@PEBGPEBGI@CAppManagerTelemetry@@SAX$$QEAPEBG0$$QEAI@Z @ 0x1801135B8 (--$FrameSnapInvoked@PEBGPEBGI@CAppManagerTelemetry@@SAX$$QEAPEBG0$$QEAI@Z.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall CApplicationFrameService::_SnapApplicationToLocation(
        __int64 a1,
        struct IUnknown *a2,
        unsigned int a3)
{
  struct IApplicationView **v6; // r9
  HRESULT ViewForApplication; // ebx
  unsigned __int64 v8; // r9
  __int64 v9; // rdx
  int v10; // eax
  char v11; // cl
  int v12; // eax
  __int64 v13; // rdx
  IUnknown *punk; // [rsp+30h] [rbp-49h] BYREF
  int v16; // [rsp+38h] [rbp-41h] BYREF
  void *ppvOut; // [rsp+40h] [rbp-39h] BYREF
  __int64 v18; // [rsp+48h] [rbp-31h] BYREF
  IUnknown *v19; // [rsp+50h] [rbp-29h] BYREF
  __int64 v20; // [rsp+58h] [rbp-21h]
  __int64 v21; // [rsp+60h] [rbp-19h]
  const WCHAR *v22; // [rsp+68h] [rbp-11h] BYREF
  __int64 v23; // [rsp+70h] [rbp-9h]
  __int64 v24; // [rsp+78h] [rbp-1h]
  LPCWSTR v25[2]; // [rsp+80h] [rbp+7h] BYREF
  int v26[4]; // [rsp+90h] [rbp+17h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+5Fh]

  v25[1] = (LPCWSTR)-2LL;
  v18 = 0LL;
  ppvOut = 0LL;
  punk = 0LL;
  v16 = 2;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&punk);
  (*(void (__fastcall **)(__int64, GUID *, IUnknown **))(*(_QWORD *)a1 + 32LL))(
    a1,
    &GUID_00000000_0000_0000_c000_000000000046,
    &punk);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v18);
  ViewForApplication = ApplicationViewHelpers::GetViewForApplication(punk, a2, (struct IImmersiveApplication *)&v18, v6);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&punk);
  if ( ViewForApplication >= 0 )
  {
    punk = 0LL;
    v16 = 9;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&punk);
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
            v18,
            a3,
            0LL,
            v26);
    ViewForApplication = v10;
    if ( v10 < 0 )
    {
      v8 = (unsigned int)v10;
      v9 = 1456LL;
      goto LABEL_7;
    }
    if ( CAppManagerTelemetry::IsEnabled(v11) )
    {
      v22 = 0LL;
      v23 = 0LL;
      v24 = 0LL;
      v19 = 0LL;
      v20 = 0LL;
      v21 = 0LL;
      Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v22);
      v23 = -1LL;
      v24 = -1LL;
      v12 = ((__int64 (__fastcall *)(struct IUnknown *, const WCHAR **))a2->lpVtbl[1].AddRef)(a2, &v22);
      ViewForApplication = v12;
      if ( v12 < 0 )
      {
        v13 = 1463LL;
LABEL_13:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v13,
          (__int64)"pcshell\\twinui\\appmanager\\lib\\appframeservice.cpp",
          (const char *)(unsigned int)v12);
        Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v19);
        Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v22);
        goto LABEL_16;
      }
      Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v19);
      v20 = -1LL;
      v21 = -1LL;
      v12 = ((__int64 (__fastcall *)(struct IUnknown *, _QWORD, IUnknown **))a2->lpVtbl[5].QueryInterface)(
              a2,
              0LL,
              &v19);
      ViewForApplication = v12;
      if ( v12 < 0 )
      {
        v13 = 1464LL;
        goto LABEL_13;
      }
      v16 = a3;
      punk = v19;
      v25[0] = v22;
      CAppManagerTelemetry::FrameSnapInvoked<unsigned short const *,unsigned short const *,unsigned int>(
        v25,
        (LPCWSTR *)&punk,
        (__int64)&v16);
      Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v19);
      Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v22);
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
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v18);
  return (unsigned int)ViewForApplication;
}
