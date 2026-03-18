/*
 * XREFs of ?EmitEnableClear@CCaptureRenderTargetMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C017C520
 * Callers:
 *     <none>
 * Callees:
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_5230228e44c8ce844498eb937a0749e1___ @ 0x1C017C224 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_5230228e44c8ce844498eb937a0749e.c)
 */

char __fastcall DirectComposition::CCaptureRenderTargetMarshaler::EmitEnableClear(
        DirectComposition::CCaptureRenderTargetMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  bool v2; // zf
  char updated; // al
  char v5; // dl
  DirectComposition::CCaptureRenderTargetMarshaler *v7; // [rsp+30h] [rbp+8h] BYREF

  v2 = (*((_DWORD *)this + 4) & 0x200) == 0;
  v7 = this;
  if ( v2 )
    return 1;
  updated = DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_5230228e44c8ce844498eb937a0749e1___(
              (__int64)this,
              a2,
              (__int64)&v7);
  v5 = 0;
  if ( updated )
  {
    *((_DWORD *)this + 4) &= ~0x200u;
    return 1;
  }
  return v5;
}
