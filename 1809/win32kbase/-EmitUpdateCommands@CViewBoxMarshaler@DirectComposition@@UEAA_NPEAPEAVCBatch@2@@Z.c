/*
 * XREFs of ?EmitUpdateCommands@CViewBoxMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0180F00
 * Callers:
 *     <none>
 * Callees:
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_224c9c09d69b50cd18c052282abf5501___ @ 0x1C0180CDC (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_224c9c09d69b50cd18c052282abf550.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_5fa6b6af80f695e976ba353d63404ee1___ @ 0x1C0180D48 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_5fa6b6af80f695e976ba353d63404ee.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_8a8c8c8857ddd88efc91f8965095033c___ @ 0x1C0180DB8 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_8a8c8c8857ddd88efc91f8965095033.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_97675db0c2275cbaa76b00f758dc2699___ @ 0x1C0180E24 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_97675db0c2275cbaa76b00f758dc269.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_ada0b37f1add2f362f94b0bce2e90f58___ @ 0x1C0180E94 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_ada0b37f1add2f362f94b0bce2e90f5.c)
 */

char __fastcall DirectComposition::CViewBoxMarshaler::EmitUpdateCommands(
        DirectComposition::CViewBoxMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  int v2; // eax
  char v3; // di
  DirectComposition::CViewBoxMarshaler *v7; // [rsp+30h] [rbp+8h] BYREF

  v2 = *((_DWORD *)this + 4);
  v3 = 0;
  v7 = this;
  if ( (v2 & 0x20) != 0 )
  {
    if ( !DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_97675db0c2275cbaa76b00f758dc2699___(
            (__int64)this,
            a2,
            (__int64)&v7) )
      return v3;
    *((_DWORD *)this + 4) &= ~0x20u;
    v2 = *((_DWORD *)this + 4);
  }
  v7 = this;
  if ( (v2 & 0x40) != 0 )
  {
    if ( !DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_5fa6b6af80f695e976ba353d63404ee1___(
            (__int64)this,
            a2,
            (__int64)&v7) )
      return v3;
    *((_DWORD *)this + 4) &= ~0x40u;
    v2 = *((_DWORD *)this + 4);
  }
  v7 = this;
  if ( (v2 & 0x80u) != 0 )
  {
    if ( !DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_8a8c8c8857ddd88efc91f8965095033c___(
            (__int64)this,
            a2,
            (__int64)&v7) )
      return v3;
    *((_DWORD *)this + 4) &= ~0x80u;
    v2 = *((_DWORD *)this + 4);
  }
  v7 = this;
  if ( (v2 & 0x100) != 0 )
  {
    if ( !DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_ada0b37f1add2f362f94b0bce2e90f58___(
            (__int64)this,
            a2,
            (__int64)&v7) )
      return v3;
    *((_DWORD *)this + 4) &= ~0x100u;
    v2 = *((_DWORD *)this + 4);
  }
  v7 = this;
  if ( (v2 & 0x200) == 0 )
    return 1;
  if ( DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_224c9c09d69b50cd18c052282abf5501___(
         (__int64)this,
         a2,
         (__int64)&v7) )
  {
    *((_DWORD *)this + 4) &= ~0x200u;
    return 1;
  }
  return v3;
}
