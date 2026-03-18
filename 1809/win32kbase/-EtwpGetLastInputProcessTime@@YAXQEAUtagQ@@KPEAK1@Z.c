/*
 * XREFs of ?EtwpGetLastInputProcessTime@@YAXQEAUtagQ@@KPEAK1@Z @ 0x1C0076908
 * Callers:
 *     xxxDestroyThreadInfo @ 0x1C0099D40 (xxxDestroyThreadInfo.c)
 *     ?EtwCaptureStateCallback@@YAXXZ @ 0x1C00E5520 (-EtwCaptureStateCallback@@YAXXZ.c)
 *     EtwTraceInputProcessDelay @ 0x1C00E6850 (EtwTraceInputProcessDelay.c)
 *     EtwTraceMessageCheckDelay @ 0x1C00E7090 (EtwTraceMessageCheckDelay.c)
 * Callees:
 *     <none>
 */

void __fastcall EtwpGetLastInputProcessTime(struct tagQ *const a1, int a2, unsigned int *a3, unsigned int *a4)
{
  unsigned int v4; // r10d

  v4 = 0;
  if ( a1 )
  {
    *a3 = a2 - *((_DWORD *)a1 + 104);
    if ( *((_DWORD *)a1 + 10) )
      v4 = a2 - *(_DWORD *)(*((_QWORD *)a1 + 3) + 48LL);
  }
  else
  {
    *a3 = 0;
  }
  *a4 = v4;
}
