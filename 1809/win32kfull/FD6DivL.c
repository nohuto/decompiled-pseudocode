/*
 * XREFs of FD6DivL @ 0x1C0012450
 * Callers:
 *     Log @ 0x1C0012490 (Log.c)
 *     AntiLog @ 0x1C0012568 (AntiLog.c)
 *     RaisePower @ 0x1C00126AC (RaisePower.c)
 *     ComputeBGRMappingTable @ 0x1C02451CC (ComputeBGRMappingTable.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall FD6DivL(int a1, int a2)
{
  unsigned int v2; // r8d
  BOOL v3; // r9d
  __int64 result; // rax

  v2 = a2;
  v3 = a2 <= 0;
  if ( a2 <= 0 )
  {
    v2 = -a2;
    if ( !a2 )
      return (unsigned int)a1;
  }
  if ( a1 <= 0 )
  {
    a1 = -a1;
    if ( !a1 )
      return 0LL;
    v3 = a2 > 0;
  }
  result = (a1 + (v2 >> 1)) / v2;
  if ( v3 )
    return (unsigned int)-(int)result;
  return result;
}
