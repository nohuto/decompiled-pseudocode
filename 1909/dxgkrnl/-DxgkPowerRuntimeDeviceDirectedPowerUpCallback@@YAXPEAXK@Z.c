/*
 * XREFs of ?DxgkPowerRuntimeDeviceDirectedPowerUpCallback@@YAXPEAXK@Z @ 0x1C003B230
 * Callers:
 *     <none>
 * Callees:
 *     ?PowerRuntimeDeviceDirectedPowerCallback@DXGADAPTER@@QEAAXE@Z @ 0x1C0033FE0 (-PowerRuntimeDeviceDirectedPowerCallback@DXGADAPTER@@QEAAXE@Z.c)
 *     McTemplateK0pqq @ 0x1C0035844 (McTemplateK0pqq.c)
 */

void __fastcall DxgkPowerRuntimeDeviceDirectedPowerUpCallback(DXGADAPTER *this, __int64 a2, const GUID *a3)
{
  int v4; // [rsp+20h] [rbp-18h]
  int v5; // [rsp+28h] [rbp-10h]

  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
  {
    v5 = 1;
    v4 = 0;
    McTemplateK0pqq((__int64)this, &Dxgk_PowerRuntimeDeviceDirectedPowerCallback, a3, this, v4, v5);
  }
  LOBYTE(a2) = 1;
  DXGADAPTER::PowerRuntimeDeviceDirectedPowerCallback(this, a2);
}
