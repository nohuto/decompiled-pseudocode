/*
 * XREFs of PiCMDuplicateRegistryHandle @ 0x1406CD4CC
 * Callers:
 *     PiCMOpenClassKey @ 0x1406CCE80 (PiCMOpenClassKey.c)
 *     PiCMOpenObjectKey @ 0x1406CD03C (PiCMOpenObjectKey.c)
 *     PiCMOpenDeviceKey @ 0x140719B7C (PiCMOpenDeviceKey.c)
 *     PiCMOpenDeviceInterfaceKey @ 0x14087273C (PiCMOpenDeviceInterfaceKey.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14003DFA0 (ObfDereferenceObject.c)
 *     ObOpenObjectByPointer @ 0x1405D0890 (ObOpenObjectByPointer.c)
 *     ObReferenceObjectByHandle @ 0x1405FB4B0 (ObReferenceObjectByHandle.c)
 */

__int64 __fastcall PiCMDuplicateRegistryHandle(
        void *a1,
        __int64 a2,
        ACCESS_MASK a3,
        KPROCESSOR_MODE a4,
        HANDLE *Handle)
{
  NTSTATUS v7; // edi
  PVOID Object; // [rsp+40h] [rbp-18h] BYREF

  v7 = ObReferenceObjectByHandle(a1, 0, (POBJECT_TYPE)CmKeyObjectType, 0, &Object, 0LL);
  if ( v7 >= 0 )
    v7 = ObOpenObjectByPointer(Object, 0x440u, 0LL, a3, (POBJECT_TYPE)CmKeyObjectType, a4, Handle);
  if ( Object )
    ObfDereferenceObject(Object);
  return (unsigned int)v7;
}
