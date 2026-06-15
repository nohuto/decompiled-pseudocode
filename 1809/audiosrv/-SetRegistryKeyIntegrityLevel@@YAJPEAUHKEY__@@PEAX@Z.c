/*
 * XREFs of ?SetRegistryKeyIntegrityLevel@@YAJPEAUHKEY__@@PEAX@Z @ 0x180045F14
 * Callers:
 *     ?CreateLowRightsRegistryKey@@YAJPEAUHKEY__@@PEBGKPEAPEAU1@@Z @ 0x180007220 (-CreateLowRightsRegistryKey@@YAJPEAUHKEY__@@PEBGKPEAPEAU1@@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800095D0 (--3@YAXPEAX@Z.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180009C58 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?AddSidToSACL@@YAKPEAUHKEY__@@PEAXPEAPEAU_ACL@@PEAK@Z @ 0x180045FE8 (-AddSidToSACL@@YAKPEAUHKEY__@@PEAXPEAPEAU_ACL@@PEAK@Z.c)
 */

__int64 __fastcall SetRegistryKeyIntegrityLevel(HKEY hKey, void *a2)
{
  signed int v3; // ebx
  int v4; // eax
  signed int LastError; // eax
  _BYTE pSecurityDescriptor[56]; // [rsp+20h] [rbp-38h] BYREF
  unsigned int v8; // [rsp+68h] [rbp+10h] BYREF
  PACL pSacl; // [rsp+70h] [rbp+18h] BYREF

  v3 = -2147024809;
  if ( !a2 )
    goto LABEL_14;
  pSacl = 0LL;
  v8 = 0;
  v4 = AddSidToSACL(hKey, a2, &pSacl, &v8);
  v3 = v4;
  if ( v4 > 0 )
    v3 = (unsigned __int16)v4 | 0x80070000;
  if ( v3 < 0 )
    goto LABEL_14;
  if ( !InitializeSecurityDescriptor(pSecurityDescriptor, 1u)
    || !SetSecurityDescriptorSacl(pSecurityDescriptor, 1, pSacl, 0)
    || RegSetKeySecurity(hKey, 0x10u, pSecurityDescriptor) )
  {
    LastError = GetLastError();
    v3 = LastError;
    if ( LastError > 0 )
      v3 = (unsigned __int16)LastError | 0x80070000;
  }
  if ( pSacl )
    operator delete(pSacl);
  if ( v3 < 0 )
LABEL_14:
    AudSrvTraceLoggingErrorHelper("SetRegistryKeyIntegrityLevel", 423, v3);
  return (unsigned int)v3;
}
