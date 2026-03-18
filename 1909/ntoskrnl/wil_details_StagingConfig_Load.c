/*
 * XREFs of wil_details_StagingConfig_Load @ 0x1402A3A3C
 * Callers:
 *     wil_QueryFeatureState @ 0x1402A3500 (wil_QueryFeatureState.c)
 * Callees:
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     ZwQueryWnfStateData @ 0x1401C37F0 (ZwQueryWnfStateData.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall wil_details_StagingConfig_Load(__int64 a1, __int64 a2, __int64 a3, char *a4)
{
  int v6; // edi
  __int64 v7; // r13
  char *PoolWithTag; // r15
  char *v9; // rbx
  SIZE_T v10; // r14
  unsigned int WnfStateData; // eax
  unsigned int v12; // r12d
  unsigned __int64 v13; // rax
  unsigned int v14; // r8d
  unsigned __int16 v15; // r9
  __int64 v16; // r10
  __int64 result; // rax
  char *v18; // rdx
  unsigned int v19; // [rsp+30h] [rbp-30h]
  __int64 v21; // [rsp+40h] [rbp-20h] BYREF
  __int64 v22; // [rsp+48h] [rbp-18h] BYREF

  memset((void *)(a1 + 8), 0, 0x50uLL);
  v6 = 0;
  *(_QWORD *)a1 = 0LL;
  v7 = 200LL;
  PoolWithTag = 0LL;
  v9 = 0LL;
  v21 = _WIL_WNF_WIL_MACHINE_FEATURE_STORE;
  v10 = -(__int64)(a4 != 0LL) & 0xC8;
  v19 = a4 != 0LL ? 0xC8 : 0;
  WnfStateData = ZwQueryWnfStateData((__int64)&v21, 0LL, 0LL);
  v12 = WnfStateData;
  if ( WnfStateData )
    goto LABEL_13;
  v9 = a4;
  if ( a4 )
    goto LABEL_13;
  do
  {
    if ( v10 < 0xC8 )
      v10 = 200LL;
    v13 = v10;
    v10 = v19;
    if ( v13 >= v19 )
      v10 = v13;
    if ( v10 < 0x10 )
      v10 = 16LL;
    if ( PoolWithTag )
      ExFreePoolWithTag(PoolWithTag, 0x4C4957u);
    PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, v10, 0x4C4957u);
    if ( !PoolWithTag )
      return 3221225626LL;
    v19 = v10;
    WnfStateData = ZwQueryWnfStateData((__int64)&v21, 0LL, 0LL);
    v12 = WnfStateData;
    v9 = PoolWithTag;
LABEL_13:
    ;
  }
  while ( WnfStateData == -1073741789 );
  if ( v12 || !v9 )
  {
    if ( PoolWithTag )
      ExFreePoolWithTag(PoolWithTag, 0x4C4957u);
    return v12;
  }
  else
  {
    v14 = v19;
    if ( v19 > 4 )
      *(_BYTE *)(a1 + 12) = *v9;
    if ( v19 >= 0x10
      && *(_BYTE *)(a1 + 12) == 2
      && (v15 = *((_WORD *)v9 + 1), v15 >= 0x10u)
      && (v16 = *((unsigned __int16 *)v9 + 2),
          v19 >= v15 + 16 * (unsigned __int64)*((unsigned __int16 *)v9 + 3) + 12 * v16) )
    {
      if ( (_WORD)v16 )
      {
        v22 = _WIL_WNF_WIL_MACHINE_FEATURE_STORE_MODIFIED;
        ZwQueryWnfStateData((__int64)&v22, 0LL, 0LL);
        v14 = v19;
      }
      *(_QWORD *)(a1 + 24) = v9;
      *(_QWORD *)(a1 + 32) = v9 + 16;
      *(_QWORD *)(a1 + 40) = &v9[12 * *((unsigned __int16 *)v9 + 2) + 16];
      *(_DWORD *)(a1 + 48) = 0;
      if ( *v9 == 2 && (unsigned __int8)v9[1] < 2u )
      {
        v14 = *((unsigned __int16 *)v9 + 1) + 16 * *((unsigned __int16 *)v9 + 3) + 12 * *((unsigned __int16 *)v9 + 2);
        *(_DWORD *)(a1 + 16) = 1;
      }
    }
    else
    {
      *(_QWORD *)v9 = 0LL;
      *((_QWORD *)v9 + 1) = 0LL;
      *((_WORD *)v9 + 1) = 16;
      *v9 = 2;
      v9[1] = 2;
      v14 = 16;
      *(_QWORD *)(a1 + 24) = v9;
      v18 = &v9[*((unsigned __int16 *)v9 + 1)];
      *(_QWORD *)(a1 + 32) = v18;
      *(_QWORD *)(a1 + 40) = &v18[12 * *((unsigned __int16 *)v9 + 2)];
    }
    *(_QWORD *)(a1 + 64) = v14;
    if ( PoolWithTag )
      v7 = v10;
    *(_QWORD *)(a1 + 56) = v9;
    *(_QWORD *)(a1 + 72) = v7;
    LOBYTE(v6) = v9 == PoolWithTag;
    result = 0LL;
    *(_DWORD *)(a1 + 80) = v6;
  }
  return result;
}
