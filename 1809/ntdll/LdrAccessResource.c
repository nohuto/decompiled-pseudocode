/*
 * XREFs of LdrAccessResource @ 0x180080A10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall LdrAccessResource(unsigned __int64 a1, unsigned int *a2, unsigned __int64 *a3, _DWORD *a4)
{
  return LdrpAccessResourceData(a1, a2, a3, a4);
}
