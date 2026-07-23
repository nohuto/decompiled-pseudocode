/*
 * XREFs of SepTokenDeleteMethod @ 0x1405DFE70
 * Callers:
 *     <none>
 * Callees:
 *     ExDeleteResourceLite @ 0x140020F50 (ExDeleteResourceLite.c)
 *     AuthzBasepFreeSecurityAttributesList @ 0x140021130 (AuthzBasepFreeSecurityAttributesList.c)
 *     SepDereferenceLuidToIndexEntry @ 0x140021220 (SepDereferenceLuidToIndexEntry.c)
 *     SepFreeTokenCapabilities @ 0x140023058 (SepFreeTokenCapabilities.c)
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     SepDereferenceLowBoxNumberEntry @ 0x1405E0038 (SepDereferenceLowBoxNumberEntry.c)
 *     SepDereferenceCachedHandlesEntry @ 0x1405E0178 (SepDereferenceCachedHandlesEntry.c)
 *     SepDeReferenceLogonSession @ 0x1406B4880 (SepDeReferenceLogonSession.c)
 *     SepModifyTokenPolicyCounter @ 0x14089D16C (SepModifyTokenPolicyCounter.c)
 *     SepDeleteTokenUserAndGroups @ 0x1408A32AC (SepDeleteTokenUserAndGroups.c)
 *     SepRemoveTokenLogonSession @ 0x1408A3D60 (SepRemoveTokenLogonSession.c)
 *     SepDeleteClaimAttributes @ 0x1408A50F8 (SepDeleteClaimAttributes.c)
 */

void __fastcall SepTokenDeleteMethod(__int64 a1)
{
  void *v2; // rcx
  _QWORD *v3; // rdx
  signed __int64 v4; // rax
  signed __int64 v5; // rcx
  bool v6; // zf
  signed __int64 v7; // rtt
  void *v8; // rcx
  void *v9; // rcx
  __int64 v10; // rcx
  void *v11; // rcx
  void *v12; // rcx
  struct _ERESOURCE *v13; // rcx
  void *v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rdx
  void *v17; // rcx
  __int64 v18; // [rsp+30h] [rbp+8h] BYREF

  if ( SeTokenLeakTracking )
  {
    SepRemoveTokenLogonSession(a1);
    v17 = *(void **)(a1 + 1144);
    if ( v17 )
      ExFreePoolWithTag(v17, 0);
  }
  v2 = *(void **)(a1 + 1096);
  if ( v2 )
  {
    if ( (*(_DWORD *)(a1 + 200) & 0x8000) != 0 )
      SepDeleteClaimAttributes(v2);
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
    v3 = *(_QWORD **)(a1 + 216);
    _m_prefetchw(v3 + 3);
    v4 = v3[3];
    v5 = v4 - 1;
    v6 = v4 == 1;
    if ( v4 - 1 <= 0 )
    {
LABEL_32:
      if ( !v6 )
        __fastfail(0xEu);
      v15 = v3[1];
      v16 = v3[20];
      v18 = v15;
      SepDeReferenceLogonSession(&v18, v16);
    }
    else
    {
      while ( 1 )
      {
        v7 = v4;
        v4 = _InterlockedCompareExchange64(v3 + 3, v5, v4);
        if ( v7 == v4 )
          break;
        v5 = v4 - 1;
        v6 = v4 == 1;
        if ( v4 - 1 <= 0 )
          goto LABEL_32;
      }
    }
  }
  v8 = *(void **)(a1 + 1160);
  if ( v8 )
    ObfDereferenceObject(v8);
  v9 = *(void **)(a1 + 1112);
  if ( v9 )
    ObfDereferenceObject(v9);
  if ( *(_BYTE *)(a1 + 119) == 2 )
    SepModifyTokenPolicyCounter(a1 + 88, 0LL);
  v10 = *(_QWORD *)(a1 + 1136);
  if ( v10 )
    SepDereferenceLuidToIndexEntry(v10);
  AuthzBasepFreeSecurityAttributesList(*(_DWORD **)(a1 + 776));
  ExFreePoolWithTag(*(PVOID *)(a1 + 776), 0);
  v11 = *(void **)(a1 + 176);
  if ( v11 )
    ExFreePoolWithTag(v11, 0);
  if ( *(_QWORD *)(a1 + 792) )
    SepFreeTokenCapabilities(a1);
  v12 = *(void **)(a1 + 784);
  if ( v12 )
    ExFreePoolWithTag(v12, 0);
  v13 = *(struct _ERESOURCE **)(a1 + 48);
  if ( v13 )
  {
    ExDeleteResourceLite(v13);
    ExFreePoolWithTag(*(PVOID *)(a1 + 48), 0);
  }
  v14 = *(void **)(a1 + 1104);
  if ( v14 )
    ExFreePoolWithTag(v14, 0);
}
