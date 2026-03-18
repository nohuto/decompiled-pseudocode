/*
 * XREFs of MiPerformFixups @ 0x140643340
 * Callers:
 *     MiRelocateImagePfn @ 0x140607190 (MiRelocateImagePfn.c)
 *     MiRevertRelocatedImagePfn @ 0x14064203C (MiRevertRelocatedImagePfn.c)
 *     MiRevertRelocations @ 0x14064325C (MiRevertRelocations.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x14003EA70 (MiGetSystemRegionType.c)
 *     MiApplyStraddleFixups @ 0x14008D984 (MiApplyStraddleFixups.c)
 *     MiApplyCompressedFixups @ 0x140643530 (MiApplyCompressedFixups.c)
 *     MiApplyRetpolineFixups @ 0x140643670 (MiApplyRetpolineFixups.c)
 *     MiApplyRawFixups @ 0x1408982BC (MiApplyRawFixups.c)
 */

__int64 __fastcall MiPerformFixups(
        ULONG_PTR BugCheckParameter3,
        _QWORD *BugCheckParameter2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        char a6)
{
  __int64 result; // rax
  __int64 v8; // rbp
  __int64 v10; // rbx
  int i; // r14d
  _OWORD *v12; // r13
  unsigned __int64 v13; // rdi
  __int64 v14; // r12
  int v15; // ecx
  ULONG_PTR v16; // rcx
  unsigned __int64 v17; // r8
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  int SystemRegionType; // eax
  int v21; // edx
  int v22; // r8d
  __int64 v23; // rax
  __int128 v24; // xmm1
  __int128 v25; // xmm0
  __int128 v26; // [rsp+40h] [rbp-58h] BYREF
  __int128 v27; // [rsp+50h] [rbp-48h]
  __int128 v28; // [rsp+60h] [rbp-38h]
  _UNKNOWN *retaddr; // [rsp+98h] [rbp+0h] BYREF
  __int64 v30; // [rsp+B8h] [rbp+20h]

  result = (__int64)&retaddr;
  v30 = a4;
  v8 = a3;
  v10 = *(_QWORD *)(BugCheckParameter2[12] + 32LL);
  if ( (unsigned __int64)a3 < *(_QWORD *)(v10 + 56) )
  {
    for ( i = a3 << 12; ; i += 4096 )
    {
      result = *(_QWORD *)v10;
      v12 = *(_OWORD **)(v10 + 96);
      v13 = *(_QWORD *)(*(_QWORD *)v10 + 8 * v8);
      v14 = v12 ? *((_QWORD *)v12 + v8 + 7) : 0LL;
      if ( v13 )
      {
        if ( v13 > 1 )
        {
          if ( *(_BYTE *)(v10 + 68) )
            MiApplyCompressedFixups((ULONG_PTR)BugCheckParameter2, BugCheckParameter3);
          else
            MiApplyRawFixups((ULONG_PTR)BugCheckParameter2);
          a4 = v30;
        }
      }
      else if ( !v14 )
      {
        goto LABEL_14;
      }
      if ( (v13 & 1) != 0 )
        MiApplyStraddleFixups(v10, (char *)BugCheckParameter3, i, a4, a5, a6);
      if ( v14 )
        break;
LABEL_13:
      v15 = *(_DWORD *)(v10 + 64);
      a4 = v30;
      result = v15 & 0xFFFFF000;
      if ( (_DWORD)result == i )
      {
        v16 = BugCheckParameter3 + (v15 & 0xFFF);
        if ( (v16 & 1) != 0 )
          *(_DWORD *)(v16 - 1) += v30;
        else
          *(_QWORD *)v16 += v30;
      }
LABEL_14:
      BugCheckParameter3 += 4096LL;
      if ( (BugCheckParameter3 & 0xFFF) == 0 )
        return result;
      v8 = (unsigned int)(v8 + 1);
    }
    v17 = *(_QWORD *)(*BugCheckParameter2 + 32LL);
    if ( a5 )
    {
      v23 = v30;
      if ( (a6 & 1) != 0 )
        v23 = a5;
      v17 += v23;
    }
    else if ( (a6 & 1) != 0 )
    {
      v17 += v30;
      v24 = v12[1];
      v26 = *v12;
      v25 = v12[2];
      v27 = v24;
      v28 = v25;
LABEL_25:
      SystemRegionType = MiGetSystemRegionType(v17);
      if ( SystemRegionType != 12 && SystemRegionType != 1 )
        v21 |= 1u;
      MiApplyRetpolineFixups(BugCheckParameter3, v21, v22, i, (__int64)&v26, v14, v21);
      goto LABEL_13;
    }
    v18 = v12[1];
    v26 = *v12;
    v19 = v12[2];
    v27 = v18;
    v28 = v19;
    if ( a5 )
      *(_QWORD *)&v27 = 0LL;
    goto LABEL_25;
  }
  return result;
}
