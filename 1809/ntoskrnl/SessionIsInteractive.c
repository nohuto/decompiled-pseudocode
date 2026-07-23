/*
 * XREFs of SessionIsInteractive @ 0x140001FF8
 * Callers:
 *     NtSetThreadExecutionState @ 0x1405882F0 (NtSetThreadExecutionState.c)
 *     PopCreateUserPowerRequest @ 0x140589C2C (PopCreateUserPowerRequest.c)
 *     PopSetWin32kInputTimeout @ 0x14087A3F8 (PopSetWin32kInputTimeout.c)
 * Callees:
 *     PsGetSiloBySessionId @ 0x140597B48 (PsGetSiloBySessionId.c)
 */

char __fastcall SessionIsInteractive(__int64 a1)
{
  int v1; // ebx
  int SiloBySessionId; // eax
  char v3; // dl
  _DWORD **v4; // rax
  int v5; // eax
  __int64 v7; // [rsp+38h] [rbp+10h] BYREF

  v1 = a1;
  if ( (_DWORD)a1 == -1 )
    return 0;
  SiloBySessionId = PsGetSiloBySessionId(a1, &v7);
  v3 = 0;
  if ( SiloBySessionId < 0 )
    return 0;
  v4 = (_DWORD **)&PspHostSiloGlobals;
  if ( v7 )
    v4 = *(_DWORD ***)(v7 + 1256);
  if ( v1 != *v4[140] )
    return 1;
  v5 = v7 ? *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v7 + 1256) + 1120LL) + 4LL) : MEMORY[0xFFFFF780000002D8];
  if ( v1 == v5 )
    return 1;
  return v3;
}
