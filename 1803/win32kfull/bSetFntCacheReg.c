/*
 * XREFs of bSetFntCacheReg @ 0x1C00554CC
 * Callers:
 *     EngCloseFNTCache @ 0x1C004F588 (EngCloseFNTCache.c)
 *     bServicingStackModifiedFonts @ 0x1C0055478 (bServicingStackModifiedFonts.c)
 *     InitFNTCache @ 0x1C0056070 (InitFNTCache.c)
 *     EngFntCacheFault @ 0x1C025A100 (EngFntCacheFault.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall bSetFntCacheReg(unsigned int a1, int a2)
{
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF
  int Data; // [rsp+58h] [rbp+10h] BYREF

  Data = a2;
  if ( a1 >= 3 )
    return 0LL;
  RtlInitUnicodeString(&DestinationString, (PCWSTR)(&g_fntCacheRegistryPaths)[a1]);
  return ZwSetValueKey(ghkeyGreInitialize, &DestinationString, 0, 4u, &Data, 4u) >= 0;
}
