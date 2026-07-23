/*
 * XREFs of PopDirectedDripsBuildBroadcastTree @ 0x14087D1F8
 * Callers:
 *     PopDirectedDripsInitializeBroadcast @ 0x14086905C (PopDirectedDripsInitializeBroadcast.c)
 * Callees:
 *     PopFxIsDirectedPowerTransitionSupported @ 0x1402D8654 (PopFxIsDirectedPowerTransitionSupported.c)
 *     PopDirectedDripsDiagTraceBroadcastRootDevice @ 0x1402E7740 (PopDirectedDripsDiagTraceBroadcastRootDevice.c)
 *     PopDirectedDripsDiagTracePs4Initiator @ 0x1402E7968 (PopDirectedDripsDiagTracePs4Initiator.c)
 *     PopDirectedDripsDiagTraceProblemDevice @ 0x14087D118 (PopDirectedDripsDiagTraceProblemDevice.c)
 *     PopDirectedDripsBuildPs4BroadcastTree @ 0x14087D478 (PopDirectedDripsBuildPs4BroadcastTree.c)
 *     PopDirectedDripsFlushDeviceQueue @ 0x14087D5FC (PopDirectedDripsFlushDeviceQueue.c)
 *     PopDirectedDripsInsertQueueDevice @ 0x14087D634 (PopDirectedDripsInsertQueueDevice.c)
 *     PopDirectedDripsIsLikelySpecialDevice @ 0x14087D674 (PopDirectedDripsIsLikelySpecialDevice.c)
 *     PopDirectedDripsVisitDevice @ 0x14087D6A0 (PopDirectedDripsVisitDevice.c)
 */

__int64 __fastcall PopDirectedDripsBuildBroadcastTree(__int64 a1, char a2)
{
  __int64 v2; // rbx
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rdi
  __int64 v7; // rsi
  bool v8; // zf
  __int64 v9; // rcx
  int v10; // eax
  __int64 i; // r9
  __int64 *v12; // r9
  __int64 v13; // r10
  __int64 j; // r9
  __int64 *v15; // r9
  __int64 v16; // rdx
  int v17; // eax
  __int64 v18; // r8
  int v19; // edx
  int v20; // r8d
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  _QWORD v26[2]; // [rsp+20h] [rbp-20h] BYREF
  _QWORD v27[2]; // [rsp+30h] [rbp-10h] BYREF
  unsigned int v28; // [rsp+60h] [rbp+20h] BYREF

  v2 = a1 + 728;
  if ( (*(_DWORD *)(a1 + 760) & 0x10000) == 0 && (*(_DWORD *)(a1 + 760) & 0x20000) == 0 )
  {
    PopDirectedDripsDiagTraceBroadcastRootDevice(a1, (int *)&v28);
    v26[1] = v26;
    v26[0] = v26;
    PopDirectedDripsInsertQueueDevice(v26, v2);
    v27[0] = v27;
    v27[1] = v27;
    while ( 1 )
    {
      do
      {
        v4 = v26[0];
        if ( (_QWORD *)v26[0] == v26 )
          goto LABEL_32;
        if ( *(_QWORD **)(v26[0] + 8LL) != v26
          || (v5 = *(_QWORD *)v26[0], *(_QWORD *)(*(_QWORD *)v26[0] + 8LL) != v26[0]) )
        {
LABEL_45:
          __fastfail(3u);
        }
        v26[0] = *(_QWORD *)v26[0];
        *(_QWORD *)(v5 + 8) = v26;
        v6 = v4 - 728;
        *(_QWORD *)(v4 + 8) = v4;
        *(_QWORD *)v4 = v4;
        v7 = *(_QWORD *)(v4 - 728 + 80);
      }
      while ( (*(_DWORD *)(v4 + 32) & 0x10000) != 0 || (*(_DWORD *)(v4 + 32) & 0x20000) != 0 );
      PopDirectedDripsVisitDevice(v27, v4, v28);
      v8 = (unsigned __int8)PopDirectedDripsIsLikelySpecialDevice(v6) == 0;
      v10 = *(_DWORD *)(v4 + 32);
      if ( !v8 )
        break;
      if ( (v10 & 4) == 0 )
      {
        for ( i = *(_QWORD *)(v6 + 8); i; i = *v12 )
          PopDirectedDripsInsertQueueDevice(v26, i + 728);
        v13 = v6 + 160;
        for ( j = *(_QWORD *)(v6 + 160); j != v13; j = *v15 )
          PopDirectedDripsInsertQueueDevice(v26, *(_QWORD *)(j - 8) + 584LL);
      }
      if ( (*(_DWORD *)(v4 + 32) & 2) == 0 )
      {
        if ( (unsigned __int8)PopDirectedDripsIsLikelySpecialDevice(v6) )
        {
          *(_DWORD *)(v4 + 32) |= 0x40000u;
          goto LABEL_30;
        }
        if ( (a2 & 1) != 0 && v7 && PopFxIsDirectedPowerTransitionSupported(v7) )
        {
          *(_DWORD *)(v4 + 32) |= 0x10000u;
        }
        else
        {
          v9 = v4 - 728;
          if ( (a2 & 2) == 0 )
          {
            v10 = *(_DWORD *)(v4 + 32);
            v19 = 1;
            goto LABEL_29;
          }
          v17 = PopDirectedDripsBuildPs4BroadcastTree(v9, v27, v28);
          v18 = (unsigned int)v17;
          if ( v17 < 0 )
            goto LABEL_31;
          PopDirectedDripsDiagTracePs4Initiator(v6);
        }
      }
    }
    v19 = 0;
LABEL_29:
    *(_DWORD *)(v4 + 32) = v10 | 0x40000;
    PopDirectedDripsDiagTraceProblemDevice(v9, v19);
LABEL_30:
    v18 = 3221225659LL;
LABEL_31:
    PopDirectedDripsFlushDeviceQueue(v26, v16, v18);
    goto LABEL_33;
  }
LABEL_32:
  v20 = 0;
LABEL_33:
  while ( 1 )
  {
    v21 = v27[0];
    if ( (_QWORD *)v27[0] == v27 )
      return (unsigned int)v20;
    if ( *(_QWORD **)(v27[0] + 8LL) != v27 )
      goto LABEL_45;
    v22 = *(_QWORD *)v27[0];
    if ( *(_QWORD *)(*(_QWORD *)v27[0] + 8LL) != v27[0] )
      goto LABEL_45;
    v27[0] = *(_QWORD *)v27[0];
    *(_QWORD *)(v22 + 8) = v27;
    if ( v20 >= 0 )
    {
      if ( (*(_DWORD *)(v21 + 16) & 0x20000) != 0 )
      {
        v23 = *(_QWORD *)(v21 + 32);
        if ( v23 )
          ++*(_DWORD *)(v23 + 116);
      }
      else if ( (*(_DWORD *)(v21 + 16) & 0x10000) != 0 )
      {
        v24 = *(_QWORD *)(v21 + 32);
        if ( v24 )
          ++*(_DWORD *)(v24 + 112);
      }
    }
    else
    {
      *(_DWORD *)(v21 + 16) = *(_DWORD *)(v21 + 20);
    }
    *(_QWORD *)(v21 + 8) = v21;
    *(_QWORD *)v21 = v21;
    *(_DWORD *)(v21 + 20) = 0;
  }
}
