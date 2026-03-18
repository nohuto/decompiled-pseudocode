/*
 * XREFs of MiMapSinglePage @ 0x140154AD0
 * Callers:
 *     MiFillCombinePage @ 0x1401423BC (MiFillCombinePage.c)
 *     MiInitializeForkMaps @ 0x1402E4BC4 (MiInitializeForkMaps.c)
 *     MiUpdateForkMaps @ 0x1402E5060 (MiUpdateForkMaps.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14002A860 (MiPteInShadowRange.c)
 *     MiMakeValidPte @ 0x14002AC60 (MiMakeValidPte.c)
 *     MiMakeProtectionPfnCompatible @ 0x14002BDF0 (MiMakeProtectionPfnCompatible.c)
 *     MiReservePtes @ 0x140030210 (MiReservePtes.c)
 *     KeFlushSingleTb @ 0x14009F7D4 (KeFlushSingleTb.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400C5EE0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiWritePteShadow @ 0x1401223FC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14012245C (MiPteHasShadow.c)
 */

ULONG_PTR __fastcall MiMapSinglePage(unsigned __int64 a1, __int64 a2, int a3, char a4)
{
  unsigned __int64 v7; // rdi
  ULONG_PTR result; // rax
  _QWORD *v9; // rbx
  unsigned int v10; // eax
  char v11; // cl
  int ProtectionPfnCompatible; // eax
  __int64 v13; // rdx
  int v14; // r8d
  bool v15; // zf
  __int64 v17; // rdx
  unsigned int v18; // r8d
  unsigned int v19; // r11d

  v7 = a1;
  if ( a1 )
  {
    v9 = (_QWORD *)(((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    if ( !MI_READ_PTE_LOCK_FREE((unsigned __int64)v9) )
    {
LABEL_4:
      v10 = ((a3 >> 31) & 0xFFFFFFFD) + 4;
      v11 = v10 | 2;
      if ( (a3 & 0x40000000) != 0 )
        v11 = v10;
      ProtectionPfnCompatible = MiMakeProtectionPfnCompatible(v11, 48 * a2 - 0x58000000000LL);
      MiMakeValidPte((unsigned __int64)v9, a2, ProtectionPfnCompatible | 0xA0000000);
      goto LABEL_7;
    }
    if ( MiPteInShadowRange((unsigned __int64)v9) )
    {
      if ( (unsigned int)MiPteHasShadow() )
      {
        v18 = v19;
        if ( HIBYTE(word_140465BEC) )
          goto LABEL_25;
LABEL_23:
        if ( ((unsigned __int8)v17 & (unsigned __int8)v19) != 0 )
          v17 |= 0x8000000000000000uLL;
        goto LABEL_25;
      }
      if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) != 0 )
        goto LABEL_23;
    }
LABEL_25:
    *v9 = v17;
    if ( v18 )
      MiWritePteShadow((__int64)v9);
    KeFlushSingleTb(v7, 0, v19);
    goto LABEL_4;
  }
  result = MiReservePtes((__int64)&qword_1404669C0, (unsigned __int64 *)1);
  v9 = (_QWORD *)result;
  if ( !result )
    return result;
  v7 = (__int64)(result << 25) >> 16;
  if ( (a4 & 2) == 0 )
    goto LABEL_4;
LABEL_7:
  if ( MiPteInShadowRange((unsigned __int64)v9) )
  {
    if ( (unsigned int)MiPteHasShadow() )
    {
      v14 = 1;
      if ( HIBYTE(word_140465BEC) )
        goto LABEL_8;
      v15 = (v13 & 1) == 0;
    }
    else
    {
      if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) == 0 )
        goto LABEL_8;
      v15 = (v13 & 1) == 0;
    }
    if ( !v15 )
      v13 |= 0x8000000000000000uLL;
  }
LABEL_8:
  *v9 = v13;
  if ( v14 )
    MiWritePteShadow((__int64)v9);
  return v7;
}
