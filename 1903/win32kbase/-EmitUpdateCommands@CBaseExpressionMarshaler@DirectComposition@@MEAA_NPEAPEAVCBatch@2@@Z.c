/*
 * XREFs of ?EmitUpdateCommands@CBaseExpressionMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C000B5F0
 * Callers:
 *     ?EmitUpdateCommands@CExpressionMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C000B200 (-EmitUpdateCommands@CExpressionMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitUpdateCommands@CKeyframeAnimationMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00BF740 (-EmitUpdateCommands@CKeyframeAnimationMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitUpdateCommands@CInjectionAnimationMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01AE3C0 (-EmitUpdateCommands@CInjectionAnimationMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitUpdateCommands@CNaturalAnimationMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01AE910 (-EmitUpdateCommands@CNaturalAnimationMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitUpdateCommands@CConditionalExpressionMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01B4060 (-EmitUpdateCommands@CConditionalExpressionMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?AllocateNewFragment@CBatch@DirectComposition@@SA_NPEAPEAV12@PEA_K@Z @ 0x1C00091A4 (-AllocateNewFragment@CBatch@DirectComposition@@SA_NPEAPEAV12@PEA_K@Z.c)
 *     ?EmitSetBindingBroken@CBaseExpressionMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C000B6CC (-EmitSetBindingBroken@CBaseExpressionMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetTracingCookie@CBaseExpressionMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C000B750 (-EmitSetTracingCookie@CBaseExpressionMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetTarget@CBaseExpressionMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C000B7C8 (-EmitSetTarget@CBaseExpressionMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C000CBD4 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 */

char __fastcall DirectComposition::CBaseExpressionMarshaler::EmitUpdateCommands(
        DirectComposition::CBaseExpressionMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  unsigned int v4; // ebp
  char v5; // r14
  __int64 v6; // r12
  char *v8; // rcx
  void *v9; // rdx
  unsigned __int64 v10; // r15
  char *v11; // rcx
  unsigned int v12; // edx
  _DWORD *v13; // r8
  __int64 v14; // rax
  void *v15; // [rsp+50h] [rbp+8h] BYREF
  void *v16; // [rsp+60h] [rbp+18h] BYREF

  if ( (*((_DWORD *)this + 4) & 0x20) != 0 )
  {
    if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, &v15) )
      return 0;
    v8 = (char *)v15;
    *(_DWORD *)v15 = 16;
    *(_QWORD *)(v8 + 4) = 0LL;
    *((_DWORD *)v8 + 3) = 0;
    *((_DWORD *)v8 + 1) = 289;
    *((_DWORD *)v8 + 2) = *((_DWORD *)this + 6);
    *((_DWORD *)v8 + 3) = *((_DWORD *)this + 10);
    *((_DWORD *)this + 4) &= ~0x20u;
  }
  if ( !DirectComposition::CBaseExpressionMarshaler::EmitSetTarget(this, a2)
    || !DirectComposition::CBaseExpressionMarshaler::EmitSetTracingCookie(this, a2)
    || !DirectComposition::CBaseExpressionMarshaler::EmitSetBindingBroken(this, a2) )
  {
    return 0;
  }
  v4 = *((_DWORD *)this + 25);
  v5 = 1;
  v6 = *((_QWORD *)this + 11);
  while ( *((_DWORD *)this + 24) < v4 )
  {
    v9 = (void *)(4096LL - *(_QWORD *)(*((_QWORD *)*a2 + 17) + 40LL));
    v15 = v9;
    if ( (unsigned __int64)v9 < 0x14 )
    {
      if ( !DirectComposition::CBatch::AllocateNewFragment(
              (struct DirectComposition::CBatch ***)a2,
              (unsigned __int64 *)&v15) )
        break;
      v9 = v15;
    }
    v10 = v4 - *((_DWORD *)this + 24);
    if ( v10 >= ((unsigned __int64)v9 - 16) >> 2 )
      LODWORD(v10) = ((unsigned __int64)v9 - 16) >> 2;
    DirectComposition::CBatch::EnsureBatchBuffer(a2, (unsigned int)(4 * v10 + 16), &v16);
    v11 = (char *)v16;
    v12 = 0;
    *(_DWORD *)v16 = 4 * v10 + 16;
    v13 = v11 + 16;
    *(_QWORD *)(v11 + 4) = 0LL;
    *((_DWORD *)v11 + 3) = 0;
    *((_DWORD *)v11 + 1) = 24;
    *((_DWORD *)v11 + 2) = *((_DWORD *)this + 6);
    for ( *((_DWORD *)v11 + 3) = v10; v12 < (unsigned int)v10; ++v13 )
    {
      v14 = v12 + *((_DWORD *)this + 24);
      ++v12;
      *v13 = *(_DWORD *)(*(_QWORD *)(v6 + 8 * v14) + 24LL);
    }
    *((_DWORD *)this + 24) += v10;
  }
  if ( *((_DWORD *)this + 24) != v4 )
    return 0;
  return v5;
}
