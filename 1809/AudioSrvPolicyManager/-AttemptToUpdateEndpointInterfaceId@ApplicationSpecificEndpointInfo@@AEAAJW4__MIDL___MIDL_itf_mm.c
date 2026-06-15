/*
 * XREFs of ?AttemptToUpdateEndpointInterfaceId@ApplicationSpecificEndpointInfo@@AEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@PEAPEAG@Z @ 0x1800326F4
 * Callers:
 *     ?GetPersistedDefaultAudioEndpoint@ApplicationSpecificEndpointInfo@@UEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@PEAPEAG@Z @ 0x180030F80 (-GetPersistedDefaultAudioEndpoint@ApplicationSpecificEndpointInfo@@UEAAJW4__MIDL___MIDL_itf_mmde.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002F84 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x18000B398 (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 *     ?UpdateState@ApplicationSpecificEndpointInfo@@AEAAJW4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@W4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@PEBG@Z @ 0x1800317DC (-UpdateState@ApplicationSpecificEndpointInfo@@AEAAJW4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_00.c)
 *     ?GetAppKey@ApplicationSpecificEndpointInfo@@AEAAJK_NPEAPEAUHKEY__@@@Z @ 0x18003194C (-GetAppKey@ApplicationSpecificEndpointInfo@@AEAAJK_NPEAPEAUHKEY__@@@Z.c)
 *     ?ReadKey@ApplicationSpecificEndpointInfo@@CAJPEAUHKEY__@@PEBGPEAPEAG@Z @ 0x180031FD4 (-ReadKey@ApplicationSpecificEndpointInfo@@CAJPEAUHKEY__@@PEBGPEAPEAG@Z.c)
 *     ?GetPersistentId@ApplicationSpecificEndpointInfo@@CAJPEAUIMMDevice@@PEAPEAG@Z @ 0x180032518 (-GetPersistentId@ApplicationSpecificEndpointInfo@@CAJPEAUIMMDevice@@PEAPEAG@Z.c)
 *     ?WritePersistedEndpoint@ApplicationSpecificEndpointInfo@@AEAAJPEAUHKEY__@@PEBG1@Z @ 0x180032614 (-WritePersistedEndpoint@ApplicationSpecificEndpointInfo@@AEAAJPEAUHKEY__@@PEBG1@Z.c)
 *     ?StringCbPrintfW@@YAJPEAG_KPEBGZZ @ 0x180032F18 (-StringCbPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     __security_check_cookie @ 0x1800369D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800380A0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=56
__int64 __fastcall ApplicationSpecificEndpointInfo::AttemptToUpdateEndpointInterfaceId(
        ApplicationSpecificEndpointInfo *a1,
        unsigned int a2,
        unsigned int a3,
        _QWORD *a4)
{
  int v7; // eax
  int Key; // r14d
  HKEY v9; // rsi
  unsigned int v10; // eax
  int AppKey; // eax
  HRESULT v12; // eax
  int v13; // eax
  __int64 v14; // rdx
  unsigned int v15; // edi
  int v16; // eax
  int PersistentId; // eax
  WCHAR *v18; // rbx
  LPVOID v19; // rax
  __int64 v21; // rdx
  int v22; // eax
  HKEY v23; // rdi
  int updated; // eax
  ApplicationSpecificEndpointInfo *v25; // rcx
  __int64 v26; // rdx
  LPVOID *ppv; // [rsp+20h] [rbp-89h]
  struct IMMDevice *v29; // [rsp+30h] [rbp-79h] BYREF
  char v30; // [rsp+39h] [rbp-70h]
  unsigned int v31; // [rsp+3Ch] [rbp-6Dh] BYREF
  __int64 v32; // [rsp+40h] [rbp-69h] BYREF
  LPVOID v33; // [rsp+48h] [rbp-61h] BYREF
  LPVOID pv; // [rsp+50h] [rbp-59h] BYREF
  HKEY hkey; // [rsp+58h] [rbp-51h] BYREF
  HKEY hKey; // [rsp+60h] [rbp-49h] BYREF
  PCNZWCH lpString2; // [rsp+68h] [rbp-41h] BYREF
  PCNZWCH lpString1; // [rsp+70h] [rbp-39h] BYREF
  _QWORD *v39; // [rsp+78h] [rbp-31h]
  __int64 v40; // [rsp+80h] [rbp-29h]
  wchar_t v41[12]; // [rsp+88h] [rbp-21h] BYREF
  wchar_t Buffer[12]; // [rsp+A0h] [rbp-9h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+108h] [rbp+5Fh]

  v40 = -2LL;
  v39 = a4;
  *a4 = 0LL;
  lpString2 = 0LL;
  pv = 0LL;
  v7 = StringCbPrintfW(Buffer, 0x18uLL, L"%03d_%03d_p", a3, a2);
  Key = v7;
  if ( v7 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x373,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\applicationspecificendpointinfo\\applicationspecificendpointinfo.cpp",
      (const char *)(unsigned int)v7);
    goto LABEL_31;
  }
  v9 = 0LL;
  hkey = 0LL;
  v10 = RpcImpersonateClient(0LL);
  if ( v10 )
  {
    Key = wil::details::in1diag3::Return_Win32(
            retaddr,
            (void *)0x377,
            (__int64)"avcore\\audiocore\\server\\audiosrv\\applicationspecificendpointinfo\\applicationspecificendpointinfo.cpp",
            (const char *)v10);
    goto LABEL_29;
  }
  v30 = 1;
  hkey = 0LL;
  AppKey = ApplicationSpecificEndpointInfo::GetAppKey(a1, 0x20019u, 0, &hkey);
  v9 = hkey;
  if ( AppKey < 0 )
  {
LABEL_27:
    v19 = pv;
    pv = 0LL;
    *v39 = v19;
    Key = 0;
    goto LABEL_28;
  }
  Key = ApplicationSpecificEndpointInfo::ReadKey(hkey, Buffer, (unsigned __int16 **)&lpString2);
  if ( Key >= 0 )
  {
    v33 = 0LL;
    v12 = CoCreateInstance(&CLSID_MMDeviceEnumerator, 0LL, 0x17u, &GUID_a95664d2_9614_4f35_a746_de8db63617e6, &v33);
    Key = v12;
    if ( v12 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x380,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\applicationspecificendpointinfo\\applicationspecificendpointinfo.cpp",
        (const char *)(unsigned int)v12);
LABEL_64:
      if ( v33 )
        (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v33 + 16LL))(v33);
      goto LABEL_28;
    }
    v32 = 0LL;
    v13 = (*(__int64 (__fastcall **)(LPVOID, _QWORD, __int64, __int64 *))(*(_QWORD *)v33 + 24LL))(v33, a2, 1LL, &v32);
    Key = v13;
    if ( v13 < 0 )
    {
      v14 = 899LL;
      goto LABEL_13;
    }
    v31 = 0;
    v13 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v32 + 24LL))(v32, &v31);
    Key = v13;
    if ( v13 < 0 )
    {
      v14 = 902LL;
LABEL_13:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v14,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\applicationspecificendpointinfo\\applicationspecificendpointinfo.cpp",
        (const char *)(unsigned int)v13);
LABEL_62:
      if ( v32 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v32 + 16LL))(v32);
      goto LABEL_64;
    }
    v15 = 0;
    if ( v31 )
    {
      while ( 1 )
      {
        v29 = 0LL;
        v16 = (*(__int64 (__fastcall **)(__int64, _QWORD, struct IMMDevice **))(*(_QWORD *)v32 + 32LL))(v32, v15, &v29);
        Key = v16;
        if ( v16 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x38B,
            (__int64)"avcore\\audiocore\\server\\audiosrv\\applicationspecificendpointinfo\\applicationspecificendpointinfo.cpp",
            (const char *)(unsigned int)v16);
          goto LABEL_60;
        }
        lpString1 = 0LL;
        PersistentId = ApplicationSpecificEndpointInfo::GetPersistentId(v29, (unsigned __int16 **)&lpString1);
        Key = PersistentId;
        v18 = (WCHAR *)lpString1;
        if ( PersistentId < 0 )
        {
          v21 = 910LL;
LABEL_55:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v21,
            (__int64)"avcore\\audiocore\\server\\audiosrv\\applicationspecificendpointinfo\\applicationspecificendpointinfo.cpp",
            (const char *)(unsigned int)PersistentId);
          goto LABEL_56;
        }
        if ( CompareStringW(0x7Fu, 1u, lpString1, -1, lpString2, -1) == 2 )
          break;
        if ( v18 )
          CoTaskMemFree(v18);
        if ( v29 )
          ((void (__fastcall *)(struct IMMDevice *))v29->lpVtbl->Release)(v29);
        if ( ++v15 >= v31 )
          goto LABEL_23;
      }
      PersistentId = mmdDevGetInterfaceIdFromMMDevice(v29, &pv);
      Key = PersistentId;
      if ( PersistentId < 0 )
      {
        v21 = 915LL;
        goto LABEL_55;
      }
      hKey = 0LL;
      v22 = ApplicationSpecificEndpointInfo::GetAppKey(a1, 0x2001Fu, 0, &hKey);
      v23 = hKey;
      if ( v22 >= 0 )
      {
        LODWORD(ppv) = a2;
        updated = StringCbPrintfW(v41, 0x14uLL, L"%03d_%03d", a3, ppv);
        Key = updated;
        if ( updated < 0 )
        {
          v26 = 924LL;
LABEL_45:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v26,
            (__int64)"avcore\\audiocore\\server\\audiosrv\\applicationspecificendpointinfo\\applicationspecificendpointinfo.cpp",
            (const char *)(unsigned int)updated);
          if ( v23 )
            RegCloseKey(v23);
LABEL_56:
          if ( v18 )
            CoTaskMemFree(v18);
LABEL_60:
          if ( v29 )
            ((void (__fastcall *)(struct IMMDevice *))v29->lpVtbl->Release)(v29);
          goto LABEL_62;
        }
        updated = ApplicationSpecificEndpointInfo::WritePersistedEndpoint(v25, v23, v41, (const BYTE *)pv);
        Key = updated;
        if ( updated < 0 )
        {
          v26 = 927LL;
          goto LABEL_45;
        }
      }
      updated = ApplicationSpecificEndpointInfo::UpdateState((__int64)a1, a3, a2, (const unsigned __int16 *)pv);
      Key = updated;
      if ( updated < 0 )
      {
        v26 = 931LL;
        goto LABEL_45;
      }
      if ( v23 )
        RegCloseKey(v23);
      if ( v18 )
        CoTaskMemFree(v18);
      if ( v29 )
        ((void (__fastcall *)(struct IMMDevice *))v29->lpVtbl->Release)(v29);
    }
LABEL_23:
    if ( v32 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v32 + 16LL))(v32);
    if ( v33 )
      (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v33 + 16LL))(v33);
    goto LABEL_27;
  }
LABEL_28:
  v30 = 0;
  RpcRevertToSelf();
LABEL_29:
  if ( v9 )
    RegCloseKey(v9);
LABEL_31:
  if ( pv )
    CoTaskMemFree(pv);
  if ( lpString2 )
    CoTaskMemFree((LPVOID)lpString2);
  return (unsigned int)Key;
}
