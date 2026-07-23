/*
 * XREFs of NtFilterToken @ 0x1406207D0
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x14003DFA0 (ObfDereferenceObject.c)
 *     SepAppendAceToTokenObjectAcl @ 0x1405C72C0 (SepAppendAceToTokenObjectAcl.c)
 *     ObInsertObjectEx @ 0x1405D9D60 (ObInsertObjectEx.c)
 *     ObReferenceObjectByHandle @ 0x1405FB4B0 (ObReferenceObjectByHandle.c)
 *     SeReleaseLuidAndAttributesArray @ 0x14061DCF4 (SeReleaseLuidAndAttributesArray.c)
 *     SeCaptureSidAndAttributesArray @ 0x14061DF40 (SeCaptureSidAndAttributesArray.c)
 *     SepFilterToken @ 0x14061E840 (SepFilterToken.c)
 *     SeCaptureLuidAndAttributesArray @ 0x14067A0FC (SeCaptureLuidAndAttributesArray.c)
 *     ExRaiseDatatypeMisalignment @ 0x140913920 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __stdcall NtFilterToken(
        HANDLE ExistingTokenHandle,
        ULONG Flags,
        PTOKEN_GROUPS SidsToDisable,
        PTOKEN_PRIVILEGES PrivilegesToDelete,
        PTOKEN_GROUPS RestrictedSids,
        PHANDLE NewTokenHandle)
{
  char PreviousMode; // si
  __int64 v8; // rcx
  ULONG v9; // ecx
  NTSTATUS inserted; // edi
  ULONG i; // edx
  PVOID v12; // r14
  int Object; // [rsp+20h] [rbp-C8h]
  int HandleInformation; // [rsp+28h] [rbp-C0h]
  int v16; // [rsp+30h] [rbp-B8h]
  ULONG GroupCount; // [rsp+68h] [rbp-80h]
  ULONG v18; // [rsp+6Ch] [rbp-7Ch]
  UINT uAddend[2]; // [rsp+70h] [rbp-78h] BYREF
  __int64 v20; // [rsp+78h] [rbp-70h] BYREF
  ULONG v21; // [rsp+80h] [rbp-68h]
  __int64 v22; // [rsp+84h] [rbp-64h] BYREF
  __int64 v23; // [rsp+90h] [rbp-58h] BYREF
  __int64 v24; // [rsp+98h] [rbp-50h] BYREF
  struct _OBJECT_HANDLE_INFORMATION v25; // [rsp+A0h] [rbp-48h] BYREF
  PVOID v26; // [rsp+A8h] [rbp-40h] BYREF
  PVOID v27; // [rsp+B0h] [rbp-38h] BYREF
  __int64 v28; // [rsp+B8h] [rbp-30h] BYREF

  v18 = 0;
  v20 = 0LL;
  uAddend[0] = 0;
  GroupCount = 0;
  v23 = 0LL;
  v22 = 0LL;
  uAddend[1] = 0;
  v24 = 0LL;
  v28 = 0LL;
  v25 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v8 = 0x7FFFFFFF0000LL;
  if ( (unsigned __int64)NewTokenHandle < 0x7FFFFFFF0000LL )
    v8 = (__int64)NewTokenHandle;
  *(_QWORD *)v8 = *(_QWORD *)v8;
  if ( SidsToDisable )
  {
    if ( ((unsigned __int8)SidsToDisable & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    GroupCount = SidsToDisable->GroupCount;
    v9 = 0;
    v21 = 0;
    while ( v9 < GroupCount )
    {
      *(&SidsToDisable->GroupCount + 4 * ++v9) = 0;
      v21 = v9;
    }
    inserted = SeCaptureSidAndAttributesArray(
                 (char *)SidsToDisable->Groups,
                 GroupCount,
                 PreviousMode,
                 0LL,
                 0,
                 HandleInformation,
                 v16,
                 (PVOID *)&v23,
                 (unsigned int *)&v22);
  }
  else
  {
    inserted = 0;
  }
  if ( inserted >= 0 )
  {
    if ( PrivilegesToDelete )
    {
      if ( ((unsigned __int8)PrivilegesToDelete & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      uAddend[1] = PrivilegesToDelete->PrivilegeCount;
      inserted = SeCaptureLuidAndAttributesArray(
                   PrivilegesToDelete->Privileges,
                   Object,
                   HandleInformation,
                   v16,
                   (__int64)&v24,
                   (__int64)&v22 + 4);
    }
    if ( inserted >= 0 && RestrictedSids )
    {
      if ( ((unsigned __int8)RestrictedSids & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v18 = RestrictedSids->GroupCount;
      inserted = SeCaptureSidAndAttributesArray(
                   (char *)RestrictedSids->Groups,
                   RestrictedSids->GroupCount,
                   PreviousMode,
                   0LL,
                   0,
                   HandleInformation,
                   v16,
                   (PVOID *)&v20,
                   uAddend);
    }
  }
  if ( inserted >= 0 )
  {
    for ( i = 0; i < v18; ++i )
    {
      if ( *(_DWORD *)(v20 + 16LL * i + 8) )
      {
        inserted = -1073741811;
        goto LABEL_32;
      }
    }
    inserted = ObReferenceObjectByHandle(
                 ExistingTokenHandle,
                 2u,
                 (POBJECT_TYPE)SeTokenObjectType,
                 PreviousMode,
                 &v27,
                 &v25);
    if ( inserted >= 0 )
    {
      v26 = 0LL;
      inserted = SepFilterToken(
                   (__int64)v27,
                   PreviousMode,
                   Flags,
                   GroupCount,
                   v23,
                   uAddend[1],
                   v24,
                   v18,
                   (PSID *)v20,
                   uAddend[0],
                   (char **)&v26);
      if ( inserted >= 0 )
      {
        v12 = v26;
        inserted = ObInsertObjectEx(v26, 0LL, v25.GrantedAccess, 1, 0, 0LL, &v28);
        if ( inserted >= 0 )
        {
          SepAppendAceToTokenObjectAcl((__int64)v12, 8u, SeAliasAdminsSid);
          ObfDereferenceObject(v12);
        }
      }
      ObfDereferenceObject(v27);
      if ( inserted >= 0 )
        *NewTokenHandle = (HANDLE)v28;
    }
  }
LABEL_32:
  if ( v23 )
    SeReleaseLuidAndAttributesArray((void *)v23, PreviousMode);
  if ( v24 )
    SeReleaseLuidAndAttributesArray((void *)v24, PreviousMode);
  if ( v20 )
    SeReleaseLuidAndAttributesArray((void *)v20, PreviousMode);
  return inserted;
}
