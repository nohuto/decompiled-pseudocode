/*
 * XREFs of ndisRemovePMLowestPriorityEntry @ 0x1C00767FC
 * Callers:
 *     ndisPMAddWOLPattern @ 0x1C001D0F4 (ndisPMAddWOLPattern.c)
 *     ndisPMAddProtocolOffload @ 0x1C002311C (ndisPMAddProtocolOffload.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ndisRemovePMLowestPriorityEntry(_QWORD *a1, unsigned int a2)
{
  __int64 *v2; // r10
  _QWORD *v3; // r9
  unsigned int v4; // r11d
  unsigned int v5; // eax
  unsigned int v6; // r8d
  bool v7; // cc
  __int64 v8; // rcx

  v2 = (__int64 *)*a1;
  v3 = 0LL;
  v4 = 1;
  if ( !*a1 )
    return 0LL;
  do
  {
    v5 = *((_DWORD *)v2 + 8);
    v6 = v4;
    v7 = v5 <= v4;
    v4 = v5;
    if ( v7 )
      a1 = v3;
    v3 = a1;
    a1 = v2;
    v2 = (__int64 *)*v2;
    if ( v5 <= v6 )
      v4 = v6;
  }
  while ( v2 );
  if ( !v3 )
    return 0LL;
  v8 = *v3;
  if ( !*v3 )
    return 0LL;
  if ( *(_DWORD *)(v8 + 32) <= a2 )
    return 0LL;
  *v3 = *(_QWORD *)v8;
  return v8;
}
