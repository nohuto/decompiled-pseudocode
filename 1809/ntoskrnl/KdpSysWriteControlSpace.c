/*
 * XREFs of KdpSysWriteControlSpace @ 0x140918800
 * Callers:
 *     KdSystemDebugControl @ 0x1408422D0 (KdSystemDebugControl.c)
 *     KdpSendWaitContinue @ 0x140917100 (KdpSendWaitContinue.c)
 * Callees:
 *     KeQueryActiveProcessorCountEx @ 0x1400A7900 (KeQueryActiveProcessorCountEx.c)
 *     KdpCopyMemoryChunks @ 0x1409189A8 (KdpCopyMemoryChunks.c)
 */

__int64 __fastcall KdpSysWriteControlSpace(ULONG a1, __int64 a2, void *a3, __int64 a4, _DWORD *a5)
{
  __int64 v5; // rbx

  v5 = a1;
  *a5 = 0;
  if ( a1 < KeQueryActiveProcessorCountEx(0xFFFFu) && KiProcessorBlock[v5] && a2 == 2 )
    return KdpCopyMemoryChunks(a3, 4, (__int64)a5);
  else
    return 3221225473LL;
}
