/*
 * XREFs of ?HampUtilIsOverlappingInterval@@YGK_K000@Z @ 0x1001374E
 * Callers:
 *     ?HampUsageInfoMergeVectors@@YG?AU_HAM_APPLICATION_USAGE_INFO@@PAU1@0@Z @ 0x10013629 (-HampUsageInfoMergeVectors@@YG-AU_HAM_APPLICATION_USAGE_INFO@@PAU1@0@Z.c)
 * Callees:
 *     <none>
 */

BOOL __stdcall HampUtilIsOverlappingInterval(
        unsigned __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4)
{
  if ( HIDWORD(a1) > HIDWORD(a2) )
  {
LABEL_15:
    if ( a3 >= a4 || HIDWORD(a1) < HIDWORD(a4) )
      return 1;
    if ( HIDWORD(a1) > HIDWORD(a4) )
      return 0;
    return (unsigned int)a1 <= (unsigned int)a4;
  }
  if ( HIDWORD(a1) >= HIDWORD(a2) && (unsigned int)a1 >= (unsigned int)a2 )
  {
LABEL_14:
    if ( a1 <= a2 )
      return 1;
    goto LABEL_15;
  }
  if ( HIDWORD(a3) > HIDWORD(a4) )
  {
LABEL_11:
    if ( HIDWORD(a3) < HIDWORD(a2) )
      return 1;
    if ( HIDWORD(a3) > HIDWORD(a2) )
      return 0;
    return (unsigned int)a3 <= (unsigned int)a2;
  }
  if ( HIDWORD(a3) >= HIDWORD(a4) && (unsigned int)a3 >= (unsigned int)a4 )
  {
    if ( a3 > a4 )
      goto LABEL_11;
    goto LABEL_14;
  }
  return a1 <= a4 && a2 >= a3;
}
