/*
 * XREFs of DbgUiConvertStateChangeStructureEx @ 0x1800CE720
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DbgUiConvertStateChangeStructureEx(__int64 a1, __int64 a2, __int64 a3)
{
  LOBYTE(a3) = 1;
  return DbgUiConvertStateChangeStructureWorker(a1, a2, a3);
}
