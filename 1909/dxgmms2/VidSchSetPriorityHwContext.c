/*
 * XREFs of VidSchSetPriorityHwContext @ 0x1C00CCF60
 * Callers:
 *     <none>
 * Callees:
 *     VidSchiUpdateDdiHwContextPriority @ 0x1C00CD440 (VidSchiUpdateDdiHwContextPriority.c)
 */

__int64 __fastcall VidSchSetPriorityHwContext(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v4; // rax
  unsigned int v5; // ebx
  __int64 v6; // rbx
  __int64 v8; // rax

  if ( a1 )
  {
    v6 = *(_QWORD *)(a1 + 8);
    if ( !*(_BYTE *)(v6 + 204) && !_InterlockedCompareExchange((volatile signed __int32 *)(v6 + 200), 0, 0) )
    {
      *(_DWORD *)(a1 + 68) = a2;
      *(_DWORD *)(a1 + 76) = a4;
      VidSchiUpdateDdiHwContextPriority(a1);
      return 0LL;
    }
    v8 = WdLogNewEntry5_WdWarning(a1, a2);
    *(_QWORD *)(v8 + 24) = v6;
    v5 = -1071775232;
    *(_QWORD *)(v8 + 32) = -1071775232LL;
    WdLogEvent5_WdWarning(v8);
  }
  else
  {
    v4 = WdLogNewEntry5_WdAssertion(0LL, a2);
    v5 = -1073741811;
    *(_QWORD *)(v4 + 24) = -1073741811LL;
    WdLogEvent5_WdAssertion(v4);
  }
  return v5;
}
