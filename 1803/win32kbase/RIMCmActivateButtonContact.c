/*
 * XREFs of RIMCmActivateButtonContact @ 0x1C01065B0
 * Callers:
 *     rimProcessPointerDeviceButtonContact @ 0x1C0102D4C (rimProcessPointerDeviceButtonContact.c)
 * Callees:
 *     RIMCmGetButtonContact @ 0x1C0106CD0 (RIMCmGetButtonContact.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMCmActivateButtonContact(__int64 a1)
{
  __int64 v2; // rcx
  __int64 ButtonContact; // rdi
  __int64 v4; // rdx
  unsigned int v5; // eax
  _QWORD *v6; // rdi
  __int64 *v7; // rax
  __int64 v8; // rcx
  __int64 result; // rax

  ButtonContact = RIMCmGetButtonContact(a1);
  v4 = *(unsigned int *)(ButtonContact + 32);
  if ( (v4 & 2) != 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v2, v4);
  if ( *(_DWORD *)(ButtonContact + 8) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v2, v4);
  *(_DWORD *)(ButtonContact + 32) |= 6u;
  v5 = *(_DWORD *)(a1 + 912);
  if ( v5 >= *(_DWORD *)(a1 + 680) )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v2, v4);
    v5 = *(_DWORD *)(a1 + 912);
  }
  ++*(_DWORD *)(a1 + 916);
  *(_DWORD *)(a1 + 912) = v5 + 1;
  *(_QWORD *)(ButtonContact + 24) = 0LL;
  v6 = (_QWORD *)(ButtonContact + 16);
  *v6 = 0LL;
  v7 = *(__int64 **)(a1 + 896);
  v8 = *v7;
  if ( *(__int64 **)(*v7 + 8) != v7 )
    __fastfail(3u);
  *v6 = v8;
  v6[1] = v7;
  *(_QWORD *)(v8 + 8) = v6;
  *v7 = (__int64)v6;
  result = *(unsigned int *)(a1 + 916);
  if ( *(_DWORD *)(a1 + 912) < (unsigned int)result )
    return MicrosoftTelemetryAssertTriggeredNoArgsKM(v8, v4);
  return result;
}
