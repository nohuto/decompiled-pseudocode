/*
 * XREFs of RtlWnfDllUnloadCallback @ 0x180089100
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall RtlWnfDllUnloadCallback(unsigned __int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  return LdrUnloadDll(a1, a2, a3, a4);
}
