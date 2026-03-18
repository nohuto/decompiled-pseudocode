/*
 * XREFs of MiSetLeafFillToUninitializedWsle @ 0x1401BEA3C
 * Callers:
 *     MiMakeZeroedPageTablesEx @ 0x14008D5B8 (MiMakeZeroedPageTablesEx.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiSetLeafFillToUninitializedWsle(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rdx

  result = *(_QWORD *)(a1 + 288);
  v2 = 8LL;
  do
  {
    result = (result << 8) | 0xA;
    --v2;
  }
  while ( v2 );
  *(_QWORD *)(a1 + 288) = result;
  return result;
}
