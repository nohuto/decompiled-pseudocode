/*
 * XREFs of EtwpGetPrivateLoggerContext @ 0x18008744C
 * Callers:
 *     EtwpStopUmLogger @ 0x180087300 (EtwpStopUmLogger.c)
 *     EtwpFlushUmLogger @ 0x18010D4B0 (EtwpFlushUmLogger.c)
 *     EtwpIncrementUmLoggerFile @ 0x18010D73C (EtwpIncrementUmLoggerFile.c)
 *     EtwpQueryUmLogger @ 0x18010D810 (EtwpQueryUmLogger.c)
 *     EtwpUpdateUmLogger @ 0x18010D9C8 (EtwpUpdateUmLogger.c)
 * Callees:
 *     EtwpGetPrivateLoggerContextByName @ 0x18000456C (EtwpGetPrivateLoggerContextByName.c)
 *     RtlInitUnicodeString @ 0x180016AA0 (RtlInitUnicodeString.c)
 *     EtwpDemuxUmTraceHandle @ 0x18010D344 (EtwpDemuxUmTraceHandle.c)
 */

__int64 __fastcall EtwpGetPrivateLoggerContext(__int64 a1, _QWORD *a2)
{
  __int64 v3; // r8
  __int64 result; // rax
  __int64 v5; // rcx
  __int64 v6; // rdx
  unsigned int v7; // eax
  __int64 v8; // rdx
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF
  unsigned int v10; // [rsp+40h] [rbp+8h] BYREF

  if ( *(_WORD *)(a1 + 144) )
  {
    RtlInitUnicodeString(&DestinationString, (PCWSTR)(a1 + 176));
    return EtwpGetPrivateLoggerContextByName((__int64)&DestinationString, a2, v3);
  }
  v5 = *(unsigned __int16 *)(a1 + 8);
  v6 = EtwpLoggerArray;
  v7 = v5 & 0xFFFF7FFF;
  v10 = v5 & 0xFFFF7FFF;
  if ( !EtwpLoggerArray )
    return 4201LL;
  if ( v7 < 0x40 )
  {
LABEL_6:
    _InterlockedIncrement((volatile signed __int32 *)(v6 + 16LL * v7 + 8));
    v8 = *(_QWORD *)(EtwpLoggerArray + 16LL * v7);
    if ( (v8 & 1) == 0 )
    {
      *a2 = v8;
      return 0LL;
    }
    _InterlockedDecrement((volatile signed __int32 *)(EtwpLoggerArray + 16LL * v7 + 8));
    return 4201LL;
  }
  result = EtwpDemuxUmTraceHandle(v5, &v10);
  if ( !(_DWORD)result )
  {
    v7 = v10;
    v6 = EtwpLoggerArray;
    goto LABEL_6;
  }
  return result;
}
