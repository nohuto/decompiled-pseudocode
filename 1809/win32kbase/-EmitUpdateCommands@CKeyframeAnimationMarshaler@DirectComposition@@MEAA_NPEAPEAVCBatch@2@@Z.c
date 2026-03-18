/*
 * XREFs of ?EmitUpdateCommands@CKeyframeAnimationMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0009500
 * Callers:
 *     <none>
 * Callees:
 *     ?EmitSetSeekState@CKeyframeAnimationMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C000963C (-EmitSetSeekState@CKeyframeAnimationMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitUpdatePlaybackState@CKeyframeAnimationMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00096F4 (-EmitUpdatePlaybackState@CKeyframeAnimationMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetKeyframeData@CKeyframeAnimationMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0009790 (-EmitSetKeyframeData@CKeyframeAnimationMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitUpdateCommands@CBaseExpressionMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C000A680 (-EmitUpdateCommands@CBaseExpressionMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C000C0D4 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_6add7343b7f4497aa15eeb132caa04fc___ @ 0x1C000E580 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_6add7343b7f4497aa15eeb132caa04f.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_69dcdd6af9664359482e1764120b8c55___ @ 0x1C000E5FC (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_69dcdd6af9664359482e1764120b8c5.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_5977b5f41eb0659058fbaa4886c55b50___ @ 0x1C000E678 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_5977b5f41eb0659058fbaa4886c55b5.c)
 *     ?AllocateNewFragment@CBatch@DirectComposition@@SA_NPEAPEAV12@PEA_K@Z @ 0x1C000E928 (-AllocateNewFragment@CBatch@DirectComposition@@SA_NPEAPEAV12@PEA_K@Z.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_f1d1b33ccf7202873e41137e3be87055___lambda_cef133924e7ba8c5c0c6519b3ed084f6___ @ 0x1C016C4AC (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_f1d1b33ccf7202873e41137e3be8705.c)
 */

char __fastcall DirectComposition::CKeyframeAnimationMarshaler::EmitUpdateCommands(
        DirectComposition::CKeyframeAnimationMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  unsigned int v4; // r14d
  char v5; // r15
  __int64 v6; // r13
  int v7; // eax
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // r12
  char *v11; // rcx
  unsigned int v12; // edx
  _DWORD *v13; // r8
  __int64 v14; // rax
  unsigned __int64 v15; // [rsp+90h] [rbp+50h] BYREF
  void *v16; // [rsp+98h] [rbp+58h] BYREF

  if ( !DirectComposition::CBaseExpressionMarshaler::EmitUpdateCommands(this, a2) )
    return 0;
  if ( *((_DWORD *)this + 51) < *((_DWORD *)this + 50) )
  {
    v15 = (unsigned __int64)this;
    if ( (*((_DWORD *)this + 4) & 0x10000) == 0 )
    {
      if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_f1d1b33ccf7202873e41137e3be87055___lambda_cef133924e7ba8c5c0c6519b3ed084f6___(
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
    v9 = 4096LL - *(_QWORD *)(*((_QWORD *)*a2 + 17) + 40LL);
    v15 = v9;
    if ( v9 < 0x14 )
    {
      if ( !DirectComposition::CBatch::AllocateNewFragment(a2, &v15) )
        break;
      v9 = v15;
    }
    v10 = v4 - *((_DWORD *)this + 47);
    if ( v10 >= (v9 - 16) >> 2 )
      LODWORD(v10) = (v9 - 16) >> 2;
    DirectComposition::CBatch::EnsureBatchBuffer(a2, (unsigned int)(4 * v10 + 16), &v16);
    v11 = (char *)v16;
    v12 = 0;
    *(_DWORD *)v16 = 4 * v10 + 16;
    v13 = v11 + 16;
    *(_QWORD *)(v11 + 4) = 0LL;
    *((_DWORD *)v11 + 3) = 0;
    *((_DWORD *)v11 + 1) = 242;
    *((_DWORD *)v11 + 2) = *((_DWORD *)this + 6);
    for ( *((_DWORD *)v11 + 3) = v10; v12 < (unsigned int)v10; ++v13 )
    {
      v14 = v12 + *((_DWORD *)this + 47);
      ++v12;
      *v13 = *(_DWORD *)(*(_QWORD *)(v6 + 8 * v14) + 24LL);
    }
    *((_DWORD *)this + 47) += v10;
  }
  if ( *((_DWORD *)this + 47) != v4
    || !DirectComposition::CKeyframeAnimationMarshaler::EmitUpdatePlaybackState(this, a2) )
  {
    return 0;
  }
  v7 = *((_DWORD *)this + 4);
  v15 = (unsigned __int64)this;
  if ( (v7 & 0x2000) == 0 )
  {
    if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_69dcdd6af9664359482e1764120b8c55___(
                             this,
                             a2,
                             &v15) )
      return 0;
    *((_DWORD *)this + 4) |= 0x2000u;
    v7 = *((_DWORD *)this + 4);
  }
  v15 = (unsigned __int64)this;
  if ( (v7 & 0x4000) == 0 )
  {
    if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_6add7343b7f4497aa15eeb132caa04fc___(
                             this,
                             a2,
                             &v15) )
      return 0;
    *((_DWORD *)this + 4) |= 0x4000u;
  }
  if ( !DirectComposition::CKeyframeAnimationMarshaler::EmitSetSeekState(this, a2) )
    return 0;
  v15 = (unsigned __int64)this;
  if ( (*((_DWORD *)this + 4) & 0x8000) == 0 )
  {
    if ( (unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_5977b5f41eb0659058fbaa4886c55b50___(
                            this,
                            a2,
                            &v15) )
    {
      *((_DWORD *)this + 4) |= 0x8000u;
      return v5;
    }
    return 0;
  }
  return v5;
}
