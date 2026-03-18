/*
 * XREFs of PopDirectedDripsBuildBroadcastTreeFull @ 0x1408B89CC
 * Callers:
 *     PopDirectedDripsBuildBroadcastTreePartial @ 0x1408B8BC8 (PopDirectedDripsBuildBroadcastTreePartial.c)
 * Callees:
 *     PopFxIsDirectedPowerTransitionSupported @ 0x1402F364C (PopFxIsDirectedPowerTransitionSupported.c)
 *     PopDirectedDripsDiagTracePs4Initiator @ 0x1403042D0 (PopDirectedDripsDiagTracePs4Initiator.c)
 *     PopDirectedDripsDiagTraceProblemDevice @ 0x1408B82D4 (PopDirectedDripsDiagTraceProblemDevice.c)
 *     PopDirectedDripsBuildPs4BroadcastTree @ 0x1408B8C9C (PopDirectedDripsBuildPs4BroadcastTree.c)
 *     PopDirectedDripsFlushDeviceQueue @ 0x1408B8E34 (PopDirectedDripsFlushDeviceQueue.c)
 *     PopDirectedDripsInsertQueueDevice @ 0x1408B8E6C (PopDirectedDripsInsertQueueDevice.c)
 *     PopDirectedDripsIsLikelySpecialDevice @ 0x1408B8EAC (PopDirectedDripsIsLikelySpecialDevice.c)
 *     PopDirectedDripsMarkDfxDevice @ 0x1408B8ED8 (PopDirectedDripsMarkDfxDevice.c)
 *     PopDirectedDripsVisitDevice @ 0x1408B9004 (PopDirectedDripsVisitDevice.c)
 */

__int64 __fastcall PopDirectedDripsBuildBroadcastTreeFull(__int64 a1, unsigned int a2, int a3, _DWORD *a4)
{
  int v5; // r15d
  int v7; // esi
  __int64 v8; // rbx
  __int64 v9; // rax
  __int64 v10; // r14
  __int64 v11; // rcx
  char v12; // r10
  int v13; // eax
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // r8
  bool v17; // zf
  int v18; // edx
  int v19; // r8d
  __int64 v20; // rcx
  __int64 v21; // rax
  _QWORD v23[2]; // [rsp+20h] [rbp-20h] BYREF
  _QWORD v24[2]; // [rsp+30h] [rbp-10h] BYREF
  int v25; // [rsp+80h] [rbp+40h] BYREF
  int v26; // [rsp+90h] [rbp+50h]

  v26 = a3;
  v23[1] = v23;
  v5 = 0;
  v23[0] = v23;
  v24[1] = v24;
  v24[0] = v24;
  if ( (*(_DWORD *)(a1 + 760) & 0x30000) == 0 )
  {
    PopDirectedDripsInsertQueueDevice(v23);
    v7 = 1;
    while ( 1 )
    {
      do
      {
        v8 = v23[0];
        if ( (_QWORD *)v23[0] == v23 )
          goto LABEL_22;
        if ( *(_QWORD **)(v23[0] + 8LL) != v23
          || (v9 = *(_QWORD *)v23[0], *(_QWORD *)(*(_QWORD *)v23[0] + 8LL) != v23[0]) )
        {
LABEL_29:
          __fastfail(3u);
        }
        v23[0] = *(_QWORD *)v23[0];
        *(_QWORD *)(v9 + 8) = v23;
        *(_QWORD *)(v8 + 8) = v8;
        *(_QWORD *)v8 = v8;
        v10 = *(_QWORD *)(v8 - 728 + 80);
      }
      while ( (*(_DWORD *)(v8 + 32) & 0x30000) != 0 );
      PopDirectedDripsVisitDevice(v24, v8, a2, 0LL);
      if ( (unsigned __int8)PopDirectedDripsIsLikelySpecialDevice(v8 - 728) )
        break;
      v25 = 0;
      v12 = v26;
      if ( (v26 & 1) != 0 && v10 && PopFxIsDirectedPowerTransitionSupported(v10, &v25) )
      {
        PopDirectedDripsMarkDfxDevice(v23, v24, v8, a2);
        v13 = 1;
      }
      else
      {
        v11 = v8 - 728;
        if ( (v12 & 2) == 0 )
        {
          v17 = v25 == 2;
          *(_DWORD *)(v8 + 32) |= 0x40000u;
          if ( v17 )
            v7 = 4;
          v18 = v7;
          goto LABEL_20;
        }
        v14 = PopDirectedDripsBuildPs4BroadcastTree(v11, v24, a2);
        v16 = (unsigned int)v14;
        if ( v14 < 0 )
          goto LABEL_21;
        PopDirectedDripsDiagTracePs4Initiator(v8 - 728);
        v13 = 2;
      }
      v5 |= v13;
    }
    *(_DWORD *)(v8 + 32) |= 0x40000u;
    v18 = 0;
LABEL_20:
    PopDirectedDripsDiagTraceProblemDevice(v11, v18);
    v16 = 3221225659LL;
LABEL_21:
    PopDirectedDripsFlushDeviceQueue(v23, v15, v16);
    goto LABEL_23;
  }
LABEL_22:
  v19 = 0;
LABEL_23:
  while ( 1 )
  {
    v20 = v24[0];
    if ( (_QWORD *)v24[0] == v24 )
      break;
    if ( *(_QWORD **)(v24[0] + 8LL) != v24 )
      goto LABEL_29;
    v21 = *(_QWORD *)v24[0];
    if ( *(_QWORD *)(*(_QWORD *)v24[0] + 8LL) != v24[0] )
      goto LABEL_29;
    v24[0] = *(_QWORD *)v24[0];
    *(_QWORD *)(v21 + 8) = v24;
    if ( v19 < 0 )
      *(_DWORD *)(v20 + 16) = *(_DWORD *)(v20 + 20);
    *(_QWORD *)(v20 + 8) = v20;
    *(_QWORD *)v20 = v20;
    *(_DWORD *)(v20 + 20) = 0;
  }
  if ( v19 >= 0 )
    *a4 |= v5;
  return (unsigned int)v19;
}
