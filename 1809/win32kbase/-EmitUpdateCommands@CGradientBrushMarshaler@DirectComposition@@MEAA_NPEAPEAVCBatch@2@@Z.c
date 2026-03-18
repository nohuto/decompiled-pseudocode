/*
 * XREFs of ?EmitUpdateCommands@CGradientBrushMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01746D0
 * Callers:
 *     ?EmitUpdateCommands@CLinearGradientBrushMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01764C0 (-EmitUpdateCommands@CLinearGradientBrushMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_3ca22ddc930a9a8e1434ded79884245e___lambda_0bc58e56ac4a9aab059b2d62d77c79a6___ @ 0x1C017438C (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_3ca22ddc930a9a8e1434ded79884245.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_c3dccb7f5107fd1054343eee1cf9e957___ @ 0x1C01744AC (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_c3dccb7f5107fd1054343eee1cf9e95.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_da0341fb1360bb27bf2d0fc0ff433102___ @ 0x1C0174518 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_da0341fb1360bb27bf2d0fc0ff43310.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_e10250a4bffccb338584f30c972d0518___ @ 0x1C0174584 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_e10250a4bffccb338584f30c972d051.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_fb6436227fe4a3a1bb1038418e89482c___ @ 0x1C01745F0 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_fb6436227fe4a3a1bb1038418e89482.c)
 */

char __fastcall DirectComposition::CGradientBrushMarshaler::EmitUpdateCommands(
        DirectComposition::CGradientBrushMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  int v2; // eax
  char v3; // di
  void *v7; // [rsp+20h] [rbp-18h]
  DirectComposition::CGradientBrushMarshaler *v8; // [rsp+40h] [rbp+8h] BYREF

  v2 = *((_DWORD *)this + 4);
  v3 = 0;
  v8 = this;
  if ( (v2 & 0x200) != 0 )
  {
    if ( !DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_fb6436227fe4a3a1bb1038418e89482c___(
            (__int64)this,
            a2,
            (__int64)&v8) )
      return v3;
    *((_DWORD *)this + 4) &= ~0x200u;
    v2 = *((_DWORD *)this + 4);
  }
  v8 = this;
  if ( (v2 & 0x40) != 0 )
  {
    if ( !DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_c3dccb7f5107fd1054343eee1cf9e957___(
            (__int64)this,
            a2,
            (__int64)&v8) )
      return v3;
    *((_DWORD *)this + 4) &= ~0x40u;
    v2 = *((_DWORD *)this + 4);
  }
  v8 = this;
  if ( (v2 & 0x80u) != 0 )
  {
    if ( !DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_e10250a4bffccb338584f30c972d0518___(
            (__int64)this,
            a2,
            (__int64)&v8) )
      return v3;
    *((_DWORD *)this + 4) &= ~0x80u;
    v2 = *((_DWORD *)this + 4);
  }
  v8 = this;
  if ( (v2 & 0x20) != 0 )
  {
    if ( !DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_da0341fb1360bb27bf2d0fc0ff433102___(
            (__int64)this,
            a2,
            (__int64)&v8) )
      return v3;
    *((_DWORD *)this + 4) &= ~0x20u;
    v2 = *((_DWORD *)this + 4);
  }
  v8 = this;
  if ( (v2 & 0x100) == 0 )
    return 1;
  if ( DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_3ca22ddc930a9a8e1434ded79884245e___lambda_0bc58e56ac4a9aab059b2d62d77c79a6___(
         (__int64)this,
         a2,
         (unsigned int *)this + 23,
         *((_DWORD *)this + 22),
         v7,
         (__int64)&v8) )
  {
    *((_DWORD *)this + 4) &= ~0x100u;
    return 1;
  }
  return v3;
}
