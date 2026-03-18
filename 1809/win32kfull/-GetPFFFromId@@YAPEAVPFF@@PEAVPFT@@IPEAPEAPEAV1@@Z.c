/*
 * XREFs of ?GetPFFFromId@@YAPEAVPFF@@PEAVPFT@@IPEAPEAPEAV1@@Z @ 0x1C012618C
 * Callers:
 *     NtGdiGetFontFileInfo @ 0x1C0125FD0 (NtGdiGetFontFileInfo.c)
 *     ?ChangeGhostFont@PUBLIC_PFTOBJ@@QEAAHPEAXH@Z @ 0x1C02565E8 (-ChangeGhostFont@PUBLIC_PFTOBJ@@QEAAHPEAXH@Z.c)
 *     NtGdiAddEmbFontToDC @ 0x1C0260960 (NtGdiAddEmbFontToDC.c)
 *     GreRemoveFontMemResourceEx @ 0x1C026F7E8 (GreRemoveFontMemResourceEx.c)
 *     NtGdiGetFontFileData @ 0x1C029D8B0 (NtGdiGetFontFileData.c)
 * Callees:
 *     ?SkipInvalidPff@@YAPEAVPFF@@PEAV1@@Z @ 0x1C015F17C (-SkipInvalidPff@@YAPEAVPFF@@PEAV1@@Z.c)
 *     ?pPvtDataMatch@PFFOBJ@@QEAAPEAUtagPvtData@@XZ @ 0x1C029D850 (-pPvtDataMatch@PFFOBJ@@QEAAPEAUtagPvtData@@XZ.c)
 */

struct PFF *__fastcall GetPFFFromId(struct PFT **a1, unsigned int a2, struct PFF ***a3)
{
  struct PFT **v4; // r10
  __int64 v5; // r9
  struct PFF *v7; // rcx
  struct PFF **v8; // rsi
  __int64 v9; // rax
  int v10; // edx
  unsigned int v11; // r8d
  int v12; // r9d
  __int64 v13; // rbx
  __int64 v14[3]; // [rsp+20h] [rbp-18h] BYREF

  v4 = a1;
  v5 = HIBYTE(a2);
  if ( (unsigned int)v5 >= *((_DWORD *)a1 + 6) )
    return 0LL;
  do
  {
    v7 = v4[v5 + 5];
    v8 = &v4[v5 + 5];
    while ( 1 )
    {
      v9 = (__int64)SkipInvalidPff(v7);
      v13 = v9;
      if ( !v9 || *(_DWORD *)(v9 + 140) == v10 )
        break;
      v7 = *(struct PFF **)(v9 + 8);
    }
    v5 = (unsigned int)(v12 + 256);
  }
  while ( (unsigned int)v5 < v11 );
  if ( v9 )
  {
    if ( v4 == gpPFTPrivate )
    {
      v14[0] = v9;
      v13 = -(__int64)(PFFOBJ::pPvtDataMatch((PFFOBJ *)v14) != 0LL) & v9;
    }
    if ( v13 )
    {
      if ( a3 )
        *a3 = v8;
    }
  }
  return (struct PFF *)v13;
}
