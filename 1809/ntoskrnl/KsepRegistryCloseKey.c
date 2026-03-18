/*
 * XREFs of KsepRegistryCloseKey @ 0x1407281A4
 * Callers:
 *     KsepMatchInitBiosInfo @ 0x1409AF2B4 (KsepMatchInitBiosInfo.c)
 *     KsepEngineReadFlags @ 0x1409AF4F4 (KsepEngineReadFlags.c)
 * Callees:
 *     ZwClose @ 0x1401B8350 (ZwClose.c)
 */

NTSTATUS __fastcall KsepRegistryCloseKey(void *a1)
{
  NTSTATUS result; // eax

  if ( a1 )
  {
    result = ZwClose(a1);
    _InterlockedIncrement(dword_14041AB7C);
  }
  return result;
}
