/*
 * XREFs of ?EmitGlyphRuns@CGlyphRunVisualMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01B8520
 * Callers:
 *     ?EmitUpdateCommands@CGlyphRunVisualMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01B8580 (-EmitUpdateCommands@CGlyphRunVisualMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_875edf03129d072c2a57026e8b2c9420___lambda_4d09f61986b9554995b0a04d1855f62d___ @ 0x1C01B838C (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_875edf03129d072c2a57026e8b2c942.c)
 */

char __fastcall DirectComposition::CGlyphRunVisualMarshaler::EmitGlyphRuns(
        DirectComposition::CGlyphRunVisualMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  int v2; // eax
  unsigned int v4; // r9d
  char updated; // al
  char v6; // cl
  void *v8; // [rsp+20h] [rbp-18h]
  DirectComposition::CGlyphRunVisualMarshaler *v9; // [rsp+40h] [rbp+8h] BYREF

  v2 = *((_DWORD *)this + 90);
  v4 = *((_DWORD *)this + 88);
  v9 = this;
  if ( (v2 & 2) == 0 )
    return 1;
  updated = DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_875edf03129d072c2a57026e8b2c9420___lambda_4d09f61986b9554995b0a04d1855f62d___(
              (__int64)this,
              a2,
              (unsigned int *)this + 89,
              v4,
              v8,
              (__int64)&v9);
  v6 = 0;
  if ( updated )
  {
    *((_DWORD *)this + 90) &= ~2u;
    return 1;
  }
  return v6;
}
