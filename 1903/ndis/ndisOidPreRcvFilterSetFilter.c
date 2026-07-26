/*
 * XREFs of ndisOidPreRcvFilterSetFilter @ 0x1C0060B60
 * Callers:
 *     <none>
 * Callees:
 *     NdisConvertNtStatusToNdisStatus @ 0x1C003F500 (NdisConvertNtStatusToNdisStatus.c)
 *     ndisSetReceiveFilter @ 0x1C0060DE8 (ndisSetReceiveFilter.c)
 */

char __fastcall ndisOidPreRcvFilterSetFilter(__int64 a1)
{
  char v2; // di
  __int64 v3; // rcx
  _DWORD *v4; // r9
  unsigned int v5; // edx
  unsigned __int64 v6; // r8
  unsigned int v7; // eax
  unsigned int v8; // r9d
  unsigned int v9; // eax

  v2 = 1;
  v3 = *(_QWORD *)(a1 + 32);
  v4 = *(_DWORD **)(v3 + 40);
  if ( *(_DWORD *)(v3 + 4) != 12 )
  {
    *(_DWORD *)(a1 + 40) = -1073741637;
    return v2;
  }
  *(_DWORD *)(a1 + 40) = 0;
  v5 = 36;
  if ( *(_DWORD *)(v3 + 48) < 0x24u )
    goto LABEL_4;
  if ( *(_DWORD *)(v3 + 52) < 0x24u )
    goto LABEL_7;
  if ( *(_BYTE *)(*(_QWORD *)(v3 + 40) + 1LL) >= 2u )
  {
    v5 = 44;
    if ( *(_DWORD *)(v3 + 48) < 0x2Cu )
    {
LABEL_4:
      *(_DWORD *)(v3 + 68) = v5;
LABEL_5:
      *(_DWORD *)(a1 + 40) = -1073676268;
      return v2;
    }
    if ( *(_DWORD *)(v3 + 52) < 0x2Cu )
    {
LABEL_7:
      *(_DWORD *)(v3 + 68) = v5;
LABEL_8:
      *(_DWORD *)(a1 + 40) = -1073676266;
      return v2;
    }
  }
  v6 = (unsigned int)v4[6] * (unsigned __int64)(unsigned int)v4[7];
  if ( v6 > 0xFFFFFFFF || (v7 = v4[5], v8 = v7 + v6, v7 + (unsigned int)v6 < v7) )
  {
    *(_DWORD *)(a1 + 40) = NdisConvertNtStatusToNdisStatus(-1073741675);
    return v2;
  }
  v9 = v7 + v6;
  if ( v8 <= v5 )
    v9 = v5;
  if ( *(_DWORD *)(v3 + 48) < v8 )
  {
    *(_DWORD *)(v3 + 68) = v9;
    goto LABEL_5;
  }
  if ( *(_DWORD *)(v3 + 52) < v5 )
  {
    *(_DWORD *)(v3 + 68) = v9;
    goto LABEL_8;
  }
  if ( *(_QWORD *)a1 )
    return ndisSetReceiveFilter(a1);
  else
    return 0;
}
