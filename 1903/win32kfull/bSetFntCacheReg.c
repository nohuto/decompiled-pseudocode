/*
 * XREFs of bSetFntCacheReg @ 0x1C00E6B38
 * Callers:
 *     bServicingStackModifiedFonts @ 0x1C00E6AE4 (bServicingStackModifiedFonts.c)
 *     InitFNTCache @ 0x1C00E8060 (InitFNTCache.c)
 *     EngCloseFNTCache @ 0x1C00E8F78 (EngCloseFNTCache.c)
 *     EngFntCacheFault @ 0x1C0285F70 (EngFntCacheFault.c)
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
