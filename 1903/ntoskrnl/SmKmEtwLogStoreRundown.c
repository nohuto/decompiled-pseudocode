/*
 * XREFs of SmKmEtwLogStoreRundown @ 0x1407749E8
 * Callers:
 *     SmEtwEnableCallback @ 0x140774990 (SmEtwEnableCallback.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140043820 (ExReleaseRundownProtection_0.c)
 *     SmKmStoreReferenceEx @ 0x14009A74C (SmKmStoreReferenceEx.c)
 *     SmKmStoreRefFromStoreIndex @ 0x14009A788 (SmKmStoreRefFromStoreIndex.c)
 *     SmKmEtwLogStoreChange @ 0x1408E9654 (SmKmEtwLogStoreChange.c)
 *     SmKmEtwLogStoreStats @ 0x1408E9770 (SmKmEtwLogStoreStats.c)
 */

void __fastcall SmKmEtwLogStoreRundown(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int i; // ebx
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rdi
  struct _EX_RUNDOWN_REF *v8; // rax

  for ( i = 0; i < 0x400; ++i )
  {
    v6 = SmKmStoreReferenceEx(a2, i, a3);
    v7 = v6;
    if ( v6 )
    {
      SmKmEtwLogStoreStats(a1, v6);
      SmKmEtwLogStoreChange(a1, v7, &SmEventStoreRundown);
      v8 = (struct _EX_RUNDOWN_REF *)SmKmStoreRefFromStoreIndex(a2, i & 0x3FF);
      ExReleaseRundownProtection_0(v8 + 1);
    }
  }
}
