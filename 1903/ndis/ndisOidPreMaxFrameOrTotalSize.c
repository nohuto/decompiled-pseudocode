/*
 * XREFs of ndisOidPreMaxFrameOrTotalSize @ 0x1C003EFF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall ndisOidPreMaxFrameOrTotalSize(__int64 *a1)
{
  __int64 v1; // r9
  char result; // al
  __int64 v3; // r8

  v1 = *a1;
  result = 0;
  v3 = a1[4];
  if ( *a1 )
  {
    if ( (*(_DWORD *)(v3 + 4) & 0xFFFFFFFD) != 0 )
    {
      *((_DWORD *)a1 + 10) = -1073741637;
    }
    else
    {
      *((_DWORD *)a1 + 10) = 0;
      if ( *(_DWORD *)(v3 + 48) < 4u )
      {
        *(_DWORD *)(v3 + 56) = 4;
        *((_DWORD *)a1 + 10) = -1073676268;
      }
      else
      {
        result = 0;
        if ( !v1 || *(_DWORD *)(v3 + 32) != 65798 )
          return result;
        **(_DWORD **)(v3 + 40) = *(_DWORD *)(v1 + 3020);
        *(_DWORD *)(v3 + 52) = 4;
        *((_DWORD *)a1 + 10) = 0;
      }
    }
    return 1;
  }
  return result;
}
