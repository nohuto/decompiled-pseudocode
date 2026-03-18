/*
 * XREFs of WPUpdateCheckPointSettings @ 0x1C0065010
 * Callers:
 *     xxxSetWindowPlacement @ 0x1C0065970 (xxxSetWindowPlacement.c)
 *     xxxProcessShowWindowEvent @ 0x1C0111D1C (xxxProcessShowWindowEvent.c)
 * Callees:
 *     UpdateCheckpoint @ 0x1C00669AC (UpdateCheckpoint.c)
 */

__int64 __fastcall WPUpdateCheckPointSettings(__int64 a1, char a2)
{
  __int64 result; // rax
  int v4; // ecx
  unsigned int v5; // ecx

  result = UpdateCheckpoint();
  if ( result )
  {
    if ( (a2 & 1) != 0 )
      *(_DWORD *)(result + 48) |= 1u;
    v4 = *(_DWORD *)(result + 48);
    if ( (a2 & 2) != 0 )
      v5 = v4 | 2;
    else
      v5 = v4 & 0xFFFFFFFD;
    *(_DWORD *)(result + 48) = v5;
  }
  return result;
}
