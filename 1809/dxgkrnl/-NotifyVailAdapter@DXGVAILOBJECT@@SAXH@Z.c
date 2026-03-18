/*
 * XREFs of ?NotifyVailAdapter@DXGVAILOBJECT@@SAXH@Z @ 0x1C025AAE8
 * Callers:
 *     ?CreateAdapter@DXGGLOBAL@@QEAAJPEAU_DEVICE_OBJECT@@PEAPEAVDXGADAPTER@@PEAU_DXGK_ADAPTER_CAPS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C014C9EC (-CreateAdapter@DXGGLOBAL@@QEAAJPEAU_DEVICE_OBJECT@@PEAPEAVDXGADAPTER@@PEAU_DXGK_ADAPTER_CAPS@@PE.c)
 *     ?Destroy@DXGADAPTER@@QEAAXXZ @ 0x1C01BCD04 (-Destroy@DXGADAPTER@@QEAAXXZ.c)
 * Callees:
 *     memset @ 0x1C00231C0 (memset.c)
 */

void __fastcall DXGVAILOBJECT::NotifyVailAdapter(int a1)
{
  _DWORD v2[10]; // [rsp+30h] [rbp-28h] BYREF

  memset(v2, 0, 0x20uLL);
  do
  {
    SMgrGdiCallout(v2, 0x100000000LL, 0LL, &DXGVAILOBJECT::NotifyVailSessionCallback, a1 != 0, 0LL);
    if ( v2[6] != -1073741816 )
      break;
    ZwYieldExecution();
  }
  while ( v2[6] == -1073741816 );
}
