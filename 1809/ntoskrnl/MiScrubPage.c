/*
 * XREFs of MiScrubPage @ 0x1402CFB40
 * Callers:
 *     MiScrubAwePage @ 0x1402B1E4C (MiScrubAwePage.c)
 *     MiScrubNodeLargePageList @ 0x1402CCD80 (MiScrubNodeLargePageList.c)
 *     MiScrubLargeMappedPage @ 0x1402CF428 (MiScrubLargeMappedPage.c)
 *     MiScrubNode @ 0x1402CF8B8 (MiScrubNode.c)
 *     MiScrubNonPagedPool @ 0x140850338 (MiScrubNonPagedPool.c)
 * Callees:
 *     MiMakeProtectionPfnCompatible @ 0x14002DDB4 (MiMakeProtectionPfnCompatible.c)
 *     MiGetUltraMapping @ 0x14003A740 (MiGetUltraMapping.c)
 *     MiPteInShadowRange @ 0x14003D740 (MiPteInShadowRange.c)
 *     MiMakeValidPte @ 0x14003D7F0 (MiMakeValidPte.c)
 *     MiWritePteShadow @ 0x140120F40 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140120FA0 (MiPteHasShadow.c)
 *     KeCopyPage @ 0x1401C0B30 (KeCopyPage.c)
 *     RtlScrubMemory @ 0x1402F807C (RtlScrubMemory.c)
 */

__int64 __fastcall MiScrubPage(unsigned __int64 *a1, __int64 a2, unsigned __int64 a3, char a4)
{
  unsigned __int64 UltraMapping; // rsi
  __int64 *v9; // rbx
  int ProtectionPfnCompatible; // eax
  __int64 v11; // rdx
  int v12; // r8d
  __int64 v13; // rdi
  unsigned int v14; // r15d
  __int64 v15; // rdx
  int v16; // r8d

  if ( a3 )
  {
    UltraMapping = a3;
    v9 = 0LL;
    goto LABEL_12;
  }
  UltraMapping = MiGetUltraMapping(a1 + 12, 3u, 1LL, 0);
  v9 = (__int64 *)(((UltraMapping >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  ProtectionPfnCompatible = MiMakeProtectionPfnCompatible(4, a2);
  MiMakeValidPte((unsigned __int64)v9, (a2 + 0x58000000000LL) / 48, ProtectionPfnCompatible | 0xA0000000);
  if ( MiPteInShadowRange((unsigned __int64)v9) )
  {
    if ( (unsigned int)MiPteHasShadow() )
    {
      v12 = 1;
      if ( !HIBYTE(word_14043B26C) )
      {
LABEL_8:
        if ( (v11 & 1) != 0 )
          v11 |= 0x8000000000000000uLL;
      }
    }
    else if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) != 0 )
    {
      goto LABEL_8;
    }
  }
  *v9 = v11;
  if ( v12 )
    MiWritePteShadow((__int64)v9, v11);
LABEL_12:
  if ( (a4 & 1) != 0 )
  {
    v13 = a1[19];
    KeCopyPage(v13, UltraMapping);
  }
  else
  {
    v13 = 0LL;
  }
  v14 = RtlScrubMemory((PVOID)UltraMapping);
  if ( v13 )
    KeCopyPage(UltraMapping, v13);
  if ( !a3 )
  {
    if ( MiPteInShadowRange((unsigned __int64)v9) )
    {
      if ( (unsigned int)MiPteHasShadow() )
      {
        v16 = 1;
        if ( !HIBYTE(word_14043B26C) )
        {
LABEL_23:
          if ( (v15 & 1) != 0 )
            v15 |= 0x8000000000000000uLL;
        }
      }
      else if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) != 0 )
      {
        goto LABEL_23;
      }
    }
    *v9 = v15;
    if ( v16 )
      MiWritePteShadow((__int64)v9, v15);
  }
  ++a1[21];
  return v14;
}
