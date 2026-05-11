/*
 * XREFs of USBParseBuildSourceIdArray @ 0x1C002CB34
 * Callers:
 *     USBParseMixerUnit @ 0x1C002CCF0 (USBParseMixerUnit.c)
 *     USBParseSelectorUnit @ 0x1C002CF80 (USBParseSelectorUnit.c)
 *     USBParseProcessUnit @ 0x1C002D300 (USBParseProcessUnit.c)
 *     USBParseExtensionUnit @ 0x1C002D530 (USBParseExtensionUnit.c)
 * Callees:
 *     <none>
 */

_DWORD *__fastcall USBParseBuildSourceIdArray(unsigned int a1, unsigned __int8 *a2)
{
  __int64 v4; // rdi
  _DWORD *result; // rax
  _DWORD *v6; // rdx
  int v7; // ecx

  v4 = a1;
  result = ExAllocatePoolWithTag(PagedPool, 4LL * a1, 0x41627845u);
  if ( result && a1 )
  {
    v6 = result;
    do
    {
      v7 = *a2++;
      *v6++ = v7;
      --v4;
    }
    while ( v4 );
  }
  return result;
}
