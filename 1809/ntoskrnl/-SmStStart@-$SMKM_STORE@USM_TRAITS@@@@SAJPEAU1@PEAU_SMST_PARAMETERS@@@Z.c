/*
 * XREFs of ?SmStStart@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_SMST_PARAMETERS@@@Z @ 0x1400E36E8
 * Callers:
 *     SmProcessCreateRequest @ 0x14066BFB4 (SmProcessCreateRequest.c)
 * Callees:
 *     ?StStart@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_CREATE_PARAMS@@@Z @ 0x1400E2C20 (-StStart@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_CREATE_PARAMS@@@Z.c)
 *     SmKmStoreHelperStart @ 0x1400E3AF4 (SmKmStoreHelperStart.c)
 *     ?SmStWorkerThreadStartThread@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAXP6AX1@ZPEAPEAU_ETHREAD@@@Z @ 0x1400E3B80 (-SmStWorkerThreadStartThread@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAXP6AX1@ZPEAPEAU_ETHREAD@@@Z.c)
 *     SmAcquireReleaseCharges @ 0x1400E3D84 (SmAcquireReleaseCharges.c)
 *     SmFpPreAllocate @ 0x14018E748 (SmFpPreAllocate.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     SmKmFileInfoDuplicate @ 0x1408ADC48 (SmKmFileInfoDuplicate.c)
 *     SmKmFileInfoInit @ 0x1408ADE88 (SmKmFileInfoInit.c)
 */

int __fastcall SMKM_STORE<SM_TRAITS>::SmStStart(__int64 a1, int **a2)
{
  int *v2; // r15
  int v5; // ecx
  int v6; // edx
  int v7; // eax
  int v8; // eax
  char v9; // cl
  char v10; // dl
  int result; // eax
  PVOID PoolWithTag; // rax
  int v13; // eax
  int v14; // edi
  SIZE_T v15; // rsi
  PVOID v16; // rax
  bool v17; // zf
  int v18; // eax
  __int128 v19; // xmm0
  int v20; // [rsp+20h] [rbp-60h]
  _OWORD v21[4]; // [rsp+30h] [rbp-50h] BYREF

  v2 = *a2;
  v5 = **a2;
  if ( (unsigned __int8)v5 >= 2u )
    return -1073741811;
  if ( v2[5] )
    return -1073741811;
  if ( (unsigned int)(v2[3] - 1) > 0x3FFFF )
    return -1073741811;
  v6 = v2[2];
  if ( !v6 || ((v6 - 1) & v6) != 0 )
    return -1073741811;
  if ( (unsigned __int8)v5 == 1 && (v5 & 0x100) != 0 )
    return -1073741637;
  v7 = v5 & 0xA0000;
  if ( (v5 & 0x40000) == 0 )
  {
    if ( v7 )
      return -1073741811;
  }
  if ( v7 == 655360 )
    return -1073741811;
  *(_QWORD *)(a1 + 6704) = a2[4];
  v8 = *((_DWORD *)a2 + 14);
  if ( !v8 )
    v8 = 7;
  *(_DWORD *)(a1 + 6712) = v8;
  *(_BYTE *)(a1 + 6020) = *(_BYTE *)v2;
  *(_BYTE *)(a1 + 6021) ^= (*(_BYTE *)(a1 + 6021) ^ (4 * ((unsigned int)*v2 >> 18))) & 4;
  v9 = *(_BYTE *)(a1 + 6021) ^ (*(_BYTE *)(a1 + 6021) ^ (8 * ((unsigned int)*v2 >> 17))) & 8;
  *(_BYTE *)(a1 + 6021) = v9;
  v10 = v9 ^ (v9 ^ (32 * ((unsigned int)*v2 >> 19))) & 0x20;
  *(_BYTE *)(a1 + 6021) = v10;
  *(_DWORD *)(a1 + 6208) = v2[2];
  if ( *(_BYTE *)v2 )
  {
    SmKmFileInfoInit(a1 + 6216);
    *(_DWORD *)(a1 + 6212) = v2[3];
    v14 = v2[6];
    result = SmKmFileInfoDuplicate(a1 + 6216, *((_QWORD *)v2 + 6));
LABEL_39:
    if ( result < 0 )
      return result;
    goto LABEL_22;
  }
  if ( (v10 & 4) != 0 )
  {
    memset((void *)(a1 + 6232), 0, 0x78uLL);
    *(_WORD *)(a1 + 6240) = 0;
    *(_DWORD *)(a1 + 6244) = 0;
    *(_BYTE *)(a1 + 6242) = 6;
    *(_QWORD *)(a1 + 6256) = a1 + 6248;
    *(_QWORD *)(a1 + 6248) = a1 + 6248;
    *(_WORD *)(a1 + 6264) = 0;
    *(_DWORD *)(a1 + 6268) = 0;
    *(_BYTE *)(a1 + 6266) = 6;
    *(_QWORD *)(a1 + 6280) = a1 + 6272;
    *(_QWORD *)(a1 + 6272) = a1 + 6272;
    memset((void *)(a1 + 6352), 0, 0x78uLL);
    *(_BYTE *)(a1 + 6362) = 6;
    *(_WORD *)(a1 + 6360) = 0;
    *(_DWORD *)(a1 + 6364) = 0;
    *(_QWORD *)(a1 + 6376) = a1 + 6368;
    *(_QWORD *)(a1 + 6368) = a1 + 6368;
    *(_WORD *)(a1 + 6384) = 0;
    *(_DWORD *)(a1 + 6388) = 0;
    *(_BYTE *)(a1 + 6386) = 6;
    *(_QWORD *)(a1 + 6400) = a1 + 6392;
    *(_QWORD *)(a1 + 6392) = a1 + 6392;
    memset((void *)(a1 + 6472), 0, 0x50uLL);
    *(_BYTE *)(a1 + 6482) = 6;
    *(_WORD *)(a1 + 6480) = 0;
    *(_DWORD *)(a1 + 6484) = 0;
    *(_QWORD *)(a1 + 6496) = a1 + 6488;
    *(_QWORD *)(a1 + 6488) = a1 + 6488;
    *(_WORD *)(a1 + 6504) = 0;
    *(_DWORD *)(a1 + 6508) = 0;
    *(_BYTE *)(a1 + 6506) = 6;
    *(_QWORD *)(a1 + 6520) = a1 + 6512;
    *(_QWORD *)(a1 + 6512) = a1 + 6512;
    *(_QWORD *)(a1 + 6536) = a1 + 6528;
    *(_QWORD *)(a1 + 6528) = 0LL;
    *(_QWORD *)(a1 + 6544) = 0LL;
    *(_QWORD *)(a1 + 6568) = a2[5];
    result = SmKmStoreHelperStart(a1 + 6232, a2[6]);
    if ( result < 0 )
      return result;
    result = SmKmStoreHelperStart(a1 + 6352, a2[6]);
    if ( result < 0 )
      return result;
    if ( (*(_BYTE *)(a1 + 6021) & 8) != 0 )
      *(_QWORD *)(a1 + 6336) = &unk_14055C3F8;
    *(_QWORD *)(a1 + 6464) = &dword_14055C410;
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x50uLL, 0x6C526D73u);
    *(_QWORD *)(a1 + 6224) = PoolWithTag;
    if ( !PoolWithTag )
      return -1073741670;
    memset(PoolWithTag, 0, 0x50uLL);
    if ( !(unsigned int)SmAcquireReleaseCharges(*(unsigned int *)(a1 + 6208), 1LL, 0LL) )
      return -1073741670;
    *(_BYTE *)(a1 + 6021) |= 0x10u;
  }
  v13 = v2[3];
  *(_DWORD *)(a1 + 6212) = v13;
  v14 = 0;
  v15 = (unsigned int)(8 * v13);
  v16 = ExAllocatePoolWithTag(NonPagedPoolNx, v15, 0x67526D73u);
  if ( !v16 )
    return -1073741670;
  *(_QWORD *)(a1 + 6216) = v16;
  memset(v16, 0, (unsigned int)v15);
  if ( (*(_BYTE *)(a1 + 6021) & 4) == 0 )
  {
    v20 = ((*(_DWORD *)(a1 + 6208) >> 8) ^ 0x100005) & 0xFFFF0 ^ 0x100005;
    result = SmFpPreAllocate((PEX_SPIN_LOCK)(a1 + 6592));
    goto LABEL_39;
  }
LABEL_22:
  memset(v21, 0, sizeof(v21));
  v17 = *(_BYTE *)v2 == 0;
  v18 = *(_DWORD *)(a1 + 6212);
  v19 = *(_OWORD *)v2;
  LODWORD(v21[1]) = v14;
  *((_QWORD *)&v21[1] + 1) = a1;
  v21[0] = v19;
  HIDWORD(v21[0]) = v18;
  *(_QWORD *)&v21[3] = a2[3];
  if ( !v17 )
    *((_QWORD *)&v21[3] + 1) = *((_QWORD *)v2 + 8);
  *(_QWORD *)&v21[2] = a2[1];
  DWORD2(v21[2]) = *((_DWORD *)a2 + 4);
  LODWORD(v21[0]) = v21[0] & 0xFFFFF7FF | (DWORD2(v21[2]) == 0 ? 0x800 : 0);
  result = ST_STORE<SM_TRAITS>::StStart(a1, (__int64)v21);
  if ( result >= 0 )
  {
    if ( (*(_BYTE *)(a1 + 6021) & 4) == 0 )
      goto LABEL_29;
    result = SMKM_STORE<SM_TRAITS>::SmStWorkerThreadStartThread(
               a1,
               a2[6],
               SMKM_STORE<SM_TRAITS>::SmStReadThread,
               a1 + 6472,
               v20);
    if ( result >= 0 )
      result = 0;
    if ( result >= 0 )
    {
LABEL_29:
      result = SMKM_STORE<SM_TRAITS>::SmStWorkerThreadStartThread(
                 a1,
                 a2[6],
                 SMKM_STORE<SM_TRAITS>::SmStWorkerThread,
                 a1 + 6200,
                 v20);
      if ( result >= 0 )
        return 0;
    }
  }
  return result;
}
