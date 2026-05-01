/*
 * XREFs of ___CppXcptFilter @ 0x1000C696
 * Callers:
 *     __DllMainCRTStartup @ 0x1000C6B6 (__DllMainCRTStartup.c)
 * Callees:
 *     __XcptFilter @ 0x1000CB8B (__XcptFilter.c)
 */

int __cdecl __CppXcptFilter(int a1, int a2)
{
  if ( a1 == -529697949 )
    return _XcptFilter(-529697949, a2);
  else
    return 0;
}
