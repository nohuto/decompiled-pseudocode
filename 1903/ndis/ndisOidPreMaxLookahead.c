/*
 * XREFs of ndisOidPreMaxLookahead @ 0x1C006D340
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall ndisOidPreMaxLookahead(__int64 *a1)
{
  __int64 v1; // r9
  char v2; // r8
  __int64 v3; // rdx

  v1 = *a1;
  v2 = 0;
  v3 = a1[4];
  if ( *a1 && (*(_DWORD *)(v3 + 4) & 0xFFFFFFFD) == 0 )
  {
    *((_DWORD *)a1 + 10) = 0;
    if ( *(_DWORD *)(v3 + 48) >= 4u )
    {
      v2 = 1;
      **(_DWORD **)(v3 + 40) = *(_DWORD *)(v1 + 596);
      *(_DWORD *)(v3 + 52) = 4;
    }
    else
    {
      *(_DWORD *)(v3 + 56) = 4;
      *((_DWORD *)a1 + 10) = -1073676268;
    }
  }
  return v2;
}
