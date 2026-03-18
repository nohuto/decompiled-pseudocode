/*
 * XREFs of HT_DestroyDeviceHalftoneInfo @ 0x1C0104954
 * Callers:
 *     ?pDevHTInfo@PDEVOBJ@@QEAAPEAXXZ @ 0x1C00C144C (-pDevHTInfo@PDEVOBJ@@QEAAPEAXXZ.c)
 *     HT_DestroyDeviceHalftoneInfoWrap @ 0x1C0104830 (HT_DestroyDeviceHalftoneInfoWrap.c)
 *     ?bDisableHalftone@PDEVOBJ@@QEAAHXZ @ 0x1C0104864 (-bDisableHalftone@PDEVOBJ@@QEAAHXZ.c)
 * Callees:
 *     CleanUpDHI @ 0x1C010497C (CleanUpDHI.c)
 */

__int64 __fastcall HT_DestroyDeviceHalftoneInfo(_DWORD *a1)
{
  if ( a1 && a1[10] == 1414021956 )
    return CleanUpDHI(a1);
  else
    return 0LL;
}
