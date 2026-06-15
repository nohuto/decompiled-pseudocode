/*
 * XREFs of ?EndpointRequiresAC97VistaShim@@YAHPEAUIMMDevice@@@Z @ 0x1800D9060
 * Callers:
 *     ?IsSPDIFEndpoint@@YAHPEAUIMMDevice@@@Z @ 0x1800DA350 (-IsSPDIFEndpoint@@YAHPEAUIMMDevice@@@Z.c)
 * Callees:
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180009C58 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?AtlComQIPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@AEBU_GUID@@@Z @ 0x18001EF78 (-AtlComQIPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@AEBU_GUID@@@Z.c)
 *     __security_check_cookie @ 0x180060590 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 *     ?StringCbCatW@@YAJPEAG_KPEBG@Z @ 0x1800DB528 (-StringCbCatW@@YAJPEAG_KPEBG@Z.c)
 */

// Hidden C++ exception states: #wind=8
_BOOL8 __fastcall EndpointRequiresAC97VistaShim(struct IMMDevice *a1)
{
  BOOL v2; // edi
  HRESULT v3; // ebx
  struct IUnknown *v4; // rcx
  __int64 v5; // r8
  WCHAR *v6; // rcx
  WCHAR v7; // ax
  WCHAR *v8; // rax
  LPVOID pv; // [rsp+48h] [rbp-C0h] BYREF
  struct IUnknown *v11; // [rsp+50h] [rbp-B8h] BYREF
  DWORD pcbData[2]; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v13; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v14; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v15; // [rsp+70h] [rbp-98h] BYREF
  struct IUnknown *v16; // [rsp+78h] [rbp-90h] BYREF
  __int64 v17; // [rsp+80h] [rbp-88h] BYREF
  __int64 v18; // [rsp+88h] [rbp-80h] BYREF
  LPVOID ppv; // [rsp+90h] [rbp-78h] BYREF
  PROPVARIANT pvar; // [rsp+98h] [rbp-70h] BYREF
  unsigned __int16 *v21; // [rsp+A0h] [rbp-68h]
  __int64 v22; // [rsp+A8h] [rbp-60h]
  __int64 v23; // [rsp+B0h] [rbp-58h]
  WCHAR SubKey[264]; // [rsp+B8h] [rbp-50h] BYREF
  WCHAR String1[264]; // [rsp+2C8h] [rbp+1C0h] BYREF

  v23 = -2LL;
  ppv = 0LL;
  v18 = 0LL;
  v17 = 0LL;
  v16 = 0LL;
  v15 = 0LL;
  v11 = 0LL;
  v14 = 0LL;
  v13 = 0LL;
  pv = 0LL;
  v2 = 0;
  pvar = 0LL;
  v21 = 0LL;
  v22 = 0LL;
  v3 = CoCreateInstance(
         &GUID_bcde0395_e52f_467c_8e3d_c4579291692e,
         0LL,
         0x17u,
         &GUID_a95664d2_9614_4f35_a746_de8db63617e6,
         &ppv);
  if ( v3 >= 0 )
  {
    v3 = ((__int64 (__fastcall *)(struct IMMDevice *, GUID *, __int64, _QWORD, __int64 *))a1->lpVtbl->Activate)(
           a1,
           &GUID_2a07407e_6497_4a18_9787_32f79bd0d98f,
           23LL,
           0LL,
           &v18);
    if ( v3 >= 0 )
    {
      v3 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v18 + 32LL))(v18, 0LL, &v17);
      if ( v3 >= 0 )
      {
        v3 = (*(__int64 (__fastcall **)(__int64, LPVOID *))(*(_QWORD *)v17 + 80LL))(v17, &pv);
        if ( v3 >= 0 )
        {
          v3 = (*(__int64 (__fastcall **)(LPVOID, LPVOID, struct IUnknown **))(*(_QWORD *)ppv + 40LL))(ppv, pv, &v16);
          if ( v3 >= 0 )
          {
            v4 = v11;
            if ( v11 != v16 )
            {
              ATL::AtlComQIPtrAssign(&v11, v16, &GUID_a52f8a19_4726_4fce_eade_f008d49b7938);
              v4 = v11;
            }
            if ( v4 )
            {
              v3 = ((__int64 (__fastcall *)(struct IUnknown *, __int64 *))v4->lpVtbl[1].QueryInterface)(v4, &v14);
              if ( v3 >= 0 )
              {
                v3 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))v14)(
                       v14,
                       &GUID_d666063f_1587_4e43_81f1_b948e807363f,
                       &v15);
                if ( v3 >= 0 )
                {
                  v3 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v15 + 32LL))(v15, 0LL, &v13);
                  if ( v3 >= 0 )
                  {
                    v3 = (*(__int64 (__fastcall **)(__int64, const DEVPROPKEY *, PROPVARIANT *))(*(_QWORD *)v13 + 40LL))(
                           v13,
                           &DEVPKEY_Device_Driver,
                           &pvar);
                    if ( v3 >= 0 && (_WORD)pvar == 31 )
                    {
                      pcbData[0] = 520;
                      v5 = 260LL;
                      v6 = SubKey;
                      do
                      {
                        if ( v5 == -2147483386 )
                          break;
                        v7 = *(WCHAR *)((char *)v6
                                      + (char *)L"SYSTEM\\CurrentControlSet\\Control\\Class\\"
                                      - (char *)SubKey);
                        if ( !v7 )
                          break;
                        *v6++ = v7;
                        --v5;
                      }
                      while ( v5 );
                      v8 = v6 - 1;
                      if ( v5 )
                        v8 = v6;
                      *v8 = 0;
                      v3 = -2147024774;
                      if ( v5 )
                      {
                        v3 = StringCbCatW(SubKey, 0x208uLL, v21);
                        if ( v3 >= 0 && !RegGetValueW(HKEY_LOCAL_MACHINE, SubKey, L"Driver", 2u, 0LL, String1, pcbData) )
                          v2 = CompareStringOrdinal(String1, -1, L"smwdm.sys", 9, 1) == 2;
                      }
                    }
                  }
                }
              }
            }
            else
            {
              v3 = -2147467262;
            }
          }
        }
      }
    }
  }
  PropVariantClear(&pvar);
  if ( pv )
  {
    CoTaskMemFree(pv);
    pv = 0LL;
  }
  if ( v3 < 0 )
    AudSrvTraceLoggingErrorHelper("EndpointRequiresAC97VistaShim", 5292, v3);
  if ( v13 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  if ( v14 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  if ( v11 )
    ((void (__fastcall *)(struct IUnknown *))v11->lpVtbl->Release)(v11);
  if ( v15 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  if ( v16 )
    ((void (__fastcall *)(struct IUnknown *))v16->lpVtbl->Release)(v16);
  if ( v17 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
  if ( v18 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
  if ( ppv )
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)ppv + 16LL))(ppv);
  return v2;
}
