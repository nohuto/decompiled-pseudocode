/*
 * XREFs of ?ProcessSetAttractors@CParticleEmitterVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PARTICLEEMITTERVISUAL_SETATTRACTORS@@PEBXI@Z @ 0x1801EC260
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009BE60 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?RegisterNNotifiersInternal@CResource@@AEAAJPEAPEAV1@_K@Z @ 0x18007B54C (-RegisterNNotifiersInternal@CResource@@AEAAJPEAPEAV1@_K@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x18009BDF0 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ??$_Emplace_reallocate@AEBQEAUID3D11SamplerState@@@?$vector@PEAUID3D11SamplerState@@V?$allocator@PEAUID3D11SamplerState@@@std@@@std@@QEAAPEAPEAUID3D11SamplerState@@QEAPEAU2@AEBQEAU2@@Z @ 0x180160F90 (--$_Emplace_reallocate@AEBQEAUID3D11SamplerState@@@-$vector@PEAUID3D11SamplerState@@V-$allocator.c)
 *     ?_Reallocate_exactly@?$vector@PEAVCParticleAttractor@@V?$allocator@PEAVCParticleAttractor@@@std@@@std@@AEAAX_K@Z @ 0x1801618DC (-_Reallocate_exactly@-$vector@PEAVCParticleAttractor@@V-$allocator@PEAVCParticleAttractor@@@std@.c)
 *     ?UnregisterAttractorNotifiers@CParticleEmitterVisual@@IEAAXXZ @ 0x1801ED0EC (-UnregisterAttractorNotifiers@CParticleEmitterVisual@@IEAAXXZ.c)
 */

__int64 __fastcall CParticleEmitterVisual::ProcessSetAttractors(
        CParticleEmitterVisual *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_PARTICLEEMITTERVISUAL_SETATTRACTORS *a3,
        unsigned int *a4,
        unsigned int a5)
{
  unsigned __int64 v8; // rdi
  unsigned int v9; // esi
  __int64 v10; // rax
  __int64 v11; // r15
  __int64 Resource; // rax
  _BYTE *v13; // rdx
  signed int v14; // eax
  __int64 v15; // rcx
  unsigned int v16; // ebx
  unsigned int v18; // [rsp+20h] [rbp-38h]
  __int64 v19; // [rsp+70h] [rbp+18h] BYREF

  if ( *((_DWORD *)a3 + 3) != a5 || (a5 & 3) != 0 )
  {
    v18 = 1211;
LABEL_17:
    v16 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, 0x88980403, v18, 0LL);
    return v16;
  }
  v8 = (unsigned __int64)a5 >> 2;
  if ( !*((_BYTE *)a3 + 8) )
  {
    CParticleEmitterVisual::UnregisterAttractorNotifiers(this);
    if ( v8 > (__int64)(*((_QWORD *)this + 134) - *((_QWORD *)this + 132)) >> 3 )
      std::vector<CParticleAttractor *>::_Reallocate_exactly((__int64)this + 1056, v8);
  }
  v9 = 0;
  v10 = *((_QWORD *)this + 133);
  v11 = (v10 - *((_QWORD *)this + 132)) >> 3;
  if ( (_DWORD)v8 )
  {
    while ( 1 )
    {
      Resource = CResourceTable::GetResource((__int64)a2, *a4, 0x6Fu);
      v19 = Resource;
      if ( !Resource )
        break;
      v13 = (_BYTE *)*((_QWORD *)this + 133);
      if ( *((_BYTE **)this + 134) == v13 )
      {
        std::vector<ID3D11SamplerState *>::_Emplace_reallocate<ID3D11SamplerState * const &>(
          (__int64)this + 1056,
          v13,
          &v19);
      }
      else
      {
        *(_QWORD *)v13 = Resource;
        *((_QWORD *)this + 133) += 8LL;
      }
      ++v9;
      ++a4;
      if ( v9 >= (unsigned int)v8 )
      {
        v10 = *((_QWORD *)this + 133);
        goto LABEL_13;
      }
    }
    v18 = 1228;
    goto LABEL_17;
  }
LABEL_13:
  v14 = CResource::RegisterNNotifiersInternal(
          this,
          (struct CResource **)(*((_QWORD *)this + 132) + 8LL * (unsigned int)v11),
          (unsigned int)((v10 - *((_QWORD *)this + 132)) >> 3) - (unsigned int)v11);
  v16 = v14;
  if ( v14 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0x4D2u, 0LL);
  return v16;
}
