/*
 * XREFs of ??$EmitSetProperty@UPropertySetBooleanValue@@_N@CPropertySetMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@1@I@Z @ 0x1C01A9CB8
 * Callers:
 *     ?EmitSetProperties@CPropertySetMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C000C968 (-EmitSetProperties@CPropertySetMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?AllocateNewFragment@CBatch@DirectComposition@@SA_NPEAPEAV12@PEA_K@Z @ 0x1C00091A4 (-AllocateNewFragment@CBatch@DirectComposition@@SA_NPEAPEAV12@PEA_K@Z.c)
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C000CBD4 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 */

char __fastcall DirectComposition::CPropertySetMarshaler::EmitSetProperty<PropertySetBooleanValue,bool>(
        __int64 a1,
        struct DirectComposition::CBatch ***a2,
        unsigned int a3)
{
  __int64 v4; // rbp
  char v6; // bl
  char *v7; // r9
  void *v9; // [rsp+38h] [rbp+10h] BYREF

  v4 = a3;
  v6 = 1;
  if ( (unsigned __int64)(4096LL - *((_QWORD *)(*a2)[17] + 5)) < 0x20
    && !DirectComposition::CBatch::AllocateNewFragment(a2, (unsigned __int64 *)&v9) )
  {
    return 0;
  }
  DirectComposition::CBatch::EnsureBatchBuffer((struct DirectComposition::CBatch **)a2, 0x20uLL, &v9);
  v7 = (char *)v9;
  *(_DWORD *)v9 = 32;
  *(_QWORD *)(v7 + 4) = 0LL;
  *(_QWORD *)(v7 + 12) = 0LL;
  *(_QWORD *)(v7 + 20) = 0LL;
  *((_DWORD *)v7 + 1) = 394;
  *((_DWORD *)v7 + 2) = *(_DWORD *)(a1 + 24);
  *((_DWORD *)v7 + 3) = v4;
  *((_DWORD *)v7 + 4) = *(_DWORD *)(*(_QWORD *)(a1 + 56) + 8 * v4 + 4) & 0x1FFFFFFF;
  *((_DWORD *)v7 + 5) = *(_DWORD *)(*(_QWORD *)(a1 + 56) + 8 * v4);
  v7[24] = (*(_DWORD *)(*(_QWORD *)(a1 + 56) + 8 * v4 + 4) & 0xE0000000) == 0x20000000;
  v7[28] = *(_BYTE *)((*(_DWORD *)(*(_QWORD *)(a1 + 56) + 8 * v4 + 4) & 0x1FFFFFFF) + *(_QWORD *)(a1 + 72));
  *(_DWORD *)(*(_QWORD *)(a1 + 56) + 8 * v4 + 4) &= 0x1FFFFFFFu;
  return v6;
}
