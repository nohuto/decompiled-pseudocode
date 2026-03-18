/*
 * XREFs of ?EmitUpdateCommands@CBaseExpressionMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C000A680
 * Callers:
 *     ?EmitUpdateCommands@CKeyframeAnimationMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0009500 (-EmitUpdateCommands@CKeyframeAnimationMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitUpdateCommands@CExpressionMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C000A290 (-EmitUpdateCommands@CExpressionMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitUpdateCommands@CInjectionAnimationMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0171100 (-EmitUpdateCommands@CInjectionAnimationMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitUpdateCommands@CNaturalAnimationMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0171650 (-EmitUpdateCommands@CNaturalAnimationMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitUpdateCommands@CConditionalExpressionMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0177A10 (-EmitUpdateCommands@CConditionalExpressionMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EmitSetBindingBroken@CBaseExpressionMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C000A714 (-EmitSetBindingBroken@CBaseExpressionMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetTracingCookie@CBaseExpressionMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C000A79C (-EmitSetTracingCookie@CBaseExpressionMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetTarget@CBaseExpressionMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C000A814 (-EmitSetTarget@CBaseExpressionMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C000C0D4 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     ?AllocateNewFragment@CBatch@DirectComposition@@SA_NPEAPEAV12@PEA_K@Z @ 0x1C000E928 (-AllocateNewFragment@CBatch@DirectComposition@@SA_NPEAPEAV12@PEA_K@Z.c)
 *     ?EmitSetCallbackId@CNotificationResourceMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C005B6AC (-EmitSetCallbackId@CNotificationResourceMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 */

char __fastcall DirectComposition::CBaseExpressionMarshaler::EmitUpdateCommands(
        DirectComposition::CBaseExpressionMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  unsigned int v4; // ebp
  char v5; // r14
  __int64 v6; // r12
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // r15
  char *v10; // rcx
  unsigned int v11; // edx
  _DWORD *v12; // r8
  __int64 v13; // rax
  unsigned __int64 v14; // [rsp+60h] [rbp+18h] BYREF
  void *v15; // [rsp+68h] [rbp+20h] BYREF

  if ( !DirectComposition::CNotificationResourceMarshaler::EmitSetCallbackId(this, a2)
    || !DirectComposition::CBaseExpressionMarshaler::EmitSetTarget(this, a2)
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
    v8 = 4096LL - *(_QWORD *)(*((_QWORD *)*a2 + 17) + 40LL);
    v14 = v8;
    if ( v8 < 0x14 )
    {
      if ( !DirectComposition::CBatch::AllocateNewFragment(a2, &v14) )
        break;
      v8 = v14;
    }
    v9 = v4 - *((_DWORD *)this + 24);
    if ( v9 >= (v8 - 16) >> 2 )
      LODWORD(v9) = (v8 - 16) >> 2;
    DirectComposition::CBatch::EnsureBatchBuffer(a2, (unsigned int)(4 * v9 + 16), &v15);
    v10 = (char *)v15;
    v11 = 0;
    *(_DWORD *)v15 = 4 * v9 + 16;
    v12 = v10 + 16;
    *(_QWORD *)(v10 + 4) = 0LL;
    *((_DWORD *)v10 + 3) = 0;
    *((_DWORD *)v10 + 1) = 24;
    *((_DWORD *)v10 + 2) = *((_DWORD *)this + 6);
    for ( *((_DWORD *)v10 + 3) = v9; v11 < (unsigned int)v9; ++v12 )
    {
      v13 = v11 + *((_DWORD *)this + 24);
      ++v11;
      *v12 = *(_DWORD *)(*(_QWORD *)(v6 + 8 * v13) + 24LL);
    }
    *((_DWORD *)this + 24) += v9;
  }
  if ( *((_DWORD *)this + 24) != v4 )
    return 0;
  return v5;
}
