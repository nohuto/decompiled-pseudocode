/*
 * XREFs of vtfdQueryAdvanceWidths @ 0x1C022A1A4
 * Callers:
 *     vtfdQueryAdvanceWidthsTE @ 0x1C0228A60 (vtfdQueryAdvanceWidthsTE.c)
 * Callees:
 *     bReconnectVtfdFont @ 0x1C0229E74 (bReconnectVtfdFont.c)
 *     vtfdOpenFontContext @ 0x1C022A940 (vtfdOpenFontContext.c)
 */

__int64 __fastcall vtfdQueryAdvanceWidths(__int64 a1, __int64 a2, int *a3, _WORD *a4, unsigned int a5)
{
  __int64 v7; // rcx
  __int64 v10; // r8
  __int64 v11; // rax
  __int64 v12; // r9
  __int64 v13; // r10
  int v14; // eax

  v7 = *(_QWORD *)(a1 + 24);
  if ( (*(_DWORD *)(v7 + 28) & 1) != 0 && !(unsigned int)bReconnectVtfdFont(v7) )
    return 0xFFFFFFFFLL;
  v10 = *(_QWORD *)(a1 + 56);
  if ( !v10 )
  {
    v11 = vtfdOpenFontContext(a1);
    *(_QWORD *)(a1 + 56) = v11;
    v10 = v11;
    if ( !v11 )
      return 0xFFFFFFFFLL;
  }
  v12 = **(_QWORD **)(v10 + 112);
  if ( a5 )
  {
    v13 = a5;
    do
    {
      v14 = *a3++;
      *a4++ = ((int)(float)((float)(*(unsigned __int8 *)(v12 + (unsigned int)(4 * v14) + 119) | (*(unsigned __int8 *)(v12 + (unsigned int)(4 * v14) + 120) << 8))
                          * *(float *)(v10 + 40))
             + 8) & 0xFFF0;
      --v13;
    }
    while ( v13 );
  }
  return 1LL;
}
