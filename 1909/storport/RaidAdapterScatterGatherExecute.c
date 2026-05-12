/*
 * XREFs of RaidAdapterScatterGatherExecute @ 0x1C000510C
 * Callers:
 *     RaidAdapterExecuteXrb @ 0x1C00034E0 (RaidAdapterExecuteXrb.c)
 *     RaidpAdapterContinueDataBufferScatterGather @ 0x1C0038910 (RaidpAdapterContinueDataBufferScatterGather.c)
 * Callees:
 *     RaidDmaGetScatterGatherList @ 0x1C0004FA0 (RaidDmaGetScatterGatherList.c)
 *     RaidDmaBuildScatterGatherList @ 0x1C000520C (RaidDmaBuildScatterGatherList.c)
 */

__int64 __fastcall RaidAdapterScatterGatherExecute(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  __int64 v5; // rdi
  unsigned __int8 v6; // cl
  int v7; // esi
  unsigned int v8; // ebx
  int v9; // r14d
  char v10; // cl
  char v11; // si
  int v12; // ecx
  bool v13; // zf
  __int64 v14; // rcx
  __int64 result; // rax

  v3 = *(_QWORD *)(a2 + 168);
  v5 = a2;
  v6 = *(_BYTE *)(v3 + 2);
  if ( v6 == 40 )
  {
    v7 = *(_DWORD *)(v3 + 24);
    v8 = *(_DWORD *)(v3 + 60);
    v9 = *(_DWORD *)(v3 + 20);
  }
  else
  {
    v7 = *(_DWORD *)(v3 + 12);
    v8 = *(_DWORD *)(v3 + 16);
    v9 = v6;
  }
  v10 = v7;
  LOBYTE(a3) = 1;
  v11 = (v7 & 0x80) != 0;
  v12 = v10 & 0x40;
  if ( (*(_DWORD *)(a1 + 524) & 8) == 0 && (*(_BYTE *)(a1 + 109) & 2) == 0 )
  {
    v13 = v12 == 0;
    v14 = *(_QWORD *)(a2 + 104);
    LOBYTE(a2) = !v13;
    KeFlushIoBuffers(v14, a2, a3);
  }
  if ( v9 == 23 && *(_DWORD *)(*(_QWORD *)(v5 + 104) + 40LL) > v8 )
    v8 = *(_DWORD *)(*(_QWORD *)(v5 + 104) + 40LL);
  result = RaidDmaBuildScatterGatherList(
             (int)a1 + 696,
             *(_QWORD *)(a1 + 8),
             *(_QWORD *)(v5 + 104),
             *(_QWORD *)(v5 + 184),
             v8,
             (__int64)RaidpAdapterContinueScatterGather,
             v5,
             v11,
             v5 + 232);
  if ( (_DWORD)result == -1073741789 )
    return RaidDmaGetScatterGatherList((__int64 *)(a1 + 696), *(_QWORD *)(a1 + 8));
  return result;
}
