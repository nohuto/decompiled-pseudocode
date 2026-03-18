/*
 * XREFs of MiAcquireResourceSharedLite @ 0x14014788C
 * Callers:
 *     MmEnumerateSystemImages @ 0x140708430 (MmEnumerateSystemImages.c)
 * Callees:
 *     ExAcquireResourceSharedLite @ 0x14003C730 (ExAcquireResourceSharedLite.c)
 */

char __fastcall MiAcquireResourceSharedLite(__int64 a1)
{
  --*(_WORD *)(a1 + 484);
  ExAcquireResourceSharedLite(&PsLoadedModuleResource, 1u);
  return 1;
}
