/*
 * XREFs of ?EmitUpdateCommands@CColorBrushMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C007C7A0
 * Callers:
 *     <none>
 * Callees:
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_e8619eff89e462b3089e9fb866545e5c___ @ 0x1C007C7DC (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_e8619eff89e462b3089e9fb866545e5.c)
 */

char __fastcall DirectComposition::CColorBrushMarshaler::EmitUpdateCommands(
        DirectComposition::CColorBrushMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  int v2; // eax
  char updated; // al
  char v5; // dl
  DirectComposition::CColorBrushMarshaler *v7; // [rsp+30h] [rbp+8h] BYREF

  v2 = *((_DWORD *)this + 4);
  v7 = this;
  if ( (v2 & 0x20) == 0 )
    return 1;
  updated = DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_e8619eff89e462b3089e9fb866545e5c___(
              this,
              a2,
              &v7);
  v5 = 0;
  if ( updated )
  {
    *((_DWORD *)this + 4) &= ~0x20u;
    return 1;
  }
  return v5;
}
