/*
 * XREFs of NtDCompositionDestroyConnection @ 0x1C01663C0
 * Callers:
 *     <none>
 * Callees:
 *     ?DestroyHandle@CConnection@DirectComposition@@SAJPEAUHDCOMPOSITIONCONNECTION__@@@Z @ 0x1C0058B24 (-DestroyHandle@CConnection@DirectComposition@@SAJPEAUHDCOMPOSITIONCONNECTION__@@@Z.c)
 */

__int64 __fastcall NtDCompositionDestroyConnection(struct HDCOMPOSITIONCONNECTION__ *a1)
{
  return DirectComposition::CConnection::DestroyHandle(a1);
}
