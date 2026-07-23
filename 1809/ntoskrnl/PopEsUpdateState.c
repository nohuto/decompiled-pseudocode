/*
 * XREFs of PopEsUpdateState @ 0x14071DC54
 * Callers:
 *     PopEsWorker @ 0x14071DB20 (PopEsWorker.c)
 * Callees:
 *     PopDiagTraceEsState @ 0x1402E06B8 (PopDiagTraceEsState.c)
 *     PopCurrentPowerState @ 0x14058EED4 (PopCurrentPowerState.c)
 *     PopEsSnapTelemetry @ 0x1406E2C50 (PopEsSnapTelemetry.c)
 *     PopEsPublishState @ 0x140763E74 (PopEsPublishState.c)
 */

char __fastcall PopEsUpdateState(char a1)
{
  unsigned int v2; // eax
  int v3; // ebx
  int v4; // edi
  _OWORD v6[2]; // [rsp+20h] [rbp-28h] BYREF

  PopCurrentPowerState(v6);
  LOBYTE(v2) = PopEsMode;
  v3 = 0;
  v4 = 0;
  if ( PopEsMode == 1 )
  {
    v4 = 1;
LABEL_19:
    v3 = 1;
    goto LABEL_6;
  }
  if ( PopEsMode == 2 )
  {
    if ( dword_1404191D0 )
    {
      if ( BYTE1(v6[0]) )
      {
        if ( DWORD2(v6[0]) )
        {
          v2 = (unsigned int)(DWORD2(v6[0]) + 100 * HIDWORD(v6[0]) - 1) / DWORD2(v6[0]);
          if ( v2 <= dword_1404191D0 )
          {
            v4 = 2;
            goto LABEL_19;
          }
        }
      }
    }
  }
  if ( byte_1404191D4 && dword_1404191D0 && PopEsBgActivityLimited )
  {
    v4 = 8;
    goto LABEL_19;
  }
  if ( PopEsEnabledOnHost )
  {
    v4 = 16;
    goto LABEL_19;
  }
LABEL_6:
  if ( a1 || v3 != PopEsState || v4 != PopEsReason )
  {
    PopDiagTraceEsState();
    LOBYTE(v2) = PopEsSnapTelemetry((__int64)v6);
    if ( v3 != PopEsState )
    {
      PopEsState = v3;
      LOBYTE(v2) = PopEsPublishState();
    }
    PopEsReason = v4;
  }
  return v2;
}
