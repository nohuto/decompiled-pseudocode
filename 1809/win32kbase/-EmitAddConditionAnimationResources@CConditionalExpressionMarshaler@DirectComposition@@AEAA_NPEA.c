/*
 * XREFs of ?EmitAddConditionAnimationResources@CConditionalExpressionMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01777F0
 * Callers:
 *     ?EmitUpdateCommands@CConditionalExpressionMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0177A10 (-EmitUpdateCommands@CConditionalExpressionMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C000C0D4 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     ?AllocateNewFragment@CBatch@DirectComposition@@SA_NPEAPEAV12@PEA_K@Z @ 0x1C000E928 (-AllocateNewFragment@CBatch@DirectComposition@@SA_NPEAPEAV12@PEA_K@Z.c)
 */

bool __fastcall DirectComposition::CConditionalExpressionMarshaler::EmitAddConditionAnimationResources(
        DirectComposition::CConditionalExpressionMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  unsigned __int64 v4; // r8
  unsigned int v5; // esi
  char *v6; // rcx
  unsigned int v7; // r9d
  _DWORD *v8; // r8
  int v9; // edx
  unsigned __int64 v11; // [rsp+40h] [rbp+8h] BYREF
  void *v12; // [rsp+50h] [rbp+18h] BYREF

  for ( ; *((_DWORD *)this + 31) < *((_DWORD *)this + 30); *((_DWORD *)this + 31) += 2 * v5 )
  {
    v4 = 4096LL - *((_QWORD *)(*a2)[17] + 5);
    v11 = v4;
    if ( v4 < 0x18 )
    {
      if ( !DirectComposition::CBatch::AllocateNewFragment(a2, &v11) )
        return *((_DWORD *)this + 31) == *((_DWORD *)this + 30);
      v4 = v11;
    }
    v5 = (unsigned int)(*((_DWORD *)this + 30) - *((_DWORD *)this + 31)) >> 1;
    if ( (unsigned __int64)(unsigned int)(*((_DWORD *)this + 30) - *((_DWORD *)this + 31)) >> 1 >= (v4 - 16) >> 3 )
      v5 = (v4 - 16) >> 3;
    DirectComposition::CBatch::EnsureBatchBuffer((struct DirectComposition::CBatch **)a2, 8 * v5 + 16, &v12);
    v6 = (char *)v12;
    v7 = 0;
    *(_DWORD *)v12 = 8 * v5 + 16;
    v8 = v6 + 16;
    *(_QWORD *)(v6 + 4) = 0LL;
    *((_DWORD *)v6 + 3) = 0;
    *((_DWORD *)v6 + 1) = 122;
    *((_DWORD *)v6 + 2) = *((_DWORD *)this + 6);
    for ( *((_DWORD *)v6 + 3) = v5;
          v7 < v5;
          *(v8 - 1) = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 14)
                                            + 8LL * (unsigned int)(v9 + *((_DWORD *)this + 31) + 1))
                                + 24LL) )
    {
      v9 = 2 * v7++;
      *v8 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 14) + 8LL * (unsigned int)(v9 + *((_DWORD *)this + 31))) + 24LL);
      v8 += 2;
    }
  }
  return *((_DWORD *)this + 31) == *((_DWORD *)this + 30);
}
