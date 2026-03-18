/*
 * XREFs of WPUpdateCheckPointSettings @ 0x1C0011190
 * Callers:
 *     xxxSetWindowPlacement @ 0x1C0012ED8 (xxxSetWindowPlacement.c)
 *     xxxProcessShowWindowEvent @ 0x1C011A840 (xxxProcessShowWindowEvent.c)
 * Callees:
 *     UpdateCheckpoint @ 0x1C00143E8 (UpdateCheckpoint.c)
 */

__int64 __fastcall WPUpdateCheckPointSettings(__int64 a1, char a2)
{
  __int64 result; // rax
  int v4; // ecx
  unsigned int v5; // ecx

  result = UpdateCheckpoint();
  if ( result )
  {
    v4 = *(_DWORD *)(result + 48);
    if ( (a2 & 1) != 0 )
      v4 |= 1u;
    if ( (a2 & 2) != 0 )
      v5 = v4 | 2;
    else
      v5 = v4 & 0xFFFFFFFD;
    *(_DWORD *)(result + 48) = v5;
  }
  return result;
}
