/*
 * XREFs of HvlGetSparseGpaPagesAccessState @ 0x14032C098
 * Callers:
 *     VmpProcessAccessedBatch @ 0x14030D298 (VmpProcessAccessedBatch.c)
 * Callees:
 *     HvcallpNoHypervisorPresent @ 0x14013E7A0 (HvcallpNoHypervisorPresent.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     HvlpAcquireHypercallPage @ 0x140271A54 (HvlpAcquireHypercallPage.c)
 *     HvlpReleaseHypercallPage @ 0x140272574 (HvlpReleaseHypercallPage.c)
 *     HvlpHvToNtStatus @ 0x140279770 (HvlpHvToNtStatus.c)
 */

__int64 __fastcall HvlGetSparseGpaPagesAccessState(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        _QWORD *a5,
        __int64 a6)
{
  unsigned int v6; // ebp
  __int64 v11; // r14
  _QWORD *v12; // rsi
  _QWORD *v13; // rax
  const void *v14; // r12
  void *v15; // rax
  __int64 v16; // rbx
  __int64 v17; // rax
  size_t v18; // rbx
  __int64 result; // rax
  PHYSICAL_ADDRESS v20[3]; // [rsp+20h] [rbp-78h] BYREF
  PHYSICAL_ADDRESS v21[3]; // [rsp+40h] [rbp-58h] BYREF

  v6 = 0;
  v11 = 0LL;
  v12 = HvlpAcquireHypercallPage(v21, 1, 0LL, 0LL);
  v13 = HvlpAcquireHypercallPage(v20, 2, 0LL, 0LL);
  *v12 = a1;
  v14 = v13;
  v15 = v12 + 2;
  v12[1] = a2;
  while ( 1 )
  {
    v16 = 510LL;
    if ( a3 < 0x1FE )
      v16 = a3;
    memmove(v15, (const void *)(a4 + 8 * v11), 8 * v16);
    v17 = HvcallCodeVa();
    if ( (_WORD)v17 )
      break;
    v18 = WORD2(v17) & 0xFFF;
    memmove((void *)(v11 + a6), v14, v18);
    v15 = v12 + 2;
    v11 += v18;
    a3 -= v18;
    if ( !a3 )
      goto LABEL_8;
  }
  v11 += WORD2(v17) & 0xFFF;
  v6 = HvlpHvToNtStatus(v17);
LABEL_8:
  HvlpReleaseHypercallPage((unsigned int *)v20);
  HvlpReleaseHypercallPage((unsigned int *)v21);
  result = v6;
  *a5 = v11;
  return result;
}
