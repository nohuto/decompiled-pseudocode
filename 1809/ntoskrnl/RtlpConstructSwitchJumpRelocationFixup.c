/*
 * XREFs of RtlpConstructSwitchJumpRelocationFixup @ 0x1402F7E48
 * Callers:
 *     RtlApplySwitchJumpRelocationToPage @ 0x1402F6F1C (RtlApplySwitchJumpRelocationToPage.c)
 *     RtlPerformRetpolineRelocationsOnImageEx @ 0x1402F7294 (RtlPerformRetpolineRelocationsOnImageEx.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpConstructSwitchJumpRelocationFixup(
        int a1,
        _DWORD *a2,
        __int64 a3,
        unsigned __int16 *a4,
        int a5,
        __int64 a6)
{
  __int64 v7; // rdx
  unsigned __int16 v8; // ax
  unsigned int v9; // edx
  __int64 result; // rax
  __int64 v11; // rcx

  v7 = 0LL;
  *(_QWORD *)a6 = 0LL;
  *(_DWORD *)(a6 + 8) = 0;
  *(_QWORD *)(a6 + 2) = 0xCCCCCCCCCCCCCCCCuLL;
  *(_DWORD *)(a6 + 10) = -858993460;
  v8 = *a4;
  if ( a5 )
  {
    v9 = *a2 + *(_DWORD *)(a3 + 4 * ((unsigned __int64)v8 >> 12) + 4) - (a1 + 5);
    *(_WORD *)a6 = 63;
    *(_BYTE *)(a6 + 4) = BYTE1(v9);
    result = HIWORD(v9);
    *(_BYTE *)(a6 + 3) = v9;
    *(_BYTE *)(a6 + 6) = HIBYTE(v9);
    *(_BYTE *)(a6 + 2) = -24;
    *(_BYTE *)(a6 + 5) = BYTE2(v9);
    *(_BYTE *)(a6 + 7) = -52;
  }
  else
  {
    v11 = 0LL;
    if ( (v8 & 0xF000u) >= 0x8000 )
    {
      v7 = 1LL;
      *(_BYTE *)(a6 + 2) = 65;
      v11 = 1LL;
    }
    *(_BYTE *)(v11 + a6 + 2) = -1;
    *(_BYTE *)(v7 + a6 + 3) = (*a4 >> 12) & 7 | 0xE0;
    result = 63LL;
    *(_WORD *)a6 = 63;
  }
  return result;
}
