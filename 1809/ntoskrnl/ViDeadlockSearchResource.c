/*
 * XREFs of ViDeadlockSearchResource @ 0x14093EC2C
 * Callers:
 *     VfDeadlockAcquireResource @ 0x14093C514 (VfDeadlockAcquireResource.c)
 *     VfDeadlockReleaseResource @ 0x14093D260 (VfDeadlockReleaseResource.c)
 *     ViDeadlockAddResource @ 0x14093D74C (ViDeadlockAddResource.c)
 * Callees:
 *     VfUtilAddressRangeFit @ 0x140926FBC (VfUtilAddressRangeFit.c)
 *     ViDeadlockTrimResources @ 0x14093EDB4 (ViDeadlockTrimResources.c)
 */

_QWORD *__fastcall ViDeadlockSearchResource(unsigned __int64 a1)
{
  __int64 v1; // rdx
  __int64 v3; // r9
  _QWORD **v4; // rbx
  __int64 v5; // r10
  _QWORD *i; // rax

  v1 = ((a1 >> 12) * (unsigned __int128)0x40100401004011uLL) >> 64;
  v3 = (a1 >> 12) - 1023 * ((v1 + (((a1 >> 12) - v1) >> 1)) >> 9);
  v4 = (_QWORD **)(16 * v3 + *((_QWORD *)ViDeadlockGlobals + 2));
  if ( *v4 != v4 && (unsigned int)VfUtilAddressRangeFit((unsigned __int64 *)ViDeadlockGlobals + 2 * v3 + 4, a1, a1 + 1) )
  {
    ViDeadlockTrimResources(v4, v5);
    for ( i = *v4; i != v4; i = (_QWORD *)*i )
    {
      if ( *(i - 4) == a1 )
        return i - 5;
    }
  }
  return 0LL;
}
