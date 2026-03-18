/*
 * XREFs of ?EmitUpdateCommands@CParticleBehaviorsMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01B54E0
 * Callers:
 *     <none>
 * Callees:
 *     ?EmitUpdateCommands@CPropertyChangeResourceMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0009FF8 (-EmitUpdateCommands@CPropertyChangeResourceMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_1cb5db6fca1542c34b3aef43af036547___ @ 0x1C01B5024 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_1cb5db6fca1542c34b3aef43af03654.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_234876b24a642ffebd318f1197754960___ @ 0x1C01B509C (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_234876b24a642ffebd318f119775496.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_305b40da7a9a55027382cebe6b712276___ @ 0x1C01B5114 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_305b40da7a9a55027382cebe6b71227.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_3b37ca3bbea1732339aa114e60686982___ @ 0x1C01B518C (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_3b37ca3bbea1732339aa114e6068698.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_5cd7bc8ac7c6d5ed713c9a545ec9a526___ @ 0x1C01B5204 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_5cd7bc8ac7c6d5ed713c9a545ec9a52.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_720744bfeb4fbe3e66f705525788333c___ @ 0x1C01B527C (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_720744bfeb4fbe3e66f705525788333.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_86d6245c4eb3a78d37ed860300868652___ @ 0x1C01B52F4 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_86d6245c4eb3a78d37ed86030086865.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_b68ee715b3974ab083dbdfd3e1b45ad2___ @ 0x1C01B536C (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_b68ee715b3974ab083dbdfd3e1b45ad.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_b87b77cd019689e35bf8b8f8a9de22c1___ @ 0x1C01B53E4 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_b87b77cd019689e35bf8b8f8a9de22c.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_d0d5d3d45f79c36fea760130e0929016___ @ 0x1C01B5460 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_d0d5d3d45f79c36fea760130e092901.c)
 */

char __fastcall DirectComposition::CParticleBehaviorsMarshaler::EmitUpdateCommands(
        DirectComposition::CParticleBehaviorsMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char v4; // di
  int v5; // eax
  DirectComposition::CParticleBehaviorsMarshaler *v7; // [rsp+40h] [rbp+20h] BYREF

  v4 = 0;
  if ( DirectComposition::CPropertyChangeResourceMarshaler::EmitUpdateCommands(this, a2) )
  {
    v5 = *((_DWORD *)this + 4);
    v7 = this;
    if ( (v5 & 0x80u) != 0 )
    {
      if ( !DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_b68ee715b3974ab083dbdfd3e1b45ad2___(
              (__int64)this,
              a2,
              (__int64)&v7) )
        return v4;
      *((_DWORD *)this + 4) &= ~0x80u;
      v5 = *((_DWORD *)this + 4);
    }
    v7 = this;
    if ( (v5 & 0x100) != 0 )
    {
      if ( !DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_3b37ca3bbea1732339aa114e60686982___(
              (__int64)this,
              a2,
              (__int64)&v7) )
        return v4;
      *((_DWORD *)this + 4) &= ~0x100u;
      v5 = *((_DWORD *)this + 4);
    }
    v7 = this;
    if ( (v5 & 0x200) != 0 )
    {
      if ( !DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_1cb5db6fca1542c34b3aef43af036547___(
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
      if ( !DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_d0d5d3d45f79c36fea760130e0929016___(
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
      if ( !DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_720744bfeb4fbe3e66f705525788333c___(
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
      if ( !DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_5cd7bc8ac7c6d5ed713c9a545ec9a526___(
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
      if ( !DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_86d6245c4eb3a78d37ed860300868652___(
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
      if ( !DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_305b40da7a9a55027382cebe6b712276___(
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
      if ( !DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_234876b24a642ffebd318f1197754960___(
              (__int64)this,
              a2,
              (__int64)&v7) )
        return v4;
      *((_DWORD *)this + 4) &= ~0x8000u;
      v5 = *((_DWORD *)this + 4);
    }
    v7 = this;
    if ( (v5 & 0x10000) == 0 )
      return 1;
    if ( DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_b87b77cd019689e35bf8b8f8a9de22c1___(
           (__int64)this,
           a2,
           (__int64)&v7) )
    {
      *((_DWORD *)this + 4) &= ~0x10000u;
      return 1;
    }
  }
  return v4;
}
