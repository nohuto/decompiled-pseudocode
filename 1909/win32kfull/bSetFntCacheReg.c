/*
 * XREFs of bSetFntCacheReg @ 0x1C0141A90
 * Callers:
 *     EngCloseFNTCache @ 0x1C011D8E8 (EngCloseFNTCache.c)
 *     InitFNTCache @ 0x1C0141490 (InitFNTCache.c)
 *     bServicingStackModifiedFonts @ 0x1C0141A3C (bServicingStackModifiedFonts.c)
 *     EngFntCacheFault @ 0x1C02858B0 (EngFntCacheFault.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall bSetFntCacheReg(unsigned int a1, int a2)
{
  _BOOL8 result; // rax
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF
  int Data; // [rsp+58h] [rbp+10h] BYREF

  Data = a2;
  result = 0LL;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  if ( a1 < 3 )
  {
    RtlInitUnicodeString(&DestinationString, (PCWSTR)(&g_fntCacheRegistryPaths)[a1]);
    return ZwSetValueKey(ghkeyGreInitialize, &DestinationString, 0, 4u, &Data, 4u) >= 0;
  }
  return result;
}
