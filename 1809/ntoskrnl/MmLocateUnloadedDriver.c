/*
 * XREFs of MmLocateUnloadedDriver @ 0x1402AB368
 * Callers:
 *     KeBugCheck2 @ 0x140291380 (KeBugCheck2.c)
 *     KiDumpParameterImages @ 0x140292AC4 (KiDumpParameterImages.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall MmLocateUnloadedDriver(unsigned __int64 a1)
{
  __int64 v1; // rdx
  int v2; // r8d
  _QWORD *result; // rax

  if ( !MmUnloadedDrivers )
    return 0LL;
  v1 = (unsigned int)(MmLastUnloadedDriver - 1);
  v2 = 0;
  while ( 1 )
  {
    if ( (unsigned int)v1 >= 0x32 )
      v1 = 49LL;
    result = (char *)MmUnloadedDrivers + 40 * v1;
    if ( result[1] )
    {
      if ( a1 >= result[2] && a1 < result[3] )
        break;
    }
    v1 = (unsigned int)(v1 - 1);
    if ( (unsigned int)++v2 >= 0x32 )
      return 0LL;
  }
  return result;
}
