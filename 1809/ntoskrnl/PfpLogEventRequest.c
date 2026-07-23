/*
 * XREFs of PfpLogEventRequest @ 0x1406E2D34
 * Callers:
 *     PfSetSuperfetchInformation @ 0x140666A38 (PfSetSuperfetchInformation.c)
 * Callees:
 *     PfLogEvent @ 0x1400D5478 (PfLogEvent.c)
 *     MmGetDefaultPagePriority @ 0x1400E221C (MmGetDefaultPagePriority.c)
 *     PfTSetTracingPriority @ 0x14057D87C (PfTSetTracingPriority.c)
 *     PfGenerateTrace @ 0x14071D064 (PfGenerateTrace.c)
 *     MmIssueMemoryListCommand @ 0x14071D178 (MmIssueMemoryListCommand.c)
 */

__int64 __fastcall PfpLogEventRequest(int *a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v5; // ecx
  int v6; // edi
  __int64 v8; // rcx
  int DefaultPagePriority; // ecx
  int v10; // [rsp+30h] [rbp+8h] BYREF

  if ( (*a1 & 0x1Fu) - 2 <= 1 )
  {
    v8 = *((_QWORD *)a1 + 1);
    *(_OWORD *)v8 = xmmword_14043CF10;
    *(_QWORD *)(v8 + 16) = unk_14043CF20;
    if ( (*a1 & 0x1F) == 2 )
      DefaultPagePriority = (*(_DWORD *)(v8 + 24) >> 5) & 7;
    else
      DefaultPagePriority = MmGetDefaultPagePriority();
    PfTSetTracingPriority(DefaultPagePriority);
  }
  if ( (*(_BYTE *)a1 & 0x1F) == 0x1B && (*(_DWORD *)(*((_QWORD *)a1 + 1) + 8LL) & 3) == 1 )
    _InterlockedAnd(&dword_1404D8614, 0xFFFFFFFE);
  v5 = *a1;
  v6 = dword_14043D15C
     + ((((MEMORY[0xFFFFF78000000004] * (unsigned __int64)MEMORY[0xFFFFF78000000320]) >> 24)
       + ((MEMORY[0xFFFFF78000000004] * HIDWORD(MEMORY[0xFFFFF78000000320])) << 8)) >> 10);
  if ( (*a1 & 0x20) != 0 )
  {
    v10 = ((unsigned int)*a1 >> 6) & 1;
    MmIssueMemoryListCommand(&v10, 4LL, 0LL, a4);
    PfGenerateTrace(&Thread, 0LL);
    v5 = *a1;
  }
  return PfLogEvent(v5 & 0x1F, v6, *((const void **)a1 + 1), v5 >> 7);
}
