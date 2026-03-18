/*
 * XREFs of ?EmitUpdateCommands@CKeyframeAnimationMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00BF740
 * Callers:
 *     <none>
 * Callees:
 *     ?AllocateNewFragment@CBatch@DirectComposition@@SA_NPEAPEAV12@PEA_K@Z @ 0x1C00091A4 (-AllocateNewFragment@CBatch@DirectComposition@@SA_NPEAPEAV12@PEA_K@Z.c)
 *     ?EmitUpdatePlaybackState@CKeyframeAnimationMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0009CF8 (-EmitUpdatePlaybackState@CKeyframeAnimationMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitUpdateCommands@CBaseExpressionMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C000B5F0 (-EmitUpdateCommands@CBaseExpressionMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C000CBD4 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     ?EmitSetKeyframeData@CKeyframeAnimationMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C008F520 (-EmitSetKeyframeData@CKeyframeAnimationMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_0792d512e18448bf4ac5474847912d54___ @ 0x1C0090384 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_0792d512e18448bf4ac5474847912d5.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_84a7a7b6d709e42eaf283e6290c84308___ @ 0x1C0090400 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_84a7a7b6d709e42eaf283e6290c8430.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_850122922cd1779a7f9819b269b43cf1___ @ 0x1C009047C (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_850122922cd1779a7f9819b269b43cf.c)
 *     ?EmitSetSeekState@CKeyframeAnimationMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00934A8 (-EmitSetSeekState@CKeyframeAnimationMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_ad8d2b11c8ff001e31c68bfd37fe4772___lambda_cef133924e7ba8c5c0c6519b3ed084f6___ @ 0x1C01A962C (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_ad8d2b11c8ff001e31c68bfd37fe477.c)
 */

char __fastcall DirectComposition::CKeyframeAnimationMarshaler::EmitUpdateCommands(
        DirectComposition::CKeyframeAnimationMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  unsigned int v4; // r14d
  char v5; // r15
  __int64 v6; // r13
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // r12
  char *v9; // rcx
  unsigned int v10; // edx
  _DWORD *v11; // r8
  __int64 v12; // rax
  int v13; // eax
  unsigned __int64 v15; // [rsp+90h] [rbp+50h] BYREF
  void *v16; // [rsp+98h] [rbp+58h] BYREF

  if ( !DirectComposition::CBaseExpressionMarshaler::EmitUpdateCommands(this, a2) )
    return 0;
  if ( *((_DWORD *)this + 51) < *((_DWORD *)this + 50) )
  {
    v15 = (unsigned __int64)this;
    if ( (*((_DWORD *)this + 4) & 0x10000) == 0 )
    {
      if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_ad8d2b11c8ff001e31c68bfd37fe4772___lambda_cef133924e7ba8c5c0c6519b3ed084f6___(
                               this,
                               a2) )
        return 0;
      *((_DWORD *)this + 4) |= 0x10000u;
    }
  }
  if ( !DirectComposition::CKeyframeAnimationMarshaler::EmitSetKeyframeData(this, a2) )
    return 0;
  v4 = *((_DWORD *)this + 46);
  v5 = 1;
  v6 = *((_QWORD *)this + 22);
  while ( *((_DWORD *)this + 47) < v4 )
  {
    v7 = 4096LL - *(_QWORD *)(*((_QWORD *)*a2 + 17) + 40LL);
    v15 = v7;
    if ( v7 < 0x14 )
    {
      if ( !DirectComposition::CBatch::AllocateNewFragment((struct DirectComposition::CBatch ***)a2, &v15) )
        break;
      v7 = v15;
    }
    v8 = v4 - *((_DWORD *)this + 47);
    if ( v8 >= (v7 - 16) >> 2 )
      LODWORD(v8) = (v7 - 16) >> 2;
    DirectComposition::CBatch::EnsureBatchBuffer(a2, (unsigned int)(4 * v8 + 16), &v16);
    v9 = (char *)v16;
    v10 = 0;
    *(_DWORD *)v16 = 4 * v8 + 16;
    v11 = v9 + 16;
    *(_QWORD *)(v9 + 4) = 0LL;
    *((_DWORD *)v9 + 3) = 0;
    *((_DWORD *)v9 + 1) = 245;
    *((_DWORD *)v9 + 2) = *((_DWORD *)this + 6);
    for ( *((_DWORD *)v9 + 3) = v8; v10 < (unsigned int)v8; ++v11 )
    {
      v12 = v10 + *((_DWORD *)this + 47);
      ++v10;
      *v11 = *(_DWORD *)(*(_QWORD *)(v6 + 8 * v12) + 24LL);
    }
    *((_DWORD *)this + 47) += v8;
  }
  if ( *((_DWORD *)this + 47) != v4
    || !DirectComposition::CKeyframeAnimationMarshaler::EmitUpdatePlaybackState(this, a2) )
  {
    return 0;
  }
  v13 = *((_DWORD *)this + 4);
  v15 = (unsigned __int64)this;
  if ( (v13 & 0x2000) == 0 )
  {
    if ( !DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_84a7a7b6d709e42eaf283e6290c84308___(
            (__int64)this,
            a2,
            (__int64)&v15) )
      return 0;
    *((_DWORD *)this + 4) |= 0x2000u;
    v13 = *((_DWORD *)this + 4);
  }
  v15 = (unsigned __int64)this;
  if ( (v13 & 0x4000) == 0 )
  {
    if ( !DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_0792d512e18448bf4ac5474847912d54___(
            (__int64)this,
            a2,
            (__int64)&v15) )
      return 0;
    *((_DWORD *)this + 4) |= 0x4000u;
  }
  if ( !DirectComposition::CKeyframeAnimationMarshaler::EmitSetSeekState(this, a2) )
    return 0;
  v15 = (unsigned __int64)this;
  if ( (*((_DWORD *)this + 4) & 0x8000) == 0 )
  {
    if ( DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_850122922cd1779a7f9819b269b43cf1___(
           (__int64)this,
           a2,
           (__int64)&v15) )
    {
      *((_DWORD *)this + 4) |= 0x8000u;
      return v5;
    }
    return 0;
  }
  return v5;
}
