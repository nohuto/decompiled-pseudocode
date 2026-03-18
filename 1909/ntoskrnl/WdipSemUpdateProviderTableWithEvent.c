/*
 * XREFs of WdipSemUpdateProviderTableWithEvent @ 0x14076F7EC
 * Callers:
 *     WdipSemUpdateProviderTableWithScenario @ 0x14076F778 (WdipSemUpdateProviderTableWithScenario.c)
 * Callees:
 *     EtwEventEnabled @ 0x1400476B0 (EtwEventEnabled.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     WdipSemFastAllocate @ 0x140718850 (WdipSemFastAllocate.c)
 *     WdipSemQueryProviderTable @ 0x14076F890 (WdipSemQueryProviderTable.c)
 *     WdipSemWriteProviderLimitExceededEvent @ 0x1408EE4C8 (WdipSemWriteProviderLimitExceededEvent.c)
 */

__int64 __fastcall WdipSemUpdateProviderTableWithEvent(__int64 a1)
{
  unsigned int v1; // ebx
  __int64 ProviderTable; // rax
  PSLIST_ENTRY v5; // rax
  _OWORD *v6; // rsi

  v1 = 0;
  if ( a1 )
  {
    ProviderTable = WdipSemQueryProviderTable();
    if ( ProviderTable )
    {
      *(_QWORD *)(a1 + 40) = ProviderTable;
    }
    else if ( (unsigned int)dword_1404355E0 >= 0x400 )
    {
      if ( EtwEventEnabled(WdipSemRegHandle, &WDI_SEM_EVENT_INIT_PROVIDER_MAX) )
        WdipSemWriteProviderLimitExceededEvent(a1);
      return (unsigned int)-1073741823;
    }
    else
    {
      v5 = WdipSemFastAllocate(2, 0x50u);
      v6 = v5;
      if ( v5 )
      {
        memset(v5, 0, 0x50uLL);
        *v6 = *(_OWORD *)a1;
        WdipSemProviderTable[dword_1404355E0++] = v6;
        *(_QWORD *)(a1 + 40) = v6;
      }
      else
      {
        return (unsigned int)-1073741670;
      }
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v1;
}
