/*
 * XREFs of ?FreeDeviceInfoIfSupported@@YAXPEAUDEVICEINFO@@@Z @ 0x1C0105490
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall FreeDeviceInfoIfSupported(struct DEVICEINFO *a1)
{
  if ( (int)IsFreeDeviceInfoSupported() >= 0 )
    FreeDeviceInfo(a1);
}
