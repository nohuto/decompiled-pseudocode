/*
 * XREFs of RtlpActivateLowFragmentationHeap @ 0x180062E38
 * Callers:
 *     RtlpPerformHeapMaintenance @ 0x180062DE4 (RtlpPerformHeapMaintenance.c)
 *     RtlpSetHeapDebuggingInformation @ 0x1800F3DB0 (RtlpSetHeapDebuggingInformation.c)
 * Callees:
 *     RtlLeaveCriticalSection @ 0x180014020 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x180014370 (RtlEnterCriticalSection.c)
 *     RtlpExtendListLookup @ 0x18005F224 (RtlpExtendListLookup.c)
 *     RtlpCreateLowFragHeap @ 0x18005F5F8 (RtlpCreateLowFragHeap.c)
 *     RtlGetSuiteMask @ 0x180062DA0 (RtlGetSuiteMask.c)
 *     RtlpExtendFrontEndUsageArray @ 0x180063028 (RtlpExtendFrontEndUsageArray.c)
 */

__int64 __fastcall RtlpActivateLowFragmentationHeap(__int64 a1)
{
  __int64 v3; // rax
  int v4; // edi
  PVOID LowFragHeap; // r14
  char v7; // [rsp+20h] [rbp-28h]
  char v8; // [rsp+21h] [rbp-27h]

  v8 = 0;
  v7 = 0;
  if ( (*(_DWORD *)(a1 + 112) & 0x75010F61) == 0
    && (*(_BYTE *)(a1 + 112) & 2) != 0
    && (NtCurrentPeb()->NtGlobalFlag & 0x800) == 0 )
  {
    RtlEnterCriticalSection(*(PRTL_CRITICAL_SECTION *)(a1 + 352));
    v7 = 1;
    if ( *(_BYTE *)(a1 + 418) == 2 )
      v3 = *(_QWORD *)(a1 + 408);
    else
      v3 = 0LL;
    if ( v3 )
    {
      v4 = 0;
    }
    else if ( *(_WORD *)(a1 + 416) )
    {
      v4 = -1073741794;
    }
    else
    {
      *(_WORD *)(a1 + 416) = 1;
      v8 = 1;
      v4 = RtlpExtendFrontEndUsageArray((PVOID)a1);
      if ( v4 >= 0 )
      {
        RtlpExtendListLookup((PVOID)a1, *(_QWORD *)(a1 + 312));
        *(_QWORD *)(a1 + 408) = 0LL;
        *(_BYTE *)(a1 + 418) = 0;
        RtlLeaveCriticalSection(*(PRTL_CRITICAL_SECTION *)(a1 + 352));
        LowFragHeap = RtlpCreateLowFragHeap(a1);
        RtlEnterCriticalSection(*(PRTL_CRITICAL_SECTION *)(a1 + 352));
        if ( LowFragHeap )
        {
          *(_QWORD *)(a1 + 408) = LowFragHeap;
          *(_WORD *)(a1 + 418) = 514;
          if ( (RtlGetSuiteMask() & 0x10000) == 0 )
            *(_QWORD *)(a1 + 176) = (unsigned __int64)RtlpLargestLfhBlock >> 4;
        }
        else
        {
          v4 = -1073741801;
        }
        --*(_WORD *)(a1 + 416);
        v8 = 0;
        v7 = 0;
        RtlLeaveCriticalSection(*(PRTL_CRITICAL_SECTION *)(a1 + 352));
      }
    }
  }
  else
  {
    v4 = -1073741811;
  }
  if ( v7 )
    RtlLeaveCriticalSection(*(PRTL_CRITICAL_SECTION *)(a1 + 352));
  if ( v8 )
    --*(_WORD *)(a1 + 416);
  return (unsigned int)v4;
}
