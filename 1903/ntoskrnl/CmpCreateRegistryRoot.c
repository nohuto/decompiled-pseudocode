/*
 * XREFs of CmpCreateRegistryRoot @ 0x140A0E368
 * Callers:
 *     CmInitSystem1 @ 0x140A0CCC4 (CmInitSystem1.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400438D0 (RtlInitUnicodeString.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     ObInsertObject @ 0x1405D9570 (ObInsertObject.c)
 *     ObReferenceObjectByHandle @ 0x1405FA460 (ObReferenceObjectByHandle.c)
 *     ObCloseHandle @ 0x14060F280 (ObCloseHandle.c)
 *     CmpHashUnicodeComponent @ 0x140632D10 (CmpHashUnicodeComponent.c)
 *     CmpCreateKeyControlBlock @ 0x1406545D0 (CmpCreateKeyControlBlock.c)
 *     ObCreateObject @ 0x14068E010 (ObCreateObject.c)
 *     EnlistKeyBodyWithKCB @ 0x14075E5F8 (EnlistKeyBodyWithKCB.c)
 *     CmpHiveRootSecurityDescriptor @ 0x14075EBF8 (CmpHiveRootSecurityDescriptor.c)
 *     CmpCreateRootNode @ 0x140A0E524 (CmpCreateRootNode.c)
 */

char __fastcall CmpCreateRegistryRoot(__int64 a1, __int64 a2)
{
  ACL *v2; // rdi
  int v3; // ebx
  char v4; // al
  _QWORD *v5; // rcx
  ULONG_PTR v6; // rax
  _DWORD *v7; // rbx
  NTSTATUS v8; // eax
  PVOID v10; // [rsp+50h] [rbp-19h] BYREF
  UNICODE_STRING DestinationString; // [rsp+58h] [rbp-11h] BYREF
  _DWORD v12[2]; // [rsp+68h] [rbp-1h] BYREF
  __int64 v13; // [rsp+70h] [rbp+7h]
  UNICODE_STRING *v14; // [rsp+78h] [rbp+Fh]
  int v15; // [rsp+80h] [rbp+17h]
  int v16; // [rsp+84h] [rbp+1Bh]
  ACL *v17; // [rsp+88h] [rbp+1Fh]
  __int64 v18; // [rsp+90h] [rbp+27h]
  int v19; // [rsp+D0h] [rbp+67h] BYREF
  PVOID Object; // [rsp+D8h] [rbp+6Fh] BYREF
  HANDLE Handle; // [rsp+E0h] [rbp+77h] BYREF
  ULONG_PTR v22; // [rsp+E8h] [rbp+7Fh] BYREF

  *(_QWORD *)&DestinationString.Length = 0LL;
  v12[1] = 0;
  v16 = 0;
  DestinationString.Buffer = 0LL;
  if ( (unsigned __int8)CmpCreateRootNode(a1, a2, &v19) )
  {
    v2 = CmpHiveRootSecurityDescriptor();
    v12[0] = 48;
    v13 = 0LL;
    v14 = &CmRegistryRootName;
    v15 = 576;
    v17 = v2;
    v18 = 0LL;
    v3 = ObCreateObject(0, CmKeyObjectType, (int)v12, 0, 0, 96, 0, 0, &Object);
    ExFreePoolWithTag(v2, 0);
    if ( v3 >= 0 )
    {
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
                  &v22) >= 0 )
      {
        v5 = Object;
        v6 = v22;
        *(_DWORD *)Object = 1803104306;
        v5[1] = v6;
        v5[2] = 0LL;
        v7 = Object;
        *((_QWORD *)Object + 3) = KeGetCurrentThread()[1].CycleTime;
        v7[12] = 0;
        *((_QWORD *)v7 + 10) = v7 + 18;
        *((_QWORD *)v7 + 9) = v7 + 18;
        EnlistKeyBodyWithKCB((ULONG_PTR *)v7, 0);
        *((_QWORD *)v7 + 7) = 0LL;
        *((_QWORD *)v7 + 8) = 0LL;
        if ( ObInsertObject(v7, 0LL, 0, 0, 0LL, &Handle) >= 0 )
        {
          v8 = ObReferenceObjectByHandle(Handle, 0x20019u, 0LL, 0, &v10, 0LL);
          CmpRegistryRootObject = v10;
          if ( v8 >= 0 )
            return 1;
          ObCloseHandle(Handle, 0);
        }
      }
    }
  }
  return 0;
}
