/*
 * XREFs of InitOLEFormats @ 0x1C0380030
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C002D084 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall InitOLEFormats(int a1)
{
  wchar_t **v1; // rdi
  unsigned int v2; // ebx

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(a1, 4, 3, 13, (__int64)&WPP_d004ad31927635d751620a95da27af8f_Traceguids);
  v1 = off_1C02D5A10;
  v2 = 0;
  while ( (unsigned __int16)UserAddAtomEx(*v1, 1LL, 2LL) )
  {
    ++v2;
    ++v1;
    if ( v2 >= 0x15 )
      return 1LL;
  }
  return 0LL;
}
