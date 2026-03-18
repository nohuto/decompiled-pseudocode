/*
 * XREFs of KdpCopyMemoryChunks @ 0x140957144
 * Callers:
 *     KdpSetCommonState @ 0x1402A236C (KdpSetCommonState.c)
 *     KdSystemDebugControl @ 0x14087D3F0 (KdSystemDebugControl.c)
 *     KdpCreateRemoteFile @ 0x1409541F4 (KdpCreateRemoteFile.c)
 *     KdpFillMemory @ 0x140954A20 (KdpFillMemory.c)
 *     KdpReadPhysicalMemory @ 0x140954E5C (KdpReadPhysicalMemory.c)
 *     KdpReadVirtualMemory @ 0x14095506C (KdpReadVirtualMemory.c)
 *     KdpReportCommandStringStateChange @ 0x140955130 (KdpReportCommandStringStateChange.c)
 *     KdpReportLoadSymbolsStateChange @ 0x1409553C0 (KdpReportLoadSymbolsStateChange.c)
 *     KdpRestoreBreakPointEx @ 0x140955500 (KdpRestoreBreakPointEx.c)
 *     KdpSendWaitContinue @ 0x140955ADC (KdpSendWaitContinue.c)
 *     KdpWriteBreakPointEx @ 0x140956720 (KdpWriteBreakPointEx.c)
 *     KdpWritePhysicalMemory @ 0x1409568E0 (KdpWritePhysicalMemory.c)
 *     KdLogDbgPrint @ 0x140956980 (KdLogDbgPrint.c)
 *     KdpCopyCodeStream @ 0x140957044 (KdpCopyCodeStream.c)
 *     KdpSysReadControlSpace @ 0x1409574BC (KdpSysReadControlSpace.c)
 *     KdpSysWriteControlSpace @ 0x1409575A4 (KdpSysWriteControlSpace.c)
 *     KdpPrintString @ 0x140957D2C (KdpPrintString.c)
 *     KdpPromptString @ 0x140957E28 (KdpPromptString.c)
 * Callees:
 *     MmDbgCopyMemory @ 0x1402D164C (MmDbgCopyMemory.c)
 */

__int64 __fastcall KdpCopyMemoryChunks(
        char *BaseAddress,
        _BYTE *a2,
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
    BaseAddress += i;
    a2 += i;
  }
  if ( a6 )
    *a6 = a3 - v10;
  return v10 != 0 ? 0xC0000001 : 0;
}
