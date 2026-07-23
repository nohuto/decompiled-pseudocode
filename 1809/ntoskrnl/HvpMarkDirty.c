/*
 * XREFs of HvpMarkDirty @ 0x1405FBD2C
 * Callers:
 *     HvpAddBin @ 0x1405A49BC (HvpAddBin.c)
 *     HvCheckAndUpdateHiveBackupTimeStamp @ 0x1405A83BC (HvCheckAndUpdateHiveBackupTimeStamp.c)
 *     CmpFlushHive @ 0x1405B3F54 (CmpFlushHive.c)
 *     HvpRemapAndEnlistHiveBins @ 0x1405FA6A0 (HvpRemapAndEnlistHiveBins.c)
 *     HvpEnlistFreeCells @ 0x1405FA800 (HvpEnlistFreeCells.c)
 *     HvpMarkCellDirty @ 0x1405FBC04 (HvpMarkCellDirty.c)
 *     CmpTransMgrPrepare @ 0x1406FE07C (CmpTransMgrPrepare.c)
 *     CmpTransMgrSyncHive @ 0x1406FE3B4 (CmpTransMgrSyncHive.c)
 *     HvFoldBackDirtyData @ 0x1407FBE68 (HvFoldBackDirtyData.c)
 * Callees:
 *     RtlSetBits @ 0x140076D70 (RtlSetBits.c)
 *     CmpArmLazyWriter @ 0x14008CC94 (CmpArmLazyWriter.c)
 *     KiQueryUnbiasedInterruptTime @ 0x14008CE50 (KiQueryUnbiasedInterruptTime.c)
 *     EtwTraceKernelEvent @ 0x1400F3790 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     CmpLogDirtyVectorUse @ 0x1405A8DC8 (CmpLogDirtyVectorUse.c)
 *     HvpSetRangeProtection @ 0x1405FCD30 (HvpSetRangeProtection.c)
 *     CmpIssueNewDirtyCallback @ 0x1406CC244 (CmpIssueNewDirtyCallback.c)
 *     CmpForceFlushForCoalescing @ 0x1407FC31C (CmpForceFlushForCoalescing.c)
 */

char __fastcall HvpMarkDirty(ULONG_PTR BugCheckParameter2, int a2, int a3, int a4)
{
  int v4; // eax
  unsigned int v9; // edx
  unsigned int v10; // ecx
  unsigned int v11; // r8d
  int v12; // edx
  int v13; // eax
  int v14; // r9d
  unsigned int v15; // eax
  unsigned int v16; // edi
  unsigned int v17; // ecx
  unsigned int v18; // edx
  ULONG v19; // r14d
  ULONG v20; // r15d
  ULONG v21; // ecx
  ULONG v23; // r14d
  int v24; // r12d
  __int64 v25; // rax
  unsigned int v26; // edx
  __int64 v27; // rax
  unsigned int v28; // edx
  __int64 v29; // rax
  __int16 v30; // [rsp+30h] [rbp-49h] BYREF
  int v31; // [rsp+34h] [rbp-45h] BYREF
  ULONG_PTR v32; // [rsp+38h] [rbp-41h] BYREF
  __int64 v33; // [rsp+40h] [rbp-39h] BYREF
  ULONG_PTR *v34; // [rsp+50h] [rbp-29h] BYREF
  _QWORD v35[2]; // [rsp+58h] [rbp-21h]
  int v36; // [rsp+68h] [rbp-11h]
  int v37; // [rsp+6Ch] [rbp-Dh]

  v4 = *(_DWORD *)(BugCheckParameter2 + 160);
  v31 = a4;
  if ( (v4 & 1) != 0 || a2 < 0 )
    return 1;
  v9 = a3 + a2 - 1;
  v10 = (unsigned int)a2 >> 9;
  v11 = *(_DWORD *)(BugCheckParameter2 + 136);
  v12 = v9 >> 9;
  if ( v11 <= 1 )
  {
    v14 = v10;
  }
  else
  {
    v13 = ~(v11 - 1);
    v14 = v10 & v13;
    v12 = (v13 & (v11 + v12)) - 1;
  }
  v15 = *(_DWORD *)(BugCheckParameter2 + 272) >> 9;
  v16 = 0;
  v17 = (v14 + 8) & 0xFFFFFFF8;
  v18 = ((v12 + 16) & 0xFFFFFFF8) - 9;
  v19 = v15 - 1;
  v20 = v17 - 8;
  if ( !v17 )
    v20 = 0;
  v21 = v20;
  if ( v18 < v15 )
    v19 = v18;
  if ( v20 > v19 )
    goto LABEL_14;
  do
  {
    if ( !_bittest64(*(const signed __int64 **)(BugCheckParameter2 + 96), v21) )
      ++v16;
    ++v21;
  }
  while ( v21 <= v19 );
  if ( !v16 )
  {
LABEL_14:
    if ( (*(_DWORD *)(BugCheckParameter2 + 160) & 2) == 0 )
    {
      v33 = *(_QWORD *)(BugCheckParameter2 + 4176) + 10000000LL * (unsigned int)CmpLazyFlushIntervalInSeconds;
      CmpArmLazyWriter(0LL, (__int64)&v33, 0);
    }
    return 1;
  }
  v23 = v19 - v20;
  if ( (unsigned __int8)HvpSetRangeProtection(BugCheckParameter2, v20 << 9) )
  {
    v24 = *(_DWORD *)(BugCheckParameter2 + 104);
    *(_DWORD *)(BugCheckParameter2 + 104) = v24 + v16;
    RtlSetBits((PRTL_BITMAP)(BugCheckParameter2 + 88), v20, v23 + 1);
    CmpLogDirtyVectorUse(BugCheckParameter2, 0, a2, a3);
    v32 = BugCheckParameter2;
    if ( (DWORD2(PerfGlobalGroupMask) & 0x1000000) != 0 )
    {
      v34 = &v32;
      v30 = 0;
      v25 = *(_QWORD *)(BugCheckParameter2 + 1856);
      v26 = 1;
      v35[0] = 8LL;
      if ( v25 )
      {
        v35[1] = v25;
        v26 = 2;
        v36 = *(unsigned __int16 *)(BugCheckParameter2 + 1848);
        v37 = 0;
      }
      v27 = 2LL * v26;
      v28 = v26 + 1;
      v35[v27 - 1] = &v30;
      v35[v27] = 2LL;
      v29 = 2LL * v28;
      v35[v29 - 1] = &v31;
      v35[v29] = 4LL;
      EtwTraceKernelEvent((__int64)&v34, v28 + 1, 0x41000000u, 0x928u, 0x501902u);
    }
    if ( !v24 )
    {
      *(_QWORD *)(BugCheckParameter2 + 4176) = KiQueryUnbiasedInterruptTime();
      CmpIssueNewDirtyCallback();
    }
    if ( (int)(v16 + _InterlockedExchangeAdd(&CmpDirtySectorCount, v16)) >= 0x8000 )
      CmpForceFlushForCoalescing();
    goto LABEL_14;
  }
  return 0;
}
