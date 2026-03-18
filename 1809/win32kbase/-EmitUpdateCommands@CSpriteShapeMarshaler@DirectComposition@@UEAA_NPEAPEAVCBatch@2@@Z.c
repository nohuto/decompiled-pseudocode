/*
 * XREFs of ?EmitUpdateCommands@CSpriteShapeMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0176C60
 * Callers:
 *     <none>
 * Callees:
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_3cb0627271ffa6f7f9a89b7a218bf460___ @ 0x1C0174A4C (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_3cb0627271ffa6f7f9a89b7a218bf46.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_1a9f5415c597b6cab460856817b53695___ @ 0x1C017676C (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_1a9f5415c597b6cab460856817b5369.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_1cd2548015b491e78e3d7f730f473b37___ @ 0x1C01767D8 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_1cd2548015b491e78e3d7f730f473b3.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_2379e32af932ffd8d999875a460acb18___ @ 0x1C0176844 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_2379e32af932ffd8d999875a460acb1.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_26d0409e4bc63939fd10751d2b2aacec___ @ 0x1C01768BC (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_26d0409e4bc63939fd10751d2b2aace.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_2efcd0c222ce769b4cec96d8a6385df9___lambda_d84e1ed4b8f486922f9c1a79d2402bc2___ @ 0x1C0176934 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_2efcd0c222ce769b4cec96d8a6385df.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_8fecda2fdf8d682dba9449824db93928___ @ 0x1C0176A50 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_8fecda2fdf8d682dba9449824db9392.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_9e56c9a980185c76b7b37ad9c657ae79___ @ 0x1C0176ABC (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_9e56c9a980185c76b7b37ad9c657ae7.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_eee009dbb4b5cb9229df5c709db3ad67___ @ 0x1C0176B48 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_eee009dbb4b5cb9229df5c709db3ad6.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_f7975bac337d7ecc4b48704b49dc983b___ @ 0x1C0176BC0 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_f7975bac337d7ecc4b48704b49dc983.c)
 */

char __fastcall DirectComposition::CSpriteShapeMarshaler::EmitUpdateCommands(
        DirectComposition::CSpriteShapeMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  int v2; // eax
  char v3; // di
  void *v7; // [rsp+20h] [rbp-10h]
  DirectComposition::CSpriteShapeMarshaler *v8; // [rsp+40h] [rbp+10h] BYREF

  v2 = *((_DWORD *)this + 4);
  v3 = 0;
  v8 = this;
  if ( (v2 & 0x20) != 0 )
  {
    if ( !DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_3cb0627271ffa6f7f9a89b7a218bf460___(
            (__int64)this,
            a2,
            (__int64)&v8) )
      return v3;
    *((_DWORD *)this + 4) &= ~0x20u;
    v2 = *((_DWORD *)this + 4);
  }
  v8 = this;
  if ( (v2 & 0x40) != 0 )
  {
    if ( !DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_26d0409e4bc63939fd10751d2b2aacec___(
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
    if ( !DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_2379e32af932ffd8d999875a460acb18___(
            (__int64)this,
            a2,
            (__int64)&v8) )
      return v3;
    *((_DWORD *)this + 4) &= ~0x80u;
    v2 = *((_DWORD *)this + 4);
  }
  v8 = this;
  if ( (v2 & 0x100) != 0 )
  {
    if ( !DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_eee009dbb4b5cb9229df5c709db3ad67___(
            (__int64)this,
            a2,
            (__int64)&v8) )
      return v3;
    *((_DWORD *)this + 4) &= ~0x100u;
    v2 = *((_DWORD *)this + 4);
  }
  v8 = this;
  if ( (v2 & 0x200) != 0 )
  {
    if ( !DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_9e56c9a980185c76b7b37ad9c657ae79___(
            (__int64)this,
            a2,
            (__int64)&v8) )
      return v3;
    *((_DWORD *)this + 4) &= ~0x200u;
    v2 = *((_DWORD *)this + 4);
  }
  v8 = this;
  if ( (v2 & 0x400) != 0 )
  {
    if ( !DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_2efcd0c222ce769b4cec96d8a6385df9___lambda_d84e1ed4b8f486922f9c1a79d2402bc2___(
            (__int64)this,
            a2,
            (unsigned int *)this + 21,
            *((_DWORD *)this + 20),
            v7,
            (__int64)&v8) )
      return v3;
    *((_DWORD *)this + 4) &= ~0x400u;
    v2 = *((_DWORD *)this + 4);
  }
  v8 = this;
  if ( (v2 & 0x800) != 0 )
  {
    if ( !DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_8fecda2fdf8d682dba9449824db93928___(
            (__int64)this,
            a2,
            (__int64)&v8) )
      return v3;
    *((_DWORD *)this + 4) &= ~0x800u;
    v2 = *((_DWORD *)this + 4);
  }
  v8 = this;
  if ( (v2 & 0x1000) != 0 )
  {
    if ( !DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_1cd2548015b491e78e3d7f730f473b37___(
            (__int64)this,
            a2,
            (__int64)&v8) )
      return v3;
    *((_DWORD *)this + 4) &= ~0x1000u;
    v2 = *((_DWORD *)this + 4);
  }
  v8 = this;
  if ( (v2 & 0x2000) != 0 )
  {
    if ( !DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_1a9f5415c597b6cab460856817b53695___(
            (__int64)this,
            a2,
            (__int64)&v8) )
      return v3;
    *((_DWORD *)this + 4) &= ~0x2000u;
    v2 = *((_DWORD *)this + 4);
  }
  v8 = this;
  if ( (v2 & 0x4000) == 0 )
    return 1;
  if ( DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_f7975bac337d7ecc4b48704b49dc983b___(
         (__int64)this,
         a2,
         (__int64)&v8) )
  {
    *((_DWORD *)this + 4) &= ~0x4000u;
    return 1;
  }
  return v3;
}
