/*
 * XREFs of RIMCmActivateContact @ 0x1C012E460
 * Callers:
 *     rimFindOrCreateActiveContact @ 0x1C012ADA8 (rimFindOrCreateActiveContact.c)
 * Callees:
 *     rimGetNextFreeCursor @ 0x1C012ED68 (rimGetNextFreeCursor.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 *__fastcall RIMCmActivateContact(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 **v5; // rcx
  __int64 *v6; // rdi
  __int64 v7; // rdx
  __int64 v8; // rsi
  __int64 *v9; // rax
  int NextFreeCursor; // eax
  __int64 **v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rdx

  v5 = (__int64 **)(a1 + 912);
  v6 = *v5;
  if ( *v5 == (__int64 *)v5 )
    return 0LL;
  v7 = a2 % *(_DWORD *)(a1 + 936);
  v8 = *(_QWORD *)(a1 + 928) + 16LL * (a2 % *(_DWORD *)(a1 + 936));
  if ( (__int64 **)v6[1] != v5 )
    goto LABEL_18;
  v9 = (__int64 *)*v6;
  if ( *(__int64 **)(*v6 + 8) != v6 )
    goto LABEL_18;
  *v5 = v9;
  v9[1] = (__int64)v5;
  if ( (v6[2] & 2) != 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v5, v7, a3);
  if ( *((_DWORD *)v6 - 2) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v5, v7, a3);
  *((_DWORD *)v6 + 4) |= 2u;
  *((_DWORD *)v6 - 4) = a2;
  if ( *(_DWORD *)(a1 + 712) == 1 && (*(_DWORD *)(a1 + 308) & 0x80u) == 0 )
    NextFreeCursor = *(unsigned __int16 *)(*(_QWORD *)(a1 + 960) + 4LL);
  else
    NextFreeCursor = rimGetNextFreeCursor(a1);
  *((_DWORD *)v6 - 3) = NextFreeCursor;
  v6[1] = 0LL;
  *v6 = 0LL;
  v11 = *(__int64 ***)(v8 + 8);
  if ( *v11 != (__int64 *)v8 )
LABEL_18:
    __fastfail(3u);
  *v6 = v8;
  v6[1] = (__int64)v11;
  *v11 = v6;
  *(_QWORD *)(v8 + 8) = v6;
  v12 = *(unsigned int *)(a1 + 944);
  if ( (unsigned int)v12 >= *(_DWORD *)(a1 + 712) )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v5, v12, a3);
    LODWORD(v12) = *(_DWORD *)(a1 + 944);
  }
  ++*(_DWORD *)(a1 + 948);
  v13 = (unsigned int)(v12 + 1);
  *(_DWORD *)(a1 + 944) = v13;
  if ( (unsigned int)v13 < *(_DWORD *)(a1 + 948) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v5, v13, a3);
  return v6 - 2;
}
