/*
 * XREFs of MiRewriteTrimPteAsDemandZero @ 0x14011AB5C
 * Callers:
 *     MiWsleFree @ 0x1400B2BB0 (MiWsleFree.c)
 * Callees:
 *     MiUnmapPageInHyperSpaceWorker @ 0x14003AB00 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiPteInShadowRange @ 0x14003D740 (MiPteInShadowRange.c)
 *     MiTransferSoftwarePte @ 0x140081D88 (MiTransferSoftwarePte.c)
 *     MiSetNonResidentPteHeat @ 0x140081E40 (MiSetNonResidentPteHeat.c)
 *     MiDecrementShareCount @ 0x140081E90 (MiDecrementShareCount.c)
 *     MiMapPageInHyperSpaceWorker @ 0x140082770 (MiMapPageInHyperSpaceWorker.c)
 *     MiWritePteShadow @ 0x140120F40 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140120FA0 (MiPteHasShadow.c)
 *     MiLockNestedPageAtDpcInline @ 0x140120FD4 (MiLockNestedPageAtDpcInline.c)
 */

__int64 __fastcall MiRewriteTrimPteAsDemandZero(__int64 a1, _QWORD *a2)
{
  __int64 v2; // r10
  unsigned __int64 v5; // rbx
  __int16 v6; // r10
  unsigned __int64 v7; // r14
  unsigned __int64 v8; // rdi
  __int64 result; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r14
  unsigned __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  unsigned __int64 *v16; // r11
  __int64 v17; // rdx
  bool v18; // zf
  bool v19; // zf
  unsigned __int64 v20; // [rsp+48h] [rbp+10h] BYREF

  v2 = a2[2];
  if ( (v2 & 2) != 0 )
  {
    v7 = a2[5];
    v17 = *(_QWORD *)(*(_QWORD *)(qword_14043B808 + 8 * ((v7 >> 40) & 0x3FF)) + 8LL * ((unsigned __int16)v2 >> 12) + 7136);
    if ( qword_14043B180 && (v2 & 0x10) == 0 )
      v2 &= ~qword_14043B180;
    v5 = MiTransferSoftwarePte(a2[2], v17, HIDWORD(v2));
  }
  else
  {
    v20 = a2[2];
    MiSetNonResidentPteHeat(&v20, 0);
    v5 = v20;
    if ( (v6 & 0x400) == 0 )
    {
      v5 = v20 & 0xFFFFFFFFFFFFFFF9uLL;
      v20 &= 0xFFFFFFFFFFFFFFF9uLL;
    }
    v7 = a2[5];
  }
  v8 = a2[1] | 0x8000000000000000uLL;
  if ( (v7 & 0x200000000000000LL) == 0 )
  {
    result = MiPteInShadowRange(v8);
    if ( !(_DWORD)result )
    {
LABEL_7:
      *(_QWORD *)v8 = v5;
      if ( (_DWORD)v10 )
        result = MiWritePteShadow(v8);
      if ( (*(_BYTE *)(a1 + 184) & 7) == 0 )
        return _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 - 360), 0xFFFFFFFFFFFFFFFFuLL);
      return result;
    }
    result = MiPteHasShadow(v11, v10);
    if ( (_DWORD)result )
    {
      LODWORD(v10) = 1;
      if ( HIBYTE(word_14043B26C) )
        goto LABEL_7;
      v18 = (v5 & 1) == 0;
    }
    else
    {
      result = (__int64)KeGetCurrentThread();
      if ( (*(_DWORD *)(*(_QWORD *)(result + 184) + 1740LL) & 0x1000) == 0 )
        goto LABEL_7;
      v18 = (v5 & 1) == 0;
    }
    if ( !v18 )
      v5 |= 0x8000000000000000uLL;
    goto LABEL_7;
  }
  v12 = v7 & 0xFFFFFFFFFLL;
  v13 = MiMapPageInHyperSpaceWorker(v12, 0LL, 0x80000000);
  if ( MiPteInShadowRange(v13 + 8 * ((v8 >> 3) & 0x1FF)) )
  {
    if ( (unsigned int)MiPteHasShadow(v15, v14) )
    {
      LODWORD(v14) = 1;
      if ( HIBYTE(word_14043B26C) )
        goto LABEL_13;
      v19 = (v5 & 1) == 0;
    }
    else
    {
      if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) == 0 )
        goto LABEL_13;
      v19 = (v5 & 1) == 0;
    }
    if ( !v19 )
      v5 |= 0x8000000000000000uLL;
  }
LABEL_13:
  *v16 = v5;
  if ( (_DWORD)v14 )
    MiWritePteShadow(v16);
  MiUnmapPageInHyperSpaceWorker((unsigned __int64)v16, 0x11u, 0x80000000LL);
  MiLockNestedPageAtDpcInline(48 * v12 - 0x58000000000LL);
  MiDecrementShareCount(48 * v12 - 0x58000000000LL);
  result = 0x7FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(48 * v12 - 0x58000000000LL + 24), 0x7FFFFFFFFFFFFFFFuLL);
  return result;
}
