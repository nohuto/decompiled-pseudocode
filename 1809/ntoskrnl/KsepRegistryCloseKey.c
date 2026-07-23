/*
 * XREFs of KsepRegistryCloseKey @ 0x140729374
 * Callers:
 *     KsepMatchInitBiosInfo @ 0x1409B02B4 (KsepMatchInitBiosInfo.c)
 *     KsepEngineReadFlags @ 0x1409B04F4 (KsepEngineReadFlags.c)
 * Callees:
 *     ZwClose @ 0x1401B84D0 (ZwClose.c)
 */

NTSTATUS __fastcall KsepRegistryCloseKey(void *a1)
{
  NTSTATUS result; // eax

  if ( a1 )
  {
    result = ZwClose(a1);
    _InterlockedIncrement(&dword_14041BC3C);
  }
  return result;
}
