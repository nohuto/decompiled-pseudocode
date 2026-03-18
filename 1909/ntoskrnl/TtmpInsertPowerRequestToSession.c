/*
 * XREFs of TtmpInsertPowerRequestToSession @ 0x1408BE244
 * Callers:
 *     PopNotifySessionUserPowerRequestCreated @ 0x1406B3D08 (PopNotifySessionUserPowerRequestCreated.c)
 *     TtmNotifySessionPowerRequestPresent @ 0x1408BD3CC (TtmNotifySessionPowerRequestPresent.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14003B910 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x14003DF60 (KeLeaveCriticalRegion.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     TtmpAcquireSessionById @ 0x1408BDC44 (TtmpAcquireSessionById.c)
 *     TtmpPowerRequestHashAllocator @ 0x1408BE574 (TtmpPowerRequestHashAllocator.c)
 *     TtmpPowerRequestHashDeallocator @ 0x1408BE598 (TtmpPowerRequestHashDeallocator.c)
 *     TtmiLogError @ 0x1408C157C (TtmiLogError.c)
 */

char __fastcall TtmpInsertPowerRequestToSession(int a1, int a2, int a3, __int64 a4, __int64 a5, int a6)
{
  __int64 v6; // rdi
  char v9; // r12
  int v10; // eax
  __int64 v11; // r13
  _QWORD *PoolWithTag; // rax
  _QWORD *v13; // r15
  unsigned __int64 v14; // rsi
  unsigned int v15; // ebx
  unsigned int v16; // eax
  __int64 v17; // rbx
  char *v18; // rax
  _QWORD *v19; // r9
  char v20; // cl
  unsigned __int64 v21; // rcx
  unsigned int v22; // edi
  __int64 v23; // r10
  __int64 v24; // r12
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rcx
  __int64 v28; // rdx
  __int64 v30; // [rsp+20h] [rbp-10h] BYREF

  v6 = a2;
  v30 = 0LL;
  v9 = 0;
  v10 = TtmpAcquireSessionById(&v30, a1);
  v11 = v30;
  if ( v10 < 0
    || (PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x40uLL, 0x52507454u), (v13 = PoolWithTag) == 0LL) )
  {
    TtmiLogError("TtmpInsertPowerRequestToSession");
    goto LABEL_26;
  }
  *((_DWORD *)PoolWithTag + 5) = a3;
  PoolWithTag[1] = v6;
  v14 = v11 + 272;
  *((_DWORD *)PoolWithTag + 4) = v6;
  PoolWithTag[3] = a4;
  PoolWithTag[4] = a5;
  *((_DWORD *)PoolWithTag + 10) = a6;
  PoolWithTag[7] = PoolWithTag + 6;
  PoolWithTag[6] = PoolWithTag + 6;
  v15 = *(_DWORD *)(v11 + 276);
  v16 = 2 * (v15 >> 5);
  if ( *(_DWORD *)(v11 + 272) < v16 )
    goto LABEL_25;
  v17 = v16;
  if ( v16 < 4 )
    v17 = 4LL;
  v18 = (char *)TtmpPowerRequestHashAllocator(8LL * (unsigned int)v17);
  v19 = 0LL;
  if ( v18 )
  {
    if ( (((_DWORD)v17 - 1) & (unsigned int)v17) != 0 )
    {
      v20 = -1;
      do
      {
        ++v20;
        LODWORD(v17) = (unsigned int)v17 >> 1;
      }
      while ( (_DWORD)v17 );
      v17 = (unsigned int)(1 << v20);
    }
    if ( (unsigned int)v17 > 0x4000000 )
      v17 = 0x4000000LL;
    v21 = (unsigned int)v17;
    if ( v18 > &v18[8 * v17] )
      v21 = 0LL;
    if ( v21 )
      memset64(v18, v14 | 1, v21);
    v22 = 0;
    v23 = -1LL << (*(_BYTE *)(v11 + 276) & 0x1F);
    if ( (*(_DWORD *)(v11 + 276) & 0xFFFFFFE0) != 0 )
    {
      do
      {
        v24 = *(_QWORD *)(v11 + 280);
        while ( 1 )
        {
          v19 = *(_QWORD **)(v24 + 8LL * v22);
          if ( ((unsigned __int8)v19 & 1) != 0 )
            break;
          *(_QWORD *)(v24 + 8LL * v22) = *v19;
          v30 = v23 & v19[1];
          v25 = (37
               * (BYTE6(v30)
                + 37
                * (BYTE5(v30)
                 + 37
                 * (BYTE4(v30)
                  + 37 * (BYTE3(v30) + 37 * (BYTE2(v30) + 37 * (BYTE1(v30) + 37 * ((unsigned __int8)v30 + 11623883)))))))
               + HIBYTE(v30)) & (unsigned int)(v17 - 1);
          *v19 = *(_QWORD *)&v18[8 * v25];
          *(_QWORD *)&v18[8 * v25] = v19;
        }
        ++v22;
      }
      while ( v22 < *(_DWORD *)(v11 + 276) >> 5 );
    }
    v26 = *(_QWORD *)(v11 + 280);
    v15 = *(_DWORD *)(v11 + 276) & 0x1F | (32 * v17);
    *(_QWORD *)(v11 + 280) = v18;
    *(_DWORD *)(v11 + 276) = v15;
    if ( v26 )
    {
      TtmpPowerRequestHashDeallocator(v26, 0LL, v18, v19);
      v15 = *(_DWORD *)(v11 + 276);
    }
    goto LABEL_25;
  }
  v15 = *(_DWORD *)(v11 + 276);
  if ( v15 >= 0x20 )
  {
LABEL_25:
    v9 = 1;
    v30 = v13[1] & (-1LL << (v15 & 0x1F));
    v27 = *(_QWORD *)(v11 + 280);
    v28 = (37
         * (BYTE6(v30)
          + 37
          * (BYTE5(v30)
           + 37
           * (BYTE4(v30)
            + 37 * (BYTE3(v30) + 37 * (BYTE2(v30) + 37 * (BYTE1(v30) + 37 * ((unsigned __int8)v30 + 11623883)))))))
         + HIBYTE(v30)) & ((v15 >> 5) - 1);
    *v13 = *(_QWORD *)(v27 + 8 * v28);
    *(_QWORD *)(v27 + 8 * v28) = v13;
    ++*(_DWORD *)v14;
    goto LABEL_26;
  }
  TtmiLogError("TtmpInsertPowerRequestToSession");
  ExFreePoolWithTag(v13, 0x52507454u);
LABEL_26:
  if ( v11 )
  {
    ExReleaseResourceLite(&TtmpSessionLock);
    KeLeaveCriticalRegion();
  }
  return v9;
}
