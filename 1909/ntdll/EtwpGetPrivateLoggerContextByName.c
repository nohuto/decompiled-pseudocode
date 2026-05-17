/*
 * XREFs of EtwpGetPrivateLoggerContextByName @ 0x18000456C
 * Callers:
 *     EtwpStartUmLogger @ 0x1800059B8 (EtwpStartUmLogger.c)
 *     EtwpGetPrivateLoggerContext @ 0x18008744C (EtwpGetPrivateLoggerContext.c)
 * Callees:
 *     RtlEqualUnicodeString @ 0x180022950 (RtlEqualUnicodeString.c)
 *     EtwpDemuxUmTraceHandle @ 0x18010D344 (EtwpDemuxUmTraceHandle.c)
 */

__int64 __fastcall EtwpGetPrivateLoggerContextByName(__int64 a1, _QWORD *a2, __int64 a3)
{
  unsigned int v5; // ebx
  unsigned int v6; // eax
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rdi
  __int64 v11; // [rsp+30h] [rbp+8h] BYREF

  *a2 = 0LL;
  if ( !a1 )
    return 4201LL;
  v5 = 0;
  while ( 1 )
  {
    v6 = v5 & 0xFFFF7FFF;
    LODWORD(v11) = v5 & 0xFFFF7FFF;
    if ( EtwpLoggerArray )
      break;
LABEL_4:
    if ( ++v5 >= 0x40 )
      return 4201LL;
  }
  if ( v6 >= 0x40 )
  {
    if ( (unsigned int)EtwpDemuxUmTraceHandle(v5, &v11) )
      goto LABEL_4;
    v6 = v11;
  }
  v8 = 2LL * v6;
  _InterlockedIncrement((volatile signed __int32 *)(EtwpLoggerArray + 16LL * v6 + 8));
  v9 = *(_QWORD *)(EtwpLoggerArray + 16LL * v6);
  if ( (v9 & 1) != 0 )
  {
LABEL_8:
    _InterlockedDecrement((volatile signed __int32 *)(EtwpLoggerArray + 8 * v8 + 8));
    goto LABEL_4;
  }
  v10 = *(_QWORD *)(EtwpLoggerArray + 16LL * v6);
  LOBYTE(a3) = 1;
  if ( !(unsigned __int8)RtlEqualUnicodeString(v9 + 152, a1, a3) )
  {
    v8 = 2LL * v5;
    goto LABEL_8;
  }
  *a2 = v10;
  return 0LL;
}
