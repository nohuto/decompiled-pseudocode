/*
 * XREFs of ViDeadlockSearchThread @ 0x14093ECD8
 * Callers:
 *     VfDeadlockAcquireResource @ 0x14093C514 (VfDeadlockAcquireResource.c)
 *     VfDeadlockAfterCallDriver @ 0x14093CBEC (VfDeadlockAfterCallDriver.c)
 *     VfDeadlockBeforeCallDriver @ 0x14093CC58 (VfDeadlockBeforeCallDriver.c)
 *     VfDeadlockReleaseResource @ 0x14093D260 (VfDeadlockReleaseResource.c)
 *     ViIsThreadInsidePagingCodePaths @ 0x14093EE44 (ViIsThreadInsidePagingCodePaths.c)
 * Callees:
 *     VfUtilAddressRangeFit @ 0x140926FBC (VfUtilAddressRangeFit.c)
 */

_QWORD *__fastcall ViDeadlockSearchThread(unsigned __int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // r9
  _QWORD *v3; // rbx
  _QWORD *v4; // r10
  __int64 v5; // r11
  _QWORD *result; // rax

  v1 = ((a1 >> 12) * (unsigned __int128)0x40100401004011uLL) >> 64;
  v2 = (a1 >> 12) - 1023 * ((v1 + (((a1 >> 12) - v1) >> 1)) >> 9);
  v3 = (_QWORD *)(16 * v2 + *((_QWORD *)ViDeadlockGlobals + 2050));
  if ( (_QWORD *)*v3 == v3
    || !(unsigned int)VfUtilAddressRangeFit((unsigned __int64 *)ViDeadlockGlobals + 2 * v2 + 2052, a1, a1 + 1) )
  {
    return 0LL;
  }
  while ( 1 )
  {
    result = v4 - 3;
    if ( *(v4 - 3) == v5 )
      break;
    v4 = (_QWORD *)*v4;
    if ( v4 == v3 )
      return 0LL;
  }
  return result;
}
