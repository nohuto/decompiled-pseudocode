/*
 * XREFs of ?SetGlyphRuns@CGlyphRunContent@@QEAAJPEAVCResourceTable@@V?$span@$$CBI$0?0@gsl@@_N@Z @ 0x180206AAC
 * Callers:
 *     ?ProcessSetGlyphRuns@CGlyphRunVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_GLYPHRUNVISUAL_SETGLYPHRUNS@@PEBXI@Z @ 0x1801D6738 (-ProcessSetGlyphRuns@CGlyphRunVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_GLYPHRUNVISUAL_SETG.c)
 * Callees:
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18002A8A0 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?RegisterNNotifiersInternal@CResource@@AEAAJPEAPEAV1@_K@Z @ 0x18007FD24 (-RegisterNNotifiersInternal@CResource@@AEAAJPEAPEAV1@_K@Z.c)
 *     ?GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z @ 0x180083C40 (-GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?UnRegisterNNotifiersInternal@CResource@@AEAAXPEAPEAV1@_K@Z @ 0x1800B9D7C (-UnRegisterNNotifiersInternal@CResource@@AEAAXPEAPEAV1@_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ?_Xlength_error@std@@YAXPEBD@Z @ 0x18015B1EC (-_Xlength_error@std@@YAXPEBD@Z.c)
 *     ??$_Emplace_reallocate@AEBQEAUID3D11SamplerState@@@?$vector@PEAUID3D11SamplerState@@V?$allocator@PEAUID3D11SamplerState@@@std@@@std@@QEAAPEAPEAUID3D11SamplerState@@QEAPEAU2@AEBQEAU2@@Z @ 0x180162680 (--$_Emplace_reallocate@AEBQEAUID3D11SamplerState@@@-$vector@PEAUID3D11SamplerState@@V-$allocator.c)
 *     ?_Reallocate_exactly@?$vector@PEAVCParticleAttractor@@V?$allocator@PEAVCParticleAttractor@@@std@@@std@@AEAAX_K@Z @ 0x180162FCC (-_Reallocate_exactly@-$vector@PEAVCParticleAttractor@@V-$allocator@PEAVCParticleAttractor@@@std@.c)
 *     ??A?$span@$$CBI$0?0@gsl@@QEBAAEBI_J@Z @ 0x1801D5130 (--A-$span@$$CBI$0-0@gsl@@QEBAAEBI_J@Z.c)
 */

__int64 __fastcall CGlyphRunContent::SetGlyphRuns(
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
  __int64 v12; // rdi
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
    v7 = (__int64 *)(this + 7);
    CResource::UnRegisterNNotifiersInternal((CResource *)this, this[7], (unsigned int)(this[8] - this[7]));
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
  v11 = this[8];
  v12 = v11 - this[7];
  if ( *(_DWORD *)a3 )
  {
    while ( 1 )
    {
      v13 = (unsigned int *)gsl::span<unsigned int const,-1>::operator[](a3, v10);
      ResourceWithoutType = CResourceTable::GetResourceWithoutType(a2, *v13);
      if ( !(*(unsigned __int8 (__fastcall **)(struct CResource *, __int64))(*(_QWORD *)ResourceWithoutType + 48LL))(
              ResourceWithoutType,
              32LL) )
        break;
      v16 = this[8];
      v21 = ResourceWithoutType;
      if ( this[9] == v16 )
      {
        std::vector<ID3D11SamplerState *>::_Emplace_reallocate<ID3D11SamplerState * const &>(
          (__int64)(this + 7),
          v16,
          &v21);
      }
      else
      {
        *v16 = ResourceWithoutType;
        ++this[8];
      }
      if ( ++v10 >= *(_DWORD *)a3 )
      {
        v11 = this[8];
        goto LABEL_13;
      }
    }
    v19 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, 0x88980403, 0x5Au, 0LL);
  }
  else
  {
LABEL_13:
    v17 = CResource::RegisterNNotifiersInternal(
            (CResource *)this,
            &this[7][(unsigned int)v12],
            (unsigned int)(v11 - this[7]) - (unsigned int)v12);
    v19 = v17;
    if ( v17 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, v17, 0x60u, 0LL);
    else
      CResource::NotifyOnChanged((__int64)this, 0, 0LL);
  }
  return v19;
}
