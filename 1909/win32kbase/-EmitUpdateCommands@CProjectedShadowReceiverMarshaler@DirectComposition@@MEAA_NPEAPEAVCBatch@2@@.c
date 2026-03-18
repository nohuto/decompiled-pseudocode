/*
 * XREFs of ?EmitUpdateCommands@CProjectedShadowReceiverMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0004E40
 * Callers:
 *     <none>
 * Callees:
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_14b6426968d6e6e9975b0046e06cc358___ @ 0x1C0004EC4 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_14b6426968d6e6e9975b0046e06cc35.c)
 *     ?EmitUpdateCommands@CPropertyChangeResourceMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0009FF8 (-EmitUpdateCommands@CPropertyChangeResourceMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_2d975dd13ea6294e845b115a50e80167___ @ 0x1C01ADAFC (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_2d975dd13ea6294e845b115a50e8016.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_fd947c69ce74862dc0f629f244fe8106___ @ 0x1C01ADB68 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_fd947c69ce74862dc0f629f244fe810.c)
 */

char __fastcall DirectComposition::CProjectedShadowReceiverMarshaler::EmitUpdateCommands(
        DirectComposition::CProjectedShadowReceiverMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char v4; // di
  int v5; // eax
  DirectComposition::CProjectedShadowReceiverMarshaler *v7; // [rsp+40h] [rbp+18h] BYREF

  v4 = 0;
  if ( DirectComposition::CPropertyChangeResourceMarshaler::EmitUpdateCommands(this, a2) )
  {
    v5 = *((_DWORD *)this + 4);
    v7 = this;
    if ( (v5 & 0x80u) != 0 )
    {
      if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_fd947c69ce74862dc0f629f244fe8106___(
                               this,
                               a2,
                               &v7) )
        return v4;
      *((_DWORD *)this + 4) &= ~0x80u;
      v5 = *((_DWORD *)this + 4);
    }
    v7 = this;
    if ( (v5 & 0x100) != 0 )
    {
      if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_2d975dd13ea6294e845b115a50e80167___(
                               this,
                               a2,
                               &v7) )
        return v4;
      *((_DWORD *)this + 4) &= ~0x100u;
      v5 = *((_DWORD *)this + 4);
    }
    v7 = this;
    if ( (v5 & 0x200) == 0 )
      return 1;
    if ( (unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_14b6426968d6e6e9975b0046e06cc358___(
                            this,
                            a2,
                            &v7) )
    {
      *((_DWORD *)this + 4) &= ~0x200u;
      return 1;
    }
  }
  return v4;
}
