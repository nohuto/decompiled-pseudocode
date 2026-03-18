/*
 * XREFs of ?DevmodeEqualEx@@YAHPEBU_devicemodeW@@0@Z @ 0x1C00A5AA0
 * Callers:
 *     ?hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKPEAPEAU1@@Z @ 0x1C003D888 (-hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKP.c)
 * Callees:
 *     memcmp @ 0x1C00BE670 (memcmp.c)
 */

__int64 __fastcall DevmodeEqualEx(const struct _devicemodeW *a1, const struct _devicemodeW *a2)
{
  WORD dmDriverExtra; // ax
  unsigned int v5; // ebx

  dmDriverExtra = a1->dmDriverExtra;
  if ( dmDriverExtra == a2->dmDriverExtra )
    return memcmp(a1, a2, dmDriverExtra + 220LL) == 0;
  v5 = 0;
  if ( !dmDriverExtra )
  {
    if ( !memcmp(a1, a2, 0x46uLL) )
      return memcmp(&a1->dmFields, &a2->dmFields, 0x94uLL) == 0;
    return v5;
  }
  return 0LL;
}
