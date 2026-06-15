/*
 * XREFs of ?GetAppKey@ApplicationSpecificEndpointInfo@@AEAAJK_NPEAPEAUHKEY__@@@Z @ 0x18003194C
 * Callers:
 *     ?SetPersistedDefaultAudioEndpoint@ApplicationSpecificEndpointInfo@@UEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@PEBG@Z @ 0x180030CD0 (-SetPersistedDefaultAudioEndpoint@ApplicationSpecificEndpointInfo@@UEAAJW4__MIDL___MIDL_itf_mmde.c)
 *     ?LoadApplicationDefaultEndpoints@ApplicationSpecificEndpointInfo@@AEAAJXZ @ 0x18003153C (-LoadApplicationDefaultEndpoints@ApplicationSpecificEndpointInfo@@AEAAJXZ.c)
 *     ?AttemptToUpdateEndpointInterfaceId@ApplicationSpecificEndpointInfo@@AEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@PEAPEAG@Z @ 0x1800326F4 (-AttemptToUpdateEndpointInterfaceId@ApplicationSpecificEndpointInfo@@AEAAJW4__MIDL___MIDL_itf_mm.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002F84 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x18000B398 (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18001094C (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?ReadKey@ApplicationSpecificEndpointInfo@@CAJPEAUHKEY__@@PEBGPEAPEAG@Z @ 0x180031FD4 (-ReadKey@ApplicationSpecificEndpointInfo@@CAJPEAUHKEY__@@PEBGPEAPEAG@Z.c)
 *     ?StringCbPrintfW@@YAJPEAG_KPEBGZZ @ 0x180032F18 (-StringCbPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?SetSidOnSACL@@YAKPEAXPEAU_ACL@@PEAPEAU1@PEAK@Z @ 0x180034C24 (-SetSidOnSACL@@YAKPEAXPEAU_ACL@@PEAPEAU1@PEAK@Z.c)
 *     ?SafeRegCreateKeyEx@@YAJPEAUHKEY__@@PEBGKPEAGKKPEAU_SECURITY_ATTRIBUTES@@PEAPEAU1@PEAK@Z @ 0x180034F18 (-SafeRegCreateKeyEx@@YAJPEAUHKEY__@@PEBGKPEAGKKPEAU_SECURITY_ATTRIBUTES@@PEAPEAU1@PEAK@Z.c)
 *     ?DetermineLowRightsKeySecurityDescriptor@@YAJPEAUHKEY__@@PEAPEAX@Z @ 0x180035308 (-DetermineLowRightsKeySecurityDescriptor@@YAJPEAUHKEY__@@PEAPEAX@Z.c)
 *     ?SetRegistryHandleIntegrityLevel@@YAJPEAUHKEY__@@PEAX@Z @ 0x18003580C (-SetRegistryHandleIntegrityLevel@@YAJPEAUHKEY__@@PEAX@Z.c)
 *     __security_check_cookie @ 0x1800369D0 (__security_check_cookie.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800371A8 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall ApplicationSpecificEndpointInfo::GetAppKey(
        ApplicationSpecificEndpointInfo *this,
        REGSAM a2,
        char a3,
        HKEY *a4)
{
  char v4; // r15
  char v6; // si
  int v7; // r14d
  _WORD *v8; // rcx
  int v9; // r12d
  int v10; // eax
  unsigned int v11; // ebx
  const char *v12; // r9
  __int64 result; // rax
  HKEY v14; // rdi
  DWORD LastError; // ebx
  HKEY v16; // rcx
  int Key; // eax
  unsigned int v18; // ebx
  void *v19; // rbx
  HKEY v20; // r14
  DWORD v21; // edi
  HKEY v22; // rdi
  DWORD v23; // ebx
  signed int v24; // eax
  PSID v25; // rbx
  HKEY v26; // r14
  signed int v27; // edi
  struct _ACL *v28; // r15
  int KeySecurity; // esi
  void *v30; // rax
  void *v31; // rdi
  HANDLE ProcessHeap; // rax
  signed int v33; // eax
  HANDLE v34; // rax
  void *lpSecurityDescriptor; // rbx
  HANDLE v36; // rax
  const BYTE *v37; // rdx
  int v38; // eax
  __int64 v39; // rcx
  _WORD *v40; // rax
  signed int v41; // ebx
  int v42; // eax
  unsigned int v43; // eax
  unsigned int v44; // ebx
  PHKEY phkResult; // [rsp+20h] [rbp-328h]
  __int64 cchCount2; // [rsp+28h] [rbp-320h]
  HKEY hKey; // [rsp+58h] [rbp-2F0h] BYREF
  int v49; // [rsp+60h] [rbp-2E8h]
  DWORD cbSecurityDescriptor; // [rsp+64h] [rbp-2E4h] BYREF
  LPVOID pv; // [rsp+68h] [rbp-2E0h] BYREF
  PSID Sid; // [rsp+70h] [rbp-2D8h] BYREF
  REGSAM samDesired; // [rsp+78h] [rbp-2D0h]
  PACL pSacl; // [rsp+80h] [rbp-2C8h] BYREF
  struct _ACL *v55; // [rsp+88h] [rbp-2C0h] BYREF
  struct _SECURITY_ATTRIBUTES v56; // [rsp+90h] [rbp-2B8h] BYREF
  WINBOOL bSaclDefaulted; // [rsp+A8h] [rbp-2A0h] BYREF
  WINBOOL bSaclPresent; // [rsp+ACh] [rbp-29Ch] BYREF
  HKEY *v59; // [rsp+B0h] [rbp-298h]
  __int64 v60; // [rsp+B8h] [rbp-290h]
  _BYTE pSecurityDescriptor[48]; // [rsp+C0h] [rbp-288h] BYREF
  WCHAR SubKey[264]; // [rsp+F0h] [rbp-258h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+348h] [rbp+0h]

  v60 = -2LL;
  try
  {
    v59 = a4;
    v4 = a3;
    samDesired = a2;
    v6 = 0;
    v7 = 0;
    v49 = 0;
    hKey = 0LL;
    v8 = (_WORD *)*((_QWORD *)this + 10);
    if ( !v8 )
      ATL::AtlThrowImpl(-2147467259);
    v9 = 0;
    while ( *v8 )
      v9 = (unsigned __int16)*v8++ + 33 * v9;
    while ( 1 )
    {
      LODWORD(cchCount2) = v7;
      LODWORD(phkResult) = v9;
      v10 = StringCbPrintfW(
              SubKey,
              0x20AuLL,
              L"%s\\%x_%x",
              L"Software\\Microsoft\\Multimedia\\Audio\\DefaultEndpoint",
              phkResult,
              cchCount2);
      v11 = v10;
      if ( v10 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x221,
          (__int64)"avcore\\audiocore\\server\\audiosrv\\applicationspecificendpointinfo\\applicationspecificendpointinfo.cpp",
          (const char *)(unsigned int)v10);
        if ( hKey )
          RegCloseKey(hKey);
        return v11;
      }
      v14 = hKey;
      if ( hKey )
      {
        LastError = GetLastError();
        RegCloseKey(v14);
        SetLastError(LastError);
      }
      hKey = 0LL;
      if ( !RegOpenKeyExW(HKEY_CURRENT_USER, SubKey, 0, samDesired, &hKey) )
      {
        pv = 0LL;
        Key = ApplicationSpecificEndpointInfo::ReadKey(hKey, 0LL, (unsigned __int16 **)&pv);
        v18 = Key;
        if ( Key < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x229,
            (__int64)"avcore\\audiocore\\server\\audiosrv\\applicationspecificendpointinfo\\applicationspecificendpointinfo.cpp",
            (const char *)(unsigned int)Key);
          if ( pv )
            CoTaskMemFree(pv);
          if ( hKey )
            RegCloseKey(hKey);
          return v18;
        }
        v19 = pv;
        if ( CompareStringW(0x7Fu, 1u, *((PCNZWCH *)this + 10), -1, (PCNZWCH)pv, -1) == 2 )
        {
          v6 = 0;
        }
        else
        {
          v49 = v7 + 1;
          v6 = 1;
          v20 = hKey;
          if ( hKey )
          {
            v21 = GetLastError();
            RegCloseKey(v20);
            SetLastError(v21);
          }
          hKey = 0LL;
          v7 = v49;
        }
        if ( v19 )
          CoTaskMemFree(v19);
        goto LABEL_87;
      }
      if ( !v4 )
        goto LABEL_87;
      v22 = hKey;
      v6 = 0;
      if ( hKey )
      {
        v23 = GetLastError();
        RegCloseKey(v22);
        SetLastError(v23);
      }
      hKey = 0LL;
      memset(&v56.nLength + 1, 0, 20);
      v56.nLength = 24;
      v24 = DetermineLowRightsKeySecurityDescriptor(v16, &v56.lpSecurityDescriptor);
      if ( !v24 )
      {
        v24 = SafeRegCreateKeyEx(HKEY_CURRENT_USER, SubKey, 0, 0LL, 0, 0xA001Fu, &v56, &hKey, 0LL);
        if ( !v24 )
        {
          Sid = 0LL;
          if ( ConvertStringSidToSidW(L"LW", &Sid) )
          {
            v25 = Sid;
            v26 = hKey;
            v27 = -2147024809;
            if ( Sid )
            {
              pSacl = 0LL;
              v55 = 0LL;
              cbSecurityDescriptor = 0;
              v28 = 0LL;
              KeySecurity = RegGetKeySecurity(hKey, 0x10u, 0LL, &cbSecurityDescriptor);
              if ( KeySecurity == 122 )
              {
                v30 = operator new[](cbSecurityDescriptor, (const struct std::nothrow_t *)&std::nothrow);
                v31 = v30;
                if ( v30 )
                {
                  KeySecurity = RegGetKeySecurity(v26, 0x10u, v30, &cbSecurityDescriptor);
                  if ( !KeySecurity )
                  {
                    if ( GetSecurityDescriptorSacl(v31, &bSaclPresent, &pSacl, &bSaclDefaulted) )
                    {
                      LODWORD(pv) = 0;
                      KeySecurity = SetSidOnSACL(v25, pSacl, &v55, (unsigned int *)&pv);
                      if ( !KeySecurity )
                        v28 = v55;
                    }
                    else
                    {
                      KeySecurity = GetLastError();
                    }
                  }
                  ProcessHeap = GetProcessHeap();
                  HeapFree(ProcessHeap, 0, v31);
                }
                else
                {
                  KeySecurity = 122;
                }
              }
              v27 = (unsigned __int16)KeySecurity | 0x80070000;
              if ( KeySecurity <= 0 )
                v27 = KeySecurity;
              v6 = 0;
              if ( v27 >= 0 )
              {
                if ( !InitializeSecurityDescriptor(pSecurityDescriptor, 1u)
                  || !SetSecurityDescriptorSacl(pSecurityDescriptor, 1, v28, 0)
                  || RegSetKeySecurity(v26, 0x10u, pSecurityDescriptor) )
                {
                  v33 = GetLastError();
                  v27 = (unsigned __int16)v33 | 0x80070000;
                  if ( v33 <= 0 )
                    v27 = v33;
                }
                if ( v28 )
                {
                  v34 = GetProcessHeap();
                  HeapFree(v34, 0, v28);
                }
              }
              v4 = a3;
              v25 = Sid;
              v26 = hKey;
            }
            if ( v27 < 0 )
            {
              v27 = SetRegistryHandleIntegrityLevel(v26, v25);
              v25 = Sid;
            }
            if ( v25 )
              LocalFree(v25);
            v7 = v49;
            goto LABEL_58;
          }
          v24 = GetLastError();
        }
      }
      v27 = (unsigned __int16)v24 | 0x80070000;
      if ( v24 <= 0 )
        v27 = v24;
LABEL_58:
      lpSecurityDescriptor = v56.lpSecurityDescriptor;
      v36 = GetProcessHeap();
      HeapFree(v36, 0, lpSecurityDescriptor);
      v56.lpSecurityDescriptor = 0LL;
      if ( v27 < 0 )
      {
        if ( hKey )
        {
          RegCloseKey(hKey);
          hKey = 0LL;
        }
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x23B,
          (__int64)"avcore\\audiocore\\server\\audiosrv\\applicationspecificendpointinfo\\applicationspecificendpointinfo.cpp",
          (const char *)(unsigned int)v27);
        if ( hKey )
          RegCloseKey(hKey);
        return (unsigned int)v27;
      }
      v37 = (const BYTE *)*((_QWORD *)this + 10);
      v38 = 0;
      if ( v37 )
      {
        v39 = 261LL;
        v40 = (_WORD *)*((_QWORD *)this + 10);
        do
        {
          if ( !*v40 )
            break;
          ++v40;
          --v39;
        }
        while ( v39 );
        v41 = v39 == 0 ? 0x80070057 : 0;
        if ( v39 )
          v38 = 261 - v39;
        else
          v38 = 0;
      }
      else
      {
        v41 = -2147024809;
      }
      if ( v41 < 0 )
        v42 = 0;
      else
        v42 = 2 * v38;
      if ( v41 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x23F,
          (__int64)"avcore\\audiocore\\server\\audiosrv\\applicationspecificendpointinfo\\applicationspecificendpointinfo.cpp",
          (const char *)(unsigned int)v41);
        if ( hKey )
          RegCloseKey(hKey);
        return (unsigned int)v41;
      }
      v43 = RegSetValueExW(hKey, 0LL, 0, 1u, v37, v42 + 2);
      if ( v43 )
      {
        v44 = wil::details::in1diag3::Return_Win32(
                retaddr,
                (void *)0x24D,
                (__int64)"avcore\\audiocore\\server\\audiosrv\\applicationspecificendpointinfo\\applicationspecificendpointinfo.cpp",
                (const char *)v43);
        if ( hKey )
          RegCloseKey(hKey);
        return v44;
      }
LABEL_87:
      if ( !v6 )
      {
        if ( !hKey )
          return 2147943568LL;
        *v59 = hKey;
        return 0LL;
      }
    }
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x25F,
                           (__int64)"avcore\\audiocore\\server\\audiosrv\\applicationspecificendpointinfo\\applicationspe"
                                    "cificendpointinfo.cpp",
                           v12);
  }
  return result;
}
