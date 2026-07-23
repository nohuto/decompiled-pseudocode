/*
 * XREFs of RtlTraceDatabaseAdd @ 0x1800FBFD0
 * Callers:
 *     <none>
 * Callees:
 *     RtlEnterCriticalSection @ 0x18001B380 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x18003A8A0 (RtlLeaveCriticalSection.c)
 *     RtlpTraceDatabaseInternalAdd @ 0x1800FC484 (RtlpTraceDatabaseInternalAdd.c)
 */

char __fastcall RtlTraceDatabaseAdd(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  char v8; // al

  RtlEnterCriticalSection((PRTL_CRITICAL_SECTION)(a1 + 48));
  *(_QWORD *)(a1 + 40) = 0LL;
  v8 = RtlpTraceDatabaseInternalAdd(a1, a2, a3, a4);
  *(_QWORD *)(a1 + 40) = 0LL;
  LOBYTE(a4) = v8;
  RtlLeaveCriticalSection((PRTL_CRITICAL_SECTION)(a1 + 48));
  return a4;
}
