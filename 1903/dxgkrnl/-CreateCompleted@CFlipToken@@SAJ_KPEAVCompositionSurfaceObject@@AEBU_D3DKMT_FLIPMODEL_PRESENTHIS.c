/*
 * XREFs of ?CreateCompleted@CFlipToken@@SAJ_KPEAVCompositionSurfaceObject@@AEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@PEAPEAV1@@Z @ 0x1C005B1EC
 * Callers:
 *     ?CreateFlipToken@CToken@@CAJ_KPEAVCompositionSurfaceObject@@AEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@PEAPEAV1@@Z @ 0x1C005A848 (-CreateFlipToken@CToken@@CAJ_KPEAVCompositionSurfaceObject@@AEBU_D3DKMT_FLIPMODEL_PRESENTHISTORY.c)
 * Callees:
 *     ?InitializeCompleted@CFlipToken@@IEAAJAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@_NW4TokenState@CTokenBase@@@Z @ 0x1C000A40C (-InitializeCompleted@CFlipToken@@IEAAJAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@_NW4TokenState@.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000C364 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?GetIndependentFlipNotifyDwm@CompositionSurfaceObject@@QEAAJ_KPEA_N@Z @ 0x1C001C91C (-GetIndependentFlipNotifyDwm@CompositionSurfaceObject@@QEAAJ_KPEA_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024FA0 (_guard_dispatch_icall_nop.c)
 *     ??0CFlipToken@@IEAA@_KPEAVCompositionSurfaceObject@@@Z @ 0x1C005AFE8 (--0CFlipToken@@IEAA@_KPEAVCompositionSurfaceObject@@@Z.c)
 */

__int64 __fastcall CFlipToken::CreateCompleted(
        __int64 a1,
        struct CompositionSurfaceObject *this,
        const struct _D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN *a3,
        struct CFlipToken **a4)
{
  struct _D3DKMT_FLIPMODEL_PRESENTHISTORYTOKENFLAGS::$999A3466B180106FECC6453D6FF00F87::$CDA7573B07EF0A4513B0E43B6C419F7F Value; // eax
  char v5; // di
  CFlipToken *v10; // rax
  int v11; // r9d
  struct CFlipToken *v12; // rbx
  int v13; // edi
  bool v15; // [rsp+50h] [rbp+18h] BYREF

  Value = (struct _D3DKMT_FLIPMODEL_PRESENTHISTORYTOKENFLAGS::$999A3466B180106FECC6453D6FF00F87::$CDA7573B07EF0A4513B0E43B6C419F7F)a3->Flags.Value;
  v5 = 1;
  *a4 = 0LL;
  v15 = 1;
  if ( (*(_DWORD *)&Value & 0x42000) == 0x2000 )
  {
    CompositionSurfaceObject::GetIndependentFlipNotifyDwm(this, a1, &v15);
    v5 = v15;
  }
  v10 = (CFlipToken *)operator new[](0x248uLL, 0x6F744D54u, PagedPool);
  if ( v10 )
    v12 = CFlipToken::CFlipToken(v10, a1, this);
  else
    v12 = 0LL;
  if ( v12 )
  {
    v13 = CFlipToken::InitializeCompleted((__int64)v12, (__int64)a3, v5, v11);
    if ( v13 < 0 )
      (**(void (__fastcall ***)(struct CFlipToken *, __int64))v12)(v12, 1LL);
    else
      *a4 = v12;
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)v13;
}
