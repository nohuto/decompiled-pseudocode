/*
 * XREFs of NtSetInformationObject @ 0x14068E870
 * Callers:
 *     <none>
 * Callees:
 *     PsGetCurrentProcessSessionId @ 0x140002AA0 (PsGetCurrentProcessSessionId.c)
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     MmGetSessionObjectById @ 0x14007F234 (MmGetSessionObjectById.c)
 *     ObpUnlockDirectory @ 0x140109F98 (ObpUnlockDirectory.c)
 *     ObpLockDirectoryExclusive @ 0x14010A050 (ObpLockDirectoryExclusive.c)
 *     ObReferenceObjectByHandle @ 0x1405E9350 (ObReferenceObjectByHandle.c)
 *     SeSinglePrivilegeCheck @ 0x140613160 (SeSinglePrivilegeCheck.c)
 *     ObSetHandleAttributes @ 0x14068EA90 (ObSetHandleAttributes.c)
 */

NTSTATUS __stdcall NtSetInformationObject(
        HANDLE ObjectHandle,
        OBJECT_INFORMATION_CLASS ObjectInformationClass,
        PVOID ObjectInformation,
        ULONG Length)
{
  int v5; // edi
  __int32 v6; // edx
  char v7; // cl
  __int32 v9; // edx
  KPROCESSOR_MODE PreviousMode; // bl
  unsigned int CurrentProcessSessionId; // eax
  void *SessionObjectById; // rsi
  _QWORD *v13; // rbx
  __int128 *v14; // rdx
  KPROCESSOR_MODE v15; // bl
  PVOID Object; // [rsp+38h] [rbp-80h] BYREF
  PVOID v17; // [rsp+40h] [rbp-78h] BYREF
  __int128 v18; // [rsp+50h] [rbp-68h] BYREF
  __int16 v19; // [rsp+6Eh] [rbp-4Ah]
  int v20; // [rsp+70h] [rbp-48h]
  __int128 v21; // [rsp+78h] [rbp-40h] BYREF
  __int16 v22; // [rsp+96h] [rbp-22h]
  int v23; // [rsp+98h] [rbp-20h]
  struct _OBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+A0h] [rbp-18h] BYREF
  struct _OBJECT_HANDLE_INFORMATION v25; // [rsp+A8h] [rbp-10h] BYREF
  __int16 v26; // [rsp+C8h] [rbp+10h] BYREF

  v5 = -1073741821;
  v6 = ObjectInformationClass - 4;
  if ( v6 )
  {
    v9 = v6 - 1;
    if ( v9 )
    {
      if ( v9 != 1 )
        return v5;
      PreviousMode = KeGetCurrentThread()->PreviousMode;
      if ( SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
      {
        v5 = ObReferenceObjectByHandle(
               ObjectHandle,
               0,
               ObpDirectoryObjectType,
               PreviousMode,
               &Object,
               &HandleInformation);
        if ( v5 >= 0 )
        {
          CurrentProcessSessionId = PsGetCurrentProcessSessionId();
          SessionObjectById = MmGetSessionObjectById(CurrentProcessSessionId);
          v13 = Object;
          if ( !SessionObjectById )
          {
            v5 = -1073740715;
            goto LABEL_18;
          }
          v18 = 0LL;
          v19 = 0;
          v20 = -60876;
          ObpLockDirectoryExclusive((__int64)&v18, Object);
          if ( v13[41] )
          {
            v5 = -1073741790;
            ObfDereferenceObject(SessionObjectById);
          }
          else
          {
            v13[41] = SessionObjectById;
          }
          v14 = &v18;
LABEL_17:
          ObpUnlockDirectory((__int64)v13, (__int64)v14);
LABEL_18:
          ObfDereferenceObject(v13);
        }
        return v5;
      }
    }
    else
    {
      v15 = KeGetCurrentThread()->PreviousMode;
      if ( SeSinglePrivilegeCheck(SeTcbPrivilege, v15) )
      {
        v5 = ObReferenceObjectByHandle(ObjectHandle, 0, ObpDirectoryObjectType, v15, &v17, &v25);
        if ( v5 < 0 )
          return v5;
        v21 = 0LL;
        v22 = 0;
        v23 = -60876;
        v13 = v17;
        ObpLockDirectoryExclusive((__int64)&v21, v17);
        *((_DWORD *)v13 + 85) = PsGetCurrentProcessSessionId();
        v14 = &v21;
        goto LABEL_17;
      }
    }
    return -1073741727;
  }
  if ( Length == 2 )
  {
    v7 = KeGetCurrentThread()->PreviousMode;
    if ( v7
      && ((unsigned __int64)ObjectInformation + 2 > 0x7FFFFFFF0000LL || (char *)ObjectInformation + 2 < ObjectInformation) )
    {
      MEMORY[0x7FFFFFFF0000] = 0;
    }
    v26 = *(_WORD *)ObjectInformation;
    LOBYTE(ObjectInformation) = v7;
    return ObSetHandleAttributes(ObjectHandle, &v26, ObjectInformation);
  }
  return -1073741820;
}
