/*
 * XREFs of MiInitializeMdlBatchPages @ 0x140011478
 * Callers:
 *     MiAllocatePagesForMdl @ 0x140011048 (MiAllocatePagesForMdl.c)
 * Callees:
 *     MiPageAttributeBatchChangeNeeded @ 0x1400118DC (MiPageAttributeBatchChangeNeeded.c)
 *     MiPfnZeroingNeeded @ 0x14002BDB0 (MiPfnZeroingNeeded.c)
 *     MiChangePageAttributeBatch @ 0x1400823E0 (MiChangePageAttributeBatch.c)
 *     MiZeroInParallel @ 0x14013C644 (MiZeroInParallel.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 */

void __fastcall MiInitializeMdlBatchPages(__int64 a1, char a2, int a3)
{
  __int64 v4; // rsi
  unsigned int v6; // r12d
  __int64 v7; // rcx
  __int64 v8; // r9
  _BYTE *PoolWithTag; // rdi
  unsigned __int64 v10; // r13
  __int64 *v11; // rax
  __int64 v12; // r14
  __int64 v13; // rdx
  __int64 v14; // rax
  int v15; // r15d
  __int64 v16; // rbx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rax
  _QWORD *v20; // rax
  __int64 v21; // rcx
  int v22; // eax
  __int64 v23; // [rsp+20h] [rbp-49h]
  __int64 v24; // [rsp+28h] [rbp-41h]
  _DWORD *v25; // [rsp+30h] [rbp-39h]
  __int64 v26; // [rsp+38h] [rbp-31h]
  _QWORD v27[4]; // [rsp+40h] [rbp-29h] BYREF
  __int64 v28; // [rsp+60h] [rbp-9h]
  __int64 v29; // [rsp+68h] [rbp-1h]
  _BYTE v30[80]; // [rsp+70h] [rbp+7h] BYREF
  unsigned int v31; // [rsp+D0h] [rbp+67h]
  __int64 v33; // [rsp+E8h] [rbp+7Fh]

  v4 = a3;
  memset(v27, 0, sizeof(v27));
  v6 = dword_14043B14C;
  v7 = 0LL;
  v23 = 0LL;
  v8 = 0LL;
  v26 = 0LL;
  PoolWithTag = 0LL;
  v10 = (unsigned __int64)*(unsigned int *)(a1 + 40) >> 12;
  v11 = (__int64 *)(a1 + 48);
  v12 = 0LL;
  v25 = (_DWORD *)(a1 + 48);
  v24 = 0LL;
  v33 = 0LL;
  if ( !v10 )
    return;
  LODWORD(v13) = a2 & 1;
  v31 = v13;
  do
  {
    v14 = *v11;
    v15 = 0;
    v29 = v8;
    v28 = v12;
    v16 = 48 * v14 - 0x58000000000LL;
    if ( !(_DWORD)v13 )
    {
      if ( (unsigned int)MiPfnZeroingNeeded(v16, (unsigned int)v4) )
      {
        if ( !PoolWithTag )
        {
          PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 24LL * v6, 0x6C646D4Du);
          if ( !PoolWithTag )
          {
            v6 = 1;
            PoolWithTag = v30;
          }
          if ( v6 )
          {
            v20 = PoolWithTag + 8;
            v21 = v6;
            do
            {
              v20[1] = 0LL;
              *v20 = 0LL;
              v20 += 3;
              --v21;
            }
            while ( v21 );
          }
        }
        ++v26;
        if ( v6 == 1 )
          v17 = 0LL;
        else
          v17 = dword_14043B148 & *v25 | (*(_QWORD *)(v16 + 40) >> 58 << byte_14043B109) | (((unsigned int)(*(_QWORD *)(v16 + 40) >> 36) & 3) << byte_14043B10A);
        v18 = 3 * v17;
        v15 = 1;
        *(_QWORD *)v16 = *(_QWORD *)&PoolWithTag[24 * v17 + 16];
        ++*(_QWORD *)&PoolWithTag[8 * v18 + 8];
        *(_QWORD *)&PoolWithTag[8 * v18 + 16] = v16;
        goto LABEL_19;
      }
      v7 = v33;
    }
    if ( *(unsigned __int8 *)(v16 + 34) >> 6 == (_DWORD)v4 )
      goto LABEL_5;
LABEL_19:
    if ( (_DWORD)v4 == 3 && v15 == 1 )
    {
      if ( (unsigned int)MiPageAttributeBatchChangeNeeded(v16, 1LL) == 1 )
      {
        v8 = v24;
        v12 = v16;
        v19 = v28;
      }
      else
      {
        v19 = v29;
        v8 = v16;
        v24 = v16;
      }
      *(_QWORD *)(v16 + 16) = v19;
      goto LABEL_30;
    }
    if ( (unsigned int)MiPageAttributeBatchChangeNeeded(v16, (unsigned int)v4) != 1 )
    {
      v8 = v24;
LABEL_30:
      v7 = v33;
      goto LABEL_5;
    }
    if ( !v15 || dword_14043B1D8[4 * ((unsigned __int64)*(unsigned __int8 *)(v16 + 34) >> 6) + v4] == (_DWORD)v4 )
    {
      v7 = v16;
      v8 = v24;
      *(_QWORD *)(v16 + 16) = v33;
      v33 = v16;
LABEL_5:
      v16 = v23;
      goto LABEL_6;
    }
    v7 = v33;
    v8 = v24;
    *(_QWORD *)(v16 + 16) = v23;
    v23 = v16;
LABEL_6:
    v13 = v31;
    v11 = (__int64 *)(v25 + 2);
    v25 += 2;
    --v10;
  }
  while ( v10 );
  if ( v7 )
    MiChangePageAttributeBatch(v7, (unsigned int)v4, 0LL);
  if ( v12 )
    MiChangePageAttributeBatch(v12, 1LL, -1LL);
  if ( v26 )
  {
    v22 = LODWORD(v27[1]) | 1;
    LODWORD(v27[1]) |= 1u;
    if ( (a2 & 8) != 0 )
      LODWORD(v27[1]) = v22 | 2;
    LODWORD(v27[3]) = -1;
    v27[0] = PoolWithTag;
    LODWORD(v27[2]) = v6;
    HIDWORD(v27[1]) = v4;
    MiZeroInParallel(v27, v13);
    if ( PoolWithTag != v30 )
      ExFreePoolWithTag(PoolWithTag, 0);
    if ( v12 )
      MiChangePageAttributeBatch(v12, 3LL, 0LL);
    if ( v24 )
      MiChangePageAttributeBatch(v24, 3LL, 0LL);
    if ( v16 )
      MiChangePageAttributeBatch(v16, (unsigned int)v4, 0LL);
  }
  else if ( PoolWithTag )
  {
    if ( PoolWithTag != v30 )
      ExFreePoolWithTag(PoolWithTag, 0);
  }
}
