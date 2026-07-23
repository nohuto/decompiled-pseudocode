/*
 * XREFs of ?StDmStart@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_DATA_MGR@1@PEAU_STDM_PARAMETERS@@PEAU_RTL_BITMAP@@PEAKK@Z @ 0x1400E2F00
 * Callers:
 *     ?StStart@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_CREATE_PARAMS@@@Z @ 0x1400E2C20 (-StStart@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_CREATE_PARAMS@@@Z.c)
 * Callees:
 *     RtlSetAllBits @ 0x14002BDF0 (RtlSetAllBits.c)
 *     ?NpStart@NP_CONTEXT@@SAJPEAU1@PEAU_NP_PARAMETERS@1@@Z @ 0x1400E3178 (-NpStart@NP_CONTEXT@@SAJPEAU1@PEAU_NP_PARAMETERS@1@@Z.c)
 *     SmHpChunkHeapInitialize @ 0x1400E49AC (SmHpChunkHeapInitialize.c)
 *     SmHpChunkHeapCleanup @ 0x14011E01C (SmHpChunkHeapCleanup.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     ZwQuerySystemInformation @ 0x1401B89B0 (ZwQuerySystemInformation.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 */

NTSTATUS __fastcall ST_STORE<SM_TRAITS>::StDmStart(__int64 a1, __int64 a2, int *a3, __int64 a4, __int64 a5, int a6)
{
  int v6; // eax
  __int64 v10; // xmm1_8
  __int64 v11; // rax
  __int64 v12; // rcx
  int v13; // eax
  PVOID PoolWithTag; // rax
  _RTL_BITMAP *v15; // rcx
  PVOID v16; // rdx
  __int64 v17; // rsi
  NTSTATUS result; // eax
  _QWORD v19[5]; // [rsp+28h] [rbp-41h] BYREF
  _QWORD SystemInformation[7]; // [rsp+50h] [rbp-19h] BYREF

  v6 = *a3;
  *(_OWORD *)(a2 + 776) = *(_OWORD *)a1;
  *(_OWORD *)(a2 + 792) = *(_OWORD *)(a1 + 16);
  *(_OWORD *)(a2 + 808) = *(_OWORD *)(a1 + 32);
  v10 = *(_QWORD *)(a1 + 48);
  *(_DWORD *)(a2 + 832) = v6;
  v11 = a1 + 5736;
  *(_QWORD *)(a2 + 824) = v10;
  v12 = *(_QWORD *)(a1 + 4016);
  *(_QWORD *)(a2 + 1920) = v11;
  *(_QWORD *)(a2 + 896) = v12;
  *(_QWORD *)(a2 + 1000) = *(_QWORD *)(a1 + 3952);
  *(_QWORD *)(a2 + 1016) = a1 + 4064;
  *(_QWORD *)(a2 + 1784) = *(_QWORD *)(a1 + 4208);
  *(_QWORD *)(a2 + 1912) = a1 + 5744;
  *(_WORD *)(a2 + 992) = *(_WORD *)(a1 + 4032);
  *(_QWORD *)(a2 + 936) = a2 + 24;
  *(_QWORD *)(a2 + 944) = a2 + 88;
  v13 = *(_DWORD *)(a2 + 776);
  *(_QWORD *)(a2 + 928) = v12;
  if ( (v13 & 0x40000) != 0 )
  {
    PoolWithTag = ExAllocatePoolWithTag(
                    NonPagedPoolNx,
                    4 * (((unsigned __int64)*(unsigned int *)(a1 + 12) + 31) >> 5),
                    0x74536D73u);
    if ( !PoolWithTag )
      return -1073741670;
    v15 = (_RTL_BITMAP *)(a2 + 840);
    *(_DWORD *)(a2 + 840) = *(_DWORD *)(a1 + 12);
    *(_QWORD *)(a2 + 848) = PoolWithTag;
    v13 = *(_DWORD *)(a2 + 776);
  }
  else
  {
    v15 = (_RTL_BITMAP *)(a2 + 840);
  }
  if ( (v13 & 0x40000) != 0 )
    RtlSetAllBits(v15);
  v16 = ExAllocatePoolWithTag(
          NonPagedPoolNx,
          4 * (((unsigned __int64)*(unsigned int *)(a1 + 12) + 31) >> 5),
          0x74536D73u);
  if ( !v16 )
    return -1073741670;
  *(_DWORD *)(a2 + 1072) = *(_DWORD *)(a1 + 12);
  *(_QWORD *)(a2 + 1080) = v16;
  RtlSetAllBits((PRTL_BITMAP)(a2 + 1072));
  LODWORD(v17) = 16;
  *(_QWORD *)(a2 + 1032) = *(_QWORD *)(a1 + 56);
  *(_QWORD *)(a2 + 1040) = *(_QWORD *)(a1 + 64);
  *(_QWORD *)(a2 + 1048) = *(_QWORD *)(a1 + 72);
  *(_DWORD *)(a2 + 856) = a6;
  if ( *(_DWORD *)(*(_QWORD *)(a2 + 1016) + 24LL) )
  {
    SmHpChunkHeapCleanup(a2 + 192);
    SmHpChunkHeapInitialize((void *)(a2 + 192));
  }
  memset(v19, 0, sizeof(v19));
  if ( (*a3 & 8) != 0 )
  {
    result = ZwQuerySystemInformation(SystemMemoryUsageInformation, SystemInformation, 0x38u, 0LL);
    if ( result < 0 )
      return result;
    if ( SystemInformation[0] >> 21 >= 0x10uLL )
    {
      v17 = SystemInformation[0] >> 21;
      if ( SystemInformation[0] >> 21 > 0xFFFFFFFFuLL )
        LODWORD(v17) = -1;
    }
    v19[0] = (unsigned int)v17 | 0x400000000LL;
  }
  else
  {
    LODWORD(v19[0]) = -1;
  }
  v19[1] = ST_STORE<SM_TRAITS>::StNpEnumBTreeNodes;
  v19[2] = ST_STORE<SM_TRAITS>::StNpLeafPageOut;
  v19[3] = ST_STORE<SM_TRAITS>::StNpLeafPageIn;
  v19[4] = ST_STORE<SM_TRAITS>::StNpLeafDelete;
  result = NP_CONTEXT::NpStart((struct NP_CONTEXT *)(a2 + 1376), (struct NP_CONTEXT::_NP_PARAMETERS *)v19);
  if ( result >= 0 )
  {
    result = NP_CONTEXT::NpStart((struct NP_CONTEXT *)(a2 + 1512), (struct NP_CONTEXT::_NP_PARAMETERS *)v19);
    if ( result >= 0 )
    {
      result = NP_CONTEXT::NpStart((struct NP_CONTEXT *)(a2 + 1648), (struct NP_CONTEXT::_NP_PARAMETERS *)v19);
      if ( result >= 0 )
        return 0;
    }
  }
  return result;
}
