/*
 * XREFs of ?EmitClearColor@CCaptureRenderTargetMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C017C460
 * Callers:
 *     <none>
 * Callees:
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_166221b1836628a2e26e01da49eb8b67___ @ 0x1C017C144 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_166221b1836628a2e26e01da49eb8b6.c)
 */

char __fastcall DirectComposition::CCaptureRenderTargetMarshaler::EmitClearColor(
        DirectComposition::CCaptureRenderTargetMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  bool v2; // zf
  char updated; // al
  char v5; // dl
  DirectComposition::CCaptureRenderTargetMarshaler *v7; // [rsp+30h] [rbp+8h] BYREF

  v2 = (*((_DWORD *)this + 4) & 0x400) == 0;
  v7 = this;
  if ( v2 )
    return 1;
  updated = DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_166221b1836628a2e26e01da49eb8b67___(
              (__int64)this,
              a2,
              (__int64)&v7);
  v5 = 0;
  if ( updated )
  {
    *((_DWORD *)this + 4) &= ~0x400u;
    return 1;
  }
  return v5;
}
