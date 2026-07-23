/*
 * XREFs of EtwpDemuxUmTraceHandle @ 0x18010F274
 * Callers:
 *     EtwpGetPrivateLoggerContext @ 0x18004D150 (EtwpGetPrivateLoggerContext.c)
 *     EtwpTraceUmEvent @ 0x18004D7B8 (EtwpTraceUmEvent.c)
 *     EtwpWriteToPrivateBuffers @ 0x18004DFCC (EtwpWriteToPrivateBuffers.c)
 *     EtwpGetPrivateLoggerContextByName @ 0x180052320 (EtwpGetPrivateLoggerContextByName.c)
 *     EtwpShutdownPrivateLoggers @ 0x180086180 (EtwpShutdownPrivateLoggers.c)
 *     EtwpIsPrivateLoggerOn @ 0x1800866DC (EtwpIsPrivateLoggerOn.c)
 *     EtwpTraceUmMessage @ 0x18008C36C (EtwpTraceUmMessage.c)
 *     EtwpGetUmProcessImageInfo @ 0x18010F5A0 (EtwpGetUmProcessImageInfo.c)
 * Callees:
 *     NtTraceControl @ 0x1800A3A70 (NtTraceControl.c)
 */

__int64 __fastcall EtwpDemuxUmTraceHandle(int a1, _DWORD *a2)
{
  unsigned __int16 v4; // di
  __int64 v5; // rbx
  __int64 v6; // rsi
  int v7; // eax
  unsigned __int16 OutputBuffer; // [rsp+80h] [rbp+18h] BYREF
  ULONG ReturnLength; // [rsp+88h] [rbp+20h] BYREF

  v4 = 0;
  while ( 1 )
  {
    v5 = 2LL * v4;
    _InterlockedAdd((volatile signed __int32 *)(EtwpLoggerArray + 16LL * v4 + 8), 1u);
    v6 = *(_QWORD *)(EtwpLoggerArray + 16LL * v4);
    if ( (v6 & 1) != 0 || !*(_QWORD *)(v6 + 544) )
      goto LABEL_10;
    LOWORD(v7) = *(_WORD *)(v6 + 552);
    if ( (_WORD)v7 )
    {
      v7 = (unsigned __int16)v7;
    }
    else
    {
      if ( NtTraceControl(EtwQuerySessionDemuxObject, (PVOID)(v6 + 544), 8u, &OutputBuffer, 2u, &ReturnLength)
        || ReturnLength != 2 )
      {
        goto LABEL_10;
      }
      v7 = OutputBuffer;
      *(_WORD *)(v6 + 552) = OutputBuffer;
    }
    if ( v7 == a1 )
      break;
LABEL_10:
    ++v4;
    _InterlockedDecrement((volatile signed __int32 *)(EtwpLoggerArray + 8 * v5 + 8));
    if ( v4 >= 8u )
      return 4201LL;
  }
  *a2 = v4;
  _InterlockedDecrement((volatile signed __int32 *)(EtwpLoggerArray + 16LL * v4 + 8));
  return 0LL;
}
