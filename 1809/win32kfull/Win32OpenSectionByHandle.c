/*
 * XREFs of Win32OpenSectionByHandle @ 0x1C01C41A4
 * Callers:
 *     ?SecureConnectPort@PROXYPORT@@QEAAJPEAPEAXPEAU_UNICODE_STRING@@PEAU_SECURITY_QUALITY_OF_SERVICE@@PEAU_PORT_VIEW@@PEAXPEAU_REMOTE_PORT_VIEW@@PEAK46@Z @ 0x1C012221C (-SecureConnectPort@PROXYPORT@@QEAAJPEAPEAXPEAU_UNICODE_STRING@@PEAU_SECURITY_QUALITY_OF_SERVICE@.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall Win32OpenSectionByHandle(void *a1, ACCESS_MASK a2, __int64 a3, PVOID *a4)
{
  NTSTATUS result; // eax
  PVOID Object; // [rsp+58h] [rbp+20h] BYREF

  result = ObReferenceObjectByHandle(a1, a2, MmSectionObjectType, 0, &Object, 0LL);
  *a4 = Object;
  return result;
}
