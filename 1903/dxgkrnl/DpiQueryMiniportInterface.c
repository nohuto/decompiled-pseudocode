/*
 * XREFs of DpiQueryMiniportInterface @ 0x1C0163FF8
 * Callers:
 *     DpiFdoStartAdapter @ 0x1C015F448 (DpiFdoStartAdapter.c)
 *     DpiFdoInitializeGpuVirtualization @ 0x1C01613F0 (DpiFdoInitializeGpuVirtualization.c)
 *     ?DpiBrightnessSetupInterfaceV2@@YAJPEAU_DEVICE_OBJECT@@@Z @ 0x1C0161580 (-DpiBrightnessSetupInterfaceV2@@YAJPEAU_DEVICE_OBJECT@@@Z.c)
 *     ?DpiBrightnessStartDevice@@YAJPEAU_DEVICE_OBJECT@@@Z @ 0x1C01616EC (-DpiBrightnessStartDevice@@YAJPEAU_DEVICE_OBJECT@@@Z.c)
 *     DpiFdoInitializeFdo @ 0x1C016362C (DpiFdoInitializeFdo.c)
 *     ?DpiBrightnessSetUncalibratedBrightness3Fallback@@YAJPEAU_DEVICE_OBJECT@@K@Z @ 0x1C02A7EF8 (-DpiBrightnessSetUncalibratedBrightness3Fallback@@YAJPEAU_DEVICE_OBJECT@@K@Z.c)
 *     DpiFdoHandleQueryIndirectDispInterface @ 0x1C02A9C00 (DpiFdoHandleQueryIndirectDispInterface.c)
 *     DpiFdoHandleQueryThermalInterface @ 0x1C02AA150 (DpiFdoHandleQueryThermalInterface.c)
 * Callees:
 *     DpiDxgkDdiQueryInterface @ 0x1C016408C (DpiDxgkDdiQueryInterface.c)
 */

__int64 __fastcall DpiQueryMiniportInterface(__int64 a1, __int64 a2, __int16 a3, __int16 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rbx
  __int64 v7; // rcx
  int v8; // eax
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v12; // [rsp+20h] [rbp-38h] BYREF
  __int16 v13; // [rsp+28h] [rbp-30h]
  __int16 v14; // [rsp+2Ah] [rbp-2Eh]
  int v15; // [rsp+2Ch] [rbp-2Ch]
  __int64 v16; // [rsp+30h] [rbp-28h]
  __int64 v17; // [rsp+38h] [rbp-20h]
  int v18; // [rsp+40h] [rbp-18h]
  int v19; // [rsp+44h] [rbp-14h]

  v15 = 0;
  LODWORD(v6) = -1073741637;
  v19 = 0;
  v7 = *(_QWORD *)(a1 + 64);
  if ( *(_QWORD *)(*(_QWORD *)(v7 + 40) + 256LL) )
  {
    v17 = 0LL;
    v13 = a3;
    v16 = a6;
    v12 = a2;
    v14 = a4;
    v18 = -1;
    v8 = DpiDxgkDdiQueryInterface(*(_QWORD *)(v7 + 40), *(_QWORD *)(v7 + 48), &v12);
    v6 = v8;
    if ( v8 < 0 )
    {
      v10 = WdLogNewEntry5_WdEvent(v9);
      *(_QWORD *)(v10 + 24) = v6;
      WdLogEvent5_WdEvent(v10);
    }
  }
  return (unsigned int)v6;
}
