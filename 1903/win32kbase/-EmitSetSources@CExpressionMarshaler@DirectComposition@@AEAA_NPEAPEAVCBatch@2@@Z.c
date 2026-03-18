/*
 * XREFs of ?EmitSetSources@CExpressionMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C000B4B4
 * Callers:
 *     ?EmitUpdateCommands@CExpressionMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C000B200 (-EmitUpdateCommands@CExpressionMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?AllocateNewFragment@CBatch@DirectComposition@@SA_NPEAPEAV12@PEA_K@Z @ 0x1C00091A4 (-AllocateNewFragment@CBatch@DirectComposition@@SA_NPEAPEAV12@PEA_K@Z.c)
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C000CBD4 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 */

bool __fastcall DirectComposition::CExpressionMarshaler::EmitSetSources(
        DirectComposition::CExpressionMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  unsigned __int64 v4; // rdx
  unsigned __int64 v5; // rsi
  char *v6; // rcx
  unsigned int v7; // edx
  _DWORD *v8; // r8
  int v9; // r9d
  __int64 v10; // rax
  unsigned __int64 v12; // [rsp+40h] [rbp+8h] BYREF
  void *v13; // [rsp+50h] [rbp+18h] BYREF

  for ( ; *((_DWORD *)this + 47) < *((_DWORD *)this + 46); *((_DWORD *)this + 47) += v5 )
  {
    v4 = 4096LL - *((_QWORD *)(*a2)[17] + 5);
    v12 = v4;
    if ( v4 < 0x18 )
    {
      if ( !DirectComposition::CBatch::AllocateNewFragment(a2, &v12) )
        return *((_DWORD *)this + 47) == *((_DWORD *)this + 46);
      v4 = v12;
    }
    v5 = (unsigned int)(*((_DWORD *)this + 46) - *((_DWORD *)this + 47));
    if ( v5 >= (v4 - 20) >> 2 )
      LODWORD(v5) = (v4 - 20) >> 2;
    DirectComposition::CBatch::EnsureBatchBuffer(
      (struct DirectComposition::CBatch **)a2,
      (unsigned int)(4 * v5 + 20),
      &v13);
    v6 = (char *)v13;
    v7 = 0;
    *(_DWORD *)v13 = 4 * v5 + 20;
    v8 = v6 + 20;
    *(_QWORD *)(v6 + 4) = 0LL;
    *(_QWORD *)(v6 + 12) = 0LL;
    *((_DWORD *)v6 + 1) = 164;
    *((_DWORD *)v6 + 2) = *((_DWORD *)this + 6);
    *((_DWORD *)v6 + 3) = v5;
    for ( *((_DWORD *)v6 + 4) = *((_DWORD *)this + 46); v7 < (unsigned int)v5; ++v8 )
    {
      v9 = 0;
      v10 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 22) + 8LL * (v7 + *((_DWORD *)this + 47))) + 16LL);
      if ( v10 )
        v9 = *(_DWORD *)(v10 + 24);
      *v8 = v9;
      ++v7;
    }
  }
  return *((_DWORD *)this + 47) == *((_DWORD *)this + 46);
}
