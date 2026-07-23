/*
 * XREFs of TtmpInsertPowerRequestToSession @ 0x140881DF8
 * Callers:
 *     PopNotifySessionUserPowerRequestCreated @ 0x140589440 (PopNotifySessionUserPowerRequestCreated.c)
 *     TtmNotifySessionPowerRequestPresent @ 0x1408811C0 (TtmNotifySessionPowerRequestPresent.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x14004F410 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14004F590 (ExReleaseResourceLite.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     TtmpAcquireSessionById @ 0x140762864 (TtmpAcquireSessionById.c)
 *     TtmiLogError @ 0x1407628CC (TtmiLogError.c)
 *     TtmpPowerRequestHashAllocator @ 0x14088216C (TtmpPowerRequestHashAllocator.c)
 *     TtmpPowerRequestHashDeallocator @ 0x140882190 (TtmpPowerRequestHashDeallocator.c)
 */

char __fastcall TtmpInsertPowerRequestToSession(int a1, int a2, int a3, __int64 a4, __int64 a5, int a6)
{
  __int64 v6; // rdi
  char v9; // r15
  int v10; // eax
  __int64 v11; // r13
  int v12; // r8d
  int v13; // edx
  _QWORD *PoolWithTag; // rax
  _QWORD *v15; // r14
  unsigned __int64 v16; // rsi
  unsigned int v17; // ebx
  unsigned int v18; // eax
  __int64 v19; // rbx
  char *v20; // r9
  char v21; // cl
  unsigned __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r10
  __int64 v25; // r12
  _QWORD *v26; // r11
  unsigned __int64 v27; // rcx
  __int64 v28; // rcx
  unsigned __int64 v29; // rbp
  __int64 v30; // rcx
  unsigned __int64 v31; // rdx
  __int64 v33[7]; // [rsp+20h] [rbp-38h] BYREF

  v6 = a2;
  v33[0] = 0LL;
  v9 = 0;
  v10 = TtmpAcquireSessionById(v33, a1);
  v11 = v33[0];
  if ( v10 < 0 )
  {
    v12 = v10;
    v13 = 3356;
LABEL_3:
    TtmiLogError("TtmpInsertPowerRequestToSession", v13, v12, -1);
    goto LABEL_28;
  }
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x40uLL, 0x52507454u);
  v15 = PoolWithTag;
  if ( !PoolWithTag )
  {
    v13 = 3365;
    v12 = -1073741670;
    goto LABEL_3;
  }
  *((_DWORD *)PoolWithTag + 5) = a3;
  PoolWithTag[1] = v6;
  v16 = v11 + 272;
  *((_DWORD *)PoolWithTag + 4) = v6;
  PoolWithTag[3] = a4;
  PoolWithTag[4] = a5;
  *((_DWORD *)PoolWithTag + 10) = a6;
  PoolWithTag[7] = PoolWithTag + 6;
  PoolWithTag[6] = PoolWithTag + 6;
  v17 = *(_DWORD *)(v11 + 276);
  v18 = 2 * (v17 >> 5);
  if ( *(_DWORD *)(v11 + 272) < v18 )
    goto LABEL_27;
  v19 = v18;
  if ( v18 < 4 )
    v19 = 4LL;
  v20 = (char *)TtmpPowerRequestHashAllocator(8LL * (unsigned int)v19);
  if ( v20 )
  {
    if ( (((_DWORD)v19 - 1) & (unsigned int)v19) != 0 )
    {
      v21 = -1;
      do
      {
        ++v21;
        LODWORD(v19) = (unsigned int)v19 >> 1;
      }
      while ( (_DWORD)v19 );
      v19 = (unsigned int)(1 << v21);
    }
    if ( (unsigned int)v19 > 0x4000000 )
      v19 = 0x4000000LL;
    v22 = (unsigned int)v19;
    if ( v20 > &v20[8 * v19] )
      v22 = 0LL;
    if ( v22 )
      memset64(v20, v16 | 1, v22);
    v23 = 0LL;
    v24 = -1LL << (*(_BYTE *)(v11 + 276) & 0x1F);
    if ( (*(_DWORD *)(v11 + 276) & 0xFFFFFFE0) != 0 )
    {
      do
      {
        v25 = *(_QWORD *)(v11 + 280);
        while ( 1 )
        {
          v26 = *(_QWORD **)(v25 + 8LL * (unsigned int)v23);
          if ( ((unsigned __int8)v26 & 1) != 0 )
            break;
          *(_QWORD *)(v25 + 8LL * (unsigned int)v23) = *v26;
          v27 = ((((unsigned __int64)v24 & v26[1]) >> 56)
               + 37
               * ((unsigned __int8)(((unsigned __int64)v24 & v26[1]) >> 48)
                + 37
                * ((unsigned __int8)((unsigned __int16)(((unsigned __int64)v24 & v26[1]) >> 32) >> 8)
                 + 37
                 * ((unsigned __int8)(((unsigned __int64)v24 & v26[1]) >> 32)
                  + 37
                  * ((((unsigned int)v24 & (_DWORD)v26[1]) >> 24)
                   + 37
                   * ((unsigned __int8)(((unsigned int)v24 & (_DWORD)v26[1]) >> 16)
                    + 37
                    * (37 * ((unsigned __int8)(v24 & v26[1]) + 11623883)
                     + (unsigned __int8)((unsigned __int16)(v24 & v26[1]) >> 8)))))))) & (unsigned int)(v19 - 1);
          *v26 = *(_QWORD *)&v20[8 * v27];
          *(_QWORD *)&v20[8 * v27] = v26;
        }
        v23 = (unsigned int)(v23 + 1);
      }
      while ( (unsigned int)v23 < *(_DWORD *)(v11 + 276) >> 5 );
    }
    v28 = *(_QWORD *)(v11 + 280);
    v17 = *(_DWORD *)(v11 + 276) & 0x1F | (32 * v19);
    *(_QWORD *)(v11 + 280) = v20;
    *(_DWORD *)(v11 + 276) = v17;
    if ( v28 )
    {
      TtmpPowerRequestHashDeallocator(v28, 0LL, v23);
      v17 = *(_DWORD *)(v11 + 276);
    }
    goto LABEL_27;
  }
  v17 = *(_DWORD *)(v11 + 276);
  if ( v17 >= 0x20 )
  {
LABEL_27:
    v9 = 1;
    v29 = v15[1] & (-1LL << (v17 & 0x1F));
    v30 = *(_QWORD *)(v11 + 280);
    v31 = (HIBYTE(v29)
         + 37
         * (BYTE6(v29)
          + 37
          * (BYTE5(v29)
           + 37
           * (BYTE4(v29)
            + 37 * (BYTE3(v29) + 37 * (BYTE2(v29) + 37 * (37 * ((unsigned __int8)v29 + 11623883) + BYTE1(v29)))))))) & ((v17 >> 5) - 1);
    *v15 = *(_QWORD *)(v30 + 8 * v31);
    *(_QWORD *)(v30 + 8 * v31) = v15;
    ++*(_DWORD *)v16;
    goto LABEL_28;
  }
  TtmiLogError("TtmpInsertPowerRequestToSession", 3388, -1073741670, -1);
  ExFreePoolWithTag(v15, 0x52507454u);
LABEL_28:
  if ( v11 )
  {
    ExReleaseResourceLite(&TtmpSessionLock);
    KeLeaveCriticalRegion();
  }
  return v9;
}
