/*
 * XREFs of ?GetAppKey@ApplicationSpecificEndpointInfo@@AEAAJK_NPEAPEAUHKEY__@@@Z @ 0x18002E8A8
 * Callers:
 *     ?SetPersistedDefaultAudioEndpoint@ApplicationSpecificEndpointInfo@@UEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@PEBG@Z @ 0x18002DC60 (-SetPersistedDefaultAudioEndpoint@ApplicationSpecificEndpointInfo@@UEAAJW4__MIDL___MIDL_itf_mmde.c)
 *     ?LoadApplicationDefaultEndpoints@ApplicationSpecificEndpointInfo@@AEAAJXZ @ 0x18002E4BC (-LoadApplicationDefaultEndpoints@ApplicationSpecificEndpointInfo@@AEAAJXZ.c)
 *     ?AttemptToUpdateEndpointInterfaceId@ApplicationSpecificEndpointInfo@@AEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@PEAPEAG@Z @ 0x18002F704 (-AttemptToUpdateEndpointInterfaceId@ApplicationSpecificEndpointInfo@@AEAAJW4__MIDL___MIDL_itf_mm.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002CE4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x1800086B8 (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18000D67C (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?ReadKey@ApplicationSpecificEndpointInfo@@CAJPEAUHKEY__@@PEBGPEAPEAG@Z @ 0x18002EF1C (-ReadKey@ApplicationSpecificEndpointInfo@@CAJPEAUHKEY__@@PEBGPEAPEAG@Z.c)
 *     ?StringCbPrintfW@@YAJPEAG_KPEBGZZ @ 0x18002FDE8 (-StringCbPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?SetSidOnSACL@@YAKPEAXPEAU_ACL@@PEAPEAU1@PEAK@Z @ 0x180031B64 (-SetSidOnSACL@@YAKPEAXPEAU_ACL@@PEAPEAU1@PEAK@Z.c)
 *     ?SafeRegCreateKeyEx@@YAJPEAUHKEY__@@PEBGKPEAGKKPEAU_SECURITY_ATTRIBUTES@@PEAPEAU1@PEAK@Z @ 0x180031E58 (-SafeRegCreateKeyEx@@YAJPEAUHKEY__@@PEBGKPEAGKKPEAU_SECURITY_ATTRIBUTES@@PEAPEAU1@PEAK@Z.c)
 *     ?DetermineLowRightsKeySecurityDescriptor@@YAJPEAUHKEY__@@PEAPEAX@Z @ 0x180032200 (-DetermineLowRightsKeySecurityDescriptor@@YAJPEAUHKEY__@@PEAPEAX@Z.c)
 *     ?SetRegistryHandleIntegrityLevel@@YAJPEAUHKEY__@@PEAX@Z @ 0x180032704 (-SetRegistryHandleIntegrityLevel@@YAJPEAUHKEY__@@PEAX@Z.c)
 *     __security_check_cookie @ 0x1800343C0 (__security_check_cookie.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180034B98 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
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
  unsigned int v25; // r8d
  unsigned __int16 *v26; // r9
  PSID v27; // rbx
  HKEY v28; // r14
  signed int v29; // edi
  struct _ACL *v30; // r15
  int KeySecurity; // esi
  void *v32; // rax
  void *v33; // rdi
  HANDLE ProcessHeap; // rax
  signed int v35; // eax
  HANDLE v36; // rax
  void *lpSecurityDescriptor; // rbx
  HANDLE v38; // rax
  const BYTE *v39; // rdx
  __int64 v40; // rcx
  _WORD *v41; // rax
  signed int v42; // ebx
  int v43; // eax
  int v44; // eax
  unsigned int v45; // eax
  unsigned int v46; // ebx
  PHKEY phkResult; // [rsp+20h] [rbp-328h]
  __int64 cchCount2; // [rsp+28h] [rbp-320h]
  unsigned int *v49; // [rsp+40h] [rbp-308h]
  HKEY hKey; // [rsp+58h] [rbp-2F0h] BYREF
  int v52; // [rsp+60h] [rbp-2E8h]
  DWORD cbSecurityDescriptor; // [rsp+64h] [rbp-2E4h] BYREF
  LPVOID pv; // [rsp+68h] [rbp-2E0h] BYREF
  PSID Sid; // [rsp+70h] [rbp-2D8h] BYREF
  REGSAM samDesired; // [rsp+78h] [rbp-2D0h]
  PACL pSacl; // [rsp+80h] [rbp-2C8h] BYREF
  struct _ACL *v58; // [rsp+88h] [rbp-2C0h] BYREF
  struct _SECURITY_ATTRIBUTES v59; // [rsp+90h] [rbp-2B8h] BYREF
  WINBOOL bSaclDefaulted; // [rsp+A8h] [rbp-2A0h] BYREF
  WINBOOL bSaclPresent; // [rsp+ACh] [rbp-29Ch] BYREF
  HKEY *v62; // [rsp+B0h] [rbp-298h]
  __int64 v63; // [rsp+B8h] [rbp-290h]
  _BYTE pSecurityDescriptor[48]; // [rsp+C0h] [rbp-288h] BYREF
  WCHAR SubKey[264]; // [rsp+F0h] [rbp-258h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+348h] [rbp+0h]

  v63 = -2LL;
  try
  {
    v62 = a4;
    v4 = a3;
    samDesired = a2;
    v6 = 0;
    v7 = 0;
    v52 = 0;
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
          v52 = v7 + 1;
          v6 = 1;
          v20 = hKey;
          if ( hKey )
          {
            v21 = GetLastError();
            RegCloseKey(v20);
            SetLastError(v21);
          }
          hKey = 0LL;
          v7 = v52;
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
      memset(&v59.nLength + 1, 0, 20);
      v59.nLength = 24;
      v24 = DetermineLowRightsKeySecurityDescriptor(v16, &v59.lpSecurityDescriptor);
      if ( !v24 )
      {
        v24 = SafeRegCreateKeyEx(
                HKEY_CURRENT_USER,
                SubKey,
                v25,
                v26,
                (unsigned int)phkResult,
                0xA001Fu,
                &v59,
                &hKey,
                v49);
        if ( !v24 )
        {
          Sid = 0LL;
          if ( ConvertStringSidToSidW(L"LW", &Sid) )
          {
            v27 = Sid;
            v28 = hKey;
            v29 = -2147024809;
            if ( Sid )
            {
              pSacl = 0LL;
              v58 = 0LL;
              cbSecurityDescriptor = 0;
              v30 = 0LL;
              KeySecurity = RegGetKeySecurity(hKey, 0x10u, 0LL, &cbSecurityDescriptor);
              if ( KeySecurity == 122 )
              {
                v32 = operator new[](cbSecurityDescriptor, (const struct std::nothrow_t *)&std::nothrow);
                v33 = v32;
                if ( v32 )
                {
                  KeySecurity = RegGetKeySecurity(v28, 0x10u, v32, &cbSecurityDescriptor);
                  if ( !KeySecurity )
                  {
                    if ( GetSecurityDescriptorSacl(v33, &bSaclPresent, &pSacl, &bSaclDefaulted) )
                    {
                      LODWORD(pv) = 0;
                      KeySecurity = SetSidOnSACL(v27, pSacl, &v58, (unsigned int *)&pv);
                      if ( !KeySecurity )
                        v30 = v58;
                    }
                    else
                    {
                      KeySecurity = GetLastError();
                    }
                  }
                  ProcessHeap = GetProcessHeap();
                  HeapFree(ProcessHeap, 0, v33);
                }
                else
                {
                  KeySecurity = 122;
                }
              }
              v29 = (unsigned __int16)KeySecurity | 0x80070000;
              if ( KeySecurity <= 0 )
                v29 = KeySecurity;
              v6 = 0;
              if ( v29 >= 0 )
              {
                if ( !InitializeSecurityDescriptor(pSecurityDescriptor, 1u)
                  || !SetSecurityDescriptorSacl(pSecurityDescriptor, 1, v30, 0)
                  || RegSetKeySecurity(v28, 0x10u, pSecurityDescriptor) )
                {
                  v35 = GetLastError();
                  v29 = (unsigned __int16)v35 | 0x80070000;
                  if ( v35 <= 0 )
                    v29 = v35;
                }
                if ( v30 )
                {
                  v36 = GetProcessHeap();
                  HeapFree(v36, 0, v30);
                }
              }
              v4 = a3;
              v27 = Sid;
              v28 = hKey;
            }
            if ( v29 < 0 )
            {
              v29 = SetRegistryHandleIntegrityLevel(v28, v27);
              v27 = Sid;
            }
            if ( v27 )
              LocalFree(v27);
            v7 = v52;
            goto LABEL_58;
          }
          v24 = GetLastError();
        }
      }
      v29 = (unsigned __int16)v24 | 0x80070000;
      if ( v24 <= 0 )
        v29 = v24;
LABEL_58:
      lpSecurityDescriptor = v59.lpSecurityDescriptor;
      v38 = GetProcessHeap();
      HeapFree(v38, 0, lpSecurityDescriptor);
      v59.lpSecurityDescriptor = 0LL;
      if ( v29 < 0 )
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
          (const char *)(unsigned int)v29);
        if ( hKey )
          RegCloseKey(hKey);
        return (unsigned int)v29;
      }
      v39 = (const BYTE *)*((_QWORD *)this + 10);
      if ( v39 )
      {
        v40 = 261LL;
        v41 = (_WORD *)*((_QWORD *)this + 10);
        do
        {
          if ( !*v41 )
            break;
          ++v41;
          --v40;
        }
        while ( v40 );
        v42 = v40 == 0 ? 0x80070057 : 0;
        if ( v40 )
        {
          v43 = 261 - v40;
          goto LABEL_76;
        }
      }
      else
      {
        v42 = -2147024809;
      }
      v43 = 0;
LABEL_76:
      if ( v42 < 0 )
        v44 = 0;
      else
        v44 = 2 * v43;
      if ( v42 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x23F,
          (__int64)"avcore\\audiocore\\server\\audiosrv\\applicationspecificendpointinfo\\applicationspecificendpointinfo.cpp",
          (const char *)(unsigned int)v42);
        if ( hKey )
          RegCloseKey(hKey);
        return (unsigned int)v42;
      }
      v45 = RegSetValueExW(hKey, 0LL, 0, 1u, v39, v44 + 2);
      if ( v45 )
      {
        v46 = wil::details::in1diag3::Return_Win32(
                retaddr,
                (void *)0x24D,
                (__int64)"avcore\\audiocore\\server\\audiosrv\\applicationspecificendpointinfo\\applicationspecificendpointinfo.cpp",
                (const char *)v45);
        if ( hKey )
          RegCloseKey(hKey);
        return v46;
      }
LABEL_87:
      if ( !v6 )
      {
        if ( !hKey )
          return 2147943568LL;
        *v62 = hKey;
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
