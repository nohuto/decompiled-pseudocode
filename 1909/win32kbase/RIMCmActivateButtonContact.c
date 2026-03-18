/*
 * XREFs of RIMCmActivateButtonContact @ 0x1C015919C
 * Callers:
 *     rimProcessPointerDeviceButtonContact @ 0x1C0156818 (rimProcessPointerDeviceButtonContact.c)
 * Callees:
 *     RIMCmGetButtonContact @ 0x1C0159964 (RIMCmGetButtonContact.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01C8BF4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMCmActivateButtonContact(__int64 a1)
{
  __int64 v2; // rcx
  __int64 ButtonContact; // rdi
  __int64 v4; // r8
  __int64 v5; // rdx
  unsigned int v6; // eax
  _QWORD *v7; // rdi
  __int64 *v8; // rax
  __int64 v9; // rcx
  __int64 result; // rax

  ButtonContact = RIMCmGetButtonContact(a1);
  v5 = *(unsigned int *)(ButtonContact + 32);
  if ( (v5 & 2) != 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v2, v5, v4);
  if ( *(_DWORD *)(ButtonContact + 8) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v2, v5, v4);
  *(_DWORD *)(ButtonContact + 32) |= 6u;
  v6 = *(_DWORD *)(a1 + 952);
  if ( v6 >= *(_DWORD *)(a1 + 720) )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v2, v5, v4);
    v6 = *(_DWORD *)(a1 + 952);
  }
  ++*(_DWORD *)(a1 + 956);
  *(_DWORD *)(a1 + 952) = v6 + 1;
  *(_QWORD *)(ButtonContact + 24) = 0LL;
  v7 = (_QWORD *)(ButtonContact + 16);
  *v7 = 0LL;
  v8 = *(__int64 **)(a1 + 936);
  v9 = *v8;
  if ( *(__int64 **)(*v8 + 8) != v8 )
    __fastfail(3u);
  *v7 = v9;
  v7[1] = v8;
  *(_QWORD *)(v9 + 8) = v7;
  *v8 = (__int64)v7;
  result = *(unsigned int *)(a1 + 956);
  if ( *(_DWORD *)(a1 + 952) < (unsigned int)result )
    return MicrosoftTelemetryAssertTriggeredNoArgsKM(v9, v5, v4);
  return result;
}
