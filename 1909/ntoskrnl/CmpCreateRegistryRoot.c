/*
 * XREFs of CmpCreateRegistryRoot @ 0x140A0EAE8
 * Callers:
 *     CmInitSystem1 @ 0x140A0D1F0 (CmInitSystem1.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140043CD0 (RtlInitUnicodeString.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     ObInsertObject @ 0x1405D9D30 (ObInsertObject.c)
 *     CmpUnlockKcb @ 0x1405F94F0 (CmpUnlockKcb.c)
 *     ObReferenceObjectByHandle @ 0x1405FB4B0 (ObReferenceObjectByHandle.c)
 *     ObCloseHandle @ 0x140610D90 (ObCloseHandle.c)
 *     CmpCreateKeyControlBlock @ 0x1406676D0 (CmpCreateKeyControlBlock.c)
 *     CmpTryToLockKcbExclusive @ 0x140669A7C (CmpTryToLockKcbExclusive.c)
 *     ObCreateObject @ 0x140681580 (ObCreateObject.c)
 *     CmpHashUnicodeComponent @ 0x1406C533C (CmpHashUnicodeComponent.c)
 *     EnlistKeyBodyWithKCB @ 0x140762EF8 (EnlistKeyBodyWithKCB.c)
 *     CmpHiveRootSecurityDescriptor @ 0x14076351C (CmpHiveRootSecurityDescriptor.c)
 *     CmpCreateRootNode @ 0x140A0ECBC (CmpCreateRootNode.c)
 */

char __fastcall CmpCreateRegistryRoot(__int64 a1, __int64 a2)
{
  ACL *v2; // rdi
  int v3; // ebx
  char v4; // al
  _QWORD *v5; // rcx
  ULONG_PTR v6; // rax
  _DWORD *v7; // rbx
  __int64 v8; // rcx
  NTSTATUS v9; // eax
  PVOID v11; // [rsp+50h] [rbp-19h] BYREF
  UNICODE_STRING DestinationString; // [rsp+58h] [rbp-11h] BYREF
  _DWORD v13[2]; // [rsp+68h] [rbp-1h] BYREF
  __int64 v14; // [rsp+70h] [rbp+7h]
  UNICODE_STRING *v15; // [rsp+78h] [rbp+Fh]
  int v16; // [rsp+80h] [rbp+17h]
  int v17; // [rsp+84h] [rbp+1Bh]
  ACL *v18; // [rsp+88h] [rbp+1Fh]
  __int64 v19; // [rsp+90h] [rbp+27h]
  int v20; // [rsp+D0h] [rbp+67h] BYREF
  ULONG_PTR v21; // [rsp+D8h] [rbp+6Fh] BYREF
  PVOID Object; // [rsp+E0h] [rbp+77h] BYREF
  HANDLE Handle; // [rsp+E8h] [rbp+7Fh] BYREF

  *(_QWORD *)&DestinationString.Length = 0LL;
  v13[1] = 0;
  v17 = 0;
  DestinationString.Buffer = 0LL;
  if ( !(unsigned __int8)CmpCreateRootNode(a1, a2, &v20) )
    return 0;
  v2 = CmpHiveRootSecurityDescriptor();
  v13[0] = 48;
  v14 = 0LL;
  v15 = &CmRegistryRootName;
  v16 = 576;
  v18 = v2;
  v19 = 0LL;
  v3 = ObCreateObject(0, CmKeyObjectType, (int)v13, 0, 0, 96, 0, 0, &Object);
  ExFreePoolWithTag(v2, 0);
  if ( v3 < 0 )
    return 0;
  RtlInitUnicodeString(&DestinationString, L"REGISTRY");
  v4 = CmpHashUnicodeComponent((__m128i *)&DestinationString);
  if ( (int)CmpCreateKeyControlBlock((__int64)CmpMasterHive, v20, 0LL, 0LL, 0, &DestinationString.Length, v4, 0, &v21) < 0 )
    return 0;
  v5 = Object;
  v6 = v21;
  *(_DWORD *)Object = 1803104306;
  v5[1] = v6;
  v5[2] = 0LL;
  v7 = Object;
  *((_QWORD *)Object + 3) = KeGetCurrentThread()[1].CycleTime;
  v8 = v21;
  v7[12] = 0;
  *((_QWORD *)v7 + 10) = v7 + 18;
  *((_QWORD *)v7 + 9) = v7 + 18;
  *((_QWORD *)v7 + 7) = 0LL;
  *((_QWORD *)v7 + 8) = 0LL;
  CmpTryToLockKcbExclusive(v8);
  EnlistKeyBodyWithKCB(v7, 2);
  CmpUnlockKcb(v21);
  if ( ObInsertObject(v7, 0LL, 0, 0, 0LL, &Handle) < 0 )
    return 0;
  v9 = ObReferenceObjectByHandle(Handle, 0x20019u, 0LL, 0, &v11, 0LL);
  CmpRegistryRootObject = v11;
  if ( v9 < 0 )
  {
    ObCloseHandle(Handle, 0);
    return 0;
  }
  return 1;
}
