/*
 * XREFs of ?StDmStart@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_DATA_MGR@1@PEAU_STDM_PARAMETERS@@PEAU_RTL_BITMAP@@PEAKK@Z @ 0x1400D6EF0
 * Callers:
 *     ?StStart@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_CREATE_PARAMS@@@Z @ 0x1400D6C10 (-StStart@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_CREATE_PARAMS@@@Z.c)
 * Callees:
 *     ?NpStart@NP_CONTEXT@@SAJPEAU1@PEAU_NP_PARAMETERS@1@@Z @ 0x1400D716C (-NpStart@NP_CONTEXT@@SAJPEAU1@PEAU_NP_PARAMETERS@1@@Z.c)
 *     RtlSetAllBits @ 0x1400D7250 (RtlSetAllBits.c)
 *     SmHpChunkHeapInitialize @ 0x1400D8674 (SmHpChunkHeapInitialize.c)
 *     SmHpChunkHeapCleanup @ 0x14011BE7C (SmHpChunkHeapCleanup.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     ZwQuerySystemInformation @ 0x1401C1310 (ZwQuerySystemInformation.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 */

NTSTATUS __fastcall ST_STORE<SM_TRAITS>::StDmStart(__int64 a1, __int64 a2, int *a3, __int64 a4, __int64 a5, int a6)
{
  int v9; // eax
  __int64 v10; // xmm1_8
  __int64 v11; // rcx
  int v12; // eax
  PVOID PoolWithTag; // rax
  _RTL_BITMAP *v14; // rcx
  PVOID v15; // rdx
  __int64 v16; // rsi
  int v17; // eax
  NTSTATUS result; // eax
  _DWORD v19[2]; // [rsp+20h] [rbp-49h] BYREF
  int v20; // [rsp+28h] [rbp-41h] BYREF
  int v21; // [rsp+2Ch] [rbp-3Dh]
  __int64 (__fastcall *v22)(); // [rsp+30h] [rbp-39h]
  __int64 (__fastcall *v23)(); // [rsp+38h] [rbp-31h]
  __int64 (__fastcall *v24)(); // [rsp+40h] [rbp-29h]
  __int64 (__fastcall *v25)(); // [rsp+48h] [rbp-21h]
  _QWORD SystemInformation[7]; // [rsp+50h] [rbp-19h] BYREF

  memset(SystemInformation, 0, sizeof(SystemInformation));
  v9 = *a3;
  *(_OWORD *)(a2 + 776) = *(_OWORD *)a1;
  *(_OWORD *)(a2 + 792) = *(_OWORD *)(a1 + 16);
  *(_OWORD *)(a2 + 808) = *(_OWORD *)(a1 + 32);
  v10 = *(_QWORD *)(a1 + 48);
  *(_DWORD *)(a2 + 832) = v9;
  *(_QWORD *)(a2 + 824) = v10;
  v11 = *(_QWORD *)(a1 + 4016);
  *(_QWORD *)(a2 + 1920) = a1 + 5736;
  *(_QWORD *)(a2 + 896) = v11;
  *(_QWORD *)(a2 + 1000) = *(_QWORD *)(a1 + 3952);
  *(_QWORD *)(a2 + 1016) = a1 + 4064;
  *(_QWORD *)(a2 + 1784) = *(_QWORD *)(a1 + 4208);
  *(_QWORD *)(a2 + 1912) = a1 + 5744;
  *(_WORD *)(a2 + 992) = *(_WORD *)(a1 + 4032);
  *(_QWORD *)(a2 + 936) = a2 + 24;
  *(_QWORD *)(a2 + 944) = a2 + 88;
  v12 = *(_DWORD *)(a2 + 776);
  *(_QWORD *)(a2 + 928) = v11;
  if ( (v12 & 0x40000) != 0 )
  {
    PoolWithTag = ExAllocatePoolWithTag(
                    NonPagedPoolNx,
                    4 * (((unsigned __int64)*(unsigned int *)(a1 + 12) + 31) >> 5),
                    0x74536D73u);
    if ( !PoolWithTag )
      return -1073741670;
    v14 = (_RTL_BITMAP *)(a2 + 840);
    *(_DWORD *)(a2 + 840) = *(_DWORD *)(a1 + 12);
    *(_QWORD *)(a2 + 848) = PoolWithTag;
    v12 = *(_DWORD *)(a2 + 776);
  }
  else
  {
    v14 = (_RTL_BITMAP *)(a2 + 840);
  }
  if ( (v12 & 0x40000) != 0 )
    RtlSetAllBits(v14);
  v15 = ExAllocatePoolWithTag(
          NonPagedPoolNx,
          4 * (((unsigned __int64)*(unsigned int *)(a1 + 12) + 31) >> 5),
          0x74536D73u);
  if ( !v15 )
    return -1073741670;
  *(_DWORD *)(a2 + 1072) = *(_DWORD *)(a1 + 12);
  *(_QWORD *)(a2 + 1080) = v15;
  RtlSetAllBits((PRTL_BITMAP)(a2 + 1072));
  LODWORD(v16) = 16;
  *(_QWORD *)(a2 + 1032) = *(_QWORD *)(a1 + 56);
  *(_QWORD *)(a2 + 1040) = *(_QWORD *)(a1 + 64);
  *(_QWORD *)(a2 + 1048) = *(_QWORD *)(a1 + 72);
  *(_DWORD *)(a2 + 856) = a6;
  if ( *(_DWORD *)(*(_QWORD *)(a2 + 1016) + 24LL) )
  {
    v19[0] = 16;
    v19[1] = 4;
    SmHpChunkHeapCleanup(a2 + 192);
    SmHpChunkHeapInitialize(a2 + 192, v19);
  }
  v17 = *a3;
  v21 = 0;
  if ( (v17 & 8) != 0 )
  {
    result = ZwQuerySystemInformation(SystemMemoryUsageInformation, SystemInformation, 0x38u, 0LL);
    if ( result < 0 )
      return result;
    if ( SystemInformation[0] >> 21 >= 0x10uLL )
    {
      v16 = SystemInformation[0] >> 21;
      if ( SystemInformation[0] >> 21 > 0xFFFFFFFFuLL )
        LODWORD(v16) = -1;
    }
    v20 = v16;
    v21 = 4;
  }
  else
  {
    v20 = -1;
  }
  v22 = ST_STORE<SM_TRAITS>::StNpEnumBTreeNodes;
  v23 = ST_STORE<SM_TRAITS>::StNpLeafPageOut;
  v24 = ST_STORE<SM_TRAITS>::StNpLeafPageIn;
  v25 = ST_STORE<SM_TRAITS>::StNpLeafDelete;
  result = NP_CONTEXT::NpStart((struct NP_CONTEXT *)(a2 + 1376), (struct NP_CONTEXT::_NP_PARAMETERS *)&v20);
  if ( result >= 0 )
  {
    result = NP_CONTEXT::NpStart((struct NP_CONTEXT *)(a2 + 1512), (struct NP_CONTEXT::_NP_PARAMETERS *)&v20);
    if ( result >= 0 )
    {
      result = NP_CONTEXT::NpStart((struct NP_CONTEXT *)(a2 + 1648), (struct NP_CONTEXT::_NP_PARAMETERS *)&v20);
      if ( result >= 0 )
        return 0;
    }
  }
  return result;
}
