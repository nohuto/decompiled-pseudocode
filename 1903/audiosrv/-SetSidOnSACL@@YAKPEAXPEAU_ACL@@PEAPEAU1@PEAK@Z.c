/*
 * XREFs of ?SetSidOnSACL@@YAKPEAXPEAU_ACL@@PEAPEAU1@PEAK@Z @ 0x180041A5C
 * Callers:
 *     ?SetRegistryKeyIntegrityLevel@@YAJPEAUHKEY__@@PEAX@Z @ 0x1800418C8 (-SetRegistryKeyIntegrityLevel@@YAJPEAUHKEY__@@PEAX@Z.c)
 *     ?AddSidToSACL@@YAKPEAUHKEY__@@PEAXPEAPEAU_ACL@@PEAK@Z @ 0x1800DD658 (-AddSidToSACL@@YAKPEAUHKEY__@@PEAXPEAPEAU_ACL@@PEAK@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180019940 (--3@YAXPEAX@Z.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18002A780 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     __security_check_cookie @ 0x180063BD0 (__security_check_cookie.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180064330 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall SetSidOnSACL(PSID pSid, PACL pAcl, struct _ACL **a3, unsigned int *a4)
{
  struct _ACL *v4; // rdi
  DWORD v5; // r14d
  signed int LastError; // ebx
  int v11; // edi
  struct _ACL *v12; // rax
  DWORD v13; // esi
  signed int v15; // eax
  unsigned int v16; // r8d
  LPVOID pAceList; // [rsp+30h] [rbp-38h] BYREF
  LPVOID pAce; // [rsp+38h] [rbp-30h] BYREF
  DWORD pAclInformation; // [rsp+40h] [rbp-28h] BYREF
  int v20; // [rsp+44h] [rbp-24h]
  int v21; // [rsp+48h] [rbp-20h]

  v4 = 0LL;
  v5 = 0;
  pAceList = 0LL;
  pAclInformation = 0;
  v20 = 0;
  v21 = 0;
  LastError = 87;
  if ( a3 && a4 && pSid )
  {
    *a3 = 0LL;
    LastError = 8;
    *a4 = 0;
    v11 = 8;
    if ( pAcl && GetAclInformation(pAcl, &pAclInformation, 0xCu, AclSizeInformation) )
      v11 = v20;
    v5 = v11 + GetLengthSid(pSid) + 8;
    if ( v5 > 0xFFFF )
      v5 = 0xFFFF;
    v12 = (struct _ACL *)operator new[](v5, (const struct std::nothrow_t *)&std::nothrow);
    v4 = v12;
    if ( v12 )
    {
      if ( !InitializeAcl(v12, v5, 2u) || !AddAccessAllowedAceEx(v4, 2u, 3u, 1u, pSid) || !GetAce(v4, 0, &pAce) )
      {
LABEL_22:
        LastError = GetLastError();
        goto LABEL_18;
      }
      LastError = 0;
      *(_BYTE *)pAce = 17;
      if ( pAcl )
      {
        v13 = 0;
        if ( pAclInformation )
        {
          while ( !GetAce(pAcl, v13, &pAceList)
               || *(_BYTE *)pAceList == 17
               || AddAce(v4, 2u, 0xFFFFFFFF, pAceList, *((unsigned __int16 *)pAceList + 1)) )
          {
            if ( ++v13 >= pAclInformation )
              goto LABEL_18;
          }
          goto LABEL_22;
        }
      }
    }
  }
LABEL_18:
  if ( LastError )
  {
    operator delete(v4);
    v15 = LastError;
    if ( LastError > 0 )
      v15 = (unsigned __int16)LastError | 0x80070000;
    if ( v15 < 0 )
    {
      v16 = LastError;
      if ( LastError > 0 )
        v16 = (unsigned __int16)LastError | 0x80070000;
      AudSrvTraceLoggingErrorHelper("SetSidOnSACL", 279, v16);
    }
  }
  else
  {
    *a3 = v4;
    *a4 = v5;
  }
  return (unsigned int)LastError;
}
