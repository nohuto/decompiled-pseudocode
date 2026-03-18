/*
 * XREFs of KiAbSetMinimumThreadPriority @ 0x14009F06C
 * Callers:
 *     KiAbProcessContextSwitch @ 0x140042670 (KiAbProcessContextSwitch.c)
 *     KiAbIoBoostOwners @ 0x14009DD40 (KiAbIoBoostOwners.c)
 *     KiAbCpuBoostOwners @ 0x14009DE3C (KiAbCpuBoostOwners.c)
 *     KiAbProcessThreadLocks @ 0x14009E090 (KiAbProcessThreadLocks.c)
 * Callees:
 *     PsGetIoPriorityThread @ 0x14005A520 (PsGetIoPriorityThread.c)
 *     KiSetPriorityFloor @ 0x14009EEC0 (KiSetPriorityFloor.c)
 *     KiAbEntryGetCpuPriorityKey @ 0x14009F340 (KiAbEntryGetCpuPriorityKey.c)
 *     KiAbThreadBoostIoPriority @ 0x14011261C (KiAbThreadBoostIoPriority.c)
 *     KiAbThreadInsertList @ 0x140133348 (KiAbThreadInsertList.c)
 *     EtwTraceAutoBoostSetFloor @ 0x14032D768 (EtwTraceAutoBoostSetFloor.c)
 */

__int64 __fastcall KiAbSetMinimumThreadPriority(
        __int64 a1,
        signed __int8 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        _DWORD *a6)
{
  ULONG_PTR v7; // rdi
  int IoPriorityThread; // eax
  unsigned int v9; // ebx
  char v10; // r14
  char v11; // r12
  char v12; // bp
  int v13; // r13d
  char CpuPriorityKey; // al
  int v15; // r8d
  _DWORD *v16; // r9
  signed __int8 *v17; // r10
  __int64 *v18; // r11
  signed __int8 v19; // r15
  int v20; // edx
  unsigned __int8 v22; // al
  char v23; // [rsp+50h] [rbp-48h]
  int v24; // [rsp+54h] [rbp-44h]
  char v25; // [rsp+A0h] [rbp+8h]

  v7 = a1 - 16LL * *(unsigned __int8 *)(a1 + 24);
  v23 = *(_BYTE *)(v7 + 195);
  IoPriorityThread = PsGetIoPriorityThread(v7);
  v9 = 0;
  v10 = IoPriorityThread;
  v11 = 2;
  if ( IoPriorityThread < 2 && *(_DWORD *)(v7 + 1816) )
    v10 = 2;
  v12 = 1;
  if ( !*(_DWORD *)(v7 + 1824) || (v25 = 0, *(_DWORD *)(v7 + 1820)) )
    v25 = 1;
  v24 = 0;
  v13 = 0;
  *a6 = 0;
  CpuPriorityKey = KiAbEntryGetCpuPriorityKey(a1);
  v19 = *v17;
  if ( CpuPriorityKey < *v17 )
  {
    LOBYTE(v24) = *v17;
    *(_WORD *)(a1 + 88) ^= (*(_WORD *)(a1 + 88) ^ (*(_WORD *)(a1 + 88) & 0x7FFF | (1 << (v19 - 1)))) & 0x7FFF;
    v22 = KiSetPriorityFloor(v7, v18, v19, 0);
    v16 = a6;
    v17 = a2;
    v13 = v22;
  }
  else
  {
    v19 = 0;
  }
  v20 = (*(_DWORD *)(v7 + 1760) >> 9) & 7;
  if ( (*(_DWORD *)(*(_QWORD *)(v7 + 544) + 780LL) & 0x100000) != 0 )
    v20 = 0;
  if ( v20 < v17[1] && *(__int16 *)(a1 + 88) >= 0 && (unsigned int)KiAbThreadBoostIoPriority(v7, a5, 0LL, v16) )
  {
    BYTE1(v24) = 2;
    *(_WORD *)(a1 + 88) |= 0x8000u;
    v13 = 1;
  }
  else
  {
    v11 = 0;
  }
  if ( (*(_DWORD *)(v7 + 1824) == 0) >= a2[2]
    || (*(_BYTE *)(a1 + 90) & 1) != 0
    || !(unsigned int)KiAbThreadBoostIoPriority(v7, a5, 1LL, a6) )
  {
    v12 = 0;
  }
  else
  {
    *(_WORD *)(a1 + 90) |= 1u;
    v13 = 1;
    BYTE2(v24) = 1;
  }
  if ( a4 && v13 && *(_BYTE *)(v7 + 793) )
    KiAbThreadInsertList(v7, a4, v7 + 1376);
  if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 && v24 )
  {
    LOBYTE(v16) = v11;
    LOBYTE(v15) = v19;
    EtwTraceAutoBoostSetFloor(v7, *(_DWORD *)(a1 + 32) & 0xFFFFFFFC, v15, (_DWORD)v16, v12, v23, v10, v25, 0, *a6);
  }
  LOBYTE(v9) = v19 != 0;
  return v9;
}
