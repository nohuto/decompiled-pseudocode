/*
 * XREFs of ?EmitUpdateCommonParameters@CNaturalAnimationMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C017172C
 * Callers:
 *     ?EmitUpdateCommands@CNaturalAnimationMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0171650 (-EmitUpdateCommands@CNaturalAnimationMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_e894253951bfb4f5a5a77140b80a5602___ @ 0x1C017154C (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_e894253951bfb4f5a5a77140b80a560.c)
 */

bool __fastcall DirectComposition::CNaturalAnimationMarshaler::EmitUpdateCommonParameters(
        DirectComposition::CNaturalAnimationMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  int v2; // r8d
  char updated; // al
  bool v5; // cl
  bool result; // al
  DirectComposition::CNaturalAnimationMarshaler *v7; // [rsp+30h] [rbp+8h] BYREF

  v2 = *((_DWORD *)this + 4);
  v7 = this;
  if ( (v2 & 0x10000) == 0 )
    goto LABEL_4;
  updated = DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_e894253951bfb4f5a5a77140b80a5602___(
              (__int64)this,
              a2,
              (__int64)&v7);
  v2 = *((_DWORD *)this + 4);
  v5 = 0;
  if ( updated )
  {
    v2 &= ~0x10000u;
    *((_DWORD *)this + 4) = v2;
LABEL_4:
    v5 = 1;
  }
  result = v5;
  *((_DWORD *)this + 4) = v2 | 0x20000;
  return result;
}
