/*
 * XREFs of EtwpShutdownPrivateLoggers @ 0x180086180
 * Callers:
 *     RtlExitUserProcess @ 0x18006CF90 (RtlExitUserProcess.c)
 * Callees:
 *     EtwpStopUmLogger @ 0x18004CFF4 (EtwpStopUmLogger.c)
 *     __security_check_cookie @ 0x18008FED0 (__security_check_cookie.c)
 *     memset @ 0x1800A7100 (memset.c)
 *     EtwpDemuxUmTraceHandle @ 0x18010F274 (EtwpDemuxUmTraceHandle.c)
 */

void EtwpShutdownPrivateLoggers()
{
  __int64 v0; // r8
  unsigned int v1; // ebx
  __int64 v2; // rdi
  unsigned int v3; // eax
  __int64 v4; // rsi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // [rsp+20h] [rbp-D8h] BYREF
  _QWORD v8[22]; // [rsp+30h] [rbp-C8h] BYREF

  if ( EtwpLoggerArray )
  {
    memset(v8, 0, sizeof(v8));
    LODWORD(v8[0]) = 176;
    v1 = 0;
    v2 = 0LL;
    HIDWORD(v8[5]) = 0x20000;
    while ( 1 )
    {
      v3 = v1 & 0xFFFF7FFF;
      LODWORD(v7) = v1 & 0xFFFF7FFF;
      if ( EtwpLoggerArray )
      {
        if ( v3 < 0x40 )
          goto LABEL_5;
        if ( !(unsigned int)EtwpDemuxUmTraceHandle(v1, &v7) )
          break;
      }
LABEL_7:
      ++v1;
      ++v2;
      if ( v1 >= 0x40 )
        return;
    }
    v3 = v7;
LABEL_5:
    _InterlockedIncrement((volatile signed __int32 *)(EtwpLoggerArray + 16LL * v3 + 8));
    if ( (*(_BYTE *)(EtwpLoggerArray + 16LL * v3) & 1) != 0 )
    {
      _InterlockedDecrement((volatile signed __int32 *)(EtwpLoggerArray + 16LL * v3 + 8));
    }
    else
    {
      v4 = *(_QWORD *)(EtwpLoggerArray + 16LL * v3);
      v5 = *(unsigned int *)(v4 + 324);
      v6 = 2LL * *(unsigned int *)(v4 + 20);
      _InterlockedDecrement((volatile signed __int32 *)(EtwpLoggerArray + 16LL * *(unsigned int *)(v4 + 20) + 8));
      if ( (v5 & 0x400) == 0 )
      {
        v8[1] = v2;
        EtwpStopUmLogger(v6, v5, v0, (__int64)v8);
      }
    }
    goto LABEL_7;
  }
}
