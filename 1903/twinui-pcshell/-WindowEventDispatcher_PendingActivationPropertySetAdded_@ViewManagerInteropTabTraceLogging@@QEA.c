/*
 * XREFs of ?WindowEventDispatcher_PendingActivationPropertySetAdded_@ViewManagerInteropTabTraceLogging@@QEAAXPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180281CE4
 * Callers:
 *     ??$WindowEventDispatcher_PendingActivationPropertySetAdded@AEAPEAUIPropertySet@Collections@Foundation@Windows@@@ViewManagerInteropTabTraceLogging@@SAXAEAPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x18000E9C0 (--$WindowEventDispatcher_PendingActivationPropertySetAdded@AEAPEAUIPropertySet@Collections@Found.c)
 * Callees:
 *     ?get@?$static_lazy@VTabShellTelemetryProvider@@@details@wil@@QEAAPEAVTabShellTelemetryProvider@@P6AXXZ@Z @ 0x18000EAD4 (-get@-$static_lazy@VTabShellTelemetryProvider@@@details@wil@@QEAAPEAVTabShellTelemetryProvider@@.c)
 *     _TlgWrite @ 0x180030B18 (_TlgWrite.c)
 *     ??$GetValue@I@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValue@Foundation@3@EAAJPEAI@Z1@Z @ 0x18003C6A0 (--$GetValue@I@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyVa.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x1800402F0 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006A5CC (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     ??$GetValue@U_GUID@@@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValue@Foundation@3@EAAJPEAU_GUID@@@Z1@Z @ 0x18012C7C0 (--$GetValue@U_GUID@@@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPro.c)
 */

// Hidden C++ exception states: #wind=7
void __fastcall ViewManagerInteropTabTraceLogging::WindowEventDispatcher_PendingActivationPropertySetAdded_(
        ViewManagerInteropTabTraceLogging *this,
        struct Windows::Foundation::Collections::IPropertySet *a2)
{
  __int64 v2; // rcx
  const struct _TlgProvider_t *v3; // rbx
  HSTRING_HEADER *v4; // rax
  __int64 v5; // r8
  int v6; // eax
  __int128 v7; // xmm6
  HSTRING_HEADER *v8; // rax
  __int64 v9; // r8
  HSTRING_HEADER *v10; // rax
  __int64 v11; // r8
  int v12; // eax
  int v13; // ecx
  HSTRING_HEADER *v14; // rax
  __int64 v15; // r8
  int v16; // eax
  int v17; // ecx
  HSTRING_HEADER *v18; // rax
  __int64 v19; // r8
  int v20; // eax
  int v21; // ecx
  HSTRING_HEADER *v22; // rax
  __int64 v23; // r8
  int v24; // eax
  int v25; // edx
  __int64 v26; // [rsp+38h] [rbp-D0h] BYREF
  __int64 (__fastcall ***v27)(_QWORD, GUID *, __int64 *); // [rsp+40h] [rbp-C8h] BYREF
  __int128 v28; // [rsp+48h] [rbp-C0h]
  int v29; // [rsp+58h] [rbp-B0h] BYREF
  int v30; // [rsp+5Ch] [rbp-ACh] BYREF
  int v31; // [rsp+60h] [rbp-A8h] BYREF
  int v32; // [rsp+64h] [rbp-A4h] BYREF
  __int64 v33; // [rsp+68h] [rbp-A0h]
  _QWORD v34[3]; // [rsp+70h] [rbp-98h] BYREF
  __int128 v35; // [rsp+88h] [rbp-80h] BYREF
  HSTRING_HEADER v36; // [rsp+98h] [rbp-70h] BYREF
  HSTRING_HEADER v37; // [rsp+B8h] [rbp-50h] BYREF
  HSTRING_HEADER v38; // [rsp+D8h] [rbp-30h] BYREF
  HSTRING_HEADER v39; // [rsp+F8h] [rbp-10h] BYREF
  HSTRING_HEADER v40; // [rsp+118h] [rbp+10h] BYREF
  HSTRING_HEADER v41; // [rsp+138h] [rbp+30h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+158h] [rbp+50h] BYREF
  _QWORD *v43; // [rsp+178h] [rbp+70h]
  __int64 v44; // [rsp+180h] [rbp+78h]
  __int128 *v45; // [rsp+188h] [rbp+80h]
  __int64 v46; // [rsp+190h] [rbp+88h]
  int *v47; // [rsp+198h] [rbp+90h]
  __int64 v48; // [rsp+1A0h] [rbp+98h]
  int *v49; // [rsp+1A8h] [rbp+A0h]
  __int64 v50; // [rsp+1B0h] [rbp+A8h]
  int *v51; // [rsp+1B8h] [rbp+B0h]
  __int64 v52; // [rsp+1C0h] [rbp+B8h]
  int *v53; // [rsp+1C8h] [rbp+C0h]
  __int64 v54; // [rsp+1D0h] [rbp+C8h]

  v33 = -2LL;
  LODWORD(v28) = -1;
  *(_QWORD *)((char *)&v28 + 4) = -1LL;
  HIDWORD(v28) = -1;
  v27 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))a2;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v27);
  v3 = (const struct _TlgProvider_t *)*((_QWORD *)wil::details::static_lazy<TabShellTelemetryProvider>::get(
                                                    v2,
                                                    (void (__cdecl *)())lambda_e53bbca54556f26c08250baf48169049_::_lambda_invoker_cdecl_)
                                      + 1);
  if ( *(_DWORD *)v3 > 4u )
  {
    v4 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v36, (const WCHAR **)off_180467C38);
    v6 = Windows::Internal::ShellHelpers::PropertySetHelper::GetValue<_GUID>(
           (Windows::Internal::ShellHelpers::PropertySetHelper *)&v27,
           (HSTRING)v4[1].Reserved.Reserved1,
           v5,
           &v34[1]);
    v7 = v28;
    if ( v6 < 0 )
      *(_OWORD *)&v34[1] = v28;
    v43 = &v34[1];
    v44 = 16LL;
    v8 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v37, (const WCHAR **)off_180467C30);
    if ( (int)Windows::Internal::ShellHelpers::PropertySetHelper::GetValue<_GUID>(
                (Windows::Internal::ShellHelpers::PropertySetHelper *)&v27,
                (HSTRING)v8[1].Reserved.Reserved1,
                v9,
                &v35) < 0 )
      v35 = v7;
    v45 = &v35;
    v46 = 16LL;
    v10 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v38, (const WCHAR **)off_180467C28);
    v12 = Windows::Internal::ShellHelpers::PropertySetHelper::GetValue<unsigned int>(
            &v27,
            (__int64)v10[1].Reserved.Reserved1,
            v11,
            &v26);
    v13 = v26;
    if ( v12 < 0 )
      v13 = 0;
    v29 = v13;
    v47 = &v29;
    v48 = 4LL;
    v14 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v39, (const WCHAR **)off_180467C20);
    v16 = Windows::Internal::ShellHelpers::PropertySetHelper::GetValue<unsigned int>(
            &v27,
            (__int64)v14[1].Reserved.Reserved1,
            v15,
            &v26);
    v17 = v26;
    if ( v16 < 0 )
      v17 = 0;
    v30 = v17;
    v49 = &v30;
    v50 = 4LL;
    v18 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v40, (const WCHAR **)off_180467C18);
    v20 = Windows::Internal::ShellHelpers::PropertySetHelper::GetValue<unsigned int>(
            &v27,
            (__int64)v18[1].Reserved.Reserved1,
            v19,
            &v26);
    v21 = v26;
    if ( v20 < 0 )
      v21 = 0;
    v31 = v21;
    v51 = &v31;
    v52 = 4LL;
    v22 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v41, (const WCHAR **)&sourceString);
    v24 = Windows::Internal::ShellHelpers::PropertySetHelper::GetValue<unsigned int>(
            &v27,
            (__int64)v22[1].Reserved.Reserved1,
            v23,
            &v26);
    v25 = v26;
    if ( v24 < 0 )
      v25 = 0;
    v32 = v25;
    v53 = &v32;
    v54 = 4LL;
    TlgWrite(v3, &unk_1804D0FD5, 0LL, 0LL, 8u, &pData);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v27);
}
