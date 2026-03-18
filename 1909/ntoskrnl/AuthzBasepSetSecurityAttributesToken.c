/*
 * XREFs of AuthzBasepSetSecurityAttributesToken @ 0x140084C80
 * Callers:
 *     SepDesktopAppxSubProcessToken @ 0x140084B54 (SepDesktopAppxSubProcessToken.c)
 *     AuthzBasepInitializeResourceClaimsFromSacl @ 0x140085530 (AuthzBasepInitializeResourceClaimsFromSacl.c)
 *     SepInternalSetSecurityAttributesToken @ 0x14031C254 (SepInternalSetSecurityAttributesToken.c)
 *     SepDesktopAppModifyTokenBreakaway @ 0x14031C9FC (SepDesktopAppModifyTokenBreakaway.c)
 *     SepVerifyDesktopAppxPackageName @ 0x14031CE64 (SepVerifyDesktopAppxPackageName.c)
 *     SepSetTokenAllApplicationPackagesPolicy @ 0x14031DE78 (SepSetTokenAllApplicationPackagesPolicy.c)
 *     SeSetSecurityAttributesTokenEx @ 0x14031DFB0 (SeSetSecurityAttributesTokenEx.c)
 *     SepSetSingletonEntry @ 0x14031E2E4 (SepSetSingletonEntry.c)
 *     SepSetProcessUniqueAttribute @ 0x14061AEA4 (SepSetProcessUniqueAttribute.c)
 *     SepCreateClaimAttributes @ 0x14061D190 (SepCreateClaimAttributes.c)
 *     NtSetInformationToken @ 0x140678810 (NtSetInformationToken.c)
 *     AuthzBasepInitializeSystemSecurityAttributes @ 0x14077896C (AuthzBasepInitializeSystemSecurityAttributes.c)
 *     SepAddTokenOriginClaim @ 0x1408DFF80 (SepAddTokenOriginClaim.c)
 * Callees:
 *     AuthzBasepFreeSecurityAttributesList @ 0x1400799A0 (AuthzBasepFreeSecurityAttributesList.c)
 *     AuthzBasepFinaliseSecurityAttributesList @ 0x140084D64 (AuthzBasepFinaliseSecurityAttributesList.c)
 *     AuthzBasepValidateSecurityAttributes @ 0x140084DD0 (AuthzBasepValidateSecurityAttributes.c)
 *     AuthzBasepReplaceSecurityAttribute @ 0x140084FD4 (AuthzBasepReplaceSecurityAttribute.c)
 *     AuthzBasepAddSecurityAttribute @ 0x140085044 (AuthzBasepAddSecurityAttribute.c)
 *     AuthzBasepDeleteSecurityAttribute @ 0x140085684 (AuthzBasepDeleteSecurityAttribute.c)
 *     AuthzBasepDeleteAllSecurityAttributes @ 0x140345DC4 (AuthzBasepDeleteAllSecurityAttributes.c)
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
  AuthzBasepFinaliseSecurityAttributesList(a1, v7 >= 0);
  return (unsigned int)v7;
}
