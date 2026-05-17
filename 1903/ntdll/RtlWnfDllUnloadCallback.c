/*
 * XREFs of RtlWnfDllUnloadCallback @ 0x180084F60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall RtlWnfDllUnloadCallback(unsigned __int64 a1)
{
  return LdrUnloadDll(a1);
}
