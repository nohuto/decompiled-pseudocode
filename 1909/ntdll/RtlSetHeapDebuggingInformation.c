/*
 * XREFs of RtlSetHeapDebuggingInformation @ 0x1800EF564
 * Callers:
 *     RtlSetHeapInformation @ 0x1800796C0 (RtlSetHeapInformation.c)
 *     RtlHeapTrkInitialize @ 0x1800F77B0 (RtlHeapTrkInitialize.c)
 * Callees:
 *     RtlEnterCriticalSection @ 0x18001B380 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x18003A8A0 (RtlLeaveCriticalSection.c)
 *     RtlpEnumProcessHeaps @ 0x180067B5C (RtlpEnumProcessHeaps.c)
 *     RtlpSetHeapDebuggingInformation @ 0x1800F1160 (RtlpSetHeapDebuggingInformation.c)
 */

__int64 __fastcall RtlSetHeapDebuggingInformation(__int64 a1, __int64 a2)
{
  __int64 v5; // rax
  unsigned int v6; // ebx

  if ( a1 )
  {
    if ( (*(_DWORD *)(a1 + 116) & 0x1000000) != 0 )
    {
      return 3221225474LL;
    }
    else
    {
      RtlEnterCriticalSection((__int64)&RtlpProcessHeapsListLock);
      v5 = 28LL;
      if ( *(_DWORD *)(a1 + 16) != -571548178 )
        v5 = 208LL;
      if ( *(_WORD *)(v5 + a1) == 0xFFFF )
        v6 = -1073741811;
      else
        v6 = RtlpSetHeapDebuggingInformation(a1, a2);
      RtlLeaveCriticalSection((__int64)&RtlpProcessHeapsListLock);
      return v6;
    }
  }
  else
  {
    dword_180163CCC = *(_DWORD *)(a2 + 12);
    qword_180163CE8 = *(_QWORD *)(a2 + 40);
    qword_180163CE0 = *(_QWORD *)(a2 + 32);
    qword_180163CD8 = *(_QWORD *)(a2 + 24);
    dword_180163CD0 = *(_DWORD *)(a2 + 16);
    RtlpEnumProcessHeaps((__int64)RtlpSetHeapDebuggingInformation, a2, 0);
    return 0LL;
  }
}
