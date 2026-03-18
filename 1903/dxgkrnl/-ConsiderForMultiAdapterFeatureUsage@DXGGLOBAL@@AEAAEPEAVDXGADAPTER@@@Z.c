/*
 * XREFs of ?ConsiderForMultiAdapterFeatureUsage@DXGGLOBAL@@AEAAEPEAVDXGADAPTER@@@Z @ 0x1C00C2FD4
 * Callers:
 *     ?RecordFeatureUsageWddmVersion@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C00C3418 (-RecordFeatureUsageWddmVersion@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?CreateAdapter@DXGGLOBAL@@QEAAJPEAU_DEVICE_OBJECT@@PEAPEAVDXGADAPTER@@PEAU_DXGK_ADAPTER_CAPS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C015DEE0 (-CreateAdapter@DXGGLOBAL@@QEAAJPEAU_DEVICE_OBJECT@@PEAPEAVDXGADAPTER@@PEAU_DXGK_ADAPTER_CAPS@@PE.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C0241BC8 (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall DXGGLOBAL::ConsiderForMultiAdapterFeatureUsage(DXGGLOBAL *this, struct DXGADAPTER *a2)
{
  bool result; // al
  int v3; // ecx

  result = 0;
  if ( *((_QWORD *)a2 + 320) )
  {
    v3 = *((_DWORD *)a2 + 77);
    if ( (v3 & 4) == 0 )
      return (v3 & 0x10) == 0;
  }
  return result;
}
