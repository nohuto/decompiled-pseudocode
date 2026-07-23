/*
 * XREFs of LdrpGenRandom @ 0x180020C18
 * Callers:
 *     LdrpProcessMappedModule @ 0x180020654 (LdrpProcessMappedModule.c)
 *     InitSecurityCookie @ 0x1800D0CAC (InitSecurityCookie.c)
 *     AvrfMiniLoadDll @ 0x1800DA9B4 (AvrfMiniLoadDll.c)
 * Callees:
 *     RtlIsProcessorFeaturePresent @ 0x180020C60 (RtlIsProcessorFeaturePresent.c)
 */

__int64 LdrpGenRandom()
{
  int v0; // ecx

  if ( !RtlIsProcessorFeaturePresent(0x1Cu) )
    return 0LL;
  v0 = 0;
  while ( 1 )
  {
    __asm { rdrand  r8 }
    if ( _CF )
      break;
    if ( (unsigned int)++v0 >= 0xA )
      return 0LL;
  }
  return _R8;
}
