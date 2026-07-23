/*
 * XREFs of KdpSysReadControlSpace @ 0x140919718
 * Callers:
 *     KdSystemDebugControl @ 0x140843510 (KdSystemDebugControl.c)
 *     KdpReadControlSpace @ 0x14091745C (KdpReadControlSpace.c)
 * Callees:
 *     KeQueryActiveProcessorCountEx @ 0x1400A7860 (KeQueryActiveProcessorCountEx.c)
 *     KdpCopyMemoryChunks @ 0x1409199A8 (KdpCopyMemoryChunks.c)
 */

__int64 __fastcall KdpSysReadControlSpace(ULONG a1, unsigned __int64 a2, void *a3, __int64 a4, _DWORD *a5)
{
  __int64 v5; // rdi
  int v8; // ebx

  v5 = a1;
  *a5 = 0;
  if ( a1 >= KeQueryActiveProcessorCountEx(0xFFFFu) )
    return 3221225473LL;
  if ( !KiProcessorBlock[v5] )
    return 3221225473LL;
  if ( a2 > 3 )
    return 3221225473LL;
  if ( (_DWORD)a2 && (v8 = a2 - 1) != 0 && (unsigned int)(v8 - 1) > 1 )
    return 3221225473LL;
  else
    return KdpCopyMemoryChunks(a3, 5, (__int64)a5);
}
