/*
 * XREFs of ndisOidPreRcvFilterSetFilter @ 0x1C00E20C0
 * Callers:
 *     <none>
 * Callees:
 *     NdisConvertNtStatusToNdisStatus @ 0x1C0015520 (NdisConvertNtStatusToNdisStatus.c)
 *     ndisSetReceiveFilter @ 0x1C003CA90 (ndisSetReceiveFilter.c)
 */

char __fastcall ndisOidPreRcvFilterSetFilter(__int64 a1)
{
  char v2; // di
  __int64 v3; // rcx
  _DWORD *v4; // r9
  unsigned int v5; // edx
  int v6; // r10d
  bool v7; // cf
  unsigned int v8; // r8d
  unsigned int v9; // r9d
  unsigned int v10; // r8d

  v2 = 1;
  v3 = *(_QWORD *)(a1 + 32);
  v4 = *(_DWORD **)(v3 + 40);
  if ( *(_DWORD *)(v3 + 4) != 12 )
  {
    *(_DWORD *)(a1 + 40) = -1073741637;
    return v2;
  }
  v5 = 36;
  *(_DWORD *)(a1 + 40) = 0;
  if ( *(_DWORD *)(v3 + 48) < 0x24u )
    goto LABEL_4;
  if ( *(_DWORD *)(v3 + 52) < 0x24u )
    goto LABEL_7;
  if ( *(_BYTE *)(*(_QWORD *)(v3 + 40) + 1LL) >= 2u )
  {
    v5 = 44;
    *(_DWORD *)(a1 + 40) = 0;
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
  if ( (unsigned int)v4[6] * (unsigned __int64)(unsigned int)v4[7] > 0xFFFFFFFF )
  {
    v7 = 1;
LABEL_15:
    *(_DWORD *)(a1 + 40) = NdisConvertNtStatusToNdisStatus(v7 ? 0xC0000095 : 0);
    return v2;
  }
  v6 = v4[6] * v4[7];
  v8 = v4[5];
  v9 = v8 + v6;
  v7 = v8 + v6 < v8;
  if ( v8 + v6 < v8 )
    goto LABEL_15;
  *(_DWORD *)(a1 + 40) = 0;
  v10 = v8 + v6;
  if ( v9 <= v5 )
    v10 = v5;
  if ( *(_DWORD *)(v3 + 48) < v9 )
  {
    *(_DWORD *)(v3 + 68) = v10;
    goto LABEL_5;
  }
  if ( *(_DWORD *)(v3 + 52) < v5 )
  {
    *(_DWORD *)(v3 + 68) = v10;
    goto LABEL_8;
  }
  if ( *(_QWORD *)a1 )
    return ndisSetReceiveFilter(a1);
  else
    return 0;
}
