/*
 * XREFs of EtwpGetPrivateLoggerContext @ 0x18004D150
 * Callers:
 *     EtwpStopUmLogger @ 0x18004CFF4 (EtwpStopUmLogger.c)
 *     EtwpQueryUmLogger @ 0x180089394 (EtwpQueryUmLogger.c)
 *     EtwpFlushUmLogger @ 0x18010F3E0 (EtwpFlushUmLogger.c)
 *     EtwpIncrementUmLoggerFile @ 0x18010F670 (EtwpIncrementUmLoggerFile.c)
 *     EtwpUpdateUmLogger @ 0x18010F7A8 (EtwpUpdateUmLogger.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x180040650 (RtlInitUnicodeString.c)
 *     EtwpGetPrivateLoggerContextByName @ 0x180052320 (EtwpGetPrivateLoggerContextByName.c)
 *     EtwpDemuxUmTraceHandle @ 0x18010F274 (EtwpDemuxUmTraceHandle.c)
 */

__int64 __fastcall EtwpGetPrivateLoggerContext(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax
  __int64 v4; // rcx
  __int64 v5; // rdx
  unsigned int v6; // eax
  _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF
  unsigned int v8; // [rsp+40h] [rbp+8h] BYREF

  if ( *(_WORD *)(a1 + 144) )
  {
    RtlInitUnicodeString(&DestinationString, (PCWSTR)(a1 + 176));
    return EtwpGetPrivateLoggerContextByName(&DestinationString);
  }
  v4 = *(unsigned __int16 *)(a1 + 8);
  v5 = EtwpLoggerArray;
  v6 = v4 & 0xFFFF7FFF;
  v8 = v4 & 0xFFFF7FFF;
  if ( !EtwpLoggerArray )
    return 4201LL;
  if ( v6 < 0x40 )
  {
LABEL_6:
    _InterlockedIncrement((volatile signed __int32 *)(v5 + 16LL * v6 + 8));
    if ( (*(_BYTE *)(EtwpLoggerArray + 16LL * v6) & 1) == 0 )
    {
      *a2 = *(_QWORD *)(EtwpLoggerArray + 16LL * v6);
      return 0LL;
    }
    _InterlockedDecrement((volatile signed __int32 *)(EtwpLoggerArray + 16LL * v6 + 8));
    return 4201LL;
  }
  result = EtwpDemuxUmTraceHandle(v4, &v8);
  if ( !(_DWORD)result )
  {
    v6 = v8;
    v5 = EtwpLoggerArray;
    goto LABEL_6;
  }
  return result;
}
