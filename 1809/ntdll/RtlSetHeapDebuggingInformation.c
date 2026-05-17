/*
 * XREFs of RtlSetHeapDebuggingInformation @ 0x1800F25A8
 * Callers:
 *     RtlSetHeapInformation @ 0x18007E690 (RtlSetHeapInformation.c)
 *     RtlHeapTrkInitialize @ 0x1800F9AC0 (RtlHeapTrkInitialize.c)
 * Callees:
 *     RtlLeaveCriticalSection @ 0x180014020 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x180014370 (RtlEnterCriticalSection.c)
 *     RtlpEnumProcessHeaps @ 0x18007B33C (RtlpEnumProcessHeaps.c)
 *     RtlpSetHeapDebuggingInformation @ 0x1800F3DB0 (RtlpSetHeapDebuggingInformation.c)
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
    dword_180163C2C = *(_DWORD *)(a2 + 12);
    qword_180163C48 = *(_QWORD *)(a2 + 40);
    qword_180163C40 = *(_QWORD *)(a2 + 32);
    qword_180163C38 = *(_QWORD *)(a2 + 24);
    dword_180163C30 = *(_DWORD *)(a2 + 16);
    RtlpEnumProcessHeaps((__int64)RtlpSetHeapDebuggingInformation, a2, 0);
    return 0LL;
  }
}
