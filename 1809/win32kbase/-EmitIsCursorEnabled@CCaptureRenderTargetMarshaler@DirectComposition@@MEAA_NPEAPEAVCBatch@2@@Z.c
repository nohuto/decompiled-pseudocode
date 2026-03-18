/*
 * XREFs of ?EmitIsCursorEnabled@CCaptureRenderTargetMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C017C5F0
 * Callers:
 *     <none>
 * Callees:
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_243079a93b87b4b661af6c6adc119c85___ @ 0x1C017C1B8 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_243079a93b87b4b661af6c6adc119c8.c)
 */

char __fastcall DirectComposition::CCaptureRenderTargetMarshaler::EmitIsCursorEnabled(
        DirectComposition::CCaptureRenderTargetMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  bool v2; // zf
  char updated; // al
  char v5; // dl
  DirectComposition::CCaptureRenderTargetMarshaler *v7; // [rsp+30h] [rbp+8h] BYREF

  v2 = (*((_DWORD *)this + 4) & 0x800) == 0;
  v7 = this;
  if ( v2 )
    return 1;
  updated = DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_243079a93b87b4b661af6c6adc119c85___(
              (__int64)this,
              a2,
              (__int64)&v7);
  v5 = 0;
  if ( updated )
  {
    *((_DWORD *)this + 4) &= ~0x800u;
    return 1;
  }
  return v5;
}
