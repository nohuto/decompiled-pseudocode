/*
 * XREFs of WheapPfaMemoryCheck @ 0x1408DDD78
 * Callers:
 *     WheapPredictiveFailureAnalysis @ 0x1408DE204 (WheapPredictiveFailureAnalysis.c)
 * Callees:
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     MmGetPageBadStatus @ 0x1402A74EC (MmGetPageBadStatus.c)
 *     WheapSqmDwordCommon @ 0x140321D88 (WheapSqmDwordCommon.c)
 *     WheapSqmIncrementDword @ 0x140321E30 (WheapSqmIncrementDword.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     WheaAttemptPhysicalPageOffline @ 0x1408DCCC0 (WheaAttemptPhysicalPageOffline.c)
 *     WheapSqmCollectWheaPolicyTelemetry @ 0x1408DD744 (WheapSqmCollectWheaPolicyTelemetry.c)
 *     WheapPfaRetireExpiredMemoryEntries @ 0x1408DE0D0 (WheapPfaRetireExpiredMemoryEntries.c)
 *     WheapSqmAddToStream @ 0x1408DE454 (WheapSqmAddToStream.c)
 */

void __fastcall WheapPfaMemoryCheck(__int64 a1, __int64 a2)
{
  __int64 v2; // r14
  __int64 v3; // rsi
  PVOID *v4; // rax
  unsigned int v5; // edi
  _QWORD *PoolWithTag; // rbx
  PVOID *v7; // rcx
  PVOID **v8; // rdx
  _QWORD *v9; // rax
  PVOID *v10; // rcx
  unsigned __int64 v11; // rcx
  int v12; // eax
  unsigned int v13; // ecx
  bool v14; // cf
  _QWORD *v15; // rax
  unsigned __int128 v16; // rax
  unsigned __int64 v17; // [rsp+28h] [rbp-39h] BYREF
  _DWORD v18[12]; // [rsp+30h] [rbp-31h] BYREF
  _DWORD v19[12]; // [rsp+60h] [rbp-1h] BYREF

  if ( !WheapPolicyMemPfaDisable && (*(_BYTE *)a2 & 2) != 0 )
  {
    v17 = *(_QWORD *)(a2 + 16);
    if ( !(unsigned int)MmGetPageBadStatus(&v17) )
    {
      v2 = v17 >> 12;
      v3 = MEMORY[0xFFFFF78000000008];
      WheapPfaRetireExpiredMemoryEntries(MEMORY[0xFFFFF78000000008]);
      v4 = (PVOID *)WheapPfaList;
      v5 = 0;
      PoolWithTag = 0LL;
      while ( v4 != &WheapPfaList )
      {
        PoolWithTag = v4;
        if ( v4[5] == (PVOID)v2 )
        {
          v7 = (PVOID *)*v4;
          if ( *((PVOID **)*v4 + 1) == v4 )
          {
            v8 = (PVOID **)v4[1];
            if ( *v8 == v4 )
            {
              *v8 = v7;
              v7[1] = v8;
              goto LABEL_18;
            }
          }
LABEL_23:
          __fastfail(3u);
        }
        v4 = (PVOID *)*v4;
        ++v5;
      }
      if ( v5 >= WheapPolicyMemPfaPageCount )
      {
        v9 = (_QWORD *)*PoolWithTag;
        if ( *(_QWORD **)(*PoolWithTag + 8LL) != PoolWithTag )
          goto LABEL_23;
        v10 = (PVOID *)PoolWithTag[1];
        if ( *v10 != PoolWithTag )
          goto LABEL_23;
        *v10 = v9;
        v9[1] = v10;
        WheapSqmIncrementDword(7195);
        v18[2] = 3;
        v11 = v3 - PoolWithTag[3];
        v18[0] = 1;
        v12 = *((unsigned __int16 *)PoolWithTag + 8);
        v18[6] = v11 / 0x989680;
        v18[4] = 1;
        v18[10] = v12;
        v18[8] = 1;
        WheapSqmAddToStream(7213LL, 3LL, v18);
        WheapSqmCollectWheaPolicyTelemetry();
      }
      else
      {
        PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x30uLL, 0x61656857u);
        if ( !PoolWithTag )
          return;
        WheapSqmDwordCommon(8, &WHEA_SQM_EVENT_SETIFMAXDWORD, 7196, v5 + 1);
      }
      memset(PoolWithTag, 0, 0x30uLL);
      *((_WORD *)PoolWithTag + 8) = 0;
      PoolWithTag[3] = v3;
      PoolWithTag[5] = v2;
LABEL_18:
      v13 = (unsigned __int16)++*((_WORD *)PoolWithTag + 8);
      v14 = v13 < WheapPolicyMemPfaThreshold;
      PoolWithTag[4] = v3;
      if ( v14 )
      {
        v15 = WheapPfaList;
        if ( *((PVOID **)WheapPfaList + 1) != &WheapPfaList )
          goto LABEL_23;
        *PoolWithTag = WheapPfaList;
        PoolWithTag[1] = &WheapPfaList;
        v15[1] = PoolWithTag;
        WheapPfaList = PoolWithTag;
      }
      else
      {
        v16 = (unsigned __int64)(v3 - PoolWithTag[3]) * (unsigned __int128)0xD6BF94D5E57A42BDuLL;
        v19[10] = v13;
        v19[6] = *((_QWORD *)&v16 + 1) >> 23;
        v19[2] = 1;
        v19[0] = 1;
        v19[4] = 1;
        v19[8] = 1;
        WheapSqmAddToStream(7213LL, 3LL, v19);
        WheapSqmCollectWheaPolicyTelemetry();
        WheaAttemptPhysicalPageOffline(v2, 0LL, 0LL);
        ExFreePoolWithTag(PoolWithTag, 0x61656857u);
      }
    }
  }
}
