/*
 * XREFs of DpiQueryMiniportInterface @ 0x1C014C220
 * Callers:
 *     DpiFdoStartAdapter @ 0x1C01487C8 (DpiFdoStartAdapter.c)
 *     ?DpiBrightnessSetupInterfaceV2@@YAJPEAU_DEVICE_OBJECT@@@Z @ 0x1C0149994 (-DpiBrightnessSetupInterfaceV2@@YAJPEAU_DEVICE_OBJECT@@@Z.c)
 *     ?DpiBrightnessStartDevice@@YAJPEAU_DEVICE_OBJECT@@@Z @ 0x1C0149B00 (-DpiBrightnessStartDevice@@YAJPEAU_DEVICE_OBJECT@@@Z.c)
 *     DpiFdoInitializeFdo @ 0x1C014B840 (DpiFdoInitializeFdo.c)
 *     DpiFdoInitializeGpuVirtualization @ 0x1C014C474 (DpiFdoInitializeGpuVirtualization.c)
 *     DpiFdoHandleQueryIndirectDispInterface @ 0x1C026CFF0 (DpiFdoHandleQueryIndirectDispInterface.c)
 *     DpiFdoHandleQueryThermalInterface @ 0x1C026D580 (DpiFdoHandleQueryThermalInterface.c)
 * Callees:
 *     DpiDxgkDdiQueryInterface @ 0x1C014C2A8 (DpiDxgkDdiQueryInterface.c)
 */

__int64 __fastcall DpiQueryMiniportInterface(__int64 a1, __int64 a2, __int16 a3, __int16 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rcx
  __int64 v7; // rbx
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v13; // [rsp+20h] [rbp-38h] BYREF
  __int16 v14; // [rsp+28h] [rbp-30h]
  __int16 v15; // [rsp+2Ah] [rbp-2Eh]
  __int64 v16; // [rsp+30h] [rbp-28h]
  __int64 v17; // [rsp+38h] [rbp-20h]
  int v18; // [rsp+40h] [rbp-18h]

  v6 = *(_QWORD *)(a1 + 64);
  LODWORD(v7) = -1073741637;
  if ( *(_QWORD *)(*(_QWORD *)(v6 + 40) + 256LL) )
  {
    v17 = 0LL;
    v14 = a3;
    v16 = a6;
    v13 = a2;
    v15 = a4;
    v18 = -1;
    v8 = DpiDxgkDdiQueryInterface(*(_QWORD *)(v6 + 40), *(_QWORD *)(v6 + 48), &v13);
    v7 = v8;
    if ( v8 < 0 )
    {
      v11 = WdLogNewEntry5_WdEvent(v10, v9);
      *(_QWORD *)(v11 + 24) = v7;
      WdLogEvent5_WdEvent(v11);
    }
  }
  return (unsigned int)v7;
}
