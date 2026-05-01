/*
 * XREFs of _HamCreateAutoRestartActivity@16 @ 0x10013530
 * Callers:
 *     <none>
 * Callees:
 *     __SEH_prolog4 @ 0x1000CD8C (__SEH_prolog4.c)
 */

CLIENT_CALL_RETURN __stdcall HamCreateAutoRestartActivity(_DWORD *a1, _DWORD *a2, int a3, int a4)
{
  ULONG v4; // ecx
  CLIENT_CALL_RETURN result; // eax

  v4 = RtlLengthSid(a2 + 116);
  result.Pointer = _NdrClientCall4(
                     &stru_10001688,
                     &byte_1000319C,
                     *a1,
                     a2,
                     a2 + 116,
                     v4,
                     a2[133],
                     a2[134],
                     a2[136],
                     a2[137],
                     a3,
                     a4).Pointer;
  if ( result.Simple >= 0 )
    return 0;
  return result;
}
