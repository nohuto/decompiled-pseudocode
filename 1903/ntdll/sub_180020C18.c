/*
 * XREFs of sub_180020C18 @ 0x180020C18
 * Callers:
 *     sub_180020654 @ 0x180020654 (sub_180020654.c)
 *     sub_1800D0BEC @ 0x1800D0BEC (sub_1800D0BEC.c)
 *     sub_1800DA8F4 @ 0x1800DA8F4 (sub_1800DA8F4.c)
 * Callees:
 *     RtlIsProcessorFeaturePresent @ 0x180020C60 (RtlIsProcessorFeaturePresent.c)
 */

__int64 sub_180020C18()
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
