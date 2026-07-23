/*
 * XREFs of KdpCopyMemoryChunks @ 0x1409199A8
 * Callers:
 *     KdpSetCommonState @ 0x14028C768 (KdpSetCommonState.c)
 *     KdSystemDebugControl @ 0x140843510 (KdSystemDebugControl.c)
 *     KdpFillMemory @ 0x140917100 (KdpFillMemory.c)
 *     KdpReadPhysicalMemory @ 0x140917510 (KdpReadPhysicalMemory.c)
 *     KdpReadVirtualMemory @ 0x14091771C (KdpReadVirtualMemory.c)
 *     KdpReportCommandStringStateChange @ 0x1409177D8 (KdpReportCommandStringStateChange.c)
 *     KdpReportLoadSymbolsStateChange @ 0x140917A20 (KdpReportLoadSymbolsStateChange.c)
 *     KdpRestoreBreakPointEx @ 0x140917B3C (KdpRestoreBreakPointEx.c)
 *     KdpSendWaitContinue @ 0x140918100 (KdpSendWaitContinue.c)
 *     KdpWriteBreakPointEx @ 0x140918CD0 (KdpWriteBreakPointEx.c)
 *     KdpWritePhysicalMemory @ 0x140918E88 (KdpWritePhysicalMemory.c)
 *     KdLogDbgPrint @ 0x140918F20 (KdLogDbgPrint.c)
 *     KdpSysReadControlSpace @ 0x140919718 (KdpSysReadControlSpace.c)
 *     KdpSysWriteControlSpace @ 0x140919800 (KdpSysWriteControlSpace.c)
 *     KdpCopyCodeStream @ 0x1409198A8 (KdpCopyCodeStream.c)
 *     KdpPrintString @ 0x14091A2C4 (KdpPrintString.c)
 *     KdpPromptString @ 0x14091A3A8 (KdpPromptString.c)
 *     KdpCreateRemoteFile @ 0x14091AA60 (KdpCreateRemoteFile.c)
 * Callees:
 *     MmDbgCopyMemory @ 0x1402BB7D0 (MmDbgCopyMemory.c)
 */

__int64 __fastcall KdpCopyMemoryChunks(
        struct _SINGLE_LIST_ENTRY *BaseAddress,
        struct _SINGLE_LIST_ENTRY *a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5,
        _DWORD *a6)
{
  unsigned int v6; // ebp
  unsigned int v10; // edi
  unsigned int i; // ebx
  unsigned int v12; // edx

  v6 = 8;
  if ( a4 <= 8 )
  {
    v6 = a4;
    if ( !a4 )
      v6 = 4;
  }
  v10 = a3;
  for ( i = 1; v10; v10 -= i )
  {
    if ( i < v6 )
    {
      do
      {
        v12 = 2 * i;
        if ( 2 * i > v10 )
          break;
        if ( ((2 * i - 1) & (unsigned int)BaseAddress) != 0 )
          break;
        i *= 2;
      }
      while ( v12 < v6 );
    }
    while ( i > v10 )
      i >>= 1;
    if ( (int)MmDbgCopyMemory(BaseAddress, a2, i, i, a5) < 0 )
      break;
    BaseAddress = (struct _SINGLE_LIST_ENTRY *)((char *)BaseAddress + i);
    a2 = (struct _SINGLE_LIST_ENTRY *)((char *)a2 + i);
  }
  if ( a6 )
    *a6 = a3 - v10;
  return v10 != 0 ? 0xC0000001 : 0;
}
