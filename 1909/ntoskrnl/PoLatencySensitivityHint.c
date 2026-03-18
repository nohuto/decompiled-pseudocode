/*
 * XREFs of PoLatencySensitivityHint @ 0x14015C220
 * Callers:
 *     PopPowerInformationInternal @ 0x14069B7B4 (PopPowerInformationInternal.c)
 *     PopPerfBoostPowerRequest @ 0x140744F70 (PopPerfBoostPowerRequest.c)
 * Callees:
 *     EtwWriteEx @ 0x1400366F0 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x1400476B0 (EtwEventEnabled.c)
 *     ExQueueWorkItem @ 0x14005B1A0 (ExQueueWorkItem.c)
 *     PpmInterlockedUpdateTimeNoFence @ 0x1400E181C (PpmInterlockedUpdateTimeNoFence.c)
 *     PpmCheckCustomRun @ 0x14015B6D0 (PpmCheckCustomRun.c)
 *     PpmTryAcquireLock @ 0x14015C394 (PpmTryAcquireLock.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 */

void __fastcall PoLatencySensitivityHint(int a1)
{
  int v2; // r9d
  _BYTE *i; // rax
  REGHANDLE v4; // rsi
  unsigned __int64 v5; // rdx
  bool v6; // r11
  bool v7; // cl
  __int64 v8; // rdx
  __int64 v9; // r8
  signed __int32 v10[8]; // [rsp+0h] [rbp-78h] BYREF
  int v11; // [rsp+40h] [rbp-38h] BYREF
  unsigned __int64 v12; // [rsp+48h] [rbp-30h] BYREF
  unsigned __int64 v13; // [rsp+50h] [rbp-28h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+58h] [rbp-20h] BYREF

  v2 = 0;
  for ( i = (char *)&PpmCurrentProfile[341 * dword_140443A2C + 14] + 5; !*i; ++i )
  {
    if ( (unsigned int)++v2 >= 2 )
      return;
  }
  v11 = a1;
  if ( PpmEtwRegistered )
  {
    v4 = PpmEtwHandle;
    if ( EtwEventEnabled(PpmEtwHandle, &PPM_ETW_LATENCY_SENSITIVITY_HINT) )
    {
      *(_QWORD *)&UserData.Size = 4LL;
      UserData.Ptr = (ULONGLONG)&v11;
      EtwWriteEx(v4, &PPM_ETW_LATENCY_SENSITIVITY_HINT, 0LL, 0, 0LL, 0LL, 1u, &UserData);
    }
  }
  v12 = 0LL;
  v6 = PpmInterlockedUpdateTimeNoFence(
         &PpmPerfLatencyBoostExpiration,
         PpmCheckPeriod + MEMORY[0xFFFFF78000000008],
         &v13) != 0;
  if ( a1 == 4 && PpmInterlockedUpdateTimeNoFence(&PpmPerfDeadlineBoostExpiration, v5, &v12) )
    v6 = 1;
  if ( v6 )
  {
    _InterlockedOr(v10, 0);
    v7 = v13 <= PpmCheckLastExecutionTime;
    if ( a1 == 4 && v12 <= PpmCheckLastExecutionTime )
      v7 = 1;
    if ( v7 )
    {
      if ( (unsigned __int8)PpmTryAcquireLock() )
      {
        PpmCheckCustomRun(3u, v8, v9);
      }
      else if ( !_InterlockedExchange(&PpmPerfLatencyBoostQueued, 1) )
      {
        ExQueueWorkItem(&PpmPerfLatencyBoostWorkItem, CustomPriorityWorkQueue|NormalWorkQueue|0x18);
      }
    }
  }
}
