/*
 * XREFs of KiEndThreadAccountingPeriod @ 0x1400D20B0
 * Callers:
 *     KeDelayExecutionThread @ 0x14004DA20 (KeDelayExecutionThread.c)
 *     KiChooseTargetProcessor @ 0x1400C4310 (KiChooseTargetProcessor.c)
 *     KeQueryTotalCycleTimeThread @ 0x1400D1E00 (KeQueryTotalCycleTimeThread.c)
 *     KiEndThreadCycleAccumulation @ 0x1400D2020 (KiEndThreadCycleAccumulation.c)
 *     KiScanInterruptObjectList @ 0x1401BD740 (KiScanInterruptObjectList.c)
 *     KiInterruptSubDispatch @ 0x1401BD920 (KiInterruptSubDispatch.c)
 *     KiInterruptSubDispatchNoLock @ 0x1401BDA70 (KiInterruptSubDispatchNoLock.c)
 *     KiInterruptSubDispatchNoLockNoEtw @ 0x1401BDBC0 (KiInterruptSubDispatchNoLockNoEtw.c)
 *     KiSpuriousDispatchNoEOI @ 0x1401BEC50 (KiSpuriousDispatchNoEOI.c)
 *     KxIsrLinkage @ 0x1401BF890 (KxIsrLinkage.c)
 *     KiHvInterruptSubDispatch @ 0x1401C2940 (KiHvInterruptSubDispatch.c)
 *     KiVmbusInterruptSubDispatch @ 0x1401C2AA0 (KiVmbusInterruptSubDispatch.c)
 *     KiSwInterrupt @ 0x1401C2C00 (KiSwInterrupt.c)
 *     KiIpiInterruptSubDispatch @ 0x1401C4020 (KiIpiInterruptSubDispatch.c)
 *     KxDispatchInterrupt @ 0x1401C4240 (KxDispatchInterrupt.c)
 * Callees:
 *     KiEndCounterAccumulation @ 0x140296160 (KiEndCounterAccumulation.c)
 *     KiSetVpThreadSystemWork @ 0x140299950 (KiSetVpThreadSystemWork.c)
 */

void __fastcall KiEndThreadAccountingPeriod(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  char v3; // bl
  __int64 v5; // rdi
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rdx
  __int64 v10; // rax
  unsigned int v11; // ecx
  unsigned int v12; // edx
  __int64 v13; // r10
  __int64 v14; // r9
  __int64 v15; // rax
  __int64 v16; // rcx
  unsigned int v17; // eax
  unsigned int v18; // ecx
  unsigned int v19; // ecx
  _QWORD *i; // rcx
  int v21; // eax
  __int64 v22; // rax
  __int64 v23; // [rsp+38h] [rbp+10h]

  v3 = *(_BYTE *)(a2 + 2);
  v5 = a2;
  if ( (v3 & 0x10) != 0 )
  {
    *(_QWORD *)(a1 + 8LL * *(unsigned __int8 *)(a2 + 124) + 23504) += *(_QWORD *)(a1 + 23488) - *(_QWORD *)(a1 + 23496);
    v3 &= ~0x10u;
    *(_QWORD *)(a1 + 23496) = 0LL;
  }
  if ( (v3 & 0x20) != 0 )
  {
    v8 = *(_QWORD *)(a2 + 1968);
    if ( v8 )
    {
      v9 = *(_QWORD *)(a1 + 24176);
      v10 = *(_QWORD *)(a1 + 24184);
      if ( v9 && v10 )
      {
        if ( *(_BYTE *)(v10 + 100) )
        {
          v11 = *(_DWORD *)(v10 + 116);
        }
        else
        {
          v11 = *(_DWORD *)(v10 + 72);
          if ( v11 >= *(_DWORD *)(v9 + 360) )
            v11 = *(_DWORD *)(v9 + 360);
        }
      }
      else
      {
        v11 = 100;
      }
      if ( v11 < 0x4B )
        v12 = v11 / 0x19;
      else
        v12 = 3;
      v13 = *(unsigned __int8 *)(a1 + 24224);
      v14 = v12;
      v15 = v13 + 2LL * v12;
      v16 = *(_QWORD *)(v8 + 8 * v15);
      a2 = v8 + 8 * v15;
      v17 = KiTimelineBitmapTime;
      *(_QWORD *)a2 = a3 + v16;
      v18 = *(_DWORD *)(v8 + 192);
      if ( v17 > v18 )
      {
        LODWORD(v23) = v17;
        a2 = v17 - v18;
        if ( (unsigned int)a2 >= 0x20 )
          v21 = 1;
        else
          v21 = (*(_DWORD *)(v8 + 196) << (v17 - v18)) | 1;
        HIDWORD(v23) = v21;
        *(_QWORD *)(v8 + 192) = v23;
      }
      else
      {
        v19 = v18 - v17;
        if ( v19 < 0x20 )
          *(_DWORD *)(v8 + 196) |= 1 << v19;
      }
      if ( !KiEfficiencyClassSystem && (*(_DWORD *)(v5 + 120) & 3) == 2 )
      {
        a2 = 2 * v14;
        *(_QWORD *)(v8 + 16 * v14 + 8) += a3;
      }
      if ( *(_QWORD *)(v5 + 1912) )
      {
        *(_QWORD *)(v8 + 8 * (v13 + 16 + 2 * v14)) += a3;
        a2 = *(_QWORD *)(*(_QWORD *)(v5 + 1912) + 1968LL) + 8 * (v13 + 8 + 2 * v14);
        _InterlockedExchangeAdd64((volatile signed __int64 *)a2, a3);
      }
    }
    v3 &= ~0x20u;
  }
  if ( (v3 & 0x40) != 0 )
  {
    if ( *(_QWORD *)(a1 + 25016) )
    {
      LOBYTE(a2) = 1;
      KiSetVpThreadSystemWork(a1, a2);
    }
    v22 = *(_QWORD *)(v5 + 1512);
    if ( v22 )
      *(_BYTE *)(v22 + 64) = 0;
    v3 &= ~0x40u;
  }
  if ( (v3 & 0x3E) != 0 )
  {
    v7 = *(_QWORD *)(v5 + 104);
    if ( v7 )
    {
      for ( i = (_QWORD *)(*(unsigned int *)(a1 + 216) + v7); i; i = (_QWORD *)i[51] )
        *i += a3;
    }
    if ( (*(_BYTE *)(v5 + 2) & 8) != 0
      && (*(_QWORD *)(v5 + 576) & *(_QWORD *)(*(_QWORD *)(a1 + 192) + 136LL)) != *(_QWORD *)(*(_QWORD *)(a1 + 192)
                                                                                           + 136LL) )
    {
      *(_QWORD *)(a1 + 23528) += a3;
    }
    if ( *(_BYTE *)(v5 + 125) )
    {
      if ( (*(_DWORD *)(v5 + 120) & 3) == 2 )
        *(_QWORD *)(a1 + 23544) += a3;
      else
        *(_QWORD *)(a1 + 23536) += a3;
    }
    if ( *(_QWORD *)(v5 + 360) )
      KiEndCounterAccumulation(v5);
  }
}
