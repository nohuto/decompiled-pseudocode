/*
 * XREFs of MxMapVa @ 0x1409BC8F8
 * Callers:
 *     MxMapPfnRange @ 0x1409BC688 (MxMapPfnRange.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14003D740 (MiPteInShadowRange.c)
 *     MiMakeValidPte @ 0x14003D7F0 (MiMakeValidPte.c)
 *     MiFillPteHierarchy @ 0x140099020 (MiFillPteHierarchy.c)
 *     MiWritePteShadow @ 0x140120F40 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140120FA0 (MiPteHasShadow.c)
 *     MiFillPhysicalPages @ 0x14012B050 (MiFillPhysicalPages.c)
 *     KeZeroPages @ 0x1401C0A90 (KeZeroPages.c)
 *     MxGetNextPage @ 0x1409BCB2C (MxGetNextPage.c)
 */

__int64 __fastcall MxMapVa(__int64 a1)
{
  BOOL v2; // r15d
  char ValidPte; // bl
  int i; // esi
  unsigned __int64 v5; // rdi
  __int64 NextPage; // rdx
  __int64 v7; // rdx
  int v8; // r8d
  int v9; // eax
  ULONG_PTR v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rbp
  __int64 v14; // rdx
  int v15; // r8d
  unsigned __int64 v16[4]; // [rsp+20h] [rbp-48h] BYREF

  v2 = qword_14043F5D0 > 0x20000;
  MiFillPteHierarchy(*(_QWORD *)a1, v16);
  ValidPte = MiMakeValidPte(v16[3], 0LL, -1207959548);
  for ( i = 3; ; --i )
  {
    v5 = v16[i];
    if ( (*(_QWORD *)v5 & 1) == 0 )
      break;
    if ( !i )
      return 1LL;
    if ( (*(_QWORD *)v5 & 0x80u) != 0LL )
    {
      *(_DWORD *)(a1 + 32) = i;
      return 1LL;
    }
LABEL_5:
    if ( !i )
      return 1LL;
  }
  if ( i == 1 && v2 )
  {
    NextPage = MxGetNextPage(*(unsigned int *)(a1 + 8), 1LL);
    if ( NextPage != -1 )
    {
      qword_14043C100 += 512LL;
      MiMakeValidPte(v5, NextPage, -1275068412);
      if ( !MiPteInShadowRange(v5) )
        goto LABEL_11;
      if ( (unsigned int)MiPteHasShadow() )
      {
        v8 = 1;
        if ( !HIBYTE(word_14043B26C) )
          goto LABEL_41;
      }
      else if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) != 0 )
      {
LABEL_41:
        if ( (v7 & 1) != 0 )
          v7 |= 0x8000000000000000uLL;
      }
LABEL_11:
      *(_QWORD *)v5 = v7;
      if ( v8 )
        MiWritePteShadow(v5, v7);
      v9 = *(_DWORD *)(a1 + 12);
      if ( !v9 )
      {
        if ( v5 != ((*(_QWORD *)(a1 + 16) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL
          && v5 != ((*(_QWORD *)(a1 + 24) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL )
        {
          goto LABEL_16;
        }
        v9 = 1;
      }
      if ( v9 == 1 )
        KeZeroPages((__m128i *)((__int64)(v5 << 25) >> 16 << 25 >> 16), 0x200000uLL);
LABEL_16:
      *(_DWORD *)(a1 + 32) = 1;
      return 1LL;
    }
  }
  v11 = MxGetNextPage(*(unsigned int *)(a1 + 8), 0LL);
  v13 = v11;
  if ( v11 != -1LL )
  {
    ++qword_14043C100;
    if ( !i && *(_DWORD *)(a1 + 12) != 1 || (MiFillPhysicalPages(v11, v12, 0LL), !i) )
      ValidPte = MiMakeValidPte(v5, v13, -1342177276);
    if ( !MiPteInShadowRange(v5) )
      goto LABEL_26;
    if ( (unsigned int)MiPteHasShadow() )
    {
      v15 = 1;
      if ( !HIBYTE(word_14043B26C) )
      {
LABEL_35:
        if ( (ValidPte & 1) != 0 )
          v14 |= 0x8000000000000000uLL;
      }
    }
    else if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) != 0 )
    {
      goto LABEL_35;
    }
LABEL_26:
    *(_QWORD *)v5 = v14;
    if ( v15 )
      MiWritePteShadow(v5, v14);
    goto LABEL_5;
  }
  return 0LL;
}
