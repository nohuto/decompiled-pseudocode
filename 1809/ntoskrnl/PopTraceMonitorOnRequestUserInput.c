/*
 * XREFs of PopTraceMonitorOnRequestUserInput @ 0x140876598
 * Callers:
 *     PopMonitorInvocation @ 0x1406DD428 (PopMonitorInvocation.c)
 * Callees:
 *     _TlgKeywordOn @ 0x140012A04 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x140012EE4 (_TlgWrite.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 */

void PopTraceMonitorOnRequestUserInput()
{
  int v0; // r9d
  char v1; // [rsp+30h] [rbp-68h] BYREF
  int v2; // [rsp+34h] [rbp-64h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-58h] BYREF
  char *v4; // [rsp+60h] [rbp-38h]
  int v5; // [rsp+68h] [rbp-30h]
  int v6; // [rsp+6Ch] [rbp-2Ch]
  int *v7; // [rsp+70h] [rbp-28h]
  int v8; // [rsp+78h] [rbp-20h]
  int v9; // [rsp+7Ch] [rbp-1Ch]

  if ( pCallbackContext.LevelPlus1 > 5 )
  {
    if ( TlgKeywordOn(&pCallbackContext, 0x400000000000uLL) )
    {
      v6 = 0;
      v9 = 0;
      v1 = PopWdiCurrentScenarioInstanceId;
      v4 = &v1;
      v7 = &v2;
      v2 = v0;
      v5 = 1;
      v8 = 4;
      TlgWrite(&pCallbackContext, &unk_14037058F, 0LL, 0LL, 4u, &pData);
    }
  }
}
