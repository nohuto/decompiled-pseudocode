/*
 * XREFs of MxMapVa @ 0x1409F35B4
 * Callers:
 *     MxMapPfnRange @ 0x1409F3334 (MxMapPfnRange.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14002AC50 (MiPteInShadowRange.c)
 *     MiMakeValidPte @ 0x14002B050 (MiMakeValidPte.c)
 *     MiFillPteHierarchy @ 0x14005F0B0 (MiFillPteHierarchy.c)
 *     MiWritePteShadow @ 0x1400F8750 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1400F87B0 (MiPteHasShadow.c)
 *     MiFillPhysicalPages @ 0x14012C484 (MiFillPhysicalPages.c)
 *     KeZeroPages @ 0x1401C8590 (KeZeroPages.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     MxGetNextPage @ 0x1409F3930 (MxGetNextPage.c)
 */

__int64 __fastcall MxMapVa(__int64 a1)
{
  BOOL v2; // r14d
  int i; // edi
  unsigned __int64 v4; // rbx
  __int64 NextPage; // rdx
  __int64 v7; // rdx
  int v8; // r8d
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rbp
  __int64 v12; // rdx
  int v13; // r8d
  unsigned __int64 v14[7]; // [rsp+20h] [rbp-38h] BYREF

  memset(v14, 0, 0x20uLL);
  v2 = qword_14046A090 > 0x20000;
  MiFillPteHierarchy(*(_QWORD *)a1, v14);
  for ( i = 3; ; --i )
  {
    v4 = v14[i];
    if ( (*(_QWORD *)v4 & 1) == 0 )
      break;
    if ( !i )
      return 1LL;
    if ( (*(_QWORD *)v4 & 0x80u) != 0LL )
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
      qword_140466758 += 512LL;
      MiMakeValidPte(v4, NextPage, -1275068412);
      if ( !MiPteInShadowRange(v4) )
        goto LABEL_13;
      if ( (unsigned int)MiPteHasShadow() )
      {
        v8 = 1;
        if ( !HIBYTE(word_1404658EC) )
          goto LABEL_41;
      }
      else if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) != 0 )
      {
LABEL_41:
        if ( (v7 & 1) != 0 )
          v7 |= 0x8000000000000000uLL;
      }
LABEL_13:
      *(_QWORD *)v4 = v7;
      if ( v8 )
        MiWritePteShadow(v4);
      v9 = *(_DWORD *)(a1 + 12);
      if ( !v9 )
      {
        if ( v4 != ((*(_QWORD *)(a1 + 16) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL
          && v4 != ((*(_QWORD *)(a1 + 24) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL )
        {
          goto LABEL_18;
        }
        v9 = 1;
      }
      if ( v9 == 1 )
        KeZeroPages((__m128i *)((__int64)(v4 << 25) >> 16 << 25 >> 16), 0x200000uLL);
LABEL_18:
      *(_DWORD *)(a1 + 32) = 1;
      return 1LL;
    }
  }
  v11 = MxGetNextPage(*(unsigned int *)(a1 + 8), 0LL);
  if ( v11 != -1 )
  {
    ++qword_140466758;
    if ( i || *(_DWORD *)(a1 + 12) == 1 )
      MiFillPhysicalPages(v11, v10, 0LL);
    MiMakeValidPte(v4, v11, i != 0 ? -1744830460 : -1342177276);
    if ( !MiPteInShadowRange(v4) )
      goto LABEL_26;
    if ( (unsigned int)MiPteHasShadow() )
    {
      v13 = 1;
      if ( !HIBYTE(word_1404658EC) )
      {
LABEL_35:
        if ( (v12 & 1) != 0 )
          v12 |= 0x8000000000000000uLL;
      }
    }
    else if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) != 0 )
    {
      goto LABEL_35;
    }
LABEL_26:
    *(_QWORD *)v4 = v12;
    if ( v13 )
      MiWritePteShadow(v4);
    goto LABEL_5;
  }
  return 0LL;
}
