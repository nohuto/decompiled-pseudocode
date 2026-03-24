/*
 * XREFs of CmpMarkCurrentProfileDirty @ 0x140730D84
 * Callers:
 *     CmInitSystem1 @ 0x1409C3050 (CmInitSystem1.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     ZwClose @ 0x1401B8370 (ZwClose.c)
 *     ZwOpenKey @ 0x1401B83D0 (ZwOpenKey.c)
 *     _guard_dispatch_icall @ 0x1401C5ED0 (_guard_dispatch_icall.c)
 *     CmpLockRegistryExclusive @ 0x1405B16C8 (CmpLockRegistryExclusive.c)
 *     CmpFindNameInList @ 0x1405D062C (CmpFindNameInList.c)
 *     ObReferenceObjectByHandle @ 0x1405E8350 (ObReferenceObjectByHandle.c)
 *     HvpMarkCellDirty @ 0x1405FAC04 (HvpMarkCellDirty.c)
 *     CmpUnlockRegistry @ 0x140645150 (CmpUnlockRegistry.c)
 *     CmpOpenDevicesControlSet @ 0x140731CB4 (CmpOpenDevicesControlSet.c)
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
        v6 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, int *))(*(_QWORD *)(*((_QWORD *)Handle + 1) + 24LL) + 8LL))(
               *(_QWORD *)(*((_QWORD *)Handle + 1) + 24LL),
               *(unsigned int *)(*((_QWORD *)Handle + 1) + 32LL),
               &v9);
        if ( v6 )
        {
          CmpFindNameInList(*(_QWORD *)(v5[1] + 24LL), v6 + 36, (int)&CmpCurrentConfigString, 0, 0LL, (__int64)&Handle);
          (*(void (__fastcall **)(_QWORD, int *))(*(_QWORD *)(v5[1] + 24LL) + 16LL))(*(_QWORD *)(v5[1] + 24LL), &v9);
          if ( (_DWORD)Handle != -1 )
            HvpMarkCellDirty(*(_QWORD *)(v5[1] + 24LL), (unsigned int)Handle, 1);
        }
        CmpUnlockRegistry();
        return ObfDereferenceObject(v5);
      }
    }
  }
  return result;
}
