/*
 * XREFs of ?Unload@FxDriver@@SAXPEAU_DRIVER_OBJECT@@@Z @ 0x1C00558E0
 * Callers:
 *     imp_WdfDriverMiniportUnload @ 0x1C004E490 (imp_WdfDriverMiniportUnload.c)
 * Callees:
 *     WPP_IFR_SF_qq @ 0x1C00133A4 (WPP_IFR_SF_qq.c)
 *     FxDestroy @ 0x1C00592C8 (FxDestroy.c)
 */

void __fastcall FxDriver::Unload(_DRIVER_OBJECT *DriverObject)
{
  __int64 v2; // rbx
  _FX_DRIVER_GLOBALS *v3; // rsi
  const void *v4; // rdi
  const void *_a1; // rax
  void (__fastcall *v6)(unsigned __int64); // rax
  unsigned __int64 v7; // rcx

  v2 = *(_QWORD *)IoGetDriverObjectExtension(DriverObject, FxDriver::GetFxDriver);
  if ( v2 )
  {
    v3 = *(_FX_DRIVER_GLOBALS **)(v2 + 16);
    v4 = (const void *)(v2 ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( v3->FxVerboseOn )
    {
      _a1 = (const void *)(v2 ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !*(_WORD *)(v2 + 10) )
        _a1 = 0LL;
      WPP_IFR_SF_qq(v3, 5u, 0x11u, 0xDu, WPP_FxDriver_cpp_Traceguids, _a1, DriverObject);
    }
    v6 = *(void (__fastcall **)(unsigned __int64))(v2 + 352);
    if ( v6 )
    {
      v7 = v2 ^ 0xFFFFFFFFFFFFFFF8uLL;
      if ( !*(_WORD *)(v2 + 10) )
        v7 = 0LL;
      v6(v7);
      if ( v3->FxVerboseOn )
      {
        if ( !*(_WORD *)(v2 + 10) )
          v4 = 0LL;
        WPP_IFR_SF_qq(v3, 5u, 0x11u, 0xEu, WPP_FxDriver_cpp_Traceguids, v4, DriverObject);
      }
    }
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 48LL))(v2);
    v3->Driver = 0LL;
    FxDestroy(v3);
  }
}
