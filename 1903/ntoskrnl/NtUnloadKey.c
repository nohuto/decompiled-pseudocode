/*
 * XREFs of NtUnloadKey @ 0x14069A5A0
 * Callers:
 *     <none>
 * Callees:
 *     CmUnloadKey @ 0x14069A6C4 (CmUnloadKey.c)
 */

NTSTATUS __stdcall NtUnloadKey(POBJECT_ATTRIBUTES KeyObjectAttributes)
{
  return CmUnloadKey(KeyObjectAttributes, 0LL, 0LL, 0LL);
}
