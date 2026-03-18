/*
 * XREFs of KsepRegistryCloseKey @ 0x14075D978
 * Callers:
 *     KsepMatchInitBiosInfo @ 0x140A02B5C (KsepMatchInitBiosInfo.c)
 *     KsepEngineReadFlags @ 0x140A02D9C (KsepEngineReadFlags.c)
 * Callees:
 *     ZwClose @ 0x1401C0E30 (ZwClose.c)
 */

NTSTATUS __fastcall KsepRegistryCloseKey(void *a1)
{
  NTSTATUS result; // eax

  if ( a1 )
  {
    result = ZwClose(a1);
    _InterlockedIncrement(dword_1404464FC);
  }
  return result;
}
