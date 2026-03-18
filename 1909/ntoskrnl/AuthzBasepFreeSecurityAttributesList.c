/*
 * XREFs of AuthzBasepFreeSecurityAttributesList @ 0x1400799A0
 * Callers:
 *     SepFreeResourceInfo @ 0x14000C228 (SepFreeResourceInfo.c)
 *     AuthzBasepSetSecurityAttributesToken @ 0x140084C80 (AuthzBasepSetSecurityAttributesToken.c)
 *     AuthzBasepInitializeResourceClaimsFromSacl @ 0x140085530 (AuthzBasepInitializeResourceClaimsFromSacl.c)
 *     SepCleanupMarkedForDeletionEntries @ 0x140086058 (SepCleanupMarkedForDeletionEntries.c)
 *     SeAccessCheckWithHintWithAdminlessChecks @ 0x1400A8610 (SeAccessCheckWithHintWithAdminlessChecks.c)
 *     SepInternalQuerySecurityAttributesTokenEx @ 0x1400CF360 (SepInternalQuerySecurityAttributesTokenEx.c)
 *     AuthzBasepEvaluateAceCondition @ 0x1400D0200 (AuthzBasepEvaluateAceCondition.c)
 *     SepVerifyDesktopAppxPackageName @ 0x14031CE64 (SepVerifyDesktopAppxPackageName.c)
 *     SepTokenDeleteMethod @ 0x14060C660 (SepTokenDeleteMethod.c)
 *     SepCreateClaimAttributes @ 0x14061D190 (SepCreateClaimAttributes.c)
 *     AuthzBasepInitializeSystemSecurityAttributes @ 0x14077896C (AuthzBasepInitializeSystemSecurityAttributes.c)
 *     SeExamineSacl @ 0x1408DE870 (SeExamineSacl.c)
 *     SepExamineSaclEx @ 0x1408DF1A0 (SepExamineSaclEx.c)
 *     SepDeleteClaimAttributes @ 0x1408E1EB8 (SepDeleteClaimAttributes.c)
 *     SepDuplicateClaimAttributes @ 0x1408E1F40 (SepDuplicateClaimAttributes.c)
 * Callees:
 *     AuthzBasepRemoveSecurityAttributeValueFromLists @ 0x140135F60 (AuthzBasepRemoveSecurityAttributeValueFromLists.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

void __fastcall AuthzBasepFreeSecurityAttributesList(_DWORD *a1)
{
  void **v2; // r15
  void ***v3; // rbx
  void **v4; // rax
  void **v5; // rcx
  void **v6; // rdi
  _DWORD *v7; // rcx
  int v8; // eax
  _QWORD *v9; // rax
  void **v10; // rdx
  char *v11; // r14
  _DWORD **v12; // rdx
  void **v13; // r8
  int v14; // eax
  char *v15; // rbp

  v2 = (void **)(a1 + 2);
  while ( 1 )
  {
    v3 = (void ***)*v2;
    if ( *v2 == v2 )
      break;
    if ( ((_DWORD)v3[7] & 1) != 0 )
    {
      v4 = *v3;
      if ( (*v3)[1] != v3 || (v5 = v3[1], *v5 != v3) )
LABEL_20:
        __fastfail(3u);
      *v5 = v4;
      v4[1] = v5;
      *((_DWORD *)v3 + 14) &= ~1u;
      if ( a1 )
        --*a1;
    }
    v6 = (void **)(v3 + 9);
    while ( 1 )
    {
      v7 = *v6;
      if ( *v6 == v6 )
        break;
      v8 = v7[8];
      if ( (v8 & 2) != 0 )
      {
        v12 = (_DWORD **)*((_QWORD *)v7 + 2);
        if ( v12[1] != v7 + 4 )
          goto LABEL_20;
        v13 = (void **)*((_QWORD *)v7 + 3);
        if ( *v13 != v7 + 4 )
          goto LABEL_20;
        *v13 = v12;
        v12[1] = v13;
        v7[8] &= ~2u;
        --*((_DWORD *)v3 + 22);
        v8 = v7[8];
      }
      if ( (v8 & 1) != 0 )
      {
        v9 = *(_QWORD **)v7;
        if ( *(_DWORD **)(*(_QWORD *)v7 + 8LL) != v7 )
          goto LABEL_20;
        v10 = (void **)*((_QWORD *)v7 + 1);
        if ( *v10 != v7 )
          goto LABEL_20;
        *v10 = v9;
        v9[1] = v10;
        v7[8] &= ~1u;
        --*((_DWORD *)v3 + 15);
        if ( (v7[8] & 4) != 0 )
          --*((_DWORD *)v3 + 16);
      }
      ExFreePoolWithTag(v7, 0);
    }
    v11 = (char *)v3[12];
    while ( v11 != (char *)(v3 + 12) )
    {
      v14 = *((_DWORD *)v11 + 4);
      v15 = v11 - 16;
      v11 = *(char **)v11;
      if ( (v14 & 1) == 0 )
      {
        AuthzBasepRemoveSecurityAttributeValueFromLists(v3, v15, 0LL);
        ExFreePoolWithTag(v15, 0);
      }
    }
    ExFreePoolWithTag(v3, 0);
  }
}
