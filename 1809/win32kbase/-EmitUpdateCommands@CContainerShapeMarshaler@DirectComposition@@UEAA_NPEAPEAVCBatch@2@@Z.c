/*
 * XREFs of ?EmitUpdateCommands@CContainerShapeMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0177360
 * Callers:
 *     <none>
 * Callees:
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_3cb0627271ffa6f7f9a89b7a218bf460___ @ 0x1C0174A4C (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_3cb0627271ffa6f7f9a89b7a218bf46.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_5a469ba0b9af6505d80fd5a2c6919ad9___lambda_c8e4717179366f347b5fcb735f2cbba9___ @ 0x1C01771E0 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_5a469ba0b9af6505d80fd5a2c6919ad.c)
 */

char __fastcall DirectComposition::CContainerShapeMarshaler::EmitUpdateCommands(
        DirectComposition::CContainerShapeMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  int v2; // eax
  char v3; // di
  void *v7; // [rsp+20h] [rbp-18h]
  DirectComposition::CContainerShapeMarshaler *v8; // [rsp+40h] [rbp+8h] BYREF

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
  if ( (v2 & 0x40) == 0 )
    return 1;
  if ( DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_5a469ba0b9af6505d80fd5a2c6919ad9___lambda_c8e4717179366f347b5fcb735f2cbba9___(
         (__int64)this,
         a2,
         (unsigned int *)this + 15,
         *((_DWORD *)this + 14),
         v7,
         (__int64)&v8) )
  {
    *((_DWORD *)this + 4) &= ~0x40u;
    return 1;
  }
  return v3;
}
