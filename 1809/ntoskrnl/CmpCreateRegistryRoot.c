/*
 * XREFs of CmpCreateRegistryRoot @ 0x1409C4FAC
 * Callers:
 *     CmInitSystem1 @ 0x1409C4050 (CmInitSystem1.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400B99D0 (RtlInitUnicodeString.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     CmpHashUnicodeComponent @ 0x1405B02C4 (CmpHashUnicodeComponent.c)
 *     ObCreateObject @ 0x1405BE820 (ObCreateObject.c)
 *     CmpCreateKeyControlBlock @ 0x1405D6EB0 (CmpCreateKeyControlBlock.c)
 *     CmpTryToLockKcbExclusive @ 0x1405D9B30 (CmpTryToLockKcbExclusive.c)
 *     CmpUnlockKcb @ 0x1405E4580 (CmpUnlockKcb.c)
 *     ObReferenceObjectByHandle @ 0x1405E9350 (ObReferenceObjectByHandle.c)
 *     ObCloseHandle @ 0x1405F6700 (ObCloseHandle.c)
 *     ObInsertObject @ 0x14061C280 (ObInsertObject.c)
 *     EnlistKeyBodyWithKCB @ 0x1407341F4 (EnlistKeyBodyWithKCB.c)
 *     CmpHiveRootSecurityDescriptor @ 0x140734770 (CmpHiveRootSecurityDescriptor.c)
 *     CmpCreateRootNode @ 0x1409C5170 (CmpCreateRootNode.c)
 */

char __fastcall CmpCreateRegistryRoot(__int64 a1, __int64 a2)
{
  ACL *v2; // rdi
  int v3; // ebx
  char v4; // al
  _QWORD *v5; // rcx
  ULONG_PTR v6; // rax
  _DWORD *v7; // rbx
  ULONG_PTR v8; // rcx
  NTSTATUS v9; // eax
  PVOID v11; // [rsp+50h] [rbp-19h] BYREF
  UNICODE_STRING DestinationString; // [rsp+58h] [rbp-11h] BYREF
  int v13; // [rsp+68h] [rbp-1h] BYREF
  __int64 v14; // [rsp+70h] [rbp+7h]
  UNICODE_STRING *v15; // [rsp+78h] [rbp+Fh]
  int v16; // [rsp+80h] [rbp+17h]
  ACL *v17; // [rsp+88h] [rbp+1Fh]
  __int64 v18; // [rsp+90h] [rbp+27h]
  int v19; // [rsp+D0h] [rbp+67h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+D8h] [rbp+6Fh] BYREF
  PVOID Object; // [rsp+E0h] [rbp+77h]
  HANDLE Handle; // [rsp+E8h] [rbp+7Fh] BYREF

  if ( !(unsigned __int8)CmpCreateRootNode(a1, a2, &v19) )
    return 0;
  v2 = CmpHiveRootSecurityDescriptor();
  v13 = 48;
  v14 = 0LL;
  v15 = &CmRegistryRootName;
  v16 = 576;
  v17 = v2;
  v18 = 0LL;
  v3 = ObCreateObject(0, (int)CmKeyObjectType, (int)&v13, 0);
  ExFreePoolWithTag(v2, 0);
  if ( v3 < 0 )
    return 0;
  RtlInitUnicodeString(&DestinationString, L"REGISTRY");
  v4 = CmpHashUnicodeComponent((__m128i *)&DestinationString);
  if ( (int)CmpCreateKeyControlBlock(
              (__int64)CmpMasterHive,
              v19,
              0LL,
              0LL,
              0,
              &DestinationString.Length,
              v4,
              0,
              &BugCheckParameter2) < 0 )
    return 0;
  v5 = Object;
  v6 = BugCheckParameter2;
  *(_DWORD *)Object = 1803104306;
  v5[1] = v6;
  v5[2] = 0LL;
  v7 = Object;
  *((_QWORD *)Object + 3) = KeGetCurrentThread()[1].CycleTime;
  v8 = BugCheckParameter2;
  v7[12] = 0;
  *((_QWORD *)v7 + 10) = v7 + 18;
  *((_QWORD *)v7 + 9) = v7 + 18;
  *((_QWORD *)v7 + 7) = 0LL;
  *((_QWORD *)v7 + 8) = 0LL;
  CmpTryToLockKcbExclusive(v8);
  EnlistKeyBodyWithKCB(v7, 2);
  CmpUnlockKcb(BugCheckParameter2);
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
