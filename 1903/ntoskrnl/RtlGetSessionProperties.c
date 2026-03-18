/*
 * XREFs of RtlGetSessionProperties @ 0x1408D1FD0
 * Callers:
 *     <none>
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x1400E6EE0 (PsGetCurrentServerSiloGlobals.c)
 */

__int64 __fastcall RtlGetSessionProperties(int a1, _DWORD *a2)
{
  unsigned int v2; // ebx

  if ( a1 == -1 )
    return (unsigned int)-1073741811;
  v2 = 0;
  if ( !a2 )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    *a2 = 0;
    *a2 = *(_DWORD *)(*((_QWORD *)PsGetCurrentServerSiloGlobals() + 138) + 24LL) == a1;
  }
  return v2;
}
