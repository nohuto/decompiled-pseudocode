/*
 * XREFs of vtfdOpenFontContext @ 0x1C022A940
 * Callers:
 *     vtfdQueryAdvanceWidths @ 0x1C022A1A4 (vtfdQueryAdvanceWidths.c)
 *     vtfdQueryFontData @ 0x1C022A290 (vtfdQueryFontData.c)
 * Callees:
 *     EngMapFontFileFDInternal @ 0x1C00BF524 (EngMapFontFileFDInternal.c)
 *     EngUnmapFontFileFD @ 0x1C00FF9A0 (EngUnmapFontFileFD.c)
 *     bInitXform @ 0x1C022A630 (bInitXform.c)
 */

_QWORD *__fastcall vtfdOpenFontContext(__int64 a1)
{
  __int64 v1; // rbx
  unsigned int v3; // eax
  __int64 i; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdx
  int v7; // ebp
  _QWORD *v8; // rax
  _QWORD *v9; // rdi
  _QWORD *result; // rax
  __int64 v11; // rax
  int v12; // eax
  int v13; // ecx

  v1 = *(_QWORD *)(a1 + 24);
  if ( !v1 )
    return 0LL;
  v3 = *(_DWORD *)(a1 + 4);
  if ( !v3 || v3 > *(_DWORD *)(v1 + 36) )
    return 0LL;
  if ( !*(_DWORD *)(v1 + 32) )
  {
    if ( !(unsigned int)EngMapFontFileFDInternal(
                          *(struct _FILEVIEW **)(v1 + 8),
                          (_QWORD *)(v1 + 16),
                          (_DWORD *)(v1 + 24),
                          1) )
      return 0LL;
    for ( i = 0LL;
          (unsigned int)i < *(_DWORD *)(v1 + 36);
          *(_QWORD *)(v1 + 16 * v5 + 40) = *(_QWORD *)(v1 + 16) + *(int *)(v1 + 16 * v5 + 48) )
    {
      v5 = 3 * i;
      i = (unsigned int)(i + 1);
    }
  }
  v6 = *(_QWORD *)(v1 + 48LL * (unsigned int)(*(_DWORD *)(a1 + 4) - 1) + 40);
  v7 = *(unsigned __int8 *)(v6 + 113) | ((*(unsigned __int8 *)(v6 + 114) | (*(unsigned __int16 *)(v6 + 115) << 8)) << 8);
  v8 = EngAllocMem(0, 0x80u, 0x64667456u);
  v9 = v8;
  if ( !v8 )
  {
    if ( !*(_DWORD *)(v1 + 32) )
      EngUnmapFontFileFD(*(_QWORD *)(v1 + 8));
    return 0LL;
  }
  v8[14] = 48LL * (unsigned int)(*(_DWORD *)(a1 + 4) - 1) + v1 + 40;
  v11 = *(_QWORD *)(v1 + 48LL * (unsigned int)(*(_DWORD *)(a1 + 4) - 1) + 80);
  *((_DWORD *)v9 + 30) = 0;
  v9[1] = v11;
  v12 = 0;
  v13 = *(_DWORD *)(a1 + 12);
  if ( (v13 & 0x2000) != 0 )
  {
    *((_DWORD *)v9 + 30) = 1;
    v12 = 1;
    v13 = *(_DWORD *)(a1 + 12);
  }
  if ( (v13 & 0x4000) != 0 )
    *((_DWORD *)v9 + 30) = v12 | 2;
  *((_DWORD *)v9 + 31) = v7;
  if ( !(unsigned int)bInitXform((__int64)v9, (XFORMOBJ *)(a1 + 208)) )
  {
    if ( !*(_DWORD *)(v1 + 32) )
      EngUnmapFontFileFD(*(_QWORD *)(v1 + 8));
    EngFreeMem(v9);
    return 0LL;
  }
  *v9 = v1;
  result = v9;
  ++*(_DWORD *)(v1 + 32);
  return result;
}
