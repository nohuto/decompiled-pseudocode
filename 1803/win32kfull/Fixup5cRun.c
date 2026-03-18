/*
 * XREFs of Fixup5cRun @ 0x1C0217BB4
 * Callers:
 *     cjComputeGLYPHSET_MSFT_UNICODE @ 0x1C021B374 (cjComputeGLYPHSET_MSFT_UNICODE.c)
 * Callees:
 *     fs_WinNTGetGlyphIDs @ 0x1C02B2004 (fs_WinNTGetGlyphIDs.c)
 */

__int64 __fastcall Fixup5cRun(int a1, _WORD *a2, _WORD *a3, __int64 a4, __int64 *a5)
{
  _WORD *v5; // r10
  int v7; // r8d
  __int64 result; // rax
  unsigned __int16 v12; // cx
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int16 v15; // ax

  v5 = *(_WORD **)a4;
  v7 = (unsigned __int16)*a2;
  if ( (_WORD)v7 == 92 )
  {
    *a2 = 93;
    result = 1LL;
    ++*v5;
    --v5[1];
    return result;
  }
  if ( *a3 == 92 )
  {
    --v5[1];
    *a3 = 91;
  }
  else
  {
    v12 = 92 - *v5;
    v5[1] = v12;
    if ( (unsigned int)fs_WinNTGetGlyphIDs(a1, v12, v7, 0, 0LL, *a5) )
      return 0LL;
    v13 = *(_QWORD *)a4 + 16LL;
    *a5 += 4LL * *(unsigned __int16 *)(*(_QWORD *)a4 + 2LL);
    v14 = *a5;
    *(_WORD *)v13 = 93;
    *a2 = 93;
    v15 = *a3 - 92;
    *(_QWORD *)a4 = v13;
    *(_WORD *)(v13 + 2) = v15;
    *(_QWORD *)(v13 + 8) = v14;
  }
  return 1LL;
}
