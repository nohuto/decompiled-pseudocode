/*
 * XREFs of ?EditAppContainerMask@@YAXPEAU_ACL@@@Z @ 0x18003210C
 * Callers:
 *     ?DetermineLowRightsKeySecurityDescriptor@@YAJPEAUHKEY__@@PEAPEAX@Z @ 0x180032200 (-DetermineLowRightsKeySecurityDescriptor@@YAJPEAUHKEY__@@PEAPEAX@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1800343C0 (__security_check_cookie.c)
 */

void __fastcall EditAppContainerMask(PACL pAcl)
{
  bool v2; // cf
  DWORD i; // ebx
  LPVOID pAce; // [rsp+60h] [rbp-20h] BYREF
  PSID pSid1; // [rsp+68h] [rbp-18h] BYREF
  _SID_IDENTIFIER_AUTHORITY pIdentifierAuthority; // [rsp+70h] [rbp-10h] BYREF

  *(_WORD *)&pIdentifierAuthority.Value[4] = 3840;
  *(_DWORD *)pIdentifierAuthority.Value = 0;
  if ( AllocateAndInitializeSid(&pIdentifierAuthority, 2u, 3u, 0x1000u, 0, 0, 0, 0, 0, 0, &pSid1) )
  {
    v2 = pAcl->AceCount != 0;
    for ( i = 0; v2; v2 = i < pAcl->AceCount )
    {
      pAce = 0LL;
      if ( !GetAce(pAcl, i, &pAce) )
        break;
      if ( EqualSid(pSid1, (char *)pAce + 8) && !*(_BYTE *)pAce )
      {
        *((_BYTE *)pAce + 1) = 2;
        *((_DWORD *)pAce + 1) = 131099;
        return;
      }
      ++i;
    }
  }
}
