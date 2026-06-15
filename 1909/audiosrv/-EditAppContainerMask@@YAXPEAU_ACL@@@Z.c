/*
 * XREFs of ?EditAppContainerMask@@YAXPEAU_ACL@@@Z @ 0x18002D890
 * Callers:
 *     ?DetermineLowRightsKeySecurityDescriptor@@YAJPEAUHKEY__@@PEAPEAX@Z @ 0x18003019C (-DetermineLowRightsKeySecurityDescriptor@@YAJPEAUHKEY__@@PEAPEAX@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x180064BC0 (__security_check_cookie.c)
 */

void __fastcall EditAppContainerMask(PACL pAcl)
{
  DWORD v2; // ebx
  LPVOID pAce; // [rsp+20h] [rbp-20h] BYREF
  __int16 pSid1; // [rsp+28h] [rbp-18h] BYREF
  int v5; // [rsp+2Ah] [rbp-16h]
  __int16 v6; // [rsp+2Eh] [rbp-12h]
  int v7; // [rsp+30h] [rbp-10h]
  int i; // [rsp+34h] [rbp-Ch]

  WORD2(pAce) = 3840;
  v2 = 0;
  v5 = 0;
  v6 = 3840;
  LODWORD(pAce) = 0;
  pSid1 = 513;
  v7 = 3;
  for ( i = 4096; v2 < pAcl->AceCount; ++v2 )
  {
    pAce = 0LL;
    if ( !GetAce(pAcl, v2, &pAce) )
      break;
    if ( EqualSid(&pSid1, (char *)pAce + 8) && !*(_BYTE *)pAce )
    {
      *((_BYTE *)pAce + 1) = 2;
      *((_DWORD *)pAce + 1) = 131099;
      return;
    }
  }
}
