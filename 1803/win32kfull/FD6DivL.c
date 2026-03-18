/*
 * XREFs of FD6DivL @ 0x1C0133720
 * Callers:
 *     RaisePower @ 0x1C0133408 (RaisePower.c)
 *     AntiLog @ 0x1C0133528 (AntiLog.c)
 *     Log @ 0x1C0133680 (Log.c)
 *     ComputeBGRMappingTable @ 0x1C022F1B4 (ComputeBGRMappingTable.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall FD6DivL(int a1, int a2)
{
  BOOL v2; // r9d
  unsigned int v3; // r8d
  bool v4; // cc
  __int64 result; // rax

  v2 = a2 <= 0;
  v3 = -a2;
  v4 = a2 <= 0;
  if ( a2 <= 0 )
  {
    if ( !a2 )
      return (unsigned int)a1;
    v4 = a2 <= 0;
  }
  if ( !v4 )
    v3 = a2;
  if ( a1 <= 0 )
  {
    a1 = -a1;
    if ( !a1 )
      return 0LL;
    v2 = a2 > 0;
  }
  result = (a1 + (v3 >> 1)) / v3;
  if ( v2 )
    return (unsigned int)-(int)result;
  return result;
}
