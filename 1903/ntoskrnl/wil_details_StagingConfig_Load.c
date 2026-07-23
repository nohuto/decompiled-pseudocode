/*
 * XREFs of wil_details_StagingConfig_Load @ 0x1402A3CDC
 * Callers:
 *     wil_QueryFeatureState @ 0x1402A37A0 (wil_QueryFeatureState.c)
 * Callees:
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     ZwQueryWnfStateData @ 0x1401C2C70 (ZwQueryWnfStateData.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall wil_details_StagingConfig_Load(__int64 a1, __int64 a2, __int64 a3, void *a4)
{
  int v6; // edi
  __int64 v7; // r13
  char *PoolWithTag; // r15
  char *v9; // rbx
  SIZE_T v10; // r14
  NTSTATUS v11; // eax
  unsigned int v12; // r12d
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // r8
  unsigned __int16 v15; // r9
  __int64 v16; // r10
  ULONG v17; // r9d
  __int64 result; // rax
  char *v19; // rdx
  ULONG BufferSize; // [rsp+30h] [rbp-30h] BYREF
  ULONG ChangeStamp; // [rsp+34h] [rbp-2Ch] BYREF
  ULONG v22[2]; // [rsp+38h] [rbp-28h] BYREF
  WNF_STATE_NAME StateName; // [rsp+40h] [rbp-20h] BYREF
  WNF_STATE_NAME v24; // [rsp+48h] [rbp-18h] BYREF

  *(_QWORD *)v22 = a4;
  memset((void *)(a1 + 8), 0, 0x50uLL);
  v6 = 0;
  *(_QWORD *)a1 = 0LL;
  v7 = 200LL;
  PoolWithTag = 0LL;
  v9 = 0LL;
  StateName = (WNF_STATE_NAME)_WIL_WNF_WIL_MACHINE_FEATURE_STORE;
  v10 = -(__int64)(a4 != 0LL) & 0xC8;
  BufferSize = a4 != 0LL ? 0xC8 : 0;
  v11 = ZwQueryWnfStateData(&StateName, 0LL, 0LL, (PWNF_CHANGE_STAMP)(a1 + 8), a4, &BufferSize);
  v12 = v11;
  if ( v11 )
    goto LABEL_13;
  v9 = *(char **)v22;
  if ( *(_QWORD *)v22 )
    goto LABEL_13;
  do
  {
    if ( v10 < 0xC8 )
      v10 = 200LL;
    v13 = v10;
    v10 = BufferSize;
    if ( v13 >= BufferSize )
      v10 = v13;
    if ( v10 < 0x10 )
      v10 = 16LL;
    if ( PoolWithTag )
      ExFreePoolWithTag(PoolWithTag, 0x4C4957u);
    PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, v10, 0x4C4957u);
    if ( !PoolWithTag )
      return 3221225626LL;
    BufferSize = v10;
    v11 = ZwQueryWnfStateData(&StateName, 0LL, 0LL, (PWNF_CHANGE_STAMP)(a1 + 8), PoolWithTag, &BufferSize);
    v12 = v11;
    v9 = PoolWithTag;
LABEL_13:
    ;
  }
  while ( v11 == -1073741789 );
  if ( v12 || !v9 )
  {
    if ( PoolWithTag )
      ExFreePoolWithTag(PoolWithTag, 0x4C4957u);
    return v12;
  }
  else
  {
    v14 = BufferSize;
    if ( BufferSize > 4 )
      *(_BYTE *)(a1 + 12) = *v9;
    if ( (unsigned int)v14 >= 0x10
      && *(_BYTE *)(a1 + 12) == 2
      && (v15 = *((_WORD *)v9 + 1), v15 >= 0x10u)
      && (v16 = *((unsigned __int16 *)v9 + 2),
          v14 >= v15 + 16 * (unsigned __int64)*((unsigned __int16 *)v9 + 3) + 12 * v16) )
    {
      ChangeStamp = 0;
      v17 = 0;
      if ( (_WORD)v16 )
      {
        v24 = (WNF_STATE_NAME)_WIL_WNF_WIL_MACHINE_FEATURE_STORE_MODIFIED;
        v22[0] = 0;
        ZwQueryWnfStateData(&v24, 0LL, 0LL, &ChangeStamp, 0LL, v22);
        LODWORD(v14) = BufferSize;
        v17 = ChangeStamp;
      }
      *(_QWORD *)(a1 + 24) = v9;
      *(_QWORD *)(a1 + 32) = v9 + 16;
      *(_QWORD *)(a1 + 40) = &v9[12 * *((unsigned __int16 *)v9 + 2) + 16];
      *(_DWORD *)(a1 + 48) = v17 != 0;
      if ( *v9 == 2 && (unsigned __int8)v9[1] < 2u )
      {
        LODWORD(v14) = *((unsigned __int16 *)v9 + 1)
                     + 16 * *((unsigned __int16 *)v9 + 3)
                     + 12 * *((unsigned __int16 *)v9 + 2);
        *(_DWORD *)(a1 + 16) = 1;
      }
    }
    else
    {
      BufferSize = 16;
      *(_QWORD *)v9 = 0LL;
      *((_QWORD *)v9 + 1) = 0LL;
      *((_WORD *)v9 + 1) = 16;
      *v9 = 2;
      v9[1] = 2;
      LODWORD(v14) = BufferSize;
      *(_QWORD *)(a1 + 24) = v9;
      v19 = &v9[*((unsigned __int16 *)v9 + 1)];
      *(_QWORD *)(a1 + 32) = v19;
      *(_QWORD *)(a1 + 40) = &v19[12 * *((unsigned __int16 *)v9 + 2)];
    }
    *(_QWORD *)(a1 + 64) = (unsigned int)v14;
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
