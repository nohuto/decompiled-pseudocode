/*
 * XREFs of ?Reinitialize@CPartitionVerticalBlankScheduler@@AEAAXXZ @ 0x180025EC8
 * Callers:
 *     ?UpdateTimes@CPartitionVerticalBlankScheduler@@EEAAJXZ @ 0x180073BA0 (-UpdateTimes@CPartitionVerticalBlankScheduler@@EEAAJXZ.c)
 *     ?Initialize@CPartitionVerticalBlankScheduler@@AEAAJXZ @ 0x1800DF0E8 (-Initialize@CPartitionVerticalBlankScheduler@@AEAAJXZ.c)
 * Callees:
 *     ?Reset@CRateInfo@@QEAAXXZ @ 0x1800260DC (-Reset@CRateInfo@@QEAAXXZ.c)
 *     ?Clear@CFrameInfo@@QEAAXXZ @ 0x180026148 (-Clear@CFrameInfo@@QEAAXXZ.c)
 *     ?GetDisplayInfo@CPartitionVerticalBlankScheduler@@AEAAXXZ @ 0x180026228 (-GetDisplayInfo@CPartitionVerticalBlankScheduler@@AEAAXXZ.c)
 *     ?UpdateCurrentTime@CPartitionVerticalBlankScheduler@@AEAAXXZ @ 0x1800D6E18 (-UpdateCurrentTime@CPartitionVerticalBlankScheduler@@AEAAXXZ.c)
 *     memset_0 @ 0x1800E8D0E (memset_0.c)
 */

void __fastcall CPartitionVerticalBlankScheduler::Reinitialize(CPartitionVerticalBlankScheduler *this)
{
  char v1; // dl
  __int64 v3; // rcx
  CRateInfo *v4; // rsi
  __int64 v5; // r14
  char *v6; // rdi
  __int64 v7; // rbp
  __int64 v8; // r15
  __int64 v9; // r12
  char v10; // r13
  char LowPart; // cl
  __int128 v12; // xmm1
  _OWORD v13[2]; // [rsp+20h] [rbp-48h] BYREF
  LARGE_INTEGER PerformanceCount; // [rsp+70h] [rbp+8h] BYREF

  v1 = *((_BYTE *)this + 26239);
  *((_QWORD *)this + 3862) = 0LL;
  *((_BYTE *)this + 35620) = 0;
  *((_QWORD *)this + 3863) = 0LL;
  *((_QWORD *)this + 3239) = 0LL;
  *(_WORD *)((char *)this + 26237) = 0;
  *((_BYTE *)this + 26236) = 0;
  if ( v1 )
  {
    *((_QWORD *)this + 4455) = 0LL;
    *((_QWORD *)this + 4457) = ((unsigned __int64)this + 35656) | (((_QWORD)this + 35656) << 32);
    CPartitionVerticalBlankScheduler::UpdateCurrentTime(this);
    v1 = *((_BYTE *)this + 26239);
    *((_QWORD *)this + 4454) = *((_QWORD *)this + 4455);
  }
  v3 = *((_QWORD *)this + 3238);
  v4 = (CPartitionVerticalBlankScheduler *)((char *)this + 1360);
  v5 = 0LL;
  v6 = (char *)this + 1336;
  v7 = 16LL;
  v8 = *(_QWORD *)(v3 + 16);
  if ( !v1 )
    v5 = *(_QWORD *)(*((_QWORD *)this + 3237) + 1184LL);
  v9 = *(_QWORD *)(v3 + 1184);
  v10 = *(_BYTE *)(v3 + 1192);
  LOBYTE(PerformanceCount.LowPart) = *(_BYTE *)(v3 + 1201);
  do
  {
    CFrameInfo::Clear((CRateInfo *)((char *)v4 - 1208));
    *(v6 - 8) = 0;
    *(_QWORD *)v6 = 0LL;
    v6[8] = 0;
    *((_DWORD *)v6 + 3) = 0;
    v6[17] = 0;
    CRateInfo::Reset(v4);
    v4 = (CRateInfo *)((char *)v4 + 1608);
    v6 += 1608;
    --v7;
  }
  while ( v7 );
  LowPart = PerformanceCount.LowPart;
  *(_QWORD *)(*((_QWORD *)this + 3238) + 16LL) = v8;
  *(_QWORD *)(*((_QWORD *)this + 3238) + 1184LL) = v9;
  *(_BYTE *)(*((_QWORD *)this + 3238) + 1192LL) = v10;
  *(_BYTE *)(*((_QWORD *)this + 3238) + 1201LL) = LowPart;
  *(_QWORD *)(*((_QWORD *)this + 3237) + 1184LL) = v5;
  *(_BYTE *)(*((_QWORD *)this + 3238) + 1059LL) = 1;
  if ( *((_BYTE *)this + 26239) )
    *((_BYTE *)this + 26239) = 0;
  *((_WORD *)this + 15456) = 0;
  CPartitionVerticalBlankScheduler::GetDisplayInfo(this);
  *((_QWORD *)this + 4446) = this;
  *((_QWORD *)this + 3856) = 0LL;
  *((_DWORD *)this + 7714) = 0;
  memset_0(v13, 0, sizeof(v13));
  v12 = v13[1];
  *((_OWORD *)this + 1929) = v13[0];
  *((_OWORD *)this + 1930) = v12;
  QueryPerformanceCounter(&PerformanceCount);
  *((LARGE_INTEGER *)this + 3854) = PerformanceCount;
  *((_QWORD *)this + 3855) = 0LL;
}
