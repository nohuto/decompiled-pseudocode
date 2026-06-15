/*
 * XREFs of ?SetRegistryHandleIntegrityLevel@@YAJPEAUHKEY__@@PEAX@Z @ 0x180032704
 * Callers:
 *     ?GetAppKey@ApplicationSpecificEndpointInfo@@AEAAJK_NPEAPEAUHKEY__@@@Z @ 0x18002E8A8 (-GetAppKey@ApplicationSpecificEndpointInfo@@AEAAJK_NPEAPEAUHKEY__@@@Z.c)
 * Callees:
 *     ?SetSidOnSACL@@YAKPEAXPEAU_ACL@@PEAPEAU1@PEAK@Z @ 0x180031B64 (-SetSidOnSACL@@YAKPEAXPEAU_ACL@@PEAPEAU1@PEAK@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180034B98 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall SetRegistryHandleIntegrityLevel(HKEY Handle, PSID pSid)
{
  signed int v4; // ebx
  struct _ACL *v5; // rsi
  int KeySecurity; // edi
  void *v7; // rax
  void *v8; // rbx
  HANDLE ProcessHeap; // rax
  signed int LastError; // eax
  HANDLE v11; // rax
  WINBOOL bSaclPresent; // [rsp+20h] [rbp-40h] BYREF
  PACL pSacl; // [rsp+28h] [rbp-38h] BYREF
  struct _ACL *v15; // [rsp+30h] [rbp-30h] BYREF
  _BYTE pSecurityDescriptor[40]; // [rsp+38h] [rbp-28h] BYREF
  DWORD cbSecurityDescriptor; // [rsp+98h] [rbp+38h] BYREF
  unsigned int v18; // [rsp+A0h] [rbp+40h] BYREF
  WINBOOL bSaclDefaulted; // [rsp+A8h] [rbp+48h] BYREF

  v4 = -2147024809;
  if ( pSid && Handle != HKEY_CURRENT_USER_LOCAL_SETTINGS|0x7FFFFFF8LL )
  {
    pSacl = 0LL;
    v15 = 0LL;
    v5 = 0LL;
    cbSecurityDescriptor = 0;
    KeySecurity = RegGetKeySecurity(Handle, 0x10u, 0LL, &cbSecurityDescriptor);
    if ( KeySecurity == 122 )
    {
      v7 = operator new[](cbSecurityDescriptor, (const struct std::nothrow_t *)&std::nothrow);
      v8 = v7;
      if ( v7 )
      {
        KeySecurity = RegGetKeySecurity(Handle, 0x10u, v7, &cbSecurityDescriptor);
        if ( !KeySecurity )
        {
          if ( GetSecurityDescriptorSacl(v8, &bSaclPresent, &pSacl, &bSaclDefaulted) )
          {
            v18 = 0;
            KeySecurity = SetSidOnSACL(pSid, pSacl, &v15, &v18);
            if ( !KeySecurity )
              v5 = v15;
          }
          else
          {
            KeySecurity = GetLastError();
          }
        }
        ProcessHeap = GetProcessHeap();
        HeapFree(ProcessHeap, 0, v8);
      }
      else
      {
        KeySecurity = 122;
      }
    }
    v4 = (unsigned __int16)KeySecurity | 0x80070000;
    if ( KeySecurity <= 0 )
      v4 = KeySecurity;
    if ( v4 >= 0 )
    {
      if ( !InitializeSecurityDescriptor(pSecurityDescriptor, 1u)
        || !SetSecurityDescriptorSacl(pSecurityDescriptor, 1, v5, 0)
        || !SetKernelObjectSecurity(Handle, 0x10u, pSecurityDescriptor) )
      {
        LastError = GetLastError();
        v4 = (unsigned __int16)LastError | 0x80070000;
        if ( LastError <= 0 )
          v4 = LastError;
      }
      if ( v5 )
      {
        v11 = GetProcessHeap();
        HeapFree(v11, 0, v5);
      }
    }
  }
  return (unsigned int)v4;
}
