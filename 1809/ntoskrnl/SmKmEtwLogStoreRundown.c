/*
 * XREFs of SmKmEtwLogStoreRundown @ 0x140750258
 * Callers:
 *     SmEtwEnableCallback @ 0x140750200 (SmEtwEnableCallback.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14004D2F0 (ExReleaseRundownProtection_0.c)
 *     SmKmStoreReferenceEx @ 0x1400E11CC (SmKmStoreReferenceEx.c)
 *     SmKmStoreRefFromStoreIndex @ 0x1400E1208 (SmKmStoreRefFromStoreIndex.c)
 *     SmKmEtwLogStoreChange @ 0x1408AC734 (SmKmEtwLogStoreChange.c)
 *     SmKmEtwLogStoreStats @ 0x1408AC868 (SmKmEtwLogStoreStats.c)
 */

void __fastcall SmKmEtwLogStoreRundown(__int64 a1, __int64 a2)
{
  unsigned int i; // ebx
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rdi
  struct _EX_RUNDOWN_REF *v7; // rax

  for ( i = 0; i < 0x400; ++i )
  {
    v5 = SmKmStoreReferenceEx(a2, i);
    v6 = v5;
    if ( v5 )
    {
      SmKmEtwLogStoreStats(a1, v5);
      SmKmEtwLogStoreChange(a1, v6, &SmEventStoreRundown);
      v7 = (struct _EX_RUNDOWN_REF *)SmKmStoreRefFromStoreIndex(a2, i & 0x3FF);
      ExReleaseRundownProtection_0(v7 + 1);
    }
  }
}
