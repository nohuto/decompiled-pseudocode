/*
 * XREFs of MiPerformFixups @ 0x1405E0B58
 * Callers:
 *     MiRevertRelocatedImagePfn @ 0x1405A9A60 (MiRevertRelocatedImagePfn.c)
 *     MiRelocateImagePfn @ 0x1405E0930 (MiRelocateImagePfn.c)
 *     MiRevertRelocations @ 0x140654A4C (MiRevertRelocations.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x14004EC30 (MiGetSystemRegionType.c)
 *     MiApplyStraddleFixups @ 0x140127EEC (MiApplyStraddleFixups.c)
 *     MiApplyCompressedFixups @ 0x1405E0CA0 (MiApplyCompressedFixups.c)
 *     MiApplyRetpolineFixups @ 0x140854968 (MiApplyRetpolineFixups.c)
 *     MiApplyRawFixups @ 0x14085D2E8 (MiApplyRawFixups.c)
 */

__int64 __fastcall MiPerformFixups(
        ULONG_PTR BugCheckParameter3,
        __int64 *BugCheckParameter2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        char a6)
{
  __int64 result; // rax
  __int64 v8; // rsi
  ULONG_PTR v9; // r10
  __int64 v11; // r15
  int v12; // edi
  _OWORD *v13; // r13
  unsigned __int64 v14; // rbp
  __int64 v15; // r12
  int v16; // ecx
  ULONG_PTR v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // rdx
  unsigned __int64 v20; // rcx
  __int128 v21; // xmm1
  __int128 v22; // xmm0
  __int64 v23; // rax
  int SystemRegionType; // eax
  int v25; // edx
  int v26; // r8d
  __int128 v27; // [rsp+40h] [rbp-58h] BYREF
  __int64 v28; // [rsp+50h] [rbp-48h]
  __int64 v29; // [rsp+58h] [rbp-40h]
  __int128 v30; // [rsp+60h] [rbp-38h]

  result = BugCheckParameter2[12];
  v8 = a3;
  v9 = (ULONG_PTR)BugCheckParameter2;
  v11 = *(_QWORD *)(result + 32);
  if ( (unsigned __int64)a3 < *(_QWORD *)(v11 + 56) )
  {
    v12 = a3 << 12;
    while ( 1 )
    {
      result = *(_QWORD *)v11;
      v13 = *(_OWORD **)(v11 + 88);
      v14 = *(_QWORD *)(*(_QWORD *)v11 + 8 * v8);
      if ( v13 )
        v15 = *((_QWORD *)v13 + v8 + 7);
      else
        v15 = 0LL;
      if ( v14 )
      {
        if ( v14 > 1 )
        {
          if ( *(_BYTE *)(v11 + 68) )
            MiApplyCompressedFixups(v9, BugCheckParameter3);
          else
            MiApplyRawFixups(v9);
        }
LABEL_9:
        if ( (v14 & 1) != 0 )
          MiApplyStraddleFixups(v11, (char *)BugCheckParameter3, v12, a4, a5, a6);
        if ( v15 )
        {
          v18 = *BugCheckParameter2;
          if ( a5 )
          {
            v19 = *(_QWORD *)(v18 + 32);
            if ( (a6 & 1) != 0 )
              v20 = v19 + a5;
            else
              v20 = v19 + a4;
          }
          else
          {
            v20 = *(_QWORD *)(v18 + 32);
            if ( (a6 & 1) != 0 )
              v20 += a4;
          }
          v21 = v13[1];
          v27 = *v13;
          v22 = v13[2];
          v23 = v21;
          if ( a5 )
            v23 = 0LL;
          v29 = *((_QWORD *)&v21 + 1);
          v28 = v23;
          v30 = v22;
          SystemRegionType = MiGetSystemRegionType(v20);
          if ( SystemRegionType != 12 && SystemRegionType != 1 )
            v25 |= 1u;
          MiApplyRetpolineFixups(BugCheckParameter3, v25, v26, v12, (__int64)&v27, v15, v25);
        }
        v16 = *(_DWORD *)(v11 + 64);
        result = v16 & 0xFFFFF000;
        if ( (_DWORD)result == v12 )
        {
          v17 = BugCheckParameter3 + (v16 & 0xFFF);
          if ( (v17 & 1) != 0 )
            *(_DWORD *)(v17 - 1) += a4;
          else
            *(_QWORD *)v17 += a4;
        }
        BugCheckParameter3 += 4096LL;
        if ( (BugCheckParameter3 & 0xFFF) == 0 )
          return result;
        v9 = (ULONG_PTR)BugCheckParameter2;
        v8 = (unsigned int)(v8 + 1);
        v12 += 4096;
      }
      else
      {
        if ( v15 )
          goto LABEL_9;
        BugCheckParameter3 += 4096LL;
        if ( (BugCheckParameter3 & 0xFFF) == 0 )
          return result;
        v8 = (unsigned int)(v8 + 1);
        v12 += 4096;
      }
    }
  }
  return result;
}
