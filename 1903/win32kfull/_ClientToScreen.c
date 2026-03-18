/*
 * XREFs of _ClientToScreen @ 0x1C0259FC8
 * Callers:
 *     ?xxxTrackInitSize@@YAHPEAUtagWND@@I_K_JPEAU_MOVESIZEDATA@@@Z @ 0x1C020010C (-xxxTrackInitSize@@YAHPEAUtagWND@@I_K_JPEAU_MOVESIZEDATA@@@Z.c)
 *     xxxSBWndProc @ 0x1C0242BA0 (xxxSBWndProc.c)
 *     ?xxxQueryDropObject@@YAPEAUtagCURSOR@@PEAUtagWND@@PEAUtagDROPSTRUCT@@@Z @ 0x1C0247848 (-xxxQueryDropObject@@YAPEAUtagCURSOR@@PEAUtagWND@@PEAUtagDROPSTRUCT@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ClientToScreen(__int64 a1, int *a2)
{
  __int64 v2; // r8
  __int64 result; // rax
  int v4; // ecx
  int v5; // eax

  v2 = *(_QWORD *)(a1 + 40);
  result = *(_WORD *)(v2 + 42) & 0x3FFF;
  if ( (_DWORD)result != 669 )
  {
    v4 = *a2;
    if ( (*(_BYTE *)(v2 + 26) & 0x40) != 0 )
      v5 = *(_DWORD *)(v2 + 112) - v4;
    else
      v5 = v4 + *(_DWORD *)(v2 + 104);
    *a2 = v5;
    result = *(unsigned int *)(v2 + 108);
    a2[1] += result;
  }
  return result;
}
