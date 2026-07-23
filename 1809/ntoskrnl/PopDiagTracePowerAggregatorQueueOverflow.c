/*
 * XREFs of PopDiagTracePowerAggregatorQueueOverflow @ 0x140874A28
 * Callers:
 *     PopQueuePowerIntent @ 0x14087735C (PopQueuePowerIntent.c)
 * Callees:
 *     EtwEventEnabled @ 0x14005B2D0 (EtwEventEnabled.c)
 *     EtwWrite @ 0x1400CAE00 (EtwWrite.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 */

void __fastcall PopDiagTracePowerAggregatorQueueOverflow(ULONGLONG a1)
{
  REGHANDLE v2; // rdi
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-48h] BYREF
  ULONGLONG v4; // [rsp+40h] [rbp-38h]
  int v5; // [rsp+48h] [rbp-30h]
  int v6; // [rsp+4Ch] [rbp-2Ch]
  ULONGLONG v7; // [rsp+50h] [rbp-28h]
  int v8; // [rsp+58h] [rbp-20h]
  int v9; // [rsp+5Ch] [rbp-1Ch]

  if ( PopDiagHandleRegistered )
  {
    v2 = PopDiagHandle;
    if ( EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_POWER_AGGREGATOR_QUEUE_OVERFLOW) )
    {
      UserData.Reserved = 0;
      v6 = 0;
      v9 = 0;
      v4 = a1 + 4;
      UserData.Size = 4;
      v7 = a1 + 8;
      v5 = 4;
      v8 = 4;
      UserData.Ptr = a1;
      EtwWrite(v2, &POP_ETW_EVENT_POWER_AGGREGATOR_QUEUE_OVERFLOW, 0LL, 3u, &UserData);
    }
  }
}
