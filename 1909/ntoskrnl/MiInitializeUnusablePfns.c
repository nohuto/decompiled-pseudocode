/*
 * XREFs of MiInitializeUnusablePfns @ 0x140188FE4
 * Callers:
 *     MiInitializeDynamicPfns @ 0x1402BDC3C (MiInitializeDynamicPfns.c)
 *     MiDoGangAssignment @ 0x1402E81BC (MiDoGangAssignment.c)
 *     MiSwitchToPfns @ 0x1409F25FC (MiSwitchToPfns.c)
 * Callees:
 *     MiGetContainingPageTable @ 0x140023AA0 (MiGetContainingPageTable.c)
 *     MiPteInShadowRange @ 0x14002AC50 (MiPteInShadowRange.c)
 *     MiMakeValidPte @ 0x14002B050 (MiMakeValidPte.c)
 *     MiMakeTransitionPte @ 0x14002C970 (MiMakeTransitionPte.c)
 *     KeYieldProcessorEx @ 0x14002D7C0 (KeYieldProcessorEx.c)
 *     MiPageToChannel @ 0x14002F75C (MiPageToChannel.c)
 *     MiSwizzleInvalidPte @ 0x140076660 (MiSwizzleInvalidPte.c)
 *     MiSetPageTablePfnBuddy @ 0x140090FDC (MiSetPageTablePfnBuddy.c)
 *     MiPageToNode @ 0x1400C53C4 (MiPageToNode.c)
 *     MiWritePteShadow @ 0x1400F8750 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1400F87B0 (MiPteHasShadow.c)
 *     MiCreateInitialPfns @ 0x1401891A4 (MiCreateInitialPfns.c)
 *     MiCreatePfnTemplate @ 0x140189234 (MiCreatePfnTemplate.c)
 *     memset @ 0x1401D77C0 (memset.c)
 */

__int64 __fastcall MiInitializeUnusablePfns(
        _OWORD *a1,
        unsigned __int64 a2,
        unsigned __int16 a3,
        unsigned int a4,
        __int64 a5,
        unsigned __int64 a6,
        char a7)
{
  unsigned __int64 v7; // r15
  _OWORD *v10; // r12
  BOOL v11; // esi
  int v12; // ebx
  ULONG_PTR v13; // rcx
  int v14; // eax
  int v15; // esi
  __int64 v16; // r9
  __int64 result; // rax
  __int64 v18; // rax
  _QWORD *v19; // rdi
  __int64 v20; // r9
  unsigned __int64 ContainingPageTable; // rax
  int v22; // r10d
  __int64 v23; // rbx
  __int64 v24; // r9
  __int128 v25; // xmm1
  __int128 v26; // xmm0
  BOOL v27; // eax
  __int64 v28; // r11
  __int64 v29; // rdx
  int v30; // r8d
  BOOL v31; // edx
  _OWORD v32[3]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v33; // [rsp+B0h] [rbp+48h]
  int v36; // [rsp+C8h] [rbp+60h] BYREF

  v7 = a2;
  memset(v32, 0, sizeof(v32));
  v36 = -1;
  v10 = &a1[3 * v7];
  v11 = 1;
  if ( (a4 & 0x1000) != 0 )
  {
    v36 = 0;
    v11 = (a4 & 0x100) == 0;
  }
  v33 = (__int64)(a1 + 0x5800000000LL) / 48;
  v12 = MiPageToChannel(v33);
  v14 = MiPageToNode(v13, 0);
  MiCreatePfnTemplate(v36, v14, v12, v11, v32);
  v15 = 6;
  if ( (a4 & 0x80u) != 0 )
  {
    *((_QWORD *)&v32[2] + 1) = *((_QWORD *)&v32[2] + 1) & 0xFE3FFFFFFFFFFFFFuLL | 0xC0000000000000LL;
    _InterlockedExchangeAdd64(&qword_1404658C0, v7);
  }
  else if ( (a4 & 0x40) != 0 )
  {
    *((_QWORD *)&v32[0] + 1) = 0xFFFFF68000000000uLL;
  }
  else if ( (a4 & 2) != 0 )
  {
    if ( (a7 & 2) != 0 )
    {
      v15 = 2;
    }
    else
    {
      LOWORD(v32[2]) = 1;
      *((_QWORD *)&v32[1] + 1) = *((_QWORD *)&v32[1] + 1) & 0xC000000000000000uLL | 1;
    }
  }
  else
  {
    v15 = 5;
    if ( (a4 & 0x1000) != 0 )
      v15 = ((a4 >> 8) & 1) == 0;
  }
  BYTE2(v32[2]) = v15 | BYTE2(v32[2]) & 0xF8;
  *((_QWORD *)&v32[2] + 1) ^= (*((_QWORD *)&v32[2] + 1) ^ ((unsigned __int64)a3 << 40)) & 0x3FF0000000000LL;
  if ( (a4 & 0xC0) != 0 )
  {
    *((_QWORD *)&v32[1] + 1) = *((_QWORD *)&v32[1] + 1) & 0xC000000000000000uLL | 1;
    *(_QWORD *)&v32[1] = MiSwizzleInvalidPte(128LL);
    *((_QWORD *)&v32[2] + 1) = v16 & 0xFFFFFFF000000000uLL | 0xFFFFFFFFDLL;
    MiSetPageTablePfnBuddy((__int64)v32, (__int64)KeGetCurrentThread()->ApcState.Process, 1);
    LOWORD(v32[2]) = 2;
    *((_QWORD *)&v32[1] + 1) |= 0x4000000000000000uLL;
    _InterlockedExchangeAdd64(&qword_140466738, v7);
  }
  if ( (a4 & 2) == 0 )
    return MiCreateInitialPfns(a1, v7, v32);
  v18 = MiSwizzleInvalidPte(16 * ((a5 << 12) | *(_WORD *)(a5 + 32) & 0x3E | 0x40));
  v19 = (_QWORD *)a6;
  *(_QWORD *)&v32[1] = v18;
  *((_QWORD *)&v32[2] + 1) = v20 | 0x200000000000000LL;
  ContainingPageTable = MiGetContainingPageTable(a6);
  v23 = 48 * ContainingPageTable - 0x58000000000LL;
  *((_QWORD *)&v32[2] + 1) = v24 ^ (ContainingPageTable ^ v24) & 0xFFFFFFFFFLL;
  if ( v15 == 6 )
    MiMakeValidPte((unsigned __int64)v19, v33, v22);
  else
    MiMakeTransitionPte(v33, v22);
  if ( a1 != v10 )
  {
    while ( 1 )
    {
      v25 = v32[1];
      *((_QWORD *)&v32[0] + 1) = v19;
      *a1 = v32[0];
      v26 = v32[2];
      a1[1] = v25;
      a1[2] = v26;
      v27 = MiPteInShadowRange((unsigned __int64)v19);
      if ( (v28 & 1) != 0 )
        break;
      v31 = 0;
      if ( v27 )
        v31 = MiPteHasShadow() != 0;
      *v19 = v28;
      if ( !v31 )
        goto LABEL_34;
LABEL_33:
      MiWritePteShadow((__int64)v19);
LABEL_34:
      ++v19;
      a1 += 3;
      if ( a1 == v10 )
      {
        v7 = a2;
        goto LABEL_36;
      }
    }
    v29 = v28;
    v30 = 0;
    if ( v27 )
    {
      if ( (unsigned int)MiPteHasShadow() )
      {
        v30 = 1;
        if ( HIBYTE(word_1404658EC) )
          goto LABEL_28;
      }
      else if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) == 0 )
      {
        goto LABEL_28;
      }
      v29 |= 0x8000000000000000uLL;
    }
LABEL_28:
    *v19 = v29;
    if ( !v30 )
      goto LABEL_34;
    goto LABEL_33;
  }
LABEL_36:
  v36 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v23 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v36);
    while ( *(__int64 *)(v23 + 24) < 0 );
  }
  result = 0x7FFFFFFFFFFFFFFFLL;
  *(_QWORD *)(v23 + 24) ^= (*(_QWORD *)(v23 + 24) ^ (*(_QWORD *)(v23 + 24) + v7)) & 0x3FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(v23 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  return result;
}
