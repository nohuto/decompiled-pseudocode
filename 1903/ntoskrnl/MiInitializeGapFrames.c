/*
 * XREFs of MiInitializeGapFrames @ 0x1409F4590
 * Callers:
 *     MiInitNucleus @ 0x1409F3DB8 (MiInitNucleus.c)
 *     MiFillPfnGaps @ 0x1409F4540 (MiFillPfnGaps.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14002A860 (MiPteInShadowRange.c)
 *     MiMakeValidPte @ 0x14002AC60 (MiMakeValidPte.c)
 *     MiReservePtes @ 0x140030210 (MiReservePtes.c)
 *     MiChargeCommit @ 0x1400521D0 (MiChargeCommit.c)
 *     MiReleasePtes @ 0x14006AEF0 (MiReleasePtes.c)
 *     MiChargeResident @ 0x1400A75A8 (MiChargeResident.c)
 *     MiGetPage @ 0x1400CFE40 (MiGetPage.c)
 *     MiWritePteShadow @ 0x1401223FC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14012245C (MiPteHasShadow.c)
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
    v3 = qword_140466848;
  }
  else
  {
    v3 = qword_140466860;
  }
  if ( (unsigned int)MiChargeResident(&MiSystemPartition, 3uLL, 0LL) )
  {
    if ( (unsigned int)MiChargeCommit((__int64)&MiSystemPartition, 3uLL, 1u) )
    {
      v4 = MiReservePtes((__int64)&qword_1404669C0, (unsigned __int64 *)3);
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
            MiReleasePtes((__int64)&qword_1404669C0, v4, 3u);
            return 1LL;
          }
        }
        Page = MiGetPage((__int64)&MiSystemPartition, v5, 520LL);
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
            MiWritePteShadow(v12);
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
          if ( HIBYTE(word_140465BEC) )
            goto LABEL_10;
        }
        else if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) == 0 )
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
