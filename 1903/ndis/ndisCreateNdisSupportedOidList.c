/*
 * XREFs of ndisCreateNdisSupportedOidList @ 0x1C003D594
 * Callers:
 *     ndisMInitializeAdapter @ 0x1C012D618 (ndisMInitializeAdapter.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0006260 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qL @ 0x1C0006320 (WPP_RECORDER_SF_qL.c)
 */

__int64 __fastcall ndisCreateNdisSupportedOidList(__int64 a1)
{
  unsigned int v2; // edi
  unsigned __int8 v3; // cl
  int v4; // eax
  unsigned int v5; // eax
  _OWORD *PoolWithTag; // rax
  int v7; // edx
  unsigned int v8; // r8d
  __int64 v9; // rcx

  v2 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      11,
      19,
      (struct _GUID *)&WPP_ead076de49c5361e52622447ee4d867c_Traceguids,
      a1);
  v3 = *(_BYTE *)(a1 + 32);
  v4 = v3 < 6u ? 45 : 83;
  if ( !*(_DWORD *)(a1 + 464) )
  {
    v4 = v3 < 6u ? 46 : 84;
    if ( v3 >= 6u )
      v4 = v3 < 6u ? 50 : 88;
  }
  v5 = 4 * v4;
  *(_DWORD *)(a1 + 3408) = v5;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v5, 0x6D61444Eu);
  *(_QWORD *)(a1 + 3400) = PoolWithTag;
  if ( PoolWithTag )
  {
    v7 = 128;
    v8 = 45;
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
      v9 = *(_QWORD *)(a1 + 3400) + 180LL;
      v8 = 83;
      *(_OWORD *)v9 = ndisHandledNdis6OnlyGenOids;
      *(_OWORD *)(v9 + 16) = *(_OWORD *)(0x1C0000000LL + 1318960);
      *(_OWORD *)(v9 + 32) = *(_OWORD *)(0x1C0000000LL + 1318976);
      *(_OWORD *)(v9 + 48) = *(_OWORD *)(0x1C0000000LL + 1318992);
      *(_OWORD *)(v9 + 64) = *(_OWORD *)(0x1C0000000LL + 1319008);
      *(_OWORD *)(v9 + 80) = *(_OWORD *)(0x1C0000000LL + 1319024);
      *(_OWORD *)(v9 + 96) = *(_OWORD *)(0x1C0000000LL + 1319040);
      *(_OWORD *)(v9 + 112) = *(_OWORD *)(0x1C0000000LL + 1319056);
      *(_OWORD *)(v9 + 128) = *(_OWORD *)(0x1C0000000LL + 1319072);
      *(_QWORD *)(v9 + 144) = *(_QWORD *)(0x1C0000000LL + 1319088);
    }
    if ( !*(_DWORD *)(a1 + 464) )
    {
      v7 = v8;
      *(_DWORD *)(*(_QWORD *)(a1 + 3400) + 4LL * v8) = (_DWORD)ndisHandledNdis5Ndis6_802_3_Oids;
      if ( *(_BYTE *)(a1 + 32) >= 6u )
        *(_OWORD *)(*(_QWORD *)(a1 + 3400) + 4LL * (v8 + 1)) = *(_OWORD *)&ndisHandledNdis6Only_802_3_Oids;
    }
  }
  else
  {
    v2 = -1073741670;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v7) = 4;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v7,
      11,
      20,
      (struct _GUID *)&WPP_ead076de49c5361e52622447ee4d867c_Traceguids,
      a1,
      v2);
  }
  return v2;
}
