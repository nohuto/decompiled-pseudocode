/*
 * XREFs of SepTokenDeleteMethod @ 0x14060AB50
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x14003E260 (ObfDereferenceObject.c)
 *     ExDeleteResourceLite @ 0x140079400 (ExDeleteResourceLite.c)
 *     AuthzBasepFreeSecurityAttributesList @ 0x1400795E0 (AuthzBasepFreeSecurityAttributesList.c)
 *     SepDeReferenceLogonSessionDirect @ 0x1400796D4 (SepDeReferenceLogonSessionDirect.c)
 *     SepFreeTokenCapabilities @ 0x140087E1C (SepFreeTokenCapabilities.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     SepRefDerefLuidToIndexEntryIfNecessary @ 0x14060ACC0 (SepRefDerefLuidToIndexEntryIfNecessary.c)
 *     SepDereferenceCachedHandlesEntry @ 0x14061F644 (SepDereferenceCachedHandlesEntry.c)
 *     SepDereferenceLowBoxNumberEntry @ 0x1406C73E4 (SepDereferenceLowBoxNumberEntry.c)
 *     SepModifyTokenPolicyCounter @ 0x1408DA964 (SepModifyTokenPolicyCounter.c)
 *     SepDeleteTokenUserAndGroups @ 0x1408E0968 (SepDeleteTokenUserAndGroups.c)
 *     SepRemoveTokenLogonSession @ 0x1408E140C (SepRemoveTokenLogonSession.c)
 *     SepDeleteClaimAttributes @ 0x1408E25B8 (SepDeleteClaimAttributes.c)
 */

void __fastcall SepTokenDeleteMethod(__int64 a1, __int64 a2)
{
  void *v3; // rcx
  void *v4; // rcx
  void *v5; // rcx
  void *v6; // rcx
  void *v7; // rcx
  struct _ERESOURCE *v8; // rcx
  void *v9; // rcx
  void *v10; // rcx

  if ( *(_DWORD *)((char *)&NlsMbCodePageTag + 3) )
  {
    SepRemoveTokenLogonSession(a1);
    v10 = *(void **)(a1 + 1144);
    if ( v10 )
      ExFreePoolWithTag(v10, 0);
  }
  v3 = *(void **)(a1 + 1096);
  if ( v3 )
  {
    if ( (*(_DWORD *)(a1 + 200) & 0x8000) != 0 )
      SepDeleteClaimAttributes(v3);
    *(_QWORD *)(a1 + 1096) = 0LL;
  }
  if ( SepTokenSidSharingEnabled )
    SepDeleteTokenUserAndGroups(a1);
  if ( (*(_DWORD *)(a1 + 200) & 0x20) == 0 )
  {
    if ( *(_QWORD *)(a1 + 1080) )
      SepDereferenceLowBoxNumberEntry(*(unsigned int *)(a1 + 120));
    if ( *(_QWORD *)(a1 + 1088) )
      SepDereferenceCachedHandlesEntry(*(_QWORD *)(a1 + 216));
    if ( *(_QWORD *)(a1 + 1152) )
      SepDereferenceCachedHandlesEntry(*(_QWORD *)(a1 + 216));
    SepDeReferenceLogonSessionDirect(*(_QWORD **)(a1 + 216));
  }
  v4 = *(void **)(a1 + 1160);
  if ( v4 )
    ObfDereferenceObject(v4);
  v5 = *(void **)(a1 + 1112);
  if ( v5 )
    ObfDereferenceObject(v5);
  if ( *(_BYTE *)(a1 + 118) == 2 )
    SepModifyTokenPolicyCounter(a1 + 88, 0LL);
  LOBYTE(a2) = 1;
  SepRefDerefLuidToIndexEntryIfNecessary(a1, a2);
  AuthzBasepFreeSecurityAttributesList(*(_DWORD **)(a1 + 776));
  ExFreePoolWithTag(*(PVOID *)(a1 + 776), 0);
  v6 = *(void **)(a1 + 176);
  if ( v6 )
    ExFreePoolWithTag(v6, 0);
  if ( *(_QWORD *)(a1 + 792) )
    SepFreeTokenCapabilities(a1);
  v7 = *(void **)(a1 + 784);
  if ( v7 )
    ExFreePoolWithTag(v7, 0);
  v8 = *(struct _ERESOURCE **)(a1 + 48);
  if ( v8 )
  {
    ExDeleteResourceLite(v8);
    ExFreePoolWithTag(*(PVOID *)(a1 + 48), 0);
  }
  v9 = *(void **)(a1 + 1104);
  if ( v9 )
    ExFreePoolWithTag(v9, 0);
}
