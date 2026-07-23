/*
 * XREFs of ExpWnfGetCurrentScopeInstance @ 0x1406110F4
 * Callers:
 *     ExpWnfResolveScopeInstance @ 0x1406109EC (ExpWnfResolveScopeInstance.c)
 * Callees:
 *     PsGetProcessSessionId @ 0x140092250 (PsGetProcessSessionId.c)
 *     ExpWnfQueryCurrentUserSID @ 0x1406111D0 (ExpWnfQueryCurrentUserSID.c)
 */

__int64 __fastcall ExpWnfGetCurrentScopeInstance(_KPROCESS *a1, int a2, int a3, _KPROCESS **a4, _DWORD *a5, _DWORD *a6)
{
  unsigned int v6; // ebx
  _KPROCESS *Process; // r10
  int v8; // r8d
  int v9; // r8d
  bool v11; // zf

  v6 = 0;
  Process = a1;
  if ( !a3 )
    goto LABEL_13;
  v8 = a3 - 1;
  if ( v8 )
  {
    v9 = v8 - 1;
    if ( !v9 )
      return (unsigned int)ExpWnfQueryCurrentUserSID((_DWORD)a1, a2, (_DWORD)a4, (_DWORD)a5, (__int64)a6);
    if ( v9 == 1 )
    {
      v11 = KeGetCurrentThread()->ApcStateIndex == 1;
      *a6 = !v11;
      if ( v11 )
        Process = KeGetCurrentThread()->ApcState.Process;
      *a4 = Process;
      *a5 = 8;
      return v6;
    }
LABEL_13:
    *a5 = 0;
    *a6 = 1;
    return v6;
  }
  v11 = KeGetCurrentThread()->ApcStateIndex == 1;
  *a6 = !v11;
  if ( v11 )
    Process = KeGetCurrentThread()->ApcState.Process;
  *(_DWORD *)a4 = PsGetProcessSessionId((__int64)Process);
  *a5 = 4;
  return v6;
}
