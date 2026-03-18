/*
 * XREFs of rimGetNextFreeCursor @ 0x1C0106E9C
 * Callers:
 *     RIMCmActivateContact @ 0x1C0106660 (RIMCmActivateContact.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall rimGetNextFreeCursor(__int64 a1, __int64 a2)
{
  unsigned int v2; // r9d
  __int64 v4; // rcx
  unsigned int v5; // edi
  unsigned int v6; // r8d
  unsigned int v7; // r10d
  __int64 v8; // rsi
  unsigned int v9; // ebp

  v2 = *(_DWORD *)(a1 + 936);
  v4 = *(unsigned int *)(a1 + 940);
  v5 = 0;
  v6 = v4;
  if ( v2 >= (unsigned int)v4 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v4, a2);
    v4 = *(unsigned int *)(a1 + 940);
    v6 = *(_DWORD *)(a1 + 940);
    v2 = *(_DWORD *)(a1 + 936);
  }
  v7 = 0;
  if ( v6 )
  {
    v8 = *(_QWORD *)(a1 + 928);
    v9 = v6;
    while ( 1 )
    {
      a2 = v2 % v6;
      v2 = v2 % v6 + 1;
      if ( !*(_DWORD *)(v8 + 12LL * (unsigned int)a2 + 8) )
        break;
      ++v7;
      v9 = v4;
      if ( v7 >= (unsigned int)v4 )
      {
        v6 = v4;
        goto LABEL_9;
      }
    }
    v4 = 3 * a2;
    v5 = *(_DWORD *)(v8 + 12 * a2 + 4);
    a2 = v2 % v9;
    *(_DWORD *)(a1 + 936) = v2 % v9;
    *(_DWORD *)(v8 + 4 * v4 + 8) = 1;
    v6 = *(_DWORD *)(a1 + 940);
  }
LABEL_9:
  if ( *(_DWORD *)(a1 + 936) >= v6 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v4, a2);
  return v5;
}
