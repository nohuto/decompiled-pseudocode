/*
 * XREFs of CmpVolumeManagerGetContextForFile @ 0x140690034
 * Callers:
 *     CmpCreateHive @ 0x14068E190 (CmpCreateHive.c)
 *     CmpVolumeManagerGetContextForFilePath @ 0x140782A58 (CmpVolumeManagerGetContextForFilePath.c)
 * Callees:
 *     IoGetAttachedDeviceReference @ 0x14000E480 (IoGetAttachedDeviceReference.c)
 *     ObfDereferenceObject @ 0x14003DFA0 (ObfDereferenceObject.c)
 *     ExAcquirePushLockSharedEx @ 0x14003EC70 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x14003F5C0 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x1400C6220 (ExfReleasePushLockShared.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     ObReferenceObjectByHandle @ 0x1405FB4B0 (ObReferenceObjectByHandle.c)
 *     CmpVolumeManagerGetContextForGuidUnsafe @ 0x1406901F8 (CmpVolumeManagerGetContextForGuidUnsafe.c)
 *     IoVolumeDeviceToGuid @ 0x140690260 (IoVolumeDeviceToGuid.c)
 *     CmpVolumeContextCreate @ 0x1407887C8 (CmpVolumeContextCreate.c)
 *     CmpVolumeManagerUnlockContextListExclusive @ 0x14078C62C (CmpVolumeManagerUnlockContextListExclusive.c)
 *     CmpVolumeManagerLockContextListExclusive @ 0x14078CFC4 (CmpVolumeManagerLockContextListExclusive.c)
 *     CmpVolumeContextFree @ 0x14082F174 (CmpVolumeContextFree.c)
 */

__int64 __fastcall CmpVolumeManagerGetContextForFile(__int64 a1, void *a2, __int64 a3, PPRIVILEGE_SET *a4)
{
  NTSTATUS v5; // ebx
  PDEVICE_OBJECT AttachedDeviceReference; // r14
  int v7; // eax
  __int64 v8; // rcx
  __int64 v9; // rcx
  PPRIVILEGE_SET ContextForGuidUnsafe; // rbx
  __int64 v11; // rcx
  struct _PRIVILEGE_SET *v12; // rdi
  __int64 v14; // rcx
  PPRIVILEGE_SET *v15; // rcx
  PPRIVILEGE_SET Privileges; // [rsp+30h] [rbp-30h] BYREF
  PVOID Object; // [rsp+38h] [rbp-28h] BYREF
  _QWORD v18[2]; // [rsp+48h] [rbp-18h] BYREF

  v18[0] = 0LL;
  v18[1] = 0LL;
  Privileges = 0LL;
  v5 = ObReferenceObjectByHandle(a2, 0x80u, *(POBJECT_TYPE *)CmIoFileObjectType, 0, &Object, 0LL);
  if ( v5 < 0 )
    goto LABEL_15;
  AttachedDeviceReference = IoGetAttachedDeviceReference(*((PDEVICE_OBJECT *)Object + 1));
  v7 = IoVolumeDeviceToGuid(AttachedDeviceReference, v18);
  v5 = v7;
  if ( v7 == -1073741811 || v7 == -1073741637 || v7 == -1073741808 )
  {
    v5 = CmpVolumeContextCreate(v8, 0LL, &Privileges);
    if ( v5 >= 0 )
    {
      CmpVolumeManagerLockContextListExclusive(&CmpVolumeManager);
      goto LABEL_20;
    }
LABEL_24:
    v12 = Privileges;
LABEL_11:
    if ( v12 )
      CmpVolumeContextFree(v12);
    goto LABEL_13;
  }
  if ( v7 >= 0 )
  {
    ExAcquirePushLockSharedEx((ULONG_PTR)&CmpVolumeManager, 0LL);
    ContextForGuidUnsafe = (PPRIVILEGE_SET)CmpVolumeManagerGetContextForGuidUnsafe(v9, v18);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&CmpVolumeManager, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&CmpVolumeManager);
    KeAbPostRelease((ULONG_PTR)&CmpVolumeManager);
    if ( ContextForGuidUnsafe )
    {
      v12 = Privileges;
LABEL_10:
      *a4 = ContextForGuidUnsafe;
      v5 = 0;
      goto LABEL_11;
    }
    v5 = CmpVolumeContextCreate(v11, AttachedDeviceReference, &Privileges);
    if ( v5 >= 0 )
    {
      CmpVolumeManagerLockContextListExclusive(&CmpVolumeManager);
      ContextForGuidUnsafe = (PPRIVILEGE_SET)CmpVolumeManagerGetContextForGuidUnsafe(v14, v18);
      if ( ContextForGuidUnsafe )
      {
        v12 = Privileges;
LABEL_22:
        CmpVolumeManagerUnlockContextListExclusive((ULONG_PTR)&CmpVolumeManager);
        goto LABEL_10;
      }
LABEL_20:
      v15 = (PPRIVILEGE_SET *)qword_1409AEF10;
      if ( *(__int64 **)qword_1409AEF10 != &qword_1409AEF08 )
        __fastfail(3u);
      ContextForGuidUnsafe = Privileges;
      v12 = 0LL;
      *(_QWORD *)&Privileges->PrivilegeCount = &qword_1409AEF08;
      ContextForGuidUnsafe->Privilege[0].Luid = (LUID)v15;
      *v15 = ContextForGuidUnsafe;
      qword_1409AEF10 = (__int64)ContextForGuidUnsafe;
      goto LABEL_22;
    }
    goto LABEL_24;
  }
LABEL_13:
  if ( AttachedDeviceReference )
    ObfDereferenceObject(AttachedDeviceReference);
LABEL_15:
  if ( Object )
    ObfDereferenceObject(Object);
  return (unsigned int)v5;
}
