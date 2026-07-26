/*
 * XREFs of ndisOidPreRcvFilterAllocationComplete @ 0x1C005FB80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall ndisOidPreRcvFilterAllocationComplete(__int64 a1)
{
  _DWORD *v1; // rax
  char v2; // dl

  v1 = *(_DWORD **)(a1 + 32);
  v2 = 1;
  if ( v1[1] == 12 )
  {
    *(_DWORD *)(a1 + 40) = 0;
    if ( v1[12] >= 0x14u )
    {
      if ( v1[13] >= 0x14u )
      {
        return 0;
      }
      else
      {
        v1[17] = 20;
        *(_DWORD *)(a1 + 40) = -1073676266;
      }
    }
    else
    {
      v1[17] = 20;
      *(_DWORD *)(a1 + 40) = -1073676268;
    }
  }
  else
  {
    *(_DWORD *)(a1 + 40) = -1073741637;
  }
  return v2;
}
