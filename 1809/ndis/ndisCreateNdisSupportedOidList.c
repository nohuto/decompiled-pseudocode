/*
 * XREFs of ndisCreateNdisSupportedOidList @ 0x1C00BCF94
 * Callers:
 *     ndisMInitializeAdapter @ 0x1C010B314 (ndisMInitializeAdapter.c)
 * Callees:
 *     WPP_SF_q @ 0x1C003A798 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003A7CC (WPP_SF_qD.c)
 */

__int64 __fastcall ndisCreateNdisSupportedOidList(__int64 a1)
{
  unsigned int v2; // edi
  unsigned __int8 v3; // cl
  int v4; // eax
  unsigned int v5; // eax
  _OWORD *PoolWithTag; // rax
  unsigned int v7; // r8d
  __int64 v8; // rcx

  v2 = 0;
  if ( (unsigned __int8)byte_1C00A025A >= 4u )
    WPP_SF_q(0x13u, &WPP_ba7b266a28b239be865c999b08df0b37_Traceguids, a1);
  v3 = *(_BYTE *)(a1 + 32);
  v4 = v3 < 6u ? 45 : 83;
  if ( !*(_DWORD *)(a1 + 464) )
  {
    v4 = v3 < 6u ? 46 : 84;
    if ( v3 >= 6u )
      v4 = v3 < 6u ? 50 : 88;
  }
  v5 = 4 * v4;
  *(_DWORD *)(a1 + 3432) = v5;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v5, 0x6D61444Eu);
  *(_QWORD *)(a1 + 3424) = PoolWithTag;
  if ( PoolWithTag )
  {
    v7 = 45;
    *PoolWithTag = ndisHandledNdis5Ndis6GenOids;
    PoolWithTag[1] = *((_OWORD *)&ndisHandledNdis5Ndis6GenOids + 1);
    PoolWithTag[2] = *((_OWORD *)&ndisHandledNdis5Ndis6GenOids + 2);
    PoolWithTag[3] = *((_OWORD *)&ndisHandledNdis5Ndis6GenOids + 3);
    PoolWithTag[4] = *((_OWORD *)&ndisHandledNdis5Ndis6GenOids + 4);
    PoolWithTag[5] = *((_OWORD *)&ndisHandledNdis5Ndis6GenOids + 5);
    PoolWithTag[6] = *((_OWORD *)&ndisHandledNdis5Ndis6GenOids + 6);
    PoolWithTag[7] = *((_OWORD *)&ndisHandledNdis5Ndis6GenOids + 7);
    PoolWithTag[8] = *((_OWORD *)&ndisHandledNdis5Ndis6GenOids + 8);
    PoolWithTag[9] = *((_OWORD *)&ndisHandledNdis5Ndis6GenOids + 9);
    PoolWithTag[10] = *((_OWORD *)&ndisHandledNdis5Ndis6GenOids + 10);
    *((_DWORD *)PoolWithTag + 44) = *((_DWORD *)&ndisHandledNdis5Ndis6GenOids + 44);
    if ( *(_BYTE *)(a1 + 32) >= 6u )
    {
      v8 = *(_QWORD *)(a1 + 3424) + 180LL;
      v7 = 83;
      *(_OWORD *)v8 = ndisHandledNdis6OnlyGenOids;
      *(_OWORD *)(v8 + 16) = *(_OWORD *)(0x1C0000000LL + 1196192);
      *(_OWORD *)(v8 + 32) = *(_OWORD *)(0x1C0000000LL + 1196208);
      *(_OWORD *)(v8 + 48) = *(_OWORD *)(0x1C0000000LL + 1196224);
      *(_OWORD *)(v8 + 64) = *(_OWORD *)(0x1C0000000LL + 1196240);
      *(_OWORD *)(v8 + 80) = *(_OWORD *)(0x1C0000000LL + 1196256);
      *(_OWORD *)(v8 + 96) = *(_OWORD *)(0x1C0000000LL + 1196272);
      *(_OWORD *)(v8 + 112) = *(_OWORD *)(0x1C0000000LL + 1196288);
      *(_OWORD *)(v8 + 128) = *(_OWORD *)(0x1C0000000LL + 1196304);
      *(_QWORD *)(v8 + 144) = *(_QWORD *)(0x1C0000000LL + 1196320);
    }
    if ( !*(_DWORD *)(a1 + 464) )
    {
      *(_DWORD *)(*(_QWORD *)(a1 + 3424) + 4LL * v7) = (_DWORD)ndisHandledNdis5Ndis6_802_3_Oids;
      if ( *(_BYTE *)(a1 + 32) >= 6u )
        *(_OWORD *)(*(_QWORD *)(a1 + 3424) + 4LL * (v7 + 1)) = *(_OWORD *)&ndisHandledNdis6Only_802_3_Oids;
    }
  }
  else
  {
    v2 = -1073741670;
  }
  if ( (unsigned __int8)byte_1C00A025A >= 4u )
    WPP_SF_qD(0x14u, &WPP_ba7b266a28b239be865c999b08df0b37_Traceguids, a1, v2);
  return v2;
}
