/*
 * XREFs of RtlpHpHeapReportCounters @ 0x18007D558
 * Callers:
 *     RtlpQueryExtendedInformationHeap @ 0x18007D330 (RtlpQueryExtendedInformationHeap.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpHpHeapReportCounters(__int64 a1, __int64 a2)
{
  __int64 v4; // r9
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 result; // rax

  v4 = *(_QWORD *)(a1 + 128) << 12;
  v5 = *(_QWORD *)(a1 + 136);
  v6 = *(_QWORD *)(a1 + 344) + *(_QWORD *)(a1 + 536);
  *(_QWORD *)(a2 + 136) = v6;
  *(_QWORD *)(a2 + 120) = v4;
  v7 = v5 << 12;
  *(_QWORD *)(a2 + 128) = v5 << 12;
  v8 = ((v5 - 2 * v6) << 12) - 4096;
  *(_QWORD *)(a2 + 144) = v8;
  *(_QWORD *)(a2 + 152) = *(_QWORD *)(a1 + 88) << 12;
  *(_QWORD *)(a2 + 160) = *(_QWORD *)(a1 + 96) << 12;
  *(_QWORD *)(a2 + 80) = v8;
  *(_QWORD *)(a2 + 32) = a1;
  *(_DWORD *)(a2 + 20) = 2;
  *(_DWORD *)(a2 + 24) = *(unsigned __int16 *)(a1 + 28);
  LODWORD(v8) = NtCurrentPeb()->NumberOfHeaps - 1;
  *(_QWORD *)(a2 + 40) = v4;
  *(_DWORD *)(a2 + 28) = v8;
  *(_QWORD *)(a2 + 48) = v7;
  result = *(unsigned int *)(a2 + 152);
  *(_DWORD *)(a2 + 100) = 0;
  *(_DWORD *)(a2 + 104) = result;
  return result;
}
