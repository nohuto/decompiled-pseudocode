/*
 * XREFs of ?StStart@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_CREATE_PARAMS@@@Z @ 0x1400E2C20
 * Callers:
 *     ?SmStStart@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_SMST_PARAMETERS@@@Z @ 0x1400E36E8 (-SmStStart@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_SMST_PARAMETERS@@@Z.c)
 * Callees:
 *     RtlNumberOfSetBits @ 0x14000F440 (RtlNumberOfSetBits.c)
 *     RtlGetCompressionWorkSpaceSize @ 0x1400E2AA0 (RtlGetCompressionWorkSpaceSize.c)
 *     ?StDmStart@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_DATA_MGR@1@PEAU_STDM_PARAMETERS@@PEAU_RTL_BITMAP@@PEAKK@Z @ 0x1400E2F00 (-StDmStart@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_DATA_MGR@1@PEAU_STDM_PARAMETERS@@PEAU_RTL_B.c)
 *     ?StartHelper@StEtaHelper@@SAJPEAU_ST_ETA_CONTEXT@@K@Z @ 0x1400E31F8 (-StartHelper@StEtaHelper@@SAJPEAU_ST_ETA_CONTEXT@@K@Z.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     SmCrEncStart @ 0x1408AF958 (SmCrEncStart.c)
 */

int __fastcall ST_STORE<SM_TRAITS>::StStart(__int64 a1, __int64 a2)
{
  unsigned int v4; // edx
  int v5; // r9d
  unsigned int v6; // ecx
  bool v7; // zf
  int v8; // r8d
  int v9; // edx
  SIZE_T v10; // rsi
  PVOID PoolWithTag; // rax
  unsigned int v12; // eax
  USHORT v13; // cx
  int result; // eax
  ULONG v15; // ecx
  ULONG v16; // eax
  bool v17; // cc
  PVOID v18; // rax
  __int64 v19; // rsi
  unsigned int v20; // eax
  unsigned int v21; // edx
  PVOID v22; // rax
  int v23; // r9d
  unsigned int v24; // ecx
  int v25; // esi
  int v26; // edx
  int v27; // eax
  int v28; // eax
  int v29; // r9d
  unsigned int v30; // r8d
  _DWORD *v31; // rax
  unsigned int v32; // esi
  PVOID v33; // rax
  unsigned int v34; // esi
  PVOID v35; // rax
  unsigned int v36; // [rsp+78h] [rbp+48h] BYREF
  ULONG CompressBufferWorkSpaceSize; // [rsp+80h] [rbp+50h] BYREF
  ULONG CompressFragmentWorkSpaceSize; // [rsp+88h] [rbp+58h] BYREF

  v4 = *(_DWORD *)(a2 + 8);
  if ( !v4 || ((v4 - 1) & v4) != 0 || v4 - 4096 > 0x1F000 )
    return -1073741453;
  v5 = *(_DWORD *)(a2 + 12);
  if ( (unsigned int)(v5 - 1) > 0x3FFFF )
    return -1073741811;
  v6 = *(_DWORD *)a2;
  if ( (*(_DWORD *)a2 & 0x100) != 0 )
    return -1073741811;
  if ( (unsigned __int8)v6 == 1 )
  {
    v30 = *(_DWORD *)(a2 + 16);
    if ( !v30 )
      return -1073741811;
    if ( ((v30 - 1) & v30) != 0 )
      return -1073741811;
    if ( v30 > v4 )
      return -1073741811;
    v31 = *(_DWORD **)(a2 + 56);
    if ( !v31 )
      return -1073741811;
    v7 = *v31 == v5;
LABEL_10:
    if ( !v7 )
      return -1073741811;
    goto LABEL_11;
  }
  if ( !(_BYTE)v6 )
  {
    if ( *(_DWORD *)(a2 + 16) )
      return -1073741811;
    v7 = *(_QWORD *)(a2 + 56) == 0LL;
    goto LABEL_10;
  }
  if ( (unsigned __int8)v6 >= 2u )
    return -1073741811;
LABEL_11:
  if ( v6 >= 0x100000
    || (*(_DWORD *)a2 & 0x600) == 0x600
    || (v6 & 0x10400) == 0x10400
    || (*(_QWORD *)(a2 + 32) == 0LL) != (*(_DWORD *)(a2 + 40) == 0) )
  {
    return -1073741811;
  }
  v8 = 0;
  if ( v4 > 0x10 )
  {
    do
      ++v8;
    while ( 16 << v8 < v4 );
  }
  *(_DWORD *)(a1 + 36) = v8;
  v9 = 1 << v8;
  *(_DWORD *)(a1 + 40) = 1 << v8;
  *(_DWORD *)(a1 + 32) = (1 << v8) - 1;
  if ( *(_DWORD *)(a2 + 8) == 0x20000 )
    v9 = (1 << v8) - 1;
  *(_DWORD *)(a1 + 40) = v9;
  if ( *(_BYTE *)a2 )
    *(_DWORD *)(a1 + 48) = *(_DWORD *)(a2 + 40) != 0 ? 16 : 4;
  *(_DWORD *)(a1 + 44) = (unsigned int)(*(_DWORD *)(a1 + 48) + 4111) >> 4;
  if ( *(_DWORD *)(a2 + 12) > (unsigned int)(1 << (32 - v8)) )
    return -1073741306;
  *(_OWORD *)a1 = *(_OWORD *)a2;
  *(_OWORD *)(a1 + 16) = *(_OWORD *)(a2 + 16);
  v10 = (unsigned int)(2 * *(_DWORD *)(a2 + 12));
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v10, 0x74536D73u);
  *(_QWORD *)(a1 + 56) = PoolWithTag;
  if ( !PoolWithTag )
    return -1073741670;
  memset(PoolWithTag, 0, (unsigned int)v10);
  v12 = *(_DWORD *)a2;
  if ( (unsigned __int8)*(_DWORD *)a2 == 1 )
  {
    v32 = *(_DWORD *)(a2 + 12);
    v33 = ExAllocatePoolWithTag(NonPagedPoolNx, v32, 0x74536D73u);
    *(_QWORD *)(a1 + 64) = v33;
    if ( !v33 )
      return -1073741670;
    memset(v33, 0, v32);
    v34 = *(_DWORD *)(a2 + 12);
    v35 = ExAllocatePoolWithTag(NonPagedPoolNx, v34, 0x74536D73u);
    *(_QWORD *)(a1 + 72) = v35;
    if ( !v35 )
      return -1073741670;
    memset(v35, 0, v34);
    v12 = *(_DWORD *)a2;
  }
  v13 = 4 - ((v12 & 0x10000) != 0);
  *(_WORD *)(a1 + 4032) = v13;
  result = RtlGetCompressionWorkSpaceSize(v13, &CompressBufferWorkSpaceSize, &CompressFragmentWorkSpaceSize);
  if ( result < 0 )
    return result;
  v15 = CompressBufferWorkSpaceSize;
  v16 = CompressFragmentWorkSpaceSize;
  v17 = CompressBufferWorkSpaceSize <= CompressFragmentWorkSpaceSize;
  *(_DWORD *)(a1 + 4028) = CompressBufferWorkSpaceSize;
  if ( v17 )
    v15 = v16;
  *(_DWORD *)(a1 + 4024) = v16;
  CompressBufferWorkSpaceSize = v15;
  if ( v15 )
  {
    v18 = ExAllocatePoolWithTag(NonPagedPoolNx, v15, 0x74536D73u);
    *(_QWORD *)(a1 + 4016) = v18;
    if ( !v18 )
      return -1073741670;
  }
  v19 = *(_QWORD *)(a2 + 48);
  if ( !v19 )
  {
    v19 = a1 + 3960;
    result = StEtaHelper::StartHelper((struct _ST_ETA_CONTEXT *)(a1 + 3960), 0);
    if ( result < 0 )
      return result;
  }
  *(_QWORD *)(a1 + 3952) = v19;
  v20 = *(_DWORD *)a2;
  v21 = *(_DWORD *)(a2 + 40);
  if ( (unsigned __int8)*(_DWORD *)a2 )
  {
    if ( !v21 )
      goto LABEL_61;
    result = SmCrEncStart(a1 + 4064, *(_QWORD *)(a2 + 32), v21);
    if ( result < 0 )
      return result;
    if ( (-*(_DWORD *)(a1 + 4072) & (*(_DWORD *)(a1 + 4072) + 15)) == 0x10 )
    {
LABEL_61:
      v20 = *(_DWORD *)a2;
      goto LABEL_33;
    }
    return -1073741453;
  }
  if ( v21 )
    return -1073741066;
LABEL_33:
  v22 = ExAllocatePoolWithTag(NonPagedPoolNx, (-(__int64)((v20 & 0x8000) != 0) & 0x1000) + 4096, 0x74536D73u);
  *(_QWORD *)(a1 + 4208) = v22;
  if ( !v22 )
    return -1073741670;
  v24 = *(_DWORD *)a2;
  if ( (unsigned __int8)*(_DWORD *)a2 == 1 )
  {
    v25 = 1;
    if ( RtlNumberOfSetBits(*(PRTL_BITMAP *)(a2 + 56)) > 1 )
    {
      v24 = *(_DWORD *)a2;
      goto LABEL_36;
    }
    return -1073741811;
  }
  v25 = 0;
LABEL_36:
  if ( !v25 || (v24 & 0x4000) != 0 )
    v26 = 0;
  else
    v26 = 8;
  v27 = v26 | (v24 >> 8) & 1;
  if ( (_BYTE)v24 )
    goto LABEL_41;
  v28 = v27 | 0x40;
  v36 = v28;
  if ( (v24 & 0x40000) != 0 )
  {
    v27 = v28 | 0x60;
LABEL_41:
    v36 = v27;
  }
  result = ST_STORE<SM_TRAITS>::StDmStart(a1, (int)a1 + 80, (unsigned int)&v36, v23);
  if ( result >= 0 )
  {
    if ( !v25 )
      return 0;
    v36 = v36 & 0xFFFFFFE0 | 0x16;
    result = ST_STORE<SM_TRAITS>::StDmStart(a1, (int)a1 + 2016, (unsigned int)&v36, v29);
    if ( result >= 0 )
      return 0;
  }
  return result;
}
