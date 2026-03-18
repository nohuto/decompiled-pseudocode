/*
 * XREFs of ?EmitShapes@CShapeVisualMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01B064C
 * Callers:
 *     ?EmitUpdateCommands@CShapeVisualMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01B06A0 (-EmitUpdateCommands@CShapeVisualMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_778e4044449296c5ab55ebb36926d680___lambda_f91f4cf09ba95a878c6ebb7809dc9a5a___ @ 0x1C01B04B8 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_778e4044449296c5ab55ebb36926d68.c)
 */

char __fastcall DirectComposition::CShapeVisualMarshaler::EmitShapes(
        DirectComposition::CShapeVisualMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  int v2; // eax
  unsigned int v4; // r9d
  char updated; // al
  char v6; // cl
  void *v8; // [rsp+20h] [rbp-18h]
  DirectComposition::CShapeVisualMarshaler *v9; // [rsp+40h] [rbp+8h] BYREF

  v2 = *((_DWORD *)this + 94);
  v4 = *((_DWORD *)this + 92);
  v9 = this;
  if ( (v2 & 2) == 0 )
    return 1;
  updated = DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_778e4044449296c5ab55ebb36926d680___lambda_f91f4cf09ba95a878c6ebb7809dc9a5a___(
              (__int64)this,
              a2,
              (unsigned int *)this + 93,
              v4,
              v8,
              (__int64)&v9);
  v6 = 0;
  if ( updated )
  {
    *((_DWORD *)this + 94) &= ~2u;
    return 1;
  }
  return v6;
}
