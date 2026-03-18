/*
 * XREFs of ?_Create@FxTimer@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_TIMER_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxObject@@PEAPEAUWDFTIMER__@@@Z @ 0x1C0014980
 * Callers:
 *     imp_WdfTimerCreate @ 0x1C0014A40 (imp_WdfTimerCreate.c)
 * Callees:
 *     ??0FxTimer@@QEAA@PEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C000C914 (--0FxTimer@@QEAA@PEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?Initialize@FxTimer@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_TIMER_CONFIG@@PEAVFxObject@@PEAPEAUWDFTIMER__@@@Z @ 0x1C0013A60 (-Initialize@FxTimer@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_TIMER_CONFIG@@PEAVFxObject@@PEAPE.c)
 *     ?FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x1C0017908 (-FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@.c)
 *     ?ClearEvtCallbacks@FxObject@@QEAAXXZ @ 0x1C005C490 (-ClearEvtCallbacks@FxObject@@QEAAXXZ.c)
 */

__int64 __fastcall FxTimer::_Create(
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        _WDF_TIMER_CONFIG *Config,
        _WDF_OBJECT_ATTRIBUTES *Attributes,
        FxObject *ParentObject,
        WDFTIMER__ **Timer)
{
  FxTimer *v9; // rax
  FxTimer *v10; // rax
  FxTimer *v11; // rbx
  int v12; // edi

  v9 = (FxTimer *)FxObjectHandleAlloc(
                    FxDriverGlobals,
                    ExDefaultNonPagedPoolType,
                    0x160uLL,
                    0,
                    Attributes,
                    0,
                    FxObjectTypeExternal);
  if ( v9 )
  {
    FxTimer::FxTimer(v9, FxDriverGlobals);
    v11 = v10;
  }
  else
  {
    v11 = 0LL;
  }
  if ( !v11 )
    return 3221225626LL;
  v12 = FxTimer::Initialize(v11, (_FX_DRIVER_GLOBALS *)Attributes, Config, ParentObject, Timer);
  if ( v12 < 0 )
  {
    FxObject::ClearEvtCallbacks(v11);
    v11->DeleteObject(v11);
  }
  return (unsigned int)v12;
}
