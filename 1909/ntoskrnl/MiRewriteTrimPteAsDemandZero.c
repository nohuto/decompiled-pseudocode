/*
 * XREFs of MiRewriteTrimPteAsDemandZero @ 0x1400BBE50
 * Callers:
 *     MiWsleFree @ 0x140025B40 (MiWsleFree.c)
 * Callees:
 *     MiUnmapPageInHyperSpaceWorker @ 0x140026E50 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiPteInShadowRange @ 0x14002AC50 (MiPteInShadowRange.c)
 *     MiMapPageInHyperSpaceWorker @ 0x14002E160 (MiMapPageInHyperSpaceWorker.c)
 *     MiTransferSoftwarePte @ 0x1400BB884 (MiTransferSoftwarePte.c)
 *     MiSetNonResidentPteHeat @ 0x1400BB940 (MiSetNonResidentPteHeat.c)
 *     MiDecrementShareCount @ 0x1400BB990 (MiDecrementShareCount.c)
 *     MiWritePteShadow @ 0x1400F8750 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1400F87B0 (MiPteHasShadow.c)
 *     MiLockNestedPageAtDpcInline @ 0x14011D320 (MiLockNestedPageAtDpcInline.c)
 */

__int64 __fastcall MiRewriteTrimPteAsDemandZero(__int64 a1, __int64 a2)
{
  __int64 v2; // r10
  unsigned __int64 v5; // rbx
  __int16 v6; // r10
  unsigned __int64 v7; // r14
  __int64 result; // rax
  __int64 v9; // rcx
  unsigned __int64 *v10; // r8
  __int64 v11; // rdx
  unsigned __int64 v12; // rdi
  __int64 v13; // r14
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  unsigned __int64 *v17; // r11
  unsigned __int64 v18; // [rsp+48h] [rbp+10h] BYREF

  v2 = *(_QWORD *)(a2 + 16);
  if ( (v2 & 2) != 0 )
  {
    v7 = *(_QWORD *)(a2 + 40);
    v11 = *(_QWORD *)(*(_QWORD *)(qword_140465E88 + 8 * ((v7 >> 40) & 0x3FF)) + 8LL * ((unsigned __int16)v2 >> 12) + 7904);
    if ( qword_140465800 && (v2 & 0x10) == 0 )
      v2 &= ~qword_140465800;
    v5 = MiTransferSoftwarePte(*(_QWORD *)(a2 + 16), v11, HIDWORD(v2));
  }
  else
  {
    v18 = *(_QWORD *)(a2 + 16);
    MiSetNonResidentPteHeat(&v18, 0);
    v5 = v18;
    if ( (v6 & 0x400) == 0 )
    {
      v5 = v18 & 0xFFFFFFFFFFFFFFF9uLL;
      v18 &= 0xFFFFFFFFFFFFFFF9uLL;
    }
    v7 = *(_QWORD *)(a2 + 40);
  }
  if ( (v7 & 0x200000000000000LL) != 0 )
  {
    v12 = *(unsigned int *)(a2 + 8);
    v13 = v7 & 0xFFFFFFFFFLL;
    v14 = MiMapPageInHyperSpaceWorker(v13, 0LL, 0x80000000);
    if ( MiPteInShadowRange(v14 + 8 * ((v12 >> 3) & 0x1FF)) )
    {
      if ( (unsigned int)MiPteHasShadow(v16) )
      {
        if ( !HIBYTE(word_1404658EC) && (v5 & 1) != 0 )
          v5 |= 0x8000000000000000uLL;
        *v17 = v5;
        MiWritePteShadow(v17, v5);
        goto LABEL_17;
      }
      if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) != 0
        && (v5 & 1) != 0 )
      {
        v5 |= 0x8000000000000000uLL;
      }
    }
    *v17 = v5;
LABEL_17:
    LOBYTE(v15) = 17;
    MiUnmapPageInHyperSpaceWorker((unsigned __int64)v17, v15, 0x80000000LL);
    MiLockNestedPageAtDpcInline(48 * v13 - 0x58000000000LL);
    MiDecrementShareCount(48 * v13 - 0x58000000000LL);
    result = 0x7FFFFFFFFFFFFFFFLL;
    _InterlockedAnd64((volatile signed __int64 *)(48 * v13 - 0x58000000000LL + 24), 0x7FFFFFFFFFFFFFFFuLL);
    return result;
  }
  result = MiPteInShadowRange(*(_QWORD *)(a2 + 8) | 0x8000000000000000uLL);
  if ( (_DWORD)result )
  {
    if ( (unsigned int)MiPteHasShadow(v9) )
    {
      if ( !HIBYTE(word_1404658EC) && (v5 & 1) != 0 )
        v5 |= 0x8000000000000000uLL;
      *v10 = v5;
      result = MiWritePteShadow(v10, v5);
      goto LABEL_8;
    }
    result = (__int64)KeGetCurrentThread();
    if ( (*(_DWORD *)(*(_QWORD *)(result + 184) + 1788LL) & 0x1000) != 0 && (v5 & 1) != 0 )
      v5 |= 0x8000000000000000uLL;
  }
  *v10 = v5;
LABEL_8:
  if ( (*(_BYTE *)(a1 + 184) & 7) == 0 )
    return _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 - 352), 0xFFFFFFFFFFFFFFFFuLL);
  return result;
}
