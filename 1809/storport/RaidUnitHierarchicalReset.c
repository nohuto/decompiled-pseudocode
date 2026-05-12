/*
 * XREFs of RaidUnitHierarchicalReset @ 0x1C0049F94
 * Callers:
 *     RaidAdapterStorageBreakReservationIoctl @ 0x1C003A4A0 (RaidAdapterStorageBreakReservationIoctl.c)
 *     RaidHierarchicalResetWorkRoutine @ 0x1C0049120 (RaidHierarchicalResetWorkRoutine.c)
 * Callees:
 *     RaidAllocatePool @ 0x1C00081B4 (RaidAllocatePool.c)
 *     McTemplateK0zqjuuujsssudxx @ 0x1C0027938 (McTemplateK0zqjuuujsssudxx.c)
 *     memmove @ 0x1C002C080 (memmove.c)
 *     RaidAdapterResetBus @ 0x1C0038ED4 (RaidAdapterResetBus.c)
 *     RaUnitSetHierarchicalResetSrbTimeoutCountdown @ 0x1C0047620 (RaUnitSetHierarchicalResetSrbTimeoutCountdown.c)
 *     RaidUnitResetTarget @ 0x1C004A83C (RaidUnitResetTarget.c)
 *     RaidUnitResetUnit @ 0x1C004AAEC (RaidUnitResetUnit.c)
 *     StorIsEventQueueEmpty @ 0x1C004B6C0 (StorIsEventQueueEmpty.c)
 */

__int64 __fastcall RaidUnitHierarchicalReset(__int64 a1)
{
  __int64 v1; // rsi
  __int64 v3; // r14
  unsigned int v4; // eax
  int v5; // ebp
  char v6; // r15
  int v7; // edi
  char *Pool; // rax
  char *v9; // rbp
  unsigned int i; // edx
  __int64 v11; // rcx
  char *v12; // rax
  __int64 v13; // rcx
  _QWORD *v14; // rax

  LOBYTE(v1) = -1;
  LOBYTE(v3) = -1;
  if ( *(_BYTE *)(a1 + 3192) )
  {
    v4 = *(_DWORD *)(a1 + 3212);
  }
  else
  {
    v4 = *(_DWORD *)(a1 + 1264);
    if ( v4 < 0x1E )
      v4 = 30;
  }
  v5 = 2 * v4;
  RaUnitSetHierarchicalResetSrbTimeoutCountdown(a1, 2 * v4);
  v6 = 1;
  v7 = RaidUnitResetUnit(a1);
  if ( v7 < 0 )
  {
    RaUnitSetHierarchicalResetSrbTimeoutCountdown(a1, v5);
    v6 = 2;
    v7 = RaidUnitResetTarget(a1);
    RaUnitSetHierarchicalResetSrbTimeoutCountdown(a1, 0);
    if ( v7 < 0 )
    {
      v6 = 3;
      if ( *(_BYTE *)(a1 + 3192) && (unsigned __int8)StorIsEventQueueEmpty(*(_QWORD *)(a1 + 504)) )
      {
        v7 = 0;
      }
      else
      {
        v7 = RaidAdapterResetBus(*(_QWORD *)(a1 + 24), *(_BYTE *)(a1 + 96));
        if ( v7 < 0 )
          goto LABEL_26;
        _InterlockedIncrement((volatile signed __int32 *)(a1 + 1272));
        _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(a1 + 24) + 4832LL));
      }
    }
    else
    {
      _InterlockedIncrement((volatile signed __int32 *)(a1 + 1272));
      _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(a1 + 24) + 4836LL));
    }
  }
  else
  {
    RaUnitSetHierarchicalResetSrbTimeoutCountdown(a1, 0);
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 1272));
    _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(a1 + 24) + 4840LL));
  }
  if ( *(_QWORD *)(a1 + 2224) )
  {
    if ( *(_QWORD *)(a1 + 2240) )
    {
      Pool = (char *)RaidAllocatePool(NonPagedPoolNx, (unsigned int)Size, 0x65546152u, *(_QWORD *)(a1 + 8));
      v9 = Pool;
      if ( Pool )
      {
        v1 = 0LL;
        v3 = 0LL;
        memmove(Pool, *(const void **)(a1 + 2224), (unsigned int)Size);
        for ( i = 0; i < g_RaidNumberProcessors; ++i )
        {
          v11 = (unsigned int)qword_1C0061560;
          if ( (_DWORD)qword_1C0061560 )
          {
            v12 = &v9[i * HIDWORD(qword_1C0061560) + 8];
            do
            {
              v1 += *((_QWORD *)v12 + 1);
              v3 += *(_QWORD *)v12;
              v12 += 24;
              --v11;
            }
            while ( v11 );
          }
        }
        v13 = (unsigned int)qword_1C0061560;
        v14 = *(_QWORD **)(a1 + 2240);
        if ( (_DWORD)qword_1C0061560 )
        {
          do
          {
            v1 -= *v14;
            v3 -= v14[1];
            v14 += 3;
            --v13;
          }
          while ( v13 );
        }
        ExFreePoolWithTag(v9, 0x65546152u);
      }
    }
  }
LABEL_26:
  if ( (byte_1C00617E5 & 2) != 0 )
    McTemplateK0zqjuuujsssudxx(
      a1 + 169,
      a1 + 160,
      a1 + 1976,
      *(const struct _MCGEN_TRACE_CONTEXT **)(*(_QWORD *)(a1 + 24) + 4864LL),
      *(_DWORD *)(*(_QWORD *)(a1 + 24) + 56LL),
      *(_QWORD *)(a1 + 24) + 5256LL,
      *(_BYTE *)(a1 + 96),
      *(_BYTE *)(a1 + 97),
      *(_BYTE *)(a1 + 98),
      a1 + 1976,
      (const struct _MCGEN_TRACE_CONTEXT *)(a1 + 160),
      (const struct _MCGEN_TRACE_CONTEXT *)(a1 + 169),
      (const struct _MCGEN_TRACE_CONTEXT *)(a1 + 186),
      v6,
      v7,
      v1,
      v3);
  *(_QWORD *)(a1 + 1280) = KeQueryUnbiasedInterruptTime();
  return (unsigned int)v7;
}
