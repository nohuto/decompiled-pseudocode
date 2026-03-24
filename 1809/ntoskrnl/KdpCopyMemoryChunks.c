/*
 * XREFs of KdpCopyMemoryChunks @ 0x1409189A8
 * Callers:
 *     KdpSetCommonState @ 0x14028C578 (KdpSetCommonState.c)
 *     KdSystemDebugControl @ 0x1408422B0 (KdSystemDebugControl.c)
 *     KdpFillMemory @ 0x140916100 (KdpFillMemory.c)
 *     KdpReadPhysicalMemory @ 0x140916510 (KdpReadPhysicalMemory.c)
 *     KdpReadVirtualMemory @ 0x14091671C (KdpReadVirtualMemory.c)
 *     KdpReportCommandStringStateChange @ 0x1409167D8 (KdpReportCommandStringStateChange.c)
 *     KdpReportLoadSymbolsStateChange @ 0x140916A20 (KdpReportLoadSymbolsStateChange.c)
 *     KdpRestoreBreakPointEx @ 0x140916B3C (KdpRestoreBreakPointEx.c)
 *     KdpSendWaitContinue @ 0x140917100 (KdpSendWaitContinue.c)
 *     KdpWriteBreakPointEx @ 0x140917CD0 (KdpWriteBreakPointEx.c)
 *     KdpWritePhysicalMemory @ 0x140917E88 (KdpWritePhysicalMemory.c)
 *     KdLogDbgPrint @ 0x140917F20 (KdLogDbgPrint.c)
 *     KdpSysReadControlSpace @ 0x140918718 (KdpSysReadControlSpace.c)
 *     KdpSysWriteControlSpace @ 0x140918800 (KdpSysWriteControlSpace.c)
 *     KdpCopyCodeStream @ 0x1409188A8 (KdpCopyCodeStream.c)
 *     KdpPrintString @ 0x1409192C4 (KdpPrintString.c)
 *     KdpPromptString @ 0x1409193A8 (KdpPromptString.c)
 *     KdpCreateRemoteFile @ 0x140919A60 (KdpCreateRemoteFile.c)
 * Callees:
 *     MmDbgCopyMemory @ 0x1402BB5E0 (MmDbgCopyMemory.c)
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
