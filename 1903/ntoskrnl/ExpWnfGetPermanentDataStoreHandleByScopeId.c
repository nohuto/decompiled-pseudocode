/*
 * XREFs of ExpWnfGetPermanentDataStoreHandleByScopeId @ 0x1407826B0
 * Callers:
 *     ExpWnfGetPermanentDataStoreHandle @ 0x14071DCCC (ExpWnfGetPermanentDataStoreHandle.c)
 *     ExpWnfEnumeratePermanentDataStores @ 0x1409194A0 (ExpWnfEnumeratePermanentDataStores.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400438D0 (RtlInitUnicodeString.c)
 *     ZwCreateKey @ 0x1401C0470 (ZwCreateKey.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     ExpWnfGetNameStoreRegistryRoot @ 0x14063C7F0 (ExpWnfGetNameStoreRegistryRoot.c)
 *     ExpWnfGetPermanentPerUserDataStoreHandle @ 0x1409194EC (ExpWnfGetPermanentPerUserDataStoreHandle.c)
 */

NTSTATUS __fastcall ExpWnfGetPermanentDataStoreHandleByScopeId(
        int a1,
        int a2,
        void *a3,
        __int64 a4,
        int a5,
        int a6,
        HANDLE *KeyHandle)
{
  int v10; // ebx
  NTSTATUS result; // eax
  NTSTATUS v12; // eax
  void *v13; // [rsp+48h] [rbp-11h] BYREF
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-9h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp+7h] BYREF

  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  v10 = 0;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  if ( a5 || (a1 & 0xFFFFFFF9) != 0 || a1 == 6 )
    return a6 != 0 ? -1073741822 : -1073741772;
  if ( a1 == 2 )
  {
    if ( !a2 )
      return ExpWnfGetPermanentPerUserDataStoreHandle(a3, KeyHandle);
    return a6 != 0 ? -1073741822 : -1073741772;
  }
  result = ExpWnfGetNameStoreRegistryRoot(1, (volatile signed __int64 *)&v13);
  if ( result >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, L"Data");
    ObjectAttributes.RootDirectory = v13;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v12 = ZwCreateKey(KeyHandle, 0xF003Fu, &ObjectAttributes, 0, 0LL, 0, 0LL);
    if ( v12 < 0 )
      return v12;
    return v10;
  }
  return result;
}
