/*
 * XREFs of ttfdOpenFontContextInternal @ 0x1C0223254
 * Callers:
 *     ttfdOpenFontContext @ 0x1C02231EC (ttfdOpenFontContext.c)
 * Callees:
 *     EngMapFontFileFDInternal @ 0x1C00BF524 (EngMapFontFileFDInternal.c)
 *     EngUnmapFontFileFD @ 0x1C00FF9A0 (EngUnmapFontFileFD.c)
 *     bInitInAndOut @ 0x1C02227F4 (bInitInAndOut.c)
 *     bNewXform @ 0x1C0222920 (bNewXform.c)
 *     vGetMinD @ 0x1C02237E8 (vGetMinD.c)
 */

PVOID __fastcall ttfdOpenFontContextInternal(__int64 a1)
{
  __int64 v1; // rdi
  int v2; // ebx
  PVOID result; // rax
  __int64 v5; // rax
  ULONG_PTR v6; // rbp
  __int64 v7; // r15
  __int64 v8; // rbx
  unsigned int v9; // r8d
  unsigned int v10; // ecx
  PVOID v11; // rax
  _QWORD *v12; // rax
  PVOID v13; // rsi

  v1 = *(_QWORD *)(a1 + 24);
  v2 = *(_DWORD *)(a1 + 4);
  if ( !v1 )
    return 0LL;
  v5 = *(_QWORD *)(v1 + 48);
  v6 = *(_QWORD *)(v5 + 56);
  if ( !*(_DWORD *)v1
    && !(unsigned int)EngMapFontFileFDInternal(
                        *(struct _FILEVIEW **)(v5 + 56),
                        (_QWORD *)(v1 + 16),
                        (_DWORD *)(v1 + 24),
                        1) )
  {
    return 0LL;
  }
  v7 = (unsigned int)(v2 - 1);
  v8 = *(_QWORD *)(v1 + 16 * (v7 + 3));
  if ( !*(_DWORD *)(v8 + 48) )
  {
    v9 = *(_DWORD *)(v8 + 292);
    v10 = v9 + *(_DWORD *)(v8 + 296);
    *(_QWORD *)(v8 + 64) = *(_QWORD *)(v1 + 16);
    *(_DWORD *)(v8 + 72) = *(_DWORD *)(v1 + 24);
    if ( v10 < v9
      || v10 + 1576 < v10
      || (v11 = EngAllocMem(0, v10 + 1576, 0x64667454u), (*(_QWORD *)(v8 + 24) = v11) == 0LL) )
    {
      if ( !*(_DWORD *)v1 )
        EngUnmapFontFileFD(v6);
      return 0LL;
    }
    if ( !(unsigned int)bInitInAndOut(v8) )
    {
      if ( !*(_DWORD *)v1 )
        EngUnmapFontFileFD(v6);
LABEL_12:
      EngFreeMem(*(PVOID *)(v8 + 24));
      *(_QWORD *)(v8 + 24) = 0LL;
      return 0LL;
    }
    if ( !*(_WORD *)(v8 + 324) )
      vGetMinD(v8);
  }
  v12 = EngAllocMem(0, 0x198u, 0x64667454u);
  *(_QWORD *)(v8 + 40) = v12;
  v13 = v12;
  if ( !v12 )
  {
LABEL_16:
    if ( !*(_DWORD *)v1 )
      EngUnmapFontFileFD(v6);
    if ( *(_DWORD *)(v8 + 48) )
      return 0LL;
    goto LABEL_12;
  }
  *v12 = a1;
  v12[1] = v8;
  v12[24] = v8 + 112;
  *((_DWORD *)v12 + 10) = *(_DWORD *)(a1 + 12);
  *(_QWORD *)((char *)v12 + 44) = *(_QWORD *)(a1 + 32);
  *((_DWORD *)v12 + 13) = *(_DWORD *)(a1 + 40);
  v12[22] = *(_QWORD *)(v8 + 24);
  v12[23] = *(_QWORD *)(v8 + 24) + 168LL;
  *((_DWORD *)v12 + 77) = (*(_DWORD *)(v1 + 16 * v7 + 44) & 1) == 0;
  if ( !(unsigned int)bNewXform((XFORMOBJ *)a1, (__int64)v12) )
  {
    EngFreeMem(v13);
    *(_QWORD *)(v8 + 40) = 0LL;
    goto LABEL_16;
  }
  *((_DWORD *)v13 + 76) = 0;
  *((_WORD *)v13 + 201) = -1;
  result = v13;
  ++*(_DWORD *)(v8 + 48);
  *(_QWORD *)(v8 + 40) = 0LL;
  ++*(_DWORD *)v1;
  return result;
}
