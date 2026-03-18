/*
 * XREFs of IoEnableIrpCredits @ 0x140852C48
 * Callers:
 *     PspInitializeQuotaBlock @ 0x140787A98 (PspInitializeQuotaBlock.c)
 * Callees:
 *     KeQueryActiveProcessorCountEx @ 0x140005340 (KeQueryActiveProcessorCountEx.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     KeSynchronizeWithDynamicProcessors @ 0x1406D8BFC (KeSynchronizeWithDynamicProcessors.c)
 *     IopQueryProcessorInitValues @ 0x14078BD34 (IopQueryProcessorInitValues.c)
 */

ULONG IoEnableIrpCredits()
{
  ULONG result; // eax
  ULONG v1; // ecx
  int v2; // r9d
  __int64 *v3; // rdx
  _DWORD v4[10]; // [rsp+20h] [rbp-28h] BYREF

  memset(v4, 0, 0x20uLL);
  result = IopIrpCreditsEnabled;
  if ( IopIrpCreditsEnabled < 1 )
  {
    result = _InterlockedCompareExchange(&IopIrpCreditsEnabled, 1, 0);
    if ( !result )
    {
      IopQueryProcessorInitValues((__int64)v4);
      KeSynchronizeWithDynamicProcessors();
      result = KeQueryActiveProcessorCountEx(0xFFFFu);
      v1 = 0;
      if ( result )
      {
        v2 = v4[7];
        v3 = KiProcessorBlock;
        do
        {
          if ( *(_DWORD *)(*v3 + 11676) != 0x7FFFFFFF )
            break;
          ++v1;
          *(_DWORD *)(*v3++ + 11676) = v2;
        }
        while ( v1 < result );
      }
      _InterlockedAdd(&IopIrpCreditsEnabled, 1u);
    }
  }
  return result;
}
