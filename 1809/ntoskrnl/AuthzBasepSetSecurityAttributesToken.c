/*
 * XREFs of AuthzBasepSetSecurityAttributesToken @ 0x1400D8A74
 * Callers:
 *     SepDesktopAppxSubProcessToken @ 0x1400DA000 (SepDesktopAppxSubProcessToken.c)
 *     AuthzBasepInitializeResourceClaimsFromSacl @ 0x1401214DC (AuthzBasepInitializeResourceClaimsFromSacl.c)
 *     SepInternalSetSecurityAttributesToken @ 0x1402FE4F4 (SepInternalSetSecurityAttributesToken.c)
 *     SepDesktopAppModifyTokenBreakaway @ 0x1402FEC78 (SepDesktopAppModifyTokenBreakaway.c)
 *     SepVerifyDesktopAppxPackageName @ 0x1402FF0CC (SepVerifyDesktopAppxPackageName.c)
 *     SepSetTokenAllApplicationPackagesPolicy @ 0x1403000F4 (SepSetTokenAllApplicationPackagesPolicy.c)
 *     SeSetSecurityAttributesTokenEx @ 0x140300230 (SeSetSecurityAttributesTokenEx.c)
 *     SepSetSingletonEntry @ 0x140300520 (SepSetSingletonEntry.c)
 *     SepCreateClaimAttributes @ 0x1405BD654 (SepCreateClaimAttributes.c)
 *     NtSetInformationToken @ 0x1405BDAA0 (NtSetInformationToken.c)
 *     SepSetProcessUniqueAttribute @ 0x14064EEB4 (SepSetProcessUniqueAttribute.c)
 *     AuthzBasepInitializeSystemSecurityAttributes @ 0x140736978 (AuthzBasepInitializeSystemSecurityAttributes.c)
 *     SepAddTokenOriginClaim @ 0x1408A1D88 (SepAddTokenOriginClaim.c)
 * Callees:
 *     AuthzBasepFreeSecurityAttributesList @ 0x140021130 (AuthzBasepFreeSecurityAttributesList.c)
 *     AuthzBasepFinaliseSecurityAttributesList @ 0x1400CC8F4 (AuthzBasepFinaliseSecurityAttributesList.c)
 *     AuthzBasepValidateSecurityAttributes @ 0x1400D8B58 (AuthzBasepValidateSecurityAttributes.c)
 *     AuthzBasepReplaceSecurityAttribute @ 0x1400D8D5C (AuthzBasepReplaceSecurityAttribute.c)
 *     AuthzBasepAddSecurityAttribute @ 0x1400D8DCC (AuthzBasepAddSecurityAttribute.c)
 *     AuthzBasepDeleteSecurityAttribute @ 0x1400D91F8 (AuthzBasepDeleteSecurityAttribute.c)
 *     AuthzBasepDeleteAllSecurityAttributes @ 0x1403249E0 (AuthzBasepDeleteAllSecurityAttributes.c)
 */

__int64 __fastcall AuthzBasepSetSecurityAttributesToken(_DWORD *a1, int *a2, __int64 a3)
{
  int v3; // r14d
  int v7; // ebx
  __int64 v8; // rbp
  __int64 v9; // rdx
  int v10; // ecx
  int v11; // ecx
  int v12; // ecx
  int v13; // eax

  v3 = *a2;
  if ( a3 )
  {
    v7 = AuthzBasepValidateSecurityAttributes(a3);
    if ( v7 >= 0 )
    {
      if ( v3 == 1 )
        AuthzBasepDeleteAllSecurityAttributes(a1);
      v8 = 0LL;
      if ( *(_DWORD *)(a3 + 4) )
      {
        while ( 1 )
        {
          v9 = *(_QWORD *)(a3 + 8) + 40 * v8;
          if ( v3 == 1 )
            goto LABEL_11;
          v10 = a2[v8];
          if ( v10 )
            break;
          v7 = 0;
LABEL_13:
          if ( v7 >= 0 )
          {
            v8 = (unsigned int)(v8 + 1);
            if ( (unsigned int)v8 < *(_DWORD *)(a3 + 4) )
              continue;
          }
          goto LABEL_15;
        }
        v11 = v10 - 2;
        if ( v11 )
        {
          v12 = v11 - 1;
          if ( v12 )
          {
            if ( v12 != 1 )
              goto LABEL_19;
LABEL_11:
            v13 = AuthzBasepReplaceSecurityAttribute(a1, v9);
          }
          else
          {
            v13 = AuthzBasepDeleteSecurityAttribute(a1, v9);
          }
        }
        else
        {
          v13 = AuthzBasepAddSecurityAttribute(a1, v9);
        }
        v7 = v13;
        goto LABEL_13;
      }
    }
  }
  else if ( v3 == 1 )
  {
    AuthzBasepFreeSecurityAttributesList(a1);
    v7 = 0;
  }
  else
  {
LABEL_19:
    v7 = -1073741811;
  }
LABEL_15:
  AuthzBasepFinaliseSecurityAttributesList((__int64)a1, v7 >= 0);
  return (unsigned int)v7;
}
