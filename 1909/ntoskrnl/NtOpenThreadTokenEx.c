/*
 * XREFs of NtOpenThreadTokenEx @ 0x1405D62D0
 * Callers:
 *     NtOpenThreadToken @ 0x1405D62B0 (NtOpenThreadToken.c)
 * Callees:
 *     ObFastDereferenceObject @ 0x14003AE70 (ObFastDereferenceObject.c)
 *     ObfDereferenceObject @ 0x14003DFA0 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x14003E070 (ObfReferenceObject.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     ObOpenObjectByPointer @ 0x1405D0890 (ObOpenObjectByPointer.c)
 *     SepSetTokenTrust @ 0x1405D5C90 (SepSetTokenTrust.c)
 *     PsReferencePrimaryToken @ 0x1405D6170 (PsReferencePrimaryToken.c)
 *     RtlCreateSecurityDescriptor @ 0x1405D6210 (RtlCreateSecurityDescriptor.c)
 *     RtlSetDaclSecurityDescriptor @ 0x1405D6250 (RtlSetDaclSecurityDescriptor.c)
 *     SepOpenTokenOfThread @ 0x1405D66B0 (SepOpenTokenOfThread.c)
 *     PsDisableImpersonation @ 0x1405D6830 (PsDisableImpersonation.c)
 *     PsRestoreImpersonation @ 0x1405D6960 (PsRestoreImpersonation.c)
 *     PsSwapImpersonationToken @ 0x1405D6AC0 (PsSwapImpersonationToken.c)
 *     SepDuplicateToken @ 0x1405D90A0 (SepDuplicateToken.c)
 *     ObInsertObject @ 0x1405D9D30 (ObInsertObject.c)
 *     SepCreateImpersonationTokenDacl @ 0x1405DCF10 (SepCreateImpersonationTokenDacl.c)
 */

NTSTATUS __stdcall NtOpenThreadTokenEx(
        HANDLE ThreadHandle,
        ACCESS_MASK DesiredAccess,
        BOOLEAN OpenAsSelf,
        ULONG HandleAttributes,
        PHANDLE TokenHandle)
{
  int v7; // edi
  int v8; // edx
  KPROCESSOR_MODE PreviousMode; // r15
  int v10; // esi
  ULONG v11; // esi
  PHANDLE v12; // r14
  __int64 v13; // rcx
  NTSTATUS result; // eax
  char v15; // r13
  struct _KPROCESS *v16; // rdi
  PACCESS_TOKEN v17; // rbx
  PVOID v18; // r12
  NTSTATUS v19; // r15d
  ACL *v20; // rdi
  PVOID v21; // rbx
  NTSTATUS inserted; // eax
  __int64 v23; // rdx
  bool v24; // [rsp+40h] [rbp-D8h]
  BOOLEAN v25; // [rsp+41h] [rbp-D7h]
  char v26; // [rsp+42h] [rbp-D6h] BYREF
  _BYTE v27[5]; // [rsp+43h] [rbp-D5h] BYREF
  PVOID Object; // [rsp+48h] [rbp-D0h] BYREF
  PVOID v29; // [rsp+50h] [rbp-C8h] BYREF
  PACL Dacl; // [rsp+58h] [rbp-C0h] BYREF
  int v31; // [rsp+60h] [rbp-B8h] BYREF
  void *v32; // [rsp+68h] [rbp-B0h]
  PVOID v33; // [rsp+70h] [rbp-A8h] BYREF
  HANDLE Handle; // [rsp+78h] [rbp-A0h] BYREF
  _SE_IMPERSONATION_STATE ImpersonationState; // [rsp+80h] [rbp-98h] BYREF
  _DWORD v36[2]; // [rsp+90h] [rbp-88h] BYREF
  __int64 v37; // [rsp+98h] [rbp-80h]
  __int64 v38; // [rsp+A0h] [rbp-78h]
  ULONG v39; // [rsp+A8h] [rbp-70h]
  int v40; // [rsp+ACh] [rbp-6Ch]
  _BYTE *v41; // [rsp+B0h] [rbp-68h]
  __int64 v42; // [rsp+B8h] [rbp-60h]
  _BYTE SecurityDescriptor[48]; // [rsp+C0h] [rbp-58h] BYREF

  v7 = (int)ThreadHandle;
  Object = 0LL;
  ImpersonationState.Token = 0LL;
  *(_QWORD *)&ImpersonationState.CopyOnOpen = 0LL;
  v25 = 0;
  Handle = 0LL;
  memset(SecurityDescriptor, 0, 0x28uLL);
  v36[1] = 0;
  v40 = 0;
  Dacl = 0LL;
  v29 = 0LL;
  v32 = 0LL;
  v24 = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v10 = 73714;
  if ( PreviousMode )
    v10 = 7666;
  v11 = HandleAttributes & v10;
  if ( PreviousMode )
  {
    v12 = TokenHandle;
    v13 = (__int64)TokenHandle;
    if ( (unsigned __int64)TokenHandle >= 0x7FFFFFFF0000LL )
      v13 = 0x7FFFFFFF0000LL;
    *(_QWORD *)v13 = *(_QWORD *)v13;
  }
  else
  {
    v12 = TokenHandle;
  }
  result = SepOpenTokenOfThread(
             v7,
             v8,
             (unsigned int)&v33,
             (unsigned int)&v29,
             (__int64)&v26,
             (__int64)v27,
             (__int64)&v31);
  if ( result >= 0 )
  {
    if ( OpenAsSelf )
      v25 = PsDisableImpersonation(KeGetCurrentThread(), &ImpersonationState);
    v15 = v26;
    if ( v26 )
    {
      if ( OpenAsSelf )
      {
        if ( ImpersonationState.Token )
        {
          v32 = (void *)*((_QWORD *)ImpersonationState.Token + 138);
          v24 = 1;
        }
      }
      else
      {
        v23 = *((_QWORD *)v29 + 240);
        if ( v23 )
          v32 = *(void **)(v23 + 1104);
        v24 = v23 != 0;
      }
      v16 = (struct _KPROCESS *)*((_QWORD *)v29 + 68);
      v17 = PsReferencePrimaryToken(v16);
      v18 = v33;
      v19 = SepCreateImpersonationTokenDacl(v33, v17, &Dacl);
      ObFastDereferenceObject((signed __int64 *)&v16[1].Affinity.Bitmap[5], (unsigned __int64)v17);
      v20 = Dacl;
      if ( v19 < 0 )
        goto LABEL_44;
      if ( Dacl )
      {
        RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
        RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, v20, 0);
      }
      v36[0] = 48;
      v37 = 0LL;
      v39 = v11;
      v38 = 0LL;
      v41 = v20 ? SecurityDescriptor : 0LL;
      v42 = 0LL;
      v19 = SepDuplicateToken((_DWORD)v18, (unsigned int)v36, v27[0], 2, v31, 0, 0, (__int64)&Object);
      if ( v19 < 0 )
      {
LABEL_44:
        v21 = Object;
        goto LABEL_27;
      }
      v21 = Object;
      if ( v24 )
        v19 = SepSetTokenTrust((__int64)Object, v32);
      if ( v19 < 0 )
        goto LABEL_27;
      ObfReferenceObject(v21);
      inserted = ObInsertObject(v21, 0LL, DesiredAccess, 0, 0LL, &Handle);
    }
    else
    {
      v18 = v33;
      inserted = ObOpenObjectByPointer(
                   v33,
                   v11,
                   0LL,
                   DesiredAccess,
                   (POBJECT_TYPE)SeTokenObjectType,
                   PreviousMode,
                   &Handle);
      v21 = Object;
      v20 = Dacl;
    }
    v19 = inserted;
LABEL_27:
    if ( v20 )
      ExFreePoolWithTag(v20, 0);
    if ( v25 )
    {
      PsRestoreImpersonation(KeGetCurrentThread(), &ImpersonationState);
      v21 = Object;
      v15 = v26;
      v18 = v33;
    }
    if ( v19 >= 0 && v15 )
      PsSwapImpersonationToken(v29, v18, v21);
    ObfDereferenceObject(v18);
    if ( v21 )
      ObfDereferenceObject(v21);
    ObfDereferenceObject(v29);
    if ( v19 >= 0 )
      *v12 = Handle;
    return v19;
  }
  return result;
}
