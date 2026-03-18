/*
 * XREFs of ?EmitUpdateCommands@CProjectedShadowSceneMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00030F0
 * Callers:
 *     <none>
 * Callees:
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_a1494ef117167e0d115bb3d6da080f6a___ @ 0x1C0003294 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_a1494ef117167e0d115bb3d6da080f6.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_4dea41512b0d65b210438b606e35899d___ @ 0x1C0003300 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_4dea41512b0d65b210438b606e35899.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_d9f70ade21717f3320853a4d81c25eea___ @ 0x1C000336C (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_d9f70ade21717f3320853a4d81c25ee.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_6b3e6a14467ecf4e900add31c48c06c0___ @ 0x1C00033D8 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_6b3e6a14467ecf4e900add31c48c06c.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_587f969927acac595f5d776e9a526bf5___ @ 0x1C0003444 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_587f969927acac595f5d776e9a526bf.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_7fa288b36b5b909ebd944124da990719___ @ 0x1C00034B0 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_7fa288b36b5b909ebd944124da99071.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_8c9d924ed7570f02fd340d18a94cd600___ @ 0x1C000351C (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_8c9d924ed7570f02fd340d18a94cd60.c)
 *     ?EmitAddReceivers@CProjectedShadowSceneMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0003594 (-EmitAddReceivers@CProjectedShadowSceneMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitAddCasters@CProjectedShadowSceneMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0003680 (-EmitAddCasters@CProjectedShadowSceneMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C0009C94 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     ?EmitUpdateCommands@CPropertyChangeResourceMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0009FF8 (-EmitUpdateCommands@CPropertyChangeResourceMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 */

char __fastcall DirectComposition::CProjectedShadowSceneMarshaler::EmitUpdateCommands(
        DirectComposition::CProjectedShadowSceneMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char v4; // di
  int v5; // eax
  int v6; // eax
  char *v8; // rcx
  char *v9; // rcx
  void *v10; // [rsp+50h] [rbp+30h] BYREF

  v4 = 0;
  if ( DirectComposition::CPropertyChangeResourceMarshaler::EmitUpdateCommands(this, a2) )
  {
    v5 = *((_DWORD *)this + 4);
    if ( (v5 & 0x80u) != 0 )
    {
      if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0xCuLL, &v10) )
        return v4;
      v8 = (char *)v10;
      *(_DWORD *)v10 = 12;
      *(_QWORD *)(v8 + 4) = 0LL;
      *((_DWORD *)v8 + 1) = 384;
      *((_DWORD *)v8 + 2) = *((_DWORD *)this + 6);
      *((_DWORD *)this + 4) &= ~0x80u;
      v5 = *((_DWORD *)this + 4);
    }
    if ( (v5 & 0x200) != 0 )
    {
      if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0xCuLL, &v10) )
        return v4;
      v9 = (char *)v10;
      *(_DWORD *)v10 = 12;
      *(_QWORD *)(v9 + 4) = 0LL;
      *((_DWORD *)v9 + 1) = 385;
      *((_DWORD *)v9 + 2) = *((_DWORD *)this + 6);
      *((_DWORD *)this + 4) &= ~0x200u;
    }
    if ( DirectComposition::CProjectedShadowSceneMarshaler::EmitAddCasters(this, a2)
      && DirectComposition::CProjectedShadowSceneMarshaler::EmitAddReceivers(this, a2) )
    {
      v6 = *((_DWORD *)this + 4);
      v10 = this;
      if ( (v6 & 0x1000) != 0 )
      {
        if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_a1494ef117167e0d115bb3d6da080f6a___(
                                 this,
                                 a2,
                                 &v10) )
          return v4;
        *((_DWORD *)this + 4) &= ~0x1000u;
        v6 = *((_DWORD *)this + 4);
      }
      v10 = this;
      if ( (v6 & 0x400) != 0 )
      {
        if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_4dea41512b0d65b210438b606e35899d___(
                                 this,
                                 a2,
                                 &v10) )
          return v4;
        *((_DWORD *)this + 4) &= ~0x400u;
        v6 = *((_DWORD *)this + 4);
      }
      v10 = this;
      if ( (v6 & 0x800) != 0 )
      {
        if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_d9f70ade21717f3320853a4d81c25eea___(
                                 this,
                                 a2,
                                 &v10) )
          return v4;
        *((_DWORD *)this + 4) &= ~0x800u;
        v6 = *((_DWORD *)this + 4);
      }
      v10 = this;
      if ( (v6 & 0x2000) != 0 )
      {
        if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_6b3e6a14467ecf4e900add31c48c06c0___(
                                 this,
                                 a2,
                                 &v10) )
          return v4;
        *((_DWORD *)this + 4) &= ~0x2000u;
        v6 = *((_DWORD *)this + 4);
      }
      v10 = this;
      if ( (v6 & 0x4000) != 0 )
      {
        if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_587f969927acac595f5d776e9a526bf5___(
                                 this,
                                 a2,
                                 &v10) )
          return v4;
        *((_DWORD *)this + 4) &= ~0x4000u;
        v6 = *((_DWORD *)this + 4);
      }
      v10 = this;
      if ( (v6 & 0x8000) != 0 )
      {
        if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_7fa288b36b5b909ebd944124da990719___(
                                 this,
                                 a2,
                                 &v10) )
          return v4;
        *((_DWORD *)this + 4) &= ~0x8000u;
        v6 = *((_DWORD *)this + 4);
      }
      v10 = this;
      if ( (v6 & 0x100) == 0 )
        return 1;
      if ( (unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_8c9d924ed7570f02fd340d18a94cd600___(
                              this,
                              a2,
                              &v10) )
      {
        *((_DWORD *)this + 4) &= ~0x100u;
        return 1;
      }
    }
  }
  return v4;
}
