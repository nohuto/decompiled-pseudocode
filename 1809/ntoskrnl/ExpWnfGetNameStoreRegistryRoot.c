/*
 * XREFs of ExpWnfGetNameStoreRegistryRoot @ 0x1405ABB0C
 * Callers:
 *     ExpWnfLookupPermanentName @ 0x1405AB92C (ExpWnfLookupPermanentName.c)
 *     ExpWnfDeletePermanentName @ 0x1406ACE34 (ExpWnfDeletePermanentName.c)
 *     ExpWnfRegisterPermanentName @ 0x1406CFDD4 (ExpWnfRegisterPermanentName.c)
 *     ExpWnfGetPermanentDataStoreHandleByScopeId @ 0x14075E924 (ExpWnfGetPermanentDataStoreHandleByScopeId.c)
 *     ExpWnfAllocateNextPersistentNameSequence @ 0x1408DC560 (ExpWnfAllocateNextPersistentNameSequence.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x140109DC0 (PsGetCurrentServerSiloGlobals.c)
 *     ZwClose @ 0x1401B84D0 (ZwClose.c)
 *     ZwCreateKey @ 0x1401B8690 (ZwCreateKey.c)
 */

NTSTATUS __fastcall ExpWnfGetNameStoreRegistryRoot(int a1, volatile signed __int64 *a2)
{
  __int64 v3; // rdi
  volatile signed __int64 *v4; // rbx
  NTSTATUS result; // eax
  __int64 *v6; // rax
  ACCESS_MASK v7; // edx
  __int64 v8; // rcx
  int v9; // edi
  BOOL CreateOptions; // [rsp+28h] [rbp-48h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-30h] BYREF
  ULONG Disposition; // [rsp+90h] [rbp+20h] BYREF
  HANDLE KeyHandle; // [rsp+A0h] [rbp+30h] BYREF

  v3 = 6LL * a1;
  if ( a1 )
  {
    if ( a1 == 1 )
      v4 = (volatile signed __int64 *)((char *)PsGetCurrentServerSiloGlobals() + 912);
    else
      v4 = (volatile signed __int64 *)((char *)PsGetCurrentServerSiloGlobals() + 920);
  }
  else
  {
    v4 = (volatile signed __int64 *)&ExpWnfWellKnownNameStoreRootKey;
  }
  if ( *v4 )
  {
LABEL_4:
    *a2 = *v4;
    return 0;
  }
  ObjectAttributes.RootDirectory = 0LL;
  v6 = &ExpWnfNameStoreDescriptors[3];
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  if ( !CmStateSeparationEnabled )
    v6 = &ExpWnfNameStoreDescriptors[1];
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&v6[v3];
  CreateOptions = HIDWORD(ExpWnfNameStoreDescriptors[v3 + 5]) != 0;
  v7 = LODWORD(ExpWnfNameStoreDescriptors[v3 + 5]) != 0 ? 131097 : 983103;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  result = ZwCreateKey(&KeyHandle, v7, &ObjectAttributes, 0, 0LL, CreateOptions, &Disposition);
  if ( result >= 0 )
  {
    if ( Disposition == 1 )
    {
      LOBYTE(v8) = CmStateSeparationEnabled != 0;
      v9 = ExpInitializeStateSeparationPhase2(
             v8,
             &ExpWnfNameStoreDescriptors[v3 + 1],
             &ExpWnfNameStoreDescriptors[v3 + 3]);
      if ( (int)(v9 + 0x80000000) >= 0 && v9 != -1073741637 )
      {
        ZwClose(KeyHandle);
        return v9;
      }
    }
    if ( _InterlockedCompareExchange64(v4, (signed __int64)KeyHandle, 0LL) )
      ZwClose(KeyHandle);
    goto LABEL_4;
  }
  return result;
}
