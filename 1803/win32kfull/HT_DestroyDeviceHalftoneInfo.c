/*
 * XREFs of HT_DestroyDeviceHalftoneInfo @ 0x1C0105D44
 * Callers:
 *     ?bDisableHalftone@PDEVOBJ@@QEAAHXZ @ 0x1C00CECB4 (-bDisableHalftone@PDEVOBJ@@QEAAHXZ.c)
 *     ?pDevHTInfo@PDEVOBJ@@QEAAPEAXXZ @ 0x1C00CF084 (-pDevHTInfo@PDEVOBJ@@QEAAPEAXXZ.c)
 *     HT_DestroyDeviceHalftoneInfoWrap @ 0x1C0105D30 (HT_DestroyDeviceHalftoneInfoWrap.c)
 * Callees:
 *     CleanUpDHI @ 0x1C0105D6C (CleanUpDHI.c)
 */

__int64 __fastcall HT_DestroyDeviceHalftoneInfo(_DWORD *a1)
{
  if ( a1 && a1[10] == 1414021956 )
    return CleanUpDHI(a1);
  else
    return 0LL;
}
