/*
 * XREFs of NtUnloadKey @ 0x1406B8B80
 * Callers:
 *     <none>
 * Callees:
 *     CmUnloadKey @ 0x1406B8CA4 (CmUnloadKey.c)
 */

NTSTATUS __stdcall NtUnloadKey(POBJECT_ATTRIBUTES KeyObjectAttributes)
{
  return CmUnloadKey(KeyObjectAttributes, 0LL, 0LL, 0LL);
}
