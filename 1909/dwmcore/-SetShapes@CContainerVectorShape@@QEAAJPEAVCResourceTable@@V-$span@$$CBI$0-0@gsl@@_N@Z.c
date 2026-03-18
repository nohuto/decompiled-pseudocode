/*
 * XREFs of ?SetShapes@CContainerVectorShape@@QEAAJPEAVCResourceTable@@V?$span@$$CBI$0?0@gsl@@_N@Z @ 0x1801D3AB0
 * Callers:
 *     ?ProcessSetShapes@CContainerVectorShape@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_CONTAINERVECTORSHAPE_SETSHAPES@@PEBXI@Z @ 0x1801D3A0C (-ProcessSetShapes@CContainerVectorShape@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_CONTAINERVECTORS.c)
 *     ?ProcessSetShapes@CShapeVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_SHAPEVISUAL_SETSHAPES@@PEBXI@Z @ 0x1801F8C18 (-ProcessSetShapes@CShapeVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_SHAPEVISUAL_SETSHAPES@@PE.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?RegisterNNotifiersInternal@CResource@@AEAAJPEAPEAV1@_K@Z @ 0x18007B54C (-RegisterNNotifiersInternal@CResource@@AEAAJPEAPEAV1@_K@Z.c)
 *     ?GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z @ 0x18007CBC0 (-GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z.c)
 *     ?UnRegisterNNotifiersInternal@CResource@@AEAAXPEAPEAV1@_K@Z @ 0x1800BBEBC (-UnRegisterNNotifiersInternal@CResource@@AEAAXPEAPEAV1@_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ?_Xlength_error@std@@YAXPEBD@Z @ 0x180159B0C (-_Xlength_error@std@@YAXPEBD@Z.c)
 *     ??$_Emplace_reallocate@AEBQEAUID3D11SamplerState@@@?$vector@PEAUID3D11SamplerState@@V?$allocator@PEAUID3D11SamplerState@@@std@@@std@@QEAAPEAPEAUID3D11SamplerState@@QEAPEAU2@AEBQEAU2@@Z @ 0x180160F90 (--$_Emplace_reallocate@AEBQEAUID3D11SamplerState@@@-$vector@PEAUID3D11SamplerState@@V-$allocator.c)
 *     ?_Reallocate_exactly@?$vector@PEAVCParticleAttractor@@V?$allocator@PEAVCParticleAttractor@@@std@@@std@@AEAAX_K@Z @ 0x1801618DC (-_Reallocate_exactly@-$vector@PEAVCParticleAttractor@@V-$allocator@PEAVCParticleAttractor@@@std@.c)
 *     ??A?$span@$$CBI$0?0@gsl@@QEBAAEBI_J@Z @ 0x1801D39C0 (--A-$span@$$CBI$0-0@gsl@@QEBAAEBI_J@Z.c)
 */

__int64 __fastcall CContainerVectorShape::SetShapes(
        struct CResource ***this,
        CResourceTable *a2,
        unsigned __int64 *a3,
        char a4)
{
  __int64 *v7; // rbx
  __int64 v8; // rax
  unsigned __int64 v9; // rcx
  unsigned int v10; // ebp
  struct CResource **v11; // rax
  __int64 v12; // rsi
  unsigned int *v13; // rax
  struct CResource *ResourceWithoutType; // r14
  __int64 v15; // rcx
  struct CResource **v16; // rdx
  signed int v17; // eax
  __int64 v18; // rcx
  unsigned int v19; // ebx
  struct CResource *v21; // [rsp+30h] [rbp-28h] BYREF

  if ( !a4 )
  {
    v7 = (__int64 *)(this + 11);
    CResource::UnRegisterNNotifiersInternal((CResource *)this, this[11], (unsigned int)(this[12] - this[11]));
    v8 = *v7;
    v7[1] = *v7;
    v9 = (v7[2] - v8) >> 3;
    if ( *a3 > v9 )
    {
      if ( *a3 > 0x1FFFFFFFFFFFFFFFLL )
        std::_Xlength_error((const char *)v9);
      std::vector<CParticleAttractor *>::_Reallocate_exactly((__int64)v7, *a3);
    }
  }
  v10 = 0;
  v11 = this[12];
  v12 = v11 - this[11];
  if ( *(_DWORD *)a3 )
  {
    while ( 1 )
    {
      v13 = (unsigned int *)gsl::span<unsigned int const,-1>::operator[](a3, v10);
      ResourceWithoutType = CResourceTable::GetResourceWithoutType(a2, *v13);
      if ( !(*(unsigned __int8 (__fastcall **)(struct CResource *, __int64))(*(_QWORD *)ResourceWithoutType + 48LL))(
              ResourceWithoutType,
              186LL) )
        break;
      v16 = this[12];
      v21 = ResourceWithoutType;
      if ( this[13] == v16 )
      {
        std::vector<ID3D11SamplerState *>::_Emplace_reallocate<ID3D11SamplerState * const &>(
          (__int64)(this + 11),
          v16,
          &v21);
      }
      else
      {
        *v16 = ResourceWithoutType;
        ++this[12];
      }
      if ( ++v10 >= *(_DWORD *)a3 )
      {
        v11 = this[12];
        goto LABEL_13;
      }
    }
    v19 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, 0x88980403, 0x4Du, 0LL);
  }
  else
  {
LABEL_13:
    v17 = CResource::RegisterNNotifiersInternal(
            (CResource *)this,
            &this[11][(unsigned int)v12],
            (unsigned int)(v11 - this[11]) - (unsigned int)v12);
    v19 = v17;
    if ( v17 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, v17, 0x53u, 0LL);
    else
      ((void (__fastcall *)(struct CResource ***, _QWORD, _QWORD))(*this)[8])(this, 0LL, 0LL);
  }
  return v19;
}
