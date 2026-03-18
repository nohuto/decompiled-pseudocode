/*
 * XREFs of CmpMarkCurrentProfileDirty @ 0x140760BB4
 * Callers:
 *     CmInitSystem1 @ 0x140A0D1F0 (CmInitSystem1.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14003DFA0 (ObfDereferenceObject.c)
 *     ZwClose @ 0x1401C0E30 (ZwClose.c)
 *     ZwOpenKey @ 0x1401C0E90 (ZwOpenKey.c)
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 *     HvpMarkCellDirty @ 0x1405D57B0 (HvpMarkCellDirty.c)
 *     CmpUnlockRegistry @ 0x1405F6EA0 (CmpUnlockRegistry.c)
 *     ObReferenceObjectByHandle @ 0x1405FB4B0 (ObReferenceObjectByHandle.c)
 *     CmpFindNameInList @ 0x140634354 (CmpFindNameInList.c)
 *     CmpLockRegistryExclusive @ 0x140635B28 (CmpLockRegistryExclusive.c)
 *     CmpOpenDevicesControlSet @ 0x140761B4C (CmpOpenDevicesControlSet.c)
 */

NTSTATUS __fastcall CmpMarkCurrentProfileDirty(__int64 a1)
{
  NTSTATUS result; // eax
  HANDLE v2; // rdi
  NTSTATUS v3; // ebx
  NTSTATUS v4; // ebx
  _QWORD *v5; // rbx
  __int64 v6; // rax
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-30h] BYREF
  HANDLE Handle; // [rsp+80h] [rbp+20h] BYREF
  int v9; // [rsp+88h] [rbp+28h] BYREF
  int v10; // [rsp+8Ch] [rbp+2Ch]
  HANDLE KeyHandle; // [rsp+90h] [rbp+30h] BYREF

  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  v9 = -1;
  v10 = 0;
  result = CmpOpenDevicesControlSet(a1, &Handle, 0LL);
  if ( result >= 0 )
  {
    v2 = Handle;
    ObjectAttributes.RootDirectory = Handle;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)L"$&";
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v3 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
    result = ZwClose(v2);
    if ( v3 >= 0 )
    {
      v4 = ObReferenceObjectByHandle(KeyHandle, 0x20019u, (POBJECT_TYPE)CmKeyObjectType, 0, &Handle, 0LL);
      result = ZwClose(KeyHandle);
      if ( v4 >= 0 )
      {
        CmpLockRegistryExclusive();
        v5 = Handle;
        v6 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, int *))(*(_QWORD *)(*((_QWORD *)Handle + 1) + 32LL) + 8LL))(
               *(_QWORD *)(*((_QWORD *)Handle + 1) + 32LL),
               *(unsigned int *)(*((_QWORD *)Handle + 1) + 40LL),
               &v9);
        if ( v6 )
        {
          CmpFindNameInList(
            *(_QWORD *)(v5[1] + 32LL),
            (unsigned int *)(v6 + 36),
            &CmpCurrentConfigString.Length,
            0,
            0LL,
            &Handle);
          (*(void (__fastcall **)(_QWORD, int *))(*(_QWORD *)(v5[1] + 32LL) + 16LL))(*(_QWORD *)(v5[1] + 32LL), &v9);
          if ( (_DWORD)Handle != -1 )
            HvpMarkCellDirty(*(_QWORD *)(v5[1] + 32LL), (unsigned int)Handle, 1);
        }
        CmpUnlockRegistry();
        return ObfDereferenceObject(v5);
      }
    }
  }
  return result;
}
