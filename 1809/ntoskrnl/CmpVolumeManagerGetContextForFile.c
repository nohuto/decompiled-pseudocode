/*
 * XREFs of CmpVolumeManagerGetContextForFile @ 0x1405A5298
 * Callers:
 *     CmpCreateHive @ 0x1405A7574 (CmpCreateHive.c)
 *     CmpVolumeManagerGetContextForFilePath @ 0x14075AA00 (CmpVolumeManagerGetContextForFilePath.c)
 * Callees:
 *     CmSiFreeMemory @ 0x140013000 (CmSiFreeMemory.c)
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x14004EE20 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x1400913F0 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x140091500 (ExfTryToWakePushLock.c)
 *     IoGetAttachedDeviceReference @ 0x1400ACD80 (IoGetAttachedDeviceReference.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     CmpVolumeManagerGetContextForGuidUnsafe @ 0x1405A5450 (CmpVolumeManagerGetContextForGuidUnsafe.c)
 *     IoVolumeDeviceToGuid @ 0x1405A54B0 (IoVolumeDeviceToGuid.c)
 *     ObReferenceObjectByHandle @ 0x1405E9350 (ObReferenceObjectByHandle.c)
 *     CmpVolumeContextCreate @ 0x140760870 (CmpVolumeContextCreate.c)
 *     CmpVolumeContextCleanup @ 0x1407F7714 (CmpVolumeContextCleanup.c)
 */

__int64 __fastcall CmpVolumeManagerGetContextForFile(__int64 a1, void *a2, __int64 a3, PPRIVILEGE_SET *a4)
{
  NTSTATUS v5; // ebx
  PDEVICE_OBJECT AttachedDeviceReference; // rsi
  int v7; // eax
  __int64 v8; // rcx
  __int64 v9; // rcx
  PPRIVILEGE_SET ContextForGuidUnsafe; // rbx
  __int64 v11; // rcx
  struct _PRIVILEGE_SET *v12; // rdi
  __int64 v14; // rcx
  PPRIVILEGE_SET *v15; // rcx
  char v16; // al
  bool v17; // zf
  PPRIVILEGE_SET *v18; // rcx
  PPRIVILEGE_SET Privileges; // [rsp+30h] [rbp-30h] BYREF
  PVOID Object; // [rsp+38h] [rbp-28h] BYREF
  _BYTE v21[16]; // [rsp+48h] [rbp-18h] BYREF

  Privileges = 0LL;
  v5 = ObReferenceObjectByHandle(a2, 0x80u, *(POBJECT_TYPE *)CmIoFileObjectType, 0, &Object, 0LL);
  if ( v5 < 0 )
    goto LABEL_14;
  AttachedDeviceReference = IoGetAttachedDeviceReference(*((PDEVICE_OBJECT *)Object + 1));
  v7 = IoVolumeDeviceToGuid(AttachedDeviceReference, v21);
  v5 = v7;
  if ( v7 == -1073741811 || v7 == -1073741637 || v7 == -1073741808 )
  {
    v5 = CmpVolumeContextCreate(v8, 0LL, &Privileges);
    if ( v5 >= 0 )
    {
      ExAcquirePushLockExclusiveEx((ULONG_PTR)&CmpVolumeManager, 0LL);
      v18 = (PPRIVILEGE_SET *)qword_14096FE90;
      if ( *(__int64 **)qword_14096FE90 == &qword_14096FE88 )
      {
        ContextForGuidUnsafe = Privileges;
        Privileges = 0LL;
        *(_QWORD *)&ContextForGuidUnsafe->PrivilegeCount = &qword_14096FE88;
        ContextForGuidUnsafe->Privilege[0].Luid = (LUID)v18;
        *v18 = ContextForGuidUnsafe;
        qword_14096FE90 = (__int64)ContextForGuidUnsafe;
        v17 = (_InterlockedExchangeAdd64((volatile signed __int64 *)&CmpVolumeManager, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2;
        goto LABEL_27;
      }
      goto LABEL_29;
    }
LABEL_10:
    v12 = Privileges;
    if ( Privileges )
    {
      CmpVolumeContextCleanup(Privileges);
      CmSiFreeMemory(v12);
    }
    goto LABEL_12;
  }
  if ( v7 >= 0 )
  {
    ExAcquirePushLockSharedEx((ULONG_PTR)&CmpVolumeManager, 0LL);
    ContextForGuidUnsafe = (PPRIVILEGE_SET)CmpVolumeManagerGetContextForGuidUnsafe(v9, v21);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&CmpVolumeManager, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&CmpVolumeManager);
    KeAbPostRelease((ULONG_PTR)&CmpVolumeManager);
    if ( ContextForGuidUnsafe )
      goto LABEL_9;
    v5 = CmpVolumeContextCreate(v11, AttachedDeviceReference, &Privileges);
    if ( v5 >= 0 )
    {
      ExAcquirePushLockExclusiveEx((ULONG_PTR)&CmpVolumeManager, 0LL);
      ContextForGuidUnsafe = (PPRIVILEGE_SET)CmpVolumeManagerGetContextForGuidUnsafe(v14, v21);
      if ( ContextForGuidUnsafe )
      {
LABEL_21:
        v16 = _InterlockedExchangeAdd64((volatile signed __int64 *)&CmpVolumeManager, 0xFFFFFFFFFFFFFFFFuLL);
        if ( (v16 & 2) == 0 )
        {
LABEL_22:
          KeAbPostRelease((ULONG_PTR)&CmpVolumeManager);
LABEL_9:
          *a4 = ContextForGuidUnsafe;
          v5 = 0;
          goto LABEL_10;
        }
        v17 = (v16 & 4) == 0;
LABEL_27:
        if ( v17 )
          ExfTryToWakePushLock((volatile signed __int64 *)&CmpVolumeManager);
        goto LABEL_22;
      }
      v15 = (PPRIVILEGE_SET *)qword_14096FE90;
      if ( *(__int64 **)qword_14096FE90 == &qword_14096FE88 )
      {
        ContextForGuidUnsafe = Privileges;
        Privileges = 0LL;
        *(_QWORD *)&ContextForGuidUnsafe->PrivilegeCount = &qword_14096FE88;
        ContextForGuidUnsafe->Privilege[0].Luid = (LUID)v15;
        *v15 = ContextForGuidUnsafe;
        qword_14096FE90 = (__int64)ContextForGuidUnsafe;
        goto LABEL_21;
      }
LABEL_29:
      __fastfail(3u);
    }
    goto LABEL_10;
  }
LABEL_12:
  if ( AttachedDeviceReference )
    ObfDereferenceObject(AttachedDeviceReference);
LABEL_14:
  if ( Object )
    ObfDereferenceObject(Object);
  return (unsigned int)v5;
}
