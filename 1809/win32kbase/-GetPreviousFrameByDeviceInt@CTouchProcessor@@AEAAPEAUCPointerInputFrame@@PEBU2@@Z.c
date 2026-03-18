/*
 * XREFs of ?GetPreviousFrameByDeviceInt@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@PEBU2@@Z @ 0x1C013E03C
 * Callers:
 *     ?GetPreviousFrameByDevice@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@PEBU2@@Z @ 0x1C013E000 (-GetPreviousFrameByDevice@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@PEBU2@@Z.c)
 *     ?ReferencePreviousFrameByDeviceInt@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@PEBU2@@Z @ 0x1C0142A80 (-ReferencePreviousFrameByDeviceInt@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@PEBU2@@Z.c)
 * Callees:
 *     ?CTouchProcessorLocked@CTouchProcessor@@QEAAHXZ @ 0x1C01342D0 (-CTouchProcessorLocked@CTouchProcessor@@QEAAHXZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

struct CPointerInputFrame *__fastcall CTouchProcessor::GetPreviousFrameByDeviceInt(
        struct _KTHREAD **this,
        const struct CPointerInputFrame *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  CTouchProcessor *v7; // rax
  CTouchProcessor *v8; // rcx
  __int64 v9; // rdx
  char *v10; // rbx
  unsigned int v11; // eax
  __int64 v12; // rcx
  bool v13; // zf
  __int64 v14; // rcx

  if ( !(unsigned int)CTouchProcessor::CTouchProcessorLocked(this) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v5, v4, v6);
  v7 = (CTouchProcessor *)*((_QWORD *)a2 + 1);
  v8 = (CTouchProcessor *)(this + 9);
  if ( v7 == (CTouchProcessor *)(this + 9) )
    return 0LL;
  v9 = *((_QWORD *)a2 + 8);
  do
  {
    v10 = (char *)v7 - 8;
    if ( *((_QWORD *)v7 + 7) == v9 )
      break;
    v7 = *(CTouchProcessor **)v7;
  }
  while ( v7 != v8 );
  if ( v7 == v8 )
    return 0LL;
  v11 = *((_DWORD *)v10 + 13);
  v12 = *((unsigned int *)v10 + 12);
  v13 = v11 == (_DWORD)v12;
  if ( v11 > (unsigned int)v12 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v12, v9, v6);
    v13 = *((_DWORD *)v10 + 13) == *((_DWORD *)v10 + 12);
  }
  if ( v13 )
    return 0LL;
  v14 = *((_QWORD *)a2 + 8);
  if ( *((_QWORD *)v10 + 8) != v14 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v14, v9, v6);
  return (struct CPointerInputFrame *)v10;
}
