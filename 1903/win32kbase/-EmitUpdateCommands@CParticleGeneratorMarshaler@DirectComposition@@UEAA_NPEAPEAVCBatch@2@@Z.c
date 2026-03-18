/*
 * XREFs of ?EmitUpdateCommands@CParticleGeneratorMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01C45B0
 * Callers:
 *     <none>
 * Callees:
 *     ?EmitUpdateCommands@CPropertyChangeResourceMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C000CF38 (-EmitUpdateCommands@CPropertyChangeResourceMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_000de9fc4cd26d9dc8981122586fb895___ @ 0x1C01C3D98 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_000de9fc4cd26d9dc8981122586fb89.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_0412413edbf58ce26f59a106e8eda893___ @ 0x1C01C3E08 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_0412413edbf58ce26f59a106e8eda89.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_1e32a01a436ca3113fe3e6a8ffd34814___ @ 0x1C01C3E80 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_1e32a01a436ca3113fe3e6a8ffd3481.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_20415607d9ce19e63d74ea6cefeab525___ @ 0x1C01C3F00 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_20415607d9ce19e63d74ea6cefeab52.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_2938f03acf3f3d7db8c7d4ec370dd16f___ @ 0x1C01C3F70 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_2938f03acf3f3d7db8c7d4ec370dd16.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_29c98df0b50eac389d940f8b8594a6fd___ @ 0x1C01C3FE4 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_29c98df0b50eac389d940f8b8594a6f.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_3b9aa0cf85c67a2bdf48d7f15825f65b___ @ 0x1C01C4050 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_3b9aa0cf85c67a2bdf48d7f15825f65.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_5118ba15ee1e34fcf7efc7f810140e06___ @ 0x1C01C40C0 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_5118ba15ee1e34fcf7efc7f810140e0.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_5c3a28d6370626632d57a63f7aeb01f1___ @ 0x1C01C4140 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_5c3a28d6370626632d57a63f7aeb01f.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_6df17defe68be6eabae434fd838cfbc0___ @ 0x1C01C41AC (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_6df17defe68be6eabae434fd838cfbc.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_858b3a7d00a60111dba3f29faf8c05e7___ @ 0x1C01C4220 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_858b3a7d00a60111dba3f29faf8c05e.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_9537601b409993bf1d4ff859c1e32792___ @ 0x1C01C4298 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_9537601b409993bf1d4ff859c1e3279.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_af0f5ae873ab3b36f5a4592d6dd8c710___ @ 0x1C01C4304 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_af0f5ae873ab3b36f5a4592d6dd8c71.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_b1cacc6f097ead11dbdcf4b262165d5f___ @ 0x1C01C437C (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_b1cacc6f097ead11dbdcf4b262165d5.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_de89341e5a6e722e32d711f7717ddd90___ @ 0x1C01C43EC (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_de89341e5a6e722e32d711f7717ddd9.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_dfb1cdca9d71def7c63b6c34f11901c3___ @ 0x1C01C445C (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_dfb1cdca9d71def7c63b6c34f11901c.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_ef10330d6f8a574f1d84f4a0b1558e84___ @ 0x1C01C44C8 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_ef10330d6f8a574f1d84f4a0b1558e8.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_ff445191e657b46f86018bba6b59293a___ @ 0x1C01C4534 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_ff445191e657b46f86018bba6b59293.c)
 */

char __fastcall DirectComposition::CParticleGeneratorMarshaler::EmitUpdateCommands(
        DirectComposition::CParticleGeneratorMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char v4; // di
  int v5; // eax
  DirectComposition::CParticleGeneratorMarshaler *v7; // [rsp+40h] [rbp+20h] BYREF

  v4 = 0;
  if ( DirectComposition::CPropertyChangeResourceMarshaler::EmitUpdateCommands(this, a2) )
  {
    v5 = *((_DWORD *)this + 4);
    v7 = this;
    if ( (v5 & 0x80u) != 0 )
    {
      if ( !DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_ff445191e657b46f86018bba6b59293a___(
              (__int64)this,
              a2,
              (__int64 *)&v7) )
        return v4;
      *((_DWORD *)this + 4) &= ~0x80u;
      v5 = *((_DWORD *)this + 4);
    }
    v7 = this;
    if ( (v5 & 0x100) != 0 )
    {
      if ( !DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_af0f5ae873ab3b36f5a4592d6dd8c710___(
              (__int64)this,
              a2,
              (__int64 *)&v7) )
        return v4;
      *((_DWORD *)this + 4) &= ~0x100u;
      v5 = *((_DWORD *)this + 4);
    }
    v7 = this;
    if ( (v5 & 0x200) != 0 )
    {
      if ( !DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_5c3a28d6370626632d57a63f7aeb01f1___(
              (__int64)this,
              a2,
              (__int64)&v7) )
        return v4;
      *((_DWORD *)this + 4) &= ~0x200u;
      v5 = *((_DWORD *)this + 4);
    }
    v7 = this;
    if ( (v5 & 0x400) != 0 )
    {
      if ( !DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_29c98df0b50eac389d940f8b8594a6fd___(
              (__int64)this,
              a2,
              (__int64)&v7) )
        return v4;
      *((_DWORD *)this + 4) &= ~0x400u;
      v5 = *((_DWORD *)this + 4);
    }
    v7 = this;
    if ( (v5 & 0x800) != 0 )
    {
      if ( !DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_dfb1cdca9d71def7c63b6c34f11901c3___(
              (__int64)this,
              a2,
              (__int64)&v7) )
        return v4;
      *((_DWORD *)this + 4) &= ~0x800u;
      v5 = *((_DWORD *)this + 4);
    }
    v7 = this;
    if ( (v5 & 0x1000) != 0 )
    {
      if ( !DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_9537601b409993bf1d4ff859c1e32792___(
              (__int64)this,
              a2,
              (__int64)&v7) )
        return v4;
      *((_DWORD *)this + 4) &= ~0x1000u;
      v5 = *((_DWORD *)this + 4);
    }
    v7 = this;
    if ( (v5 & 0x2000) != 0 )
    {
      if ( !DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_ef10330d6f8a574f1d84f4a0b1558e84___(
              (__int64)this,
              a2,
              (__int64)&v7) )
        return v4;
      *((_DWORD *)this + 4) &= ~0x2000u;
      v5 = *((_DWORD *)this + 4);
    }
    v7 = this;
    if ( (v5 & 0x4000) != 0 )
    {
      if ( !DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_6df17defe68be6eabae434fd838cfbc0___(
              (__int64)this,
              a2,
              (__int64)&v7) )
        return v4;
      *((_DWORD *)this + 4) &= ~0x4000u;
      v5 = *((_DWORD *)this + 4);
    }
    v7 = this;
    if ( (v5 & 0x8000) != 0 )
    {
      if ( !DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_2938f03acf3f3d7db8c7d4ec370dd16f___(
              (__int64)this,
              a2,
              (__int64)&v7) )
        return v4;
      *((_DWORD *)this + 4) &= ~0x8000u;
      v5 = *((_DWORD *)this + 4);
    }
    v7 = this;
    if ( (v5 & 0x10000) != 0 )
    {
      if ( !DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_0412413edbf58ce26f59a106e8eda893___(
              (__int64)this,
              a2,
              (__int64)&v7) )
        return v4;
      *((_DWORD *)this + 4) &= ~0x10000u;
      v5 = *((_DWORD *)this + 4);
    }
    v7 = this;
    if ( (v5 & 0x20000) != 0 )
    {
      if ( !DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_858b3a7d00a60111dba3f29faf8c05e7___(
              (__int64)this,
              a2,
              (__int64)&v7) )
        return v4;
      *((_DWORD *)this + 4) &= ~0x20000u;
      v5 = *((_DWORD *)this + 4);
    }
    v7 = this;
    if ( (v5 & 0x40000) != 0 )
    {
      if ( !DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_de89341e5a6e722e32d711f7717ddd90___(
              (__int64)this,
              a2,
              (__int64)&v7) )
        return v4;
      *((_DWORD *)this + 4) &= ~0x40000u;
      v5 = *((_DWORD *)this + 4);
    }
    v7 = this;
    if ( (v5 & 0x80000) != 0 )
    {
      if ( !DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_000de9fc4cd26d9dc8981122586fb895___(
              (__int64)this,
              a2,
              (__int64)&v7) )
        return v4;
      *((_DWORD *)this + 4) &= ~0x80000u;
      v5 = *((_DWORD *)this + 4);
    }
    v7 = this;
    if ( (v5 & 0x400000) != 0 )
    {
      if ( !DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_1e32a01a436ca3113fe3e6a8ffd34814___(
              (__int64)this,
              a2,
              (__int64 *)&v7) )
        return v4;
      *((_DWORD *)this + 4) &= ~0x400000u;
      v5 = *((_DWORD *)this + 4);
    }
    v7 = this;
    if ( (v5 & 0x800000) != 0 )
    {
      if ( !DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_5118ba15ee1e34fcf7efc7f810140e06___(
              (__int64)this,
              a2,
              (__int64 *)&v7) )
        return v4;
      *((_DWORD *)this + 4) &= ~0x800000u;
      v5 = *((_DWORD *)this + 4);
    }
    v7 = this;
    if ( (v5 & 0x1000000) != 0 )
    {
      if ( !DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_b1cacc6f097ead11dbdcf4b262165d5f___(
              (__int64)this,
              a2,
              (__int64)&v7) )
        return v4;
      *((_DWORD *)this + 4) &= ~0x1000000u;
      v5 = *((_DWORD *)this + 4);
    }
    v7 = this;
    if ( (v5 & 0x2000000) != 0 )
    {
      if ( !DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_20415607d9ce19e63d74ea6cefeab525___(
              (__int64)this,
              a2,
              (__int64)&v7) )
        return v4;
      *((_DWORD *)this + 4) &= ~0x2000000u;
      v5 = *((_DWORD *)this + 4);
    }
    v7 = this;
    if ( (v5 & 0x4000000) == 0 )
      return 1;
    if ( DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_3b9aa0cf85c67a2bdf48d7f15825f65b___(
           (__int64)this,
           a2,
           (__int64)&v7) )
    {
      *((_DWORD *)this + 4) &= ~0x4000000u;
      return 1;
    }
  }
  return v4;
}
