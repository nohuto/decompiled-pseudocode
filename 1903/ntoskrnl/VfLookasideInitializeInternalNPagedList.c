/*
 * XREFs of VfLookasideInitializeInternalNPagedList @ 0x140960668
 * Callers:
 *     VfInitBootDriversLoaded @ 0x1409EF070 (VfInitBootDriversLoaded.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall VfLookasideInitializeInternalNPagedList(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        int a6,
        __int16 a7)
{
  return pXdvExInitializeNPagedLookasideList(
           a1,
           a2,
           a3,
           512,
           a5,
           a6,
           a7,
           VfInitializedWithoutReboot,
           (__int64)ExInitializeNPagedLookasideListInternal);
}
