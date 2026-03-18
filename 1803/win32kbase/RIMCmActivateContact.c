/*
 * XREFs of RIMCmActivateContact @ 0x1C0106660
 * Callers:
 *     rimFindOrCreateActiveContact @ 0x1C010263C (rimFindOrCreateActiveContact.c)
 * Callees:
 *     rimGetNextFreeCursor @ 0x1C0106E9C (rimGetNextFreeCursor.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 *__fastcall RIMCmActivateContact(__int64 a1, unsigned int a2)
{
  __int64 **v4; // rcx
  __int64 *v5; // rdi
  __int64 v6; // rdx
  __int64 v7; // rbp
  __int64 *v8; // rax
  int NextFreeCursor; // eax
  __int64 **v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rdx

  v4 = (__int64 **)(a1 + 880);
  v5 = *v4;
  if ( *v4 == (__int64 *)v4 )
    return 0LL;
  v6 = a2 % *(_DWORD *)(a1 + 904);
  v7 = *(_QWORD *)(a1 + 896) + 16LL * (a2 % *(_DWORD *)(a1 + 904));
  if ( (__int64 **)v5[1] != v4 || (v8 = (__int64 *)*v5, *(__int64 **)(*v5 + 8) != v5) )
    __fastfail(3u);
  *v4 = v8;
  v8[1] = (__int64)v4;
  if ( (v5[2] & 2) != 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v4, v6);
  if ( *((_DWORD *)v5 - 2) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v4, v6);
  *((_DWORD *)v5 + 4) |= 2u;
  *((_DWORD *)v5 - 4) = a2;
  if ( *(_DWORD *)(a1 + 680) == 1 && (*(_DWORD *)(a1 + 276) & 0x80u) == 0 )
    NextFreeCursor = *(unsigned __int16 *)(*(_QWORD *)(a1 + 928) + 4LL);
  else
    NextFreeCursor = rimGetNextFreeCursor(a1);
  *((_DWORD *)v5 - 3) = NextFreeCursor;
  v5[1] = 0LL;
  *v5 = 0LL;
  v10 = *(__int64 ***)(v7 + 8);
  if ( *v10 != (__int64 *)v7 )
    __fastfail(3u);
  *v5 = v7;
  v5[1] = (__int64)v10;
  *v10 = v5;
  *(_QWORD *)(v7 + 8) = v5;
  v11 = *(unsigned int *)(a1 + 912);
  if ( (unsigned int)v11 >= *(_DWORD *)(a1 + 680) )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v4, v11);
    LODWORD(v11) = *(_DWORD *)(a1 + 912);
  }
  ++*(_DWORD *)(a1 + 916);
  v12 = (unsigned int)(v11 + 1);
  *(_DWORD *)(a1 + 912) = v12;
  if ( (unsigned int)v12 < *(_DWORD *)(a1 + 916) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v4, v12);
  return v5 - 2;
}
