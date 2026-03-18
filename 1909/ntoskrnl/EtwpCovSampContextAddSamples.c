/*
 * XREFs of EtwpCovSampContextAddSamples @ 0x1409013C4
 * Callers:
 *     EtwpCovSampCaptureBufferProcess @ 0x1409007DC (EtwpCovSampCaptureBufferProcess.c)
 *     EtwpCovSampContextAddAddresses @ 0x1409012D0 (EtwpCovSampContextAddAddresses.c)
 *     EtwpCovSampSampleBufferProcess @ 0x140904378 (EtwpCovSampSampleBufferProcess.c)
 * Callees:
 *     KeAbPostRelease @ 0x14003F5C0 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x14003F9B0 (KeLeaveCriticalRegionThread.c)
 *     ExfTryToWakePushLock @ 0x1400C6390 (ExfTryToWakePushLock.c)
 *     EtwCovSampHash @ 0x140334538 (EtwCovSampHash.c)
 *     EtwpCovSampCaptureContextSetPaused @ 0x140900890 (EtwpCovSampCaptureContextSetPaused.c)
 *     EtwpCovSampHashLookupInTable @ 0x140903490 (EtwpCovSampHashLookupInTable.c)
 *     EtwpCovSampHashMakeRoomAndAcquireLock @ 0x140903570 (EtwpCovSampHashMakeRoomAndAcquireLock.c)
 *     EtwpCoverageSamplerFreeTable @ 0x140904B64 (EtwpCoverageSamplerFreeTable.c)
 */

__int64 __fastcall EtwpCovSampContextAddSamples(ULONG_PTR BugCheckParameter2, __int64 a2, unsigned int a3)
{
  __int64 v4; // r13
  unsigned int v7; // r14d
  unsigned int v8; // esi
  __int64 v9; // r12
  unsigned int RoomAndAcquireLock; // eax
  __int64 v11; // r12
  _DWORD *v12; // rcx
  __int64 v13; // r13
  __int64 v14; // rax
  int v15; // r9d
  unsigned int i; // r10d
  _QWORD *v17; // r13
  char v18; // al
  _QWORD *v20; // [rsp+30h] [rbp-88h]
  _QWORD *v21; // [rsp+38h] [rbp-80h]
  __int64 v22; // [rsp+40h] [rbp-78h]
  _QWORD *v24; // [rsp+70h] [rbp-48h] BYREF
  unsigned int v26; // [rsp+D8h] [rbp+20h]

  v4 = a2;
  v7 = 0;
  v8 = 0;
  v9 = qword_140432528;
  RoomAndAcquireLock = EtwpCovSampHashMakeRoomAndAcquireLock(BugCheckParameter2);
  v26 = RoomAndAcquireLock;
  if ( RoomAndAcquireLock < a3 )
  {
    EtwpCovSampCaptureContextSetPaused(BugCheckParameter2, v9, 1);
    RoomAndAcquireLock = v26;
  }
  v11 = 0LL;
  while ( RoomAndAcquireLock && (unsigned int)v11 < a3 )
  {
    v12 = (_DWORD *)(v4 + 8 * v11);
    v21 = v12;
    v13 = *(_QWORD *)(BugCheckParameter2 + 1184);
    if ( !v13 )
      goto LABEL_14;
    LODWORD(v22) = *(_DWORD *)(BugCheckParameter2 + 28);
    HIDWORD(v22) = v22;
    v14 = EtwCovSampHash(__PAIR64__(*v12, v12[1]), v22);
    v15 = 1;
    for ( i = 0; i < *(_DWORD *)(BugCheckParameter2 + 1200); ++i )
    {
      if ( (*(_BYTE *)(((*(_DWORD *)(BugCheckParameter2 + 1196) & ((unsigned int)v14 + i * HIDWORD(v14))) >> 3) + v13) & (unsigned __int8)(1 << (*(_BYTE *)(BugCheckParameter2 + 1196) & (v14 + i * BYTE4(v14)) & 7))) == 0 )
      {
        v15 = 0;
        break;
      }
    }
    if ( !v15 )
    {
      v12 = v21;
LABEL_14:
      v17 = *(_QWORD **)(BugCheckParameter2 + 1160);
      while ( 1 )
      {
        v20 = v17;
        if ( (unsigned int)EtwpCovSampHashLookupInTable(v17, v12, &v24) )
          break;
        v17 = (_QWORD *)*v17;
        v12 = v21;
        if ( v17 == (_QWORD *)(BugCheckParameter2 + 1160) )
        {
          *v24 = *v21;
          ++*((_DWORD *)v20 + 4);
          ++v7;
          RoomAndAcquireLock = --v26;
          goto LABEL_19;
        }
      }
    }
    ++v8;
    RoomAndAcquireLock = v26;
LABEL_19:
    v11 = (unsigned int)(v11 + 1);
    v4 = a2;
  }
  if ( *(struct _KTHREAD **)(BugCheckParameter2 + 8) == KeGetCurrentThread() )
  {
    *(_QWORD *)(BugCheckParameter2 + 8) = 0LL;
    v18 = _InterlockedExchangeAdd64((volatile signed __int64 *)BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL);
    if ( (v18 & 2) != 0 && (v18 & 4) == 0 )
      ExfTryToWakePushLock((volatile signed __int64 *)BugCheckParameter2);
    KeAbPostRelease(BugCheckParameter2);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  _InterlockedExchangeAdd((volatile signed __int32 *)(BugCheckParameter2 + 616), v7);
  _InterlockedExchangeAdd((volatile signed __int32 *)(BugCheckParameter2 + 620), v8);
  if ( a3 > v8 + v7 )
    _InterlockedExchangeAdd((volatile signed __int32 *)(BugCheckParameter2 + 624), a3 - v8 - v7);
  return v7;
}
