/*
 * XREFs of NtFilterToken @ 0x1406C7E00
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     SepFinalizeTokenAcls @ 0x140583ABC (SepFinalizeTokenAcls.c)
 *     SeReleaseLuidAndAttributesArray @ 0x1405BDE84 (SeReleaseLuidAndAttributesArray.c)
 *     SeCaptureSidAndAttributesArray @ 0x1405BE0D0 (SeCaptureSidAndAttributesArray.c)
 *     ObReferenceObjectByHandle @ 0x1405E9350 (ObReferenceObjectByHandle.c)
 *     SeCaptureLuidAndAttributesArray @ 0x14060B1F8 (SeCaptureLuidAndAttributesArray.c)
 *     ObInsertObjectEx @ 0x14062E0A0 (ObInsertObjectEx.c)
 *     SepFilterToken @ 0x140658E8C (SepFilterToken.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408D7880 (ExRaiseDatatypeMisalignment.c)
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
  _QWORD *v12; // r14
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
  PVOID v25; // [rsp+A0h] [rbp-48h] BYREF
  PVOID v26; // [rsp+A8h] [rbp-40h] BYREF
  __int64 v27; // [rsp+B0h] [rbp-38h] BYREF
  struct _OBJECT_HANDLE_INFORMATION v28; // [rsp+B8h] [rbp-30h] BYREF

  v18 = 0;
  v20 = 0LL;
  uAddend[0] = 0;
  GroupCount = 0;
  v23 = 0LL;
  v22 = 0LL;
  uAddend[1] = 0;
  v24 = 0LL;
  v27 = 0LL;
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
                   (char *)PrivilegesToDelete->Privileges,
                   uAddend[1],
                   PreviousMode,
                   (__int64)PrivilegesToDelete,
                   Object,
                   HandleInformation,
                   v16,
                   &v24,
                   (_DWORD *)&v22 + 1);
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
                 &v26,
                 &v28);
    if ( inserted >= 0 )
    {
      v25 = 0LL;
      inserted = SepFilterToken(
                   (__int64)v26,
                   PreviousMode,
                   Flags,
                   GroupCount,
                   v23,
                   uAddend[1],
                   v24,
                   v18,
                   (PSID *)v20,
                   uAddend[0],
                   &v25);
      if ( inserted >= 0 )
      {
        v12 = v25;
        inserted = ObInsertObjectEx(v25, 0LL, v28.GrantedAccess, 1, 0, 0LL, (unsigned __int64 *)&v27);
        if ( inserted >= 0 )
        {
          SepFinalizeTokenAcls(v12);
          ObfDereferenceObject(v12);
        }
      }
      ObfDereferenceObject(v26);
      if ( inserted >= 0 )
        *NewTokenHandle = (HANDLE)v27;
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
