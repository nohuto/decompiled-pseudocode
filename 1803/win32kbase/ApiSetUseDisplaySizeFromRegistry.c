/*
 * XREFs of ApiSetUseDisplaySizeFromRegistry @ 0x1C0141D24
 * Callers:
 *     RIMQuirkApplyTransforms @ 0x1C0107018 (RIMQuirkApplyTransforms.c)
 *     RIMQuirkSetPointerDeviceOutputConfig @ 0x1C0107154 (RIMQuirkSetPointerDeviceOutputConfig.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ApiSetUseDisplaySizeFromRegistry(__int64 a1)
{
  if ( (int)IsUseDisplaySizeFromRegistrySupported() < 0 )
    return 0LL;
  else
    return UseDisplaySizeFromRegistry(a1);
}
