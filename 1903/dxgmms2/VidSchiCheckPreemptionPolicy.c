/*
 * XREFs of VidSchiCheckPreemptionPolicy @ 0x1C0005EA0
 * Callers:
 *     VidSchiSwitchContextWithCheck @ 0x1C0009750 (VidSchiSwitchContextWithCheck.c)
 * Callees:
 *     VidSchiProfilePerformanceTick @ 0x1C0008AF0 (VidSchiProfilePerformanceTick.c)
 *     VidSchiUpdateNodeRunningTime @ 0x1C0014740 (VidSchiUpdateNodeRunningTime.c)
 *     memset @ 0x1C0018980 (memset.c)
 */

_BOOL8 __fastcall VidSchiCheckPreemptionPolicy(__int64 a1, _QWORD *a2, __int64 a3, int a4)
{
  __int64 v4; // rbx
  int v5; // eax
  int v8; // esi
  __int64 v9; // r14
  _QWORD *v10; // rax
  unsigned int MostSignificantBit; // ecx
  __int64 v13; // rax
  __int64 v14; // r8
  int v15; // eax
  bool v16; // zf
  __int64 v17; // rax
  int v18; // r8d
  __int64 v19; // rcx
  int v20; // edx
  bool v21; // cc
  _QWORD v22[4]; // [rsp+40h] [rbp-58h] BYREF
  _QWORD v23[4]; // [rsp+60h] [rbp-38h] BYREF

  v4 = *(_QWORD *)(a1 + 96);
  v5 = *(_DWORD *)(a1 + 184);
  *a2 = -1LL;
  v8 = 0;
  v9 = *(_QWORD *)(v4 + 24);
  if ( (v5 & 2) != 0 )
  {
    if ( a1 == *(_QWORD *)(v4 + 8LL * *(unsigned int *)(v4 + 1552) + 1560) )
    {
      v8 = 15;
      goto LABEL_4;
    }
    v8 = -18;
  }
  if ( !*(_DWORD *)(v4 + 2860) )
  {
    v8 = 2;
    goto LABEL_4;
  }
  if ( (*(_DWORD *)(v9 + 1936) & 1) == 0 )
  {
    v8 = 3;
    goto LABEL_4;
  }
  _InterlockedIncrement((volatile signed __int32 *)(v9 + 716));
  if ( _InterlockedIncrement((volatile signed __int32 *)(v4 + 2864)) != 1 )
  {
    v8 = 13;
    goto LABEL_16;
  }
  if ( *(_DWORD *)(v9 + 900) )
    v8 = -14;
  MostSignificantBit = RtlFindMostSignificantBit(*(unsigned int *)(v4 + 1756));
  v13 = *(unsigned int *)(a1 + 404);
  if ( MostSignificantBit <= (unsigned int)v13 )
  {
    if ( MostSignificantBit != (_DWORD)v13 )
    {
      if ( *(_BYTE *)(v4 + 2008) && gulPriorityToYieldPriorityBand[v13] != 3 )
      {
        _InterlockedDecrement((volatile signed __int32 *)(v4 + 2864));
        v8 = 11;
        _InterlockedDecrement((volatile signed __int32 *)(v9 + 716));
        goto LABEL_4;
      }
      goto LABEL_20;
    }
    v14 = *(_QWORD *)(v4 + 8LL * *(unsigned int *)(v4 + 1552) + 1560);
    if ( v14 && *(_QWORD *)(*(_QWORD *)(v14 + 104) + 40LL) == *(_QWORD *)(*(_QWORD *)(a1 + 104) + 40LL) )
    {
      v15 = *(_DWORD *)(a1 + 408);
      if ( v15 < *(_DWORD *)(v14 + 408) )
        goto LABEL_15;
      if ( v15 > *(_DWORD *)(v14 + 408) )
      {
        v8 = -17;
        goto LABEL_4;
      }
    }
    memset(v23, 0, sizeof(v23));
    v16 = (unsigned __int8)VidSchiUpdateNodeRunningTime(v4, v23) == 0;
    v17 = v23[1];
    if ( !v16 )
    {
      v8 = 11;
      *a2 = *(_QWORD *)(v23[1] + 472LL);
      _InterlockedDecrement((volatile signed __int32 *)(v4 + 2864));
      _InterlockedDecrement((volatile signed __int32 *)(v9 + 716));
      goto LABEL_4;
    }
    if ( !v23[1] )
    {
      _InterlockedDecrement((volatile signed __int32 *)(v4 + 2864));
      v8 = 2;
      _InterlockedDecrement((volatile signed __int32 *)(v9 + 716));
      goto LABEL_4;
    }
    v18 = HIDWORD(v23[2]);
    v19 = v23[2];
  }
  else
  {
    if ( !*(_BYTE *)(v4 + 2008) )
    {
LABEL_15:
      v8 = 10;
LABEL_16:
      _InterlockedDecrement((volatile signed __int32 *)(v4 + 2864));
      _InterlockedDecrement((volatile signed __int32 *)(v9 + 716));
      goto LABEL_4;
    }
    memset(v22, 0, sizeof(v22));
    v16 = (unsigned __int8)VidSchiUpdateNodeRunningTime(v4, v22) == 0;
    v17 = v22[1];
    if ( !v16 )
    {
      v8 = 11;
      *a2 = *(_QWORD *)(v22[1] + 472LL);
      goto LABEL_16;
    }
    if ( !v22[1] )
    {
      v8 = 2;
      goto LABEL_16;
    }
    v18 = HIDWORD(v22[2]);
    v19 = v22[2];
  }
  v20 = *(_DWORD *)(v17 + 476);
  v21 = v20 <= v18;
  if ( v20 == v18 )
  {
    if ( *(_DWORD *)(v17 + 472) > (unsigned int)v19 )
    {
LABEL_33:
      v8 = 12;
      *a2 = *(_QWORD *)(v17 + 472) - v19;
      _InterlockedDecrement((volatile signed __int32 *)(v4 + 2864));
      _InterlockedDecrement((volatile signed __int32 *)(v9 + 716));
      goto LABEL_4;
    }
    v21 = v20 <= v18;
  }
  if ( !v21 )
    goto LABEL_33;
LABEL_20:
  if ( !v8 )
    v8 = 1;
LABEL_4:
  VidSchiProfilePerformanceTick(1, v9, v4, a4, a1, 0LL, 0LL, v8);
  v10 = (_QWORD *)WdLogNewEntry5_WdEvent();
  v10[3] = v4;
  v10[4] = *(_QWORD *)(v4 + 96);
  v10[5] = *(_QWORD *)(v4 + 152);
  v10[6] = a1;
  v10[7] = v8;
  WdLogEvent5_WdEvent(v10);
  return v8 < 0 || v8 == 1;
}
