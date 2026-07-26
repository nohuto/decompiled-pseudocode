/*
 * XREFs of ndisOidPreRcvFilterAllocateQueue @ 0x1C005FB10
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisAllocateReceiveQueue@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C005E400 (-ndisAllocateReceiveQueue@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 */

char __fastcall ndisOidPreRcvFilterAllocateQueue(__int64 a1, __int16 a2)
{
  _DWORD *v2; // rax

  v2 = *(_DWORD **)(a1 + 32);
  LOBYTE(a2) = 1;
  if ( v2[1] == 12 )
  {
    *(_DWORD *)(a1 + 40) = 0;
    if ( v2[12] >= 0x43Cu )
    {
      if ( v2[13] >= 0x43Cu )
      {
        if ( *(_QWORD *)a1 )
          LOBYTE(a2) = ndisAllocateReceiveQueue((struct _NDIS_REQ_TRACKER *)a1, a2);
        else
          LOBYTE(a2) = 0;
      }
      else
      {
        v2[17] = 1084;
        *(_DWORD *)(a1 + 40) = -1073676266;
      }
    }
    else
    {
      v2[17] = 1084;
      *(_DWORD *)(a1 + 40) = -1073676268;
    }
  }
  else
  {
    *(_DWORD *)(a1 + 40) = -1073741637;
  }
  return a2;
}
