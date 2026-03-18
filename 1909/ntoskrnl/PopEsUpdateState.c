/*
 * XREFs of PopEsUpdateState @ 0x14073C918
 * Callers:
 *     PopEsWorker @ 0x14073C810 (PopEsWorker.c)
 * Callees:
 *     memset @ 0x1401D77C0 (memset.c)
 *     PopDiagTraceEsState @ 0x1402FD054 (PopDiagTraceEsState.c)
 *     PopCurrentPowerState @ 0x14069B760 (PopCurrentPowerState.c)
 *     PopEsSnapTelemetry @ 0x14072A1B0 (PopEsSnapTelemetry.c)
 *     PopEsPublishState @ 0x14078BFA0 (PopEsPublishState.c)
 */

char __fastcall PopEsUpdateState(char a1)
{
  unsigned int v2; // eax
  int v3; // ebx
  int v4; // edi
  _OWORD v6[2]; // [rsp+20h] [rbp-28h] BYREF

  memset(v6, 0, sizeof(v6));
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
    if ( dword_140443A70 )
    {
      if ( BYTE1(v6[0]) )
      {
        if ( DWORD2(v6[0]) )
        {
          v2 = (unsigned int)(DWORD2(v6[0]) + 100 * HIDWORD(v6[0]) - 1) / DWORD2(v6[0]);
          if ( v2 <= dword_140443A70 )
          {
            v4 = 2;
            goto LABEL_19;
          }
        }
      }
    }
  }
  if ( byte_140443A74 && dword_140443A70 && PopEsBgActivityPolicy == 1 )
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
    PopEsSnapTelemetry((__int64)v6);
    if ( v3 != PopEsState )
    {
      PopEsState = v3;
      PopEsPublishState();
    }
    PopEsReason = v4;
    LOBYTE(v2) = PopDiagTraceEsState();
  }
  return v2;
}
