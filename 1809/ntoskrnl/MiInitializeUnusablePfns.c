/*
 * XREFs of MiInitializeUnusablePfns @ 0x14017F18C
 * Callers:
 *     MiInitializeDynamicPfns @ 0x1402A68F4 (MiInitializeDynamicPfns.c)
 *     MiInitializeDynamicPfnsTarget @ 0x1402A6CB0 (MiInitializeDynamicPfnsTarget.c)
 *     MiSwitchToPfns @ 0x1409BB954 (MiSwitchToPfns.c)
 * Callees:
 *     MiLockPageInline @ 0x14002CE40 (MiLockPageInline.c)
 *     MiPteInShadowRange @ 0x14003D740 (MiPteInShadowRange.c)
 *     MiSwizzleInvalidPte @ 0x14003D7C0 (MiSwizzleInvalidPte.c)
 *     MiMakeValidPte @ 0x14003D7F0 (MiMakeValidPte.c)
 *     KeYieldProcessorEx @ 0x14006C9E0 (KeYieldProcessorEx.c)
 *     MiGetContainingPageTable @ 0x140079840 (MiGetContainingPageTable.c)
 *     MiPageToChannel @ 0x14009CF2C (MiPageToChannel.c)
 *     MiPageToNode @ 0x14009CF50 (MiPageToNode.c)
 *     MiWritePteShadow @ 0x140120F40 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140120FA0 (MiPteHasShadow.c)
 *     MiSetPageTablePfnBuddy @ 0x14013DAA8 (MiSetPageTablePfnBuddy.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x1401D1980 (memset.c)
 */

__int64 __fastcall MiInitializeUnusablePfns(
        _OWORD *a1,
        unsigned __int64 a2,
        unsigned __int16 a3,
        char a4,
        __int64 a5,
        unsigned __int64 a6,
        char a7)
{
  _OWORD *v10; // r15
  unsigned __int8 v11; // r12
  int v12; // r13d
  __int64 v13; // r10
  unsigned __int8 v14; // al
  unsigned __int64 v15; // rdx
  __int64 v16; // rdx
  __int64 result; // rax
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  __int128 v20; // xmm2
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned int v22; // r12d
  __int64 v23; // rax
  _QWORD *v24; // r14
  unsigned int v25; // r12d
  __int64 v26; // r11
  __int64 ContainingPageTable; // rax
  __int64 v28; // rsi
  __int64 v29; // r11
  unsigned __int64 ValidPte; // rax
  __int64 v31; // r8
  __int64 v32; // rdx
  __int128 v33; // xmm1
  __int128 v34; // xmm0
  BOOL v35; // eax
  __int64 v36; // rdx
  __int64 v37; // r11
  unsigned __int8 v38; // r9
  unsigned int v39; // r9d
  unsigned int v40; // r9d
  _OWORD v41[3]; // [rsp+20h] [rbp-30h] BYREF
  int v44; // [rsp+A8h] [rbp+58h] BYREF

  memset(v41, 0, sizeof(v41));
  v10 = &a1[3 * a2];
  v11 = MiLockPageInline((__int64)v41);
  v12 = 6;
  if ( a4 < 0 )
  {
    *((_QWORD *)&v41[0] + 1) = 0LL;
    *((_QWORD *)&v41[2] + 1) = *((_QWORD *)&v41[2] + 1) & 0xFE3FFFFFFFFFFFFFuLL | 0xC0000000000000LL;
    _InterlockedExchangeAdd64(&qword_14043B240, a2);
  }
  else if ( (a4 & 0x40) != 0 )
  {
    *((_QWORD *)&v41[0] + 1) = 0xFFFFF68000000000uLL;
  }
  else if ( (a4 & 2) != 0 )
  {
    if ( (a7 & 2) != 0 )
    {
      v12 = 2;
    }
    else
    {
      LOWORD(v41[2]) = 1;
      *((_QWORD *)&v41[1] + 1) = *((_QWORD *)&v41[1] + 1) & 0xC000000000000000uLL | 1;
    }
  }
  else
  {
    v12 = 5;
  }
  BYTE2(v41[2]) = v12 | BYTE2(v41[2]) & 0xF8;
  BYTE2(v41[2]) = BYTE2(v41[2]) & 0x3F | 0x40;
  *((_QWORD *)&v41[2] + 1) ^= (*((_QWORD *)&v41[2] + 1) ^ ((unsigned __int64)a3 << 40)) & 0x3FF0000000000LL;
  v13 = (unsigned int)MiPageToNode((__int64)(a1 + 0x5800000000LL) / 48, 0);
  if ( (a4 & 2) != 0 )
    v14 = 0;
  else
    v14 = MiPageToChannel((__int64)(a1 + 0x5800000000LL) / 48);
  *((_QWORD *)&v41[2] + 1) = *((_QWORD *)&v41[2] + 1) & 0x3FFFFFFFFFFFFFFLL | (v13 << 58);
  v15 = *((_QWORD *)&v41[2] + 1) ^ (*((_QWORD *)&v41[2] + 1) ^ ((unsigned __int64)v14 << 36)) & 0x3000000000LL;
  if ( (a4 & 0xC0) != 0 )
  {
    *((_QWORD *)&v41[1] + 1) = *((_QWORD *)&v41[1] + 1) & 0xC000000000000000uLL | 1;
    *(_QWORD *)&v41[1] = MiSwizzleInvalidPte(128LL);
    *((_QWORD *)&v41[2] + 1) = v16 & 0xFFFFFFF000000000uLL | 0xFFFFFFFFDLL;
    MiSetPageTablePfnBuddy((__int64)v41, (__int64)KeGetCurrentThread()->ApcState.Process, 1);
    *((_QWORD *)&v41[1] + 1) |= 0x4000000000000000uLL;
    LOWORD(v41[2]) = 2;
    _InterlockedExchangeAdd64(&qword_14043C0D8, a2);
    v15 = *((_QWORD *)&v41[2] + 1);
  }
  *((_QWORD *)&v41[2] + 1) = v15 | 0x20000000000000LL;
  _InterlockedAnd64((volatile signed __int64 *)&v41[1] + 1, 0x7FFFFFFFFFFFFFFFuLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v11 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  result = v11;
  __writecr8(v11);
  if ( (a4 & 2) != 0 )
  {
    v22 = *(unsigned __int16 *)(a5 + 32);
    v23 = MiSwizzleInvalidPte(16 * ((a5 << 12) | *(_WORD *)(a5 + 32) & 0x3E | 0x40));
    v24 = (_QWORD *)a6;
    *(_QWORD *)&v41[1] = v23;
    v25 = (v22 >> 1) & 0x1F;
    *((_QWORD *)&v41[2] + 1) = v26 | 0x200000000000000LL;
    ContainingPageTable = MiGetContainingPageTable(a6);
    v28 = 48 * ContainingPageTable - 0x58000000000LL;
    *((_QWORD *)&v41[2] + 1) = v29 ^ (ContainingPageTable ^ v29) & 0xFFFFFFFFFLL;
    if ( v12 == 6 )
      ValidPte = MiMakeValidPte((unsigned __int64)v24, (__int64)(a1 + 0x5800000000LL) / 48, v25);
    else
      ValidPte = MiSwizzleInvalidPte(32 * (((((__int64)(a1 + 0x5800000000LL) / 48) & 0xFFFFFFFFFLL) << 7) | v25 | 0x40));
    v32 = ValidPte;
    if ( a1 == v10 )
    {
LABEL_43:
      v44 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v28 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v44, v32, v31);
        while ( *(__int64 *)(v28 + 24) < 0 );
      }
      result = 0x7FFFFFFFFFFFFFFFLL;
      *(_QWORD *)(v28 + 24) ^= (*(_QWORD *)(v28 + 24) ^ (*(_QWORD *)(v28 + 24) + a2)) & 0x3FFFFFFFFFFFFFFFLL;
      _InterlockedAnd64((volatile signed __int64 *)(v28 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      return result;
    }
    while ( 1 )
    {
      v33 = v41[1];
      *((_QWORD *)&v41[0] + 1) = v24;
      *a1 = v41[0];
      v34 = v41[2];
      a1[1] = v33;
      a1[2] = v34;
      v35 = MiPteInShadowRange((unsigned __int64)v24);
      v31 = 0LL;
      if ( ((unsigned __int8)v36 & v38) == 0 )
      {
        if ( v35 && (unsigned int)MiPteHasShadow() )
          v31 = v40;
        goto LABEL_40;
      }
      if ( v35 )
      {
        if ( (unsigned int)MiPteHasShadow() )
        {
          v31 = v39;
          if ( HIBYTE(word_14043B26C) )
            goto LABEL_40;
LABEL_36:
          v36 |= 0x8000000000000000uLL;
          goto LABEL_40;
        }
        if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) != 0 )
          goto LABEL_36;
      }
LABEL_40:
      *v24 = v36;
      if ( (_DWORD)v31 )
        MiWritePteShadow((__int64)v24, v36);
      ++v24;
      a1 += 3;
      v32 = v37 ^ (v37 ^ (v37 + 4096)) & 0xFFFFFFFFF000LL;
      if ( a1 == v10 )
        goto LABEL_43;
    }
  }
  if ( a1 != v10 )
  {
    v18 = v41[2];
    v19 = v41[1];
    v20 = v41[0];
    do
    {
      *a1 = v20;
      a1[1] = v19;
      a1[2] = v18;
      a1 += 3;
    }
    while ( a1 != v10 );
  }
  return result;
}
