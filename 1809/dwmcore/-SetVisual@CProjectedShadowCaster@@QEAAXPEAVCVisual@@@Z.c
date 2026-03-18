/*
 * XREFs of ?SetVisual@CProjectedShadowCaster@@QEAAXPEAVCVisual@@@Z @ 0x1801AE160
 * Callers:
 *     ?ProcessSetVisual@CProjectedShadowCaster@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PROJECTEDSHADOWCASTER_SETVISUAL@@@Z @ 0x1801ADDA0 (-ProcessSetVisual@CProjectedShadowCaster@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PROJECTEDSHADOWCAS.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18002FAC8 (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?AddProjectedShadowCasterVisual@CComposition@@QEAAXPEAVCVisual@@@Z @ 0x18014AF08 (-AddProjectedShadowCasterVisual@CComposition@@QEAAXPEAVCVisual@@@Z.c)
 *     ??$_Emplace_reallocate@AEBQEAUID3D11SamplerState@@@?$vector@PEAUID3D11SamplerState@@V?$allocator@PEAUID3D11SamplerState@@@std@@@std@@QEAAPEAPEAUID3D11SamplerState@@QEAPEAU2@AEBQEAU2@@Z @ 0x1801532C4 (--$_Emplace_reallocate@AEBQEAUID3D11SamplerState@@@-$vector@PEAUID3D11SamplerState@@V-$allocator.c)
 *     ?GetProjectedShadowCasters@CVisual@@QEBAPEAV?$vector@PEAVCProjectedShadowCaster@@V?$allocator@PEAVCProjectedShadowCaster@@@std@@@std@@XZ @ 0x1801AD9C0 (-GetProjectedShadowCasters@CVisual@@QEBAPEAV-$vector@PEAVCProjectedShadowCaster@@V-$allocator@PE.c)
 *     ?RemoveVisual@CProjectedShadowCaster@@AEAAXXZ @ 0x1801ADF5C (-RemoveVisual@CProjectedShadowCaster@@AEAAXXZ.c)
 *     ?SetProjectedShadowCasters@CVisual@@QEAAXPEAV?$vector@PEAVCProjectedShadowCaster@@V?$allocator@PEAVCProjectedShadowCaster@@@std@@@std@@@Z @ 0x1801AE070 (-SetProjectedShadowCasters@CVisual@@QEAAXPEAV-$vector@PEAVCProjectedShadowCaster@@V-$allocator@P.c)
 */

void __fastcall CProjectedShadowCaster::SetVisual(CProjectedShadowCaster *this, struct CVisual *a2)
{
  struct CVisual *v2; // rdi
  _QWORD *v4; // rax
  __int64 *ProjectedShadowCasters; // rax
  _QWORD *v6; // rdx
  CProjectedShadowCaster *v7; // [rsp+30h] [rbp+8h] BYREF

  v2 = a2;
  if ( a2 != *((struct CVisual **)this + 7) )
  {
    CProjectedShadowCaster::RemoveVisual(this);
    if ( v2 )
    {
      *((_QWORD *)this + 7) = v2;
      if ( (**((_DWORD **)v2 + 28) & 0x20000) == 0 )
      {
        v4 = operator new(0x18uLL);
        if ( v4 )
        {
          *v4 = 0LL;
          v4[1] = 0LL;
          v4[2] = 0LL;
        }
        CVisual::SetProjectedShadowCasters(*((_QWORD *)this + 7), (__int64)v4);
        v2 = (struct CVisual *)*((_QWORD *)this + 7);
      }
      ProjectedShadowCasters = (__int64 *)CVisual::GetProjectedShadowCasters((__int64)v2);
      v7 = this;
      v6 = (_QWORD *)ProjectedShadowCasters[1];
      if ( (_QWORD *)ProjectedShadowCasters[2] == v6 )
      {
        std::vector<ID3D11SamplerState *>::_Emplace_reallocate<ID3D11SamplerState * const &>(
          ProjectedShadowCasters,
          v6,
          &v7);
      }
      else
      {
        *v6 = this;
        ProjectedShadowCasters[1] += 8LL;
      }
      CComposition::AddProjectedShadowCasterVisual(*((CComposition **)this + 2), *((struct CVisual **)this + 7));
    }
    (*(void (__fastcall **)(CProjectedShadowCaster *, _QWORD, _QWORD))(*(_QWORD *)this + 64LL))(this, 0LL, 0LL);
  }
}
