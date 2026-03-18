/*
 * XREFs of MiAcquireResourceSharedLite @ 0x140147F2C
 * Callers:
 *     MmEnumerateSystemImages @ 0x14070A210 (MmEnumerateSystemImages.c)
 * Callees:
 *     ExAcquireResourceSharedLite @ 0x14003C470 (ExAcquireResourceSharedLite.c)
 */

char __fastcall MiAcquireResourceSharedLite(__int64 a1)
{
  --*(_WORD *)(a1 + 484);
  ExAcquireResourceSharedLite(&PsLoadedModuleResource, 1u);
  return 1;
}
