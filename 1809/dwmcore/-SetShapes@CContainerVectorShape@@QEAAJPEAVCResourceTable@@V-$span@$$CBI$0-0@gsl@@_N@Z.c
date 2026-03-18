/*
 * XREFs of ?SetShapes@CContainerVectorShape@@QEAAJPEAVCResourceTable@@V?$span@$$CBI$0?0@gsl@@_N@Z @ 0x180193B0C
 * Callers:
 *     ?ProcessSetShapes@CContainerVectorShape@@QEAAJPEAVCResourceTable@@PEBUMILCMD_CONTAINERVECTORSHAPE_SETSHAPES@@PEBXI@Z @ 0x180193A7C (-ProcessSetShapes@CContainerVectorShape@@QEAAJPEAVCResourceTable@@PEBUMILCMD_CONTAINERVECTORSHAP.c)
 *     ?ProcessSetShapes@CShapeVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_SHAPEVISUAL_SETSHAPES@@PEBXI@Z @ 0x1801B252C (-ProcessSetShapes@CShapeVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_SHAPEVISUAL_SETSHAPES@@PEBXI.c)
 * Callees:
 *     ?UnRegisterNNotifiersInternal@CResource@@AEAAXPEAPEAV1@I@Z @ 0x18005B390 (-UnRegisterNNotifiersInternal@CResource@@AEAAXPEAPEAV1@I@Z.c)
 *     ?RegisterNNotifiersInternal@CResource@@AEAAJPEAPEAV1@I@Z @ 0x1800A1C9C (-RegisterNNotifiersInternal@CResource@@AEAAJPEAPEAV1@I@Z.c)
 *     ?GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z @ 0x1800BDA68 (-GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?terminate@details@gsl@@YAXXZ @ 0x180152C70 (-terminate@details@gsl@@YAXXZ.c)
 *     ??$_Emplace_reallocate@AEBQEAUID3D11SamplerState@@@?$vector@PEAUID3D11SamplerState@@V?$allocator@PEAUID3D11SamplerState@@@std@@@std@@QEAAPEAPEAUID3D11SamplerState@@QEAPEAU2@AEBQEAU2@@Z @ 0x1801532C4 (--$_Emplace_reallocate@AEBQEAUID3D11SamplerState@@@-$vector@PEAUID3D11SamplerState@@V-$allocator.c)
 *     ?_Reallocate_exactly@?$vector@PEAVCDataSourceReader@@V?$allocator@PEAVCDataSourceReader@@@std@@@std@@AEAAX_K@Z @ 0x1801549E4 (-_Reallocate_exactly@-$vector@PEAVCDataSourceReader@@V-$allocator@PEAVCDataSourceReader@@@std@@@.c)
 *     ModuleFailFastForHRESULT @ 0x1801E0F18 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CContainerVectorShape::SetShapes(
        struct CResource ***this,
        CResourceTable *a2,
        unsigned __int64 *a3,
        char a4)
{
  __int64 *v7; // rbx
  __int64 v8; // rcx
  __int64 v9; // rsi
  struct CResource **v10; // r8
  __int64 v11; // rbp
  struct CResource *ResourceWithoutType; // r15
  __int64 v13; // rcx
  struct CResource **v14; // rdx
  int v15; // eax
  __int64 v16; // rcx
  unsigned int v17; // ebx
  struct CResource *v19; // [rsp+30h] [rbp-38h] BYREF
  void *retaddr; // [rsp+68h] [rbp+0h]

  if ( !a4 )
  {
    v7 = (__int64 *)(this + 11);
    CResource::UnRegisterNNotifiersInternal((CResource *)this, this[11], this[12] - this[11]);
    v8 = *v7;
    v7[1] = *v7;
    if ( *a3 > (v7[2] - v8) >> 3 )
    {
      if ( *a3 > 0x1FFFFFFFFFFFFFFFLL )
        ModuleFailFastForHRESULT(2147483659LL, retaddr);
      std::vector<CDataSourceReader *>::_Reallocate_exactly((__int64)v7, *a3);
    }
  }
  v9 = 0LL;
  v10 = this[12];
  v11 = v10 - this[11];
  if ( *(_DWORD *)a3 )
  {
    while ( 1 )
    {
      if ( (unsigned int)v9 >= (__int64)*a3 )
      {
        gsl::details::terminate((gsl::details *)(unsigned int)v9);
        __debugbreak();
      }
      _mm_lfence();
      ResourceWithoutType = CResourceTable::GetResourceWithoutType(a2, *(_DWORD *)(a3[1] + 4 * v9));
      if ( !(*(unsigned __int8 (__fastcall **)(struct CResource *, __int64))(*(_QWORD *)ResourceWithoutType + 48LL))(
              ResourceWithoutType,
              155LL) )
        break;
      v14 = this[12];
      v19 = ResourceWithoutType;
      if ( this[13] == v14 )
      {
        std::vector<ID3D11SamplerState *>::_Emplace_reallocate<ID3D11SamplerState * const &>(
          (__int64 *)this + 11,
          v14,
          &v19);
      }
      else
      {
        *v14 = ResourceWithoutType;
        ++this[12];
      }
      v9 = (unsigned int)(v9 + 1);
      if ( (unsigned int)v9 >= *(_DWORD *)a3 )
      {
        v10 = this[12];
        goto LABEL_14;
      }
    }
    v17 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, -2003303421, 0x4Fu);
  }
  else
  {
LABEL_14:
    v15 = CResource::RegisterNNotifiersInternal(
            (CResource *)this,
            &this[11][(unsigned int)v11],
            (unsigned int)(v10 - this[11]) - (unsigned int)v11);
    v17 = v15;
    if ( v15 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v15, 0x55u);
    else
      ((void (__fastcall *)(struct CResource ***, _QWORD, _QWORD))(*this)[8])(this, 0LL, 0LL);
  }
  return v17;
}
