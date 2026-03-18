/*
 * XREFs of VfPoolCheckForLeaks @ 0x140937F38
 * Callers:
 *     VfTargetDriversRemove @ 0x14016C1C0 (VfTargetDriversRemove.c)
 * Callees:
 *     RtlpInterlockedPopEntrySList @ 0x1401C53B0 (RtlpInterlockedPopEntrySList.c)
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
 *     VerifierBugCheckIfAppropriate @ 0x14092FD84 (VerifierBugCheckIfAppropriate.c)
 */

PSLIST_ENTRY __fastcall VfPoolCheckForLeaks(ULONG_PTR BugCheckParameter3, __int64 a2)
{
  PSLIST_ENTRY result; // rax

  if ( (*(_QWORD *)(BugCheckParameter3 + 112) || *(_QWORD *)(BugCheckParameter3 + 120)) && (MmVerifierData & 8) != 0 )
    VerifierBugCheckIfAppropriate(
      0xC4u,
      0x62uLL,
      *(_QWORD *)(a2 + 96),
      BugCheckParameter3,
      (unsigned int)(*(_DWORD *)(BugCheckParameter3 + 100) + *(_DWORD *)(BugCheckParameter3 + 96)));
  while ( 1 )
  {
    result = RtlpInterlockedPopEntrySList((PSLIST_HEADER)(BugCheckParameter3 + 64));
    if ( !result )
      break;
    ExFreePoolWithTag(result, 0);
  }
  return result;
}
