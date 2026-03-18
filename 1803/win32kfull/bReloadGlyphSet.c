/*
 * XREFs of bReloadGlyphSet @ 0x1C021A0A4
 * Callers:
 *     ttfdQueryFontTree @ 0x1C02209FC (ttfdQueryFontTree.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     memmove @ 0x1C013D380 (memmove.c)
 *     bLoadGlyphSet @ 0x1C0219808 (bLoadGlyphSet.c)
 *     vGetVerticalGSet @ 0x1C021D258 (vGetVerticalGSet.c)
 *     fs_Initialize @ 0x1C02B1B94 (fs_Initialize.c)
 *     fs_NewSfnt @ 0x1C02B1E24 (fs_NewSfnt.c)
 *     fs_OpenFonts @ 0x1C02B1F28 (fs_OpenFonts.c)
 */

__int64 __fastcall bReloadGlyphSet(__int64 a1, int a2)
{
  unsigned int v6; // edi
  int v7; // eax
  int v9; // eax
  ULONG *v10; // rdx
  __int64 v11; // rcx
  PVOID v12; // rax
  bool v13; // zf
  __int64 v14; // rcx
  PVOID v15; // rax
  __int64 v16; // r14
  void *v17; // rcx
  __int64 v18; // rdx
  unsigned int v19; // r12d
  __int64 v20; // rax
  void *v21; // rcx
  void *v22; // rcx
  int v23; // [rsp+3Ch] [rbp-14Ch]
  __int128 v24; // [rsp+50h] [rbp-138h] BYREF
  _BYTE v25[240]; // [rsp+60h] [rbp-128h] BYREF

  v6 = 0;
  v23 = 0;
  if ( a2 == 1 )
  {
    v7 = *(_DWORD *)(a1 + 104);
    if ( v7 )
    {
      *(_DWORD *)(a1 + 104) = v7 + 1;
      return 1LL;
    }
  }
  else
  {
    v9 = *(_DWORD *)(a1 + 108);
    if ( v9 )
    {
      *(_DWORD *)(a1 + 108) = v9 + 1;
      return 1LL;
    }
  }
  if ( a2 != 1 )
  {
    v10 = *(ULONG **)(a1 + 88);
    if ( v10 )
    {
      if ( !*(_DWORD *)(a1 + 48) )
      {
        v11 = *(_QWORD *)a1;
        *(_QWORD *)(a1 + 64) = *(_QWORD *)(v11 + 16);
        *(_DWORD *)(a1 + 72) = *(_DWORD *)(v11 + 24);
      }
      v12 = EngAllocMem(0, *v10, 0x64667454u);
      *(_QWORD *)(a1 + 96) = v12;
      v13 = v12 == 0LL;
      if ( v12 )
      {
        memmove(v12, *(const void **)(a1 + 88), **(unsigned int **)(a1 + 88));
        vGetVerticalGSet(*(_QWORD *)(a1 + 88), a1);
        *(_DWORD *)(a1 + 108) = 1;
        v13 = *(_QWORD *)(a1 + 96) == 0LL;
      }
      LOBYTE(v6) = !v13;
      return v6;
    }
  }
  if ( *(_DWORD *)(a1 + 48) )
  {
    v16 = *(_QWORD *)(a1 + 24);
  }
  else
  {
    v14 = *(_QWORD *)a1;
    *(_QWORD *)(a1 + 64) = *(_QWORD *)(v14 + 16);
    *(_DWORD *)(a1 + 72) = *(_DWORD *)(v14 + 24);
    v15 = EngAllocMem(0, 0x538u, 0x64667454u);
    v16 = (__int64)v15;
    if ( !v15 )
      return 0LL;
    v23 = 1;
    if ( (unsigned int)fs_OpenFonts(v15, v25) )
    {
LABEL_18:
      EngFreeMem(v17);
      return 0LL;
    }
    *(_QWORD *)(v16 + 8) = v16 + 168;
    *(_QWORD *)(v16 + 16) = 0LL;
    *(_QWORD *)(v16 + 24) = 0LL;
    if ( (unsigned int)fs_Initialize(v17, v25)
      || (*(_QWORD *)(v16 + 80) = *(_QWORD *)(a1 + 64),
          *(_QWORD *)(v16 + 96) = a1,
          *(_DWORD *)(v16 + 88) = 1,
          *(_DWORD *)(v16 + 92) = 1,
          *(_WORD *)(v16 + 104) = *(_WORD *)(a1 + 310),
          *(_WORD *)(v16 + 106) = *(_WORD *)(a1 + 312),
          (unsigned int)fs_NewSfnt(v16, v25)) )
    {
      v17 = (void *)v16;
      goto LABEL_18;
    }
  }
  v18 = *(_QWORD *)(a1 + 64) + *(unsigned int *)(a1 + 304);
  v24 = *(_OWORD *)(a1 + 332);
  v19 = 0;
  v20 = 88LL;
  if ( a2 != 1 )
    v20 = 96LL;
  if ( (unsigned int)bLoadGlyphSet(a1, v18, v16, (__int64)&v24, (PVOID *)(a1 + v20)) )
  {
    if ( a2 != 1 )
      vGetVerticalGSet(*(_QWORD *)(a1 + 96), a1);
    v19 = 1;
  }
  if ( v23 )
    EngFreeMem((PVOID)v16);
  if ( v19 )
  {
    if ( a2 == 1 )
      *(_DWORD *)(a1 + 104) = 1;
    else
      *(_DWORD *)(a1 + 108) = 1;
  }
  else if ( a2 == 1 )
  {
    v22 = *(void **)(a1 + 88);
    if ( v22 )
    {
      EngFreeMem(v22);
      *(_QWORD *)(a1 + 88) = 0LL;
    }
  }
  else
  {
    v21 = *(void **)(a1 + 96);
    if ( v21 )
    {
      EngFreeMem(v21);
      *(_QWORD *)(a1 + 96) = 0LL;
    }
  }
  return v19;
}
