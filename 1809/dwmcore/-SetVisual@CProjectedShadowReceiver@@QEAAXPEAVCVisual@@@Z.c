/*
 * XREFs of ?SetVisual@CProjectedShadowReceiver@@QEAAXPEAVCVisual@@@Z @ 0x1801AF814
 * Callers:
 *     ?ProcessSetVisual@CProjectedShadowReceiver@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PROJECTEDSHADOWRECEIVER_SETVISUAL@@@Z @ 0x1801AF528 (-ProcessSetVisual@CProjectedShadowReceiver@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PROJECTEDSHADOWR.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18002FAC8 (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ??$_Emplace_reallocate@AEBQEAUID3D11SamplerState@@@?$vector@PEAUID3D11SamplerState@@V?$allocator@PEAUID3D11SamplerState@@@std@@@std@@QEAAPEAPEAUID3D11SamplerState@@QEAPEAU2@AEBQEAU2@@Z @ 0x1801532C4 (--$_Emplace_reallocate@AEBQEAUID3D11SamplerState@@@-$vector@PEAUID3D11SamplerState@@V-$allocator.c)
 *     ?GetProjectedShadowReceivers@CVisual@@QEBAPEAV?$vector@PEAVCProjectedShadowReceiver@@V?$allocator@PEAVCProjectedShadowReceiver@@@std@@@std@@XZ @ 0x1801AEE28 (-GetProjectedShadowReceivers@CVisual@@QEBAPEAV-$vector@PEAVCProjectedShadowReceiver@@V-$allocato.c)
 *     ?RemoveVisual@CProjectedShadowReceiver@@AEAAXXZ @ 0x1801AF6F4 (-RemoveVisual@CProjectedShadowReceiver@@AEAAXXZ.c)
 *     ?SetProjectedShadowReceivers@CVisual@@QEAAXPEAV?$vector@PEAVCProjectedShadowReceiver@@V?$allocator@PEAVCProjectedShadowReceiver@@@std@@@std@@@Z @ 0x1801AF770 (-SetProjectedShadowReceivers@CVisual@@QEAAXPEAV-$vector@PEAVCProjectedShadowReceiver@@V-$allocat.c)
 */

void __fastcall CProjectedShadowReceiver::SetVisual(CProjectedShadowReceiver *this, struct CVisual *a2)
{
  struct CVisual *v2; // rdi
  _QWORD *v4; // rax
  __int64 *ProjectedShadowReceivers; // rax
  _QWORD *v6; // rdx
  CProjectedShadowReceiver *v7; // [rsp+30h] [rbp+8h] BYREF

  v2 = a2;
  if ( a2 != *((struct CVisual **)this + 7) )
  {
    if ( *((_QWORD *)this + 7) )
      (*(void (__fastcall **)(CProjectedShadowReceiver *, _QWORD, _QWORD))(*(_QWORD *)this + 64LL))(this, 0LL, 0LL);
    CProjectedShadowReceiver::RemoveVisual(this);
    if ( v2 )
    {
      *((_QWORD *)this + 7) = v2;
      if ( (**((_DWORD **)v2 + 28) & 0x10000) == 0 )
      {
        v4 = operator new(0x18uLL);
        if ( v4 )
        {
          *v4 = 0LL;
          v4[1] = 0LL;
          v4[2] = 0LL;
        }
        CVisual::SetProjectedShadowReceivers(*((_QWORD *)this + 7), (__int64)v4);
        v2 = (struct CVisual *)*((_QWORD *)this + 7);
      }
      ProjectedShadowReceivers = (__int64 *)CVisual::GetProjectedShadowReceivers((__int64)v2);
      v7 = this;
      v6 = (_QWORD *)ProjectedShadowReceivers[1];
      if ( (_QWORD *)ProjectedShadowReceivers[2] == v6 )
      {
        std::vector<ID3D11SamplerState *>::_Emplace_reallocate<ID3D11SamplerState * const &>(
          ProjectedShadowReceivers,
          v6,
          &v7);
      }
      else
      {
        *v6 = this;
        ProjectedShadowReceivers[1] += 8LL;
      }
      (*(void (__fastcall **)(CProjectedShadowReceiver *, _QWORD, _QWORD))(*(_QWORD *)this + 64LL))(this, 0LL, 0LL);
    }
  }
}
