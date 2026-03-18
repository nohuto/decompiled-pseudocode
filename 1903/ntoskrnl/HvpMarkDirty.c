/*
 * XREFs of HvpMarkDirty @ 0x1405D5130
 * Callers:
 *     HvpMarkCellDirty @ 0x1405D4FF0 (HvpMarkCellDirty.c)
 *     CmpTransMgrPrepare @ 0x14063302C (CmpTransMgrPrepare.c)
 *     HvCheckAndUpdateHiveBackupTimeStamp @ 0x14065EEFC (HvCheckAndUpdateHiveBackupTimeStamp.c)
 *     HvpAddBin @ 0x14065F368 (HvpAddBin.c)
 *     HvpRemapAndEnlistHiveBins @ 0x14065F948 (HvpRemapAndEnlistHiveBins.c)
 *     HvpEnlistFreeCells @ 0x14065FAA0 (HvpEnlistFreeCells.c)
 *     CmpTransMgrSyncHive @ 0x1406ED340 (CmpTransMgrSyncHive.c)
 *     HvFoldBackDirtyData @ 0x14083401C (HvFoldBackDirtyData.c)
 *     HvMarkDirty @ 0x14083A510 (HvMarkDirty.c)
 * Callees:
 *     RtlSetBits @ 0x140007660 (RtlSetBits.c)
 *     CmpArmLazyWriter @ 0x140007890 (CmpArmLazyWriter.c)
 *     KiQueryUnbiasedInterruptTime @ 0x140082998 (KiQueryUnbiasedInterruptTime.c)
 *     EtwTraceKernelEvent @ 0x140120D40 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     HvpSetRangeProtection @ 0x14062EB74 (HvpSetRangeProtection.c)
 *     CmpLogDirtyVectorUse @ 0x14065E0A0 (CmpLogDirtyVectorUse.c)
 *     CmpIssueNewDirtyCallback @ 0x1406EAC74 (CmpIssueNewDirtyCallback.c)
 *     CmpForceFlushForCoalescing @ 0x1408344DC (CmpForceFlushForCoalescing.c)
 */

char __fastcall HvpMarkDirty(ULONG_PTR BugCheckParameter2, int a2, unsigned int a3, int a4)
{
  int v8; // ebx
  unsigned int v10; // edx
  unsigned int v11; // ebx
  unsigned int v12; // ecx
  int v13; // eax
  int v14; // edi
  unsigned int v15; // ebx
  ULONG v16; // edi
  unsigned int v17; // eax
  unsigned int v18; // ebp
  ULONG v19; // eax
  unsigned int v21; // ebx
  int v22; // r14d
  __int64 v23; // rax
  unsigned int v24; // edx
  __int64 v25; // rax
  unsigned int v26; // edx
  __int64 v27; // rax
  __int16 v28; // [rsp+30h] [rbp-A8h] BYREF
  int v29; // [rsp+34h] [rbp-A4h] BYREF
  ULONG_PTR v30; // [rsp+38h] [rbp-A0h] BYREF
  __int64 v31; // [rsp+40h] [rbp-98h] BYREF
  ULONG_PTR *v32; // [rsp+50h] [rbp-88h] BYREF
  _QWORD v33[2]; // [rsp+58h] [rbp-80h]
  int v34; // [rsp+68h] [rbp-70h]
  int v35; // [rsp+6Ch] [rbp-6Ch]

  if ( (*(_DWORD *)(BugCheckParameter2 + 160) & 1) != 0 || a2 < 0 )
    return 1;
  v8 = a2 - 1;
  v10 = *(_DWORD *)(BugCheckParameter2 + 136);
  v11 = (a3 + v8) >> 9;
  v12 = (unsigned int)a2 >> 9;
  if ( v10 <= 1 )
  {
    v14 = v12;
  }
  else
  {
    v13 = ~(v10 - 1);
    v14 = v12 & v13;
    v11 = (v13 & (v10 + v11)) - 1;
  }
  v15 = ((v11 + 16) & 0xFFFFFFF8) - 9;
  v16 = (v14 + 8) & 0xFFFFFFF8;
  if ( v16 )
    v16 -= 8;
  v17 = *(_DWORD *)(BugCheckParameter2 + 272) >> 9;
  if ( v15 >= v17 )
    v15 = v17 - 1;
  v18 = 0;
  v19 = v16;
  if ( v16 > v15 )
    goto LABEL_14;
  do
  {
    if ( !_bittest64(*(const signed __int64 **)(BugCheckParameter2 + 96), v19) )
      ++v18;
    ++v19;
  }
  while ( v19 <= v15 );
  if ( !v18 )
  {
LABEL_14:
    if ( (*(_DWORD *)(BugCheckParameter2 + 160) & 2) == 0 )
    {
      v31 = *(_QWORD *)(BugCheckParameter2 + 4176) + 10000000LL * (unsigned int)CmpLazyFlushIntervalInSeconds;
      CmpArmLazyWriter(0, (unsigned __int64 *)&v31, 0);
    }
    return 1;
  }
  v21 = v15 - v16;
  if ( (unsigned __int8)HvpSetRangeProtection(BugCheckParameter2, v16 << 9) )
  {
    v22 = *(_DWORD *)(BugCheckParameter2 + 104);
    *(_DWORD *)(BugCheckParameter2 + 104) = v22 + v18;
    RtlSetBits((PRTL_BITMAP)(BugCheckParameter2 + 88), v16, v21 + 1);
    CmpLogDirtyVectorUse(BugCheckParameter2, 0LL, (unsigned int)a2, a3);
    v30 = BugCheckParameter2;
    if ( (DWORD2(PerfGlobalGroupMask) & 0x1000000) != 0 )
    {
      v29 = a4;
      v28 = 0;
      v32 = &v30;
      v23 = *(_QWORD *)(BugCheckParameter2 + 1856);
      v33[0] = 8LL;
      v24 = 1;
      if ( v23 )
      {
        v33[1] = v23;
        v24 = 2;
        v34 = *(unsigned __int16 *)(BugCheckParameter2 + 1848);
        v35 = 0;
      }
      v25 = 2LL * v24;
      v26 = v24 + 1;
      v33[v25 - 1] = &v28;
      v33[v25] = 2LL;
      v27 = 2LL * v26;
      v33[v27 - 1] = &v29;
      v33[v27] = 4LL;
      EtwTraceKernelEvent((__int64)&v32, v26 + 1, 0x41000000u, 0x928u, 0x501902u);
    }
    if ( !v22 )
    {
      *(_QWORD *)(BugCheckParameter2 + 4176) = KiQueryUnbiasedInterruptTime();
      CmpIssueNewDirtyCallback();
    }
    if ( (int)(v18 + _InterlockedExchangeAdd(&CmpDirtySectorCount, v18)) >= 0x8000 )
      CmpForceFlushForCoalescing();
    goto LABEL_14;
  }
  return 0;
}
