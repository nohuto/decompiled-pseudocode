/*
 * XREFs of MiInitializeMdlBatchPages @ 0x1400C3614
 * Callers:
 *     MiAllocatePagesForMdl @ 0x1400DCB14 (MiAllocatePagesForMdl.c)
 * Callees:
 *     MiPfnZeroingNeeded @ 0x14009735C (MiPfnZeroingNeeded.c)
 *     MiChangePageAttributeBatch @ 0x140098620 (MiChangePageAttributeBatch.c)
 *     MiPageAttributeBatchChangeNeeded @ 0x1400C4948 (MiPageAttributeBatchChangeNeeded.c)
 *     MiZeroInParallel @ 0x1400F8BB8 (MiZeroInParallel.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

void __fastcall MiInitializeMdlBatchPages(__int64 a1, char a2, int a3)
{
  __int64 v3; // rsi
  unsigned int v6; // r12d
  __int64 v7; // rcx
  __int64 v8; // r9
  _QWORD *PoolWithTag; // rdi
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
  __int64 v23; // r9
  __int64 v24; // [rsp+20h] [rbp-49h]
  __int64 v25; // [rsp+28h] [rbp-41h]
  _DWORD *v26; // [rsp+30h] [rbp-39h]
  __int64 v27; // [rsp+38h] [rbp-31h]
  _QWORD v28[4]; // [rsp+40h] [rbp-29h] BYREF
  __int64 v29; // [rsp+60h] [rbp-9h]
  __int64 v30; // [rsp+68h] [rbp-1h]
  _QWORD v31[10]; // [rsp+70h] [rbp+7h] BYREF
  unsigned int v32; // [rsp+D0h] [rbp+67h]
  __int64 v34; // [rsp+E8h] [rbp+7Fh]

  v3 = a3;
  memset(v31, 0, 24);
  memset(v28, 0, sizeof(v28));
  v6 = dword_1404657B4;
  v7 = 0LL;
  v24 = 0LL;
  v8 = 0LL;
  v27 = 0LL;
  PoolWithTag = 0LL;
  v10 = (unsigned __int64)*(unsigned int *)(a1 + 40) >> 12;
  v11 = (__int64 *)(a1 + 48);
  v12 = 0LL;
  v26 = (_DWORD *)(a1 + 48);
  v25 = 0LL;
  v34 = 0LL;
  if ( !v10 )
    return;
  LODWORD(v13) = a2 & 1;
  v32 = v13;
  do
  {
    v14 = *v11;
    v15 = 0;
    v30 = v8;
    v29 = v12;
    v16 = 48 * v14 - 0x58000000000LL;
    if ( !(_DWORD)v13 )
    {
      if ( MiPfnZeroingNeeded(v16, v3) )
      {
        if ( !PoolWithTag )
        {
          PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 24LL * v6, 0x6C646D4Du);
          if ( !PoolWithTag )
          {
            v6 = 1;
            PoolWithTag = v31;
          }
          if ( v6 )
          {
            v20 = PoolWithTag + 1;
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
        ++v27;
        if ( v6 == 1 )
          v17 = 0LL;
        else
          v17 = dword_1404657B0 & *v26 | (*(_QWORD *)(v16 + 40) >> 58 << byte_14046574D) | (((unsigned int)(*(_QWORD *)(v16 + 40) >> 36) & 3) << byte_14046574E);
        v18 = 3 * v17;
        v15 = 1;
        *(_QWORD *)v16 = PoolWithTag[3 * v17 + 2];
        ++PoolWithTag[v18 + 1];
        PoolWithTag[v18 + 2] = v16;
        goto LABEL_19;
      }
      v7 = v34;
    }
    if ( *(unsigned __int8 *)(v16 + 34) >> 6 == (_DWORD)v3 )
      goto LABEL_5;
LABEL_19:
    if ( (_DWORD)v3 == 3 && v15 == 1 )
    {
      if ( (unsigned int)MiPageAttributeBatchChangeNeeded(v16, 1LL) == 1 )
      {
        v8 = v25;
        v12 = v16;
        v19 = v29;
      }
      else
      {
        v19 = v30;
        v8 = v16;
        v25 = v16;
      }
      *(_QWORD *)(v16 + 16) = v19;
      goto LABEL_30;
    }
    if ( (unsigned int)MiPageAttributeBatchChangeNeeded(v16, (unsigned int)v3) != 1 )
    {
      v8 = v25;
LABEL_30:
      v7 = v34;
      goto LABEL_5;
    }
    if ( !v15 || dword_140465858[4 * ((unsigned __int64)*(unsigned __int8 *)(v16 + 34) >> 6) + v3] == (_DWORD)v3 )
    {
      v7 = v16;
      v8 = v25;
      *(_QWORD *)(v16 + 16) = v34;
      v34 = v16;
LABEL_5:
      v16 = v24;
      goto LABEL_6;
    }
    v7 = v34;
    v8 = v25;
    *(_QWORD *)(v16 + 16) = v24;
    v24 = v16;
LABEL_6:
    v13 = v32;
    v11 = (__int64 *)(v26 + 2);
    v26 += 2;
    --v10;
  }
  while ( v10 );
  if ( v7 )
    MiChangePageAttributeBatch(v7, v3, 0LL, v8);
  if ( v12 )
    MiChangePageAttributeBatch(v12, 1, -1LL, v8);
  if ( v27 )
  {
    v22 = LODWORD(v28[1]) | 1;
    LODWORD(v28[1]) |= 1u;
    if ( (a2 & 8) != 0 )
      LODWORD(v28[1]) = v22 | 4;
    LODWORD(v28[3]) = -1;
    v28[0] = PoolWithTag;
    LODWORD(v28[2]) = v6;
    HIDWORD(v28[1]) = v3;
    MiZeroInParallel(v28, v13);
    if ( PoolWithTag != v31 )
      ExFreePoolWithTag(PoolWithTag, 0);
    if ( v12 )
      MiChangePageAttributeBatch(v12, 3, 0LL, v23);
    if ( v25 )
      MiChangePageAttributeBatch(v25, 3, 0LL, v23);
    if ( v16 )
      MiChangePageAttributeBatch(v16, v3, 0LL, v23);
  }
  else if ( PoolWithTag )
  {
    if ( PoolWithTag != v31 )
      ExFreePoolWithTag(PoolWithTag, 0);
  }
}
