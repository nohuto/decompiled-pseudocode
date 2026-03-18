/*
 * XREFs of ExpWnfGetNameStoreRegistryRoot @ 0x14063F8A0
 * Callers:
 *     ExpWnfLookupPermanentName @ 0x14063F6C4 (ExpWnfLookupPermanentName.c)
 *     ExpWnfRegisterPermanentName @ 0x1406EEDC0 (ExpWnfRegisterPermanentName.c)
 *     ExpWnfDeletePermanentName @ 0x1406F0C80 (ExpWnfDeletePermanentName.c)
 *     ExpWnfGetPermanentDataStoreHandleByScopeId @ 0x140784980 (ExpWnfGetPermanentDataStoreHandleByScopeId.c)
 *     ExpWnfAllocateNextPersistentNameSequence @ 0x140918AB0 (ExpWnfAllocateNextPersistentNameSequence.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x1400EBE80 (PsGetCurrentServerSiloGlobals.c)
 *     ZwClose @ 0x1401C0E30 (ZwClose.c)
 *     ZwCreateKey @ 0x1401C0FF0 (ZwCreateKey.c)
 *     memset @ 0x1401D77C0 (memset.c)
 */

NTSTATUS __fastcall ExpWnfGetNameStoreRegistryRoot(int a1, volatile signed __int64 *a2)
{
  __int64 v3; // rbx
  __int64 v4; // rsi
  volatile signed __int64 *v5; // rbx
  NTSTATUS result; // eax
  char *CurrentServerSiloGlobals; // rax
  __int64 *v8; // rax
  ACCESS_MASK v9; // edx
  __int64 v10; // rcx
  int v11; // edi
  BOOL CreateOptions; // [rsp+28h] [rbp-48h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-30h] BYREF
  ULONG Disposition; // [rsp+90h] [rbp+20h] BYREF
  HANDLE KeyHandle; // [rsp+A0h] [rbp+30h] BYREF

  v3 = a1;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  v4 = 6 * v3;
  if ( (_DWORD)v3 )
  {
    CurrentServerSiloGlobals = (char *)PsGetCurrentServerSiloGlobals();
    if ( (_DWORD)v3 == 1 )
      v5 = (volatile signed __int64 *)(CurrentServerSiloGlobals + 912);
    else
      v5 = (volatile signed __int64 *)(CurrentServerSiloGlobals + 920);
  }
  else
  {
    v5 = (volatile signed __int64 *)&ExpWnfWellKnownNameStoreRootKey;
  }
  if ( *v5 )
  {
LABEL_4:
    *a2 = *v5;
    return 0;
  }
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Length = 48;
  v8 = &ExpWnfNameStoreDescriptors[3];
  ObjectAttributes.Attributes = 576;
  if ( !CmStateSeparationEnabled )
    v8 = &ExpWnfNameStoreDescriptors[1];
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&v8[v4];
  CreateOptions = HIDWORD(ExpWnfNameStoreDescriptors[v4 + 5]) != 0;
  v9 = LODWORD(ExpWnfNameStoreDescriptors[v4 + 5]) != 0 ? 131097 : 983103;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  result = ZwCreateKey(&KeyHandle, v9, &ObjectAttributes, 0, 0LL, CreateOptions, &Disposition);
  if ( result >= 0 )
  {
    if ( Disposition == 1 )
    {
      LOBYTE(v10) = CmStateSeparationEnabled != 0;
      v11 = ExpInitializeStateSeparationPhase2(
              v10,
              &ExpWnfNameStoreDescriptors[v4 + 1],
              &ExpWnfNameStoreDescriptors[v4 + 3]);
      if ( (int)(v11 + 0x80000000) >= 0 && v11 != -1073741637 )
      {
        ZwClose(KeyHandle);
        return v11;
      }
    }
    if ( _InterlockedCompareExchange64(v5, (signed __int64)KeyHandle, 0LL) )
      ZwClose(KeyHandle);
    goto LABEL_4;
  }
  return result;
}
