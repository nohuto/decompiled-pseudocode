/*
 * XREFs of KdpSysWriteControlSpace @ 0x1409575A4
 * Callers:
 *     KdSystemDebugControl @ 0x14087D3F0 (KdSystemDebugControl.c)
 *     KdpSendWaitContinue @ 0x140955ADC (KdpSendWaitContinue.c)
 * Callees:
 *     KeQueryActiveProcessorCountEx @ 0x140005340 (KeQueryActiveProcessorCountEx.c)
 *     KdpCopyMemoryChunks @ 0x140957144 (KdpCopyMemoryChunks.c)
 */

__int64 __fastcall KdpSysWriteControlSpace(ULONG a1, __int64 a2, char *a3, unsigned int a4, _DWORD *a5)
{
  __int64 v6; // rbx
  __int64 v9; // rdx
  unsigned int v10; // r8d

  v6 = a1;
  *a5 = 0;
  if ( a1 >= KeQueryActiveProcessorCountEx(0xFFFFu) )
    return 3221225473LL;
  v9 = KiProcessorBlock[v6];
  if ( !v9 || a2 != 2 )
    return 3221225473LL;
  v10 = 240;
  if ( a4 <= 0xF0 )
    v10 = a4;
  return KdpCopyMemoryChunks(a3, (_BYTE *)(v9 + 256), v10, 0, 4u, a5);
}
