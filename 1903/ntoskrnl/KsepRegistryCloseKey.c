/*
 * XREFs of KsepRegistryCloseKey @ 0x1407590E8
 * Callers:
 *     KsepMatchInitBiosInfo @ 0x140A02640 (KsepMatchInitBiosInfo.c)
 *     KsepEngineReadFlags @ 0x140A02880 (KsepEngineReadFlags.c)
 * Callees:
 *     ZwClose @ 0x1401C02B0 (ZwClose.c)
 */

NTSTATUS __fastcall KsepRegistryCloseKey(void *a1)
{
  NTSTATUS result; // eax

  if ( a1 )
  {
    result = ZwClose(a1);
    _InterlockedIncrement(dword_1404467DC);
  }
  return result;
}
