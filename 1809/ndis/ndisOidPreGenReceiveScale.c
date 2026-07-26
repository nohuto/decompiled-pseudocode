/*
 * XREFs of ndisOidPreGenReceiveScale @ 0x1C0047270
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall ndisOidPreGenReceiveScale(__int64 a1)
{
  char v1; // dl

  v1 = 0;
  if ( *(_DWORD *)(*(_QWORD *)(a1 + 32) + 4LL) != 1 )
  {
    *(_DWORD *)(a1 + 40) = -1073741637;
    return 1;
  }
  if ( *(_QWORD *)a1 && (*(_DWORD *)(*(_QWORD *)a1 + 120LL) & 0x80u) == 0 )
  {
    *(_DWORD *)(a1 + 40) = 0;
    return 1;
  }
  return v1;
}
