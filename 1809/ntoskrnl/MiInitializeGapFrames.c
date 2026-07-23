/*
 * XREFs of MiInitializeGapFrames @ 0x1409D3020
 * Callers:
 *     MiInitNucleus @ 0x1409BA108 (MiInitNucleus.c)
 *     MiFillPfnGaps @ 0x1409D2FD0 (MiFillPfnGaps.c)
 * Callees:
 *     MiChargeResident @ 0x14002DF50 (MiChargeResident.c)
 *     MiReleasePtes @ 0x1400340E0 (MiReleasePtes.c)
 *     MiPteInShadowRange @ 0x14003D740 (MiPteInShadowRange.c)
 *     MiMakeValidPte @ 0x14003D7F0 (MiMakeValidPte.c)
 *     MiGetPage @ 0x140049D50 (MiGetPage.c)
 *     MiChargeCommit @ 0x14004CF20 (MiChargeCommit.c)
 *     MiReservePtes @ 0x14005C890 (MiReservePtes.c)
 *     MiWritePteShadow @ 0x140120F40 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140120FA0 (MiPteHasShadow.c)
 */

__int64 __fastcall MiInitializeGapFrames(__int64 a1, __int64 *a2)
{
  __int64 v3; // rsi
  ULONG_PTR v4; // r15
  unsigned int v5; // ebx
  __int64 *v6; // r14
  __int64 Page; // rax
  __int64 v8; // rcx
  unsigned __int64 v9; // rax
  int v10; // edi
  __int64 v11; // rdx
  unsigned __int64 v12; // r11
  int v13; // r8d
  __int64 v14; // rdi

  if ( a1 )
  {
    if ( a1 != -1 )
      return 0LL;
    v3 = qword_14043BE88;
  }
  else
  {
    v3 = qword_14043BEA0;
  }
  if ( (unsigned int)MiChargeResident(&MiSystemPartition, 3uLL, 0LL) )
  {
    if ( (unsigned int)MiChargeCommit((__int64)&MiSystemPartition, 3uLL, 1u) )
    {
      v4 = MiReservePtes((__int64)&qword_14043C060, (unsigned __int64 *)3);
      if ( v4 )
      {
        v5 = 0;
        v6 = a2;
        while ( !v5 )
        {
LABEL_15:
          *v6 = v3;
          ++v5;
          ++v6;
          if ( v5 >= 4 )
          {
            MiReleasePtes((__int64)&qword_14043C060, v4, 3u);
            return 1LL;
          }
        }
        Page = MiGetPage((__int64)&MiSystemPartition, v5, 0x208u);
        v3 = Page;
        if ( Page == -1 )
          return 0LL;
        v8 = 48 * Page - 0x58000000000LL;
        *(_QWORD *)(v8 + 40) &= ~0x200000000000000uLL;
        v9 = *(_QWORD *)(v8 + 24) & 0xC000000000000001uLL;
        *(_WORD *)(v8 + 32) = 1;
        *(_QWORD *)(v8 + 24) = v9 | 1;
        MiMakeValidPte(v4 + 8LL * v5, v3, -1610612732);
        v10 = 0;
        if ( !MiPteInShadowRange(v4 + 8LL * v5 - 8) )
        {
LABEL_10:
          *(_QWORD *)v12 = v11;
          if ( v10 )
            MiWritePteShadow(v12, v11);
          v13 = 536870913;
          v14 = (__int64)(v12 << 25) >> 16;
          if ( v5 != 1 )
          {
            v13 = -1476395004;
            v12 = 0LL;
          }
          memset64((void *)v14, MiMakeValidPte(v12, a2[v5 - 1], v13), 0x200uLL);
          goto LABEL_15;
        }
        if ( (unsigned int)MiPteHasShadow() )
        {
          v10 = 1;
          if ( HIBYTE(word_14043B26C) )
            goto LABEL_10;
        }
        else if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) == 0 )
        {
          goto LABEL_10;
        }
        if ( (v11 & 1) != 0 )
          v11 |= 0x8000000000000000uLL;
        goto LABEL_10;
      }
    }
  }
  return 0LL;
}
