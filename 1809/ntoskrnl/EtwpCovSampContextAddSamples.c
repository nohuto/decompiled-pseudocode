/*
 * XREFs of EtwpCovSampContextAddSamples @ 0x1408C5AD4
 * Callers:
 *     EtwpCovSampCaptureBufferProcess @ 0x1408C4F1C (EtwpCovSampCaptureBufferProcess.c)
 *     EtwpCovSampContextAddAddresses @ 0x1408C59E0 (EtwpCovSampContextAddAddresses.c)
 *     EtwpCovSampSampleBufferProcess @ 0x1408C8824 (EtwpCovSampSampleBufferProcess.c)
 * Callees:
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x140091500 (ExfTryToWakePushLock.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B78F0 (KiLeaveCriticalRegionUnsafe.c)
 *     EtwCovSampHash @ 0x1403162D4 (EtwCovSampHash.c)
 *     EtwpCovSampCaptureContextSetPaused @ 0x1408C4FD0 (EtwpCovSampCaptureContextSetPaused.c)
 *     EtwpCovSampHashLookupInTable @ 0x1408C7988 (EtwpCovSampHashLookupInTable.c)
 *     EtwpCovSampHashMakeRoomAndAcquireLock @ 0x1408C7A68 (EtwpCovSampHashMakeRoomAndAcquireLock.c)
 *     EtwpCoverageSamplerFreeTable @ 0x1408C9014 (EtwpCoverageSamplerFreeTable.c)
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
  _QWORD *v19; // [rsp+30h] [rbp-88h]
  unsigned __int64 v20; // [rsp+38h] [rbp-80h]
  _QWORD *v21; // [rsp+40h] [rbp-78h]
  __int64 v22; // [rsp+48h] [rbp-70h]
  _QWORD *v24; // [rsp+70h] [rbp-48h] BYREF
  unsigned int v26; // [rsp+D8h] [rbp+20h]

  v4 = a2;
  v7 = 0;
  v8 = 0;
  v9 = qword_14040AE48;
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
    v13 = *(_QWORD *)(BugCheckParameter2 + 1176);
    if ( !v13 )
      goto LABEL_14;
    LODWORD(v22) = *(_DWORD *)(BugCheckParameter2 + 28);
    HIDWORD(v22) = v22;
    LODWORD(v20) = v12[1];
    HIDWORD(v20) = *v12;
    v14 = EtwCovSampHash(v20, v22);
    v15 = 1;
    for ( i = 0; i < *(_DWORD *)(BugCheckParameter2 + 1192); ++i )
    {
      if ( (*(_BYTE *)(((*(_DWORD *)(BugCheckParameter2 + 1188) & ((unsigned int)v14 + i * HIDWORD(v14))) >> 3) + v13) & (unsigned __int8)(1 << (*(_BYTE *)(BugCheckParameter2 + 1188) & (v14 + i * BYTE4(v14)) & 7))) == 0 )
      {
        v15 = 0;
        break;
      }
    }
    if ( !v15 )
    {
      v12 = v21;
LABEL_14:
      v17 = *(_QWORD **)(BugCheckParameter2 + 1152);
      while ( 1 )
      {
        v19 = v17;
        if ( (unsigned int)EtwpCovSampHashLookupInTable(v17, v12, &v24) )
          break;
        v17 = (_QWORD *)*v17;
        v12 = v21;
        if ( v17 == (_QWORD *)(BugCheckParameter2 + 1152) )
        {
          *v24 = *v21;
          ++*((_DWORD *)v19 + 4);
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
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)BugCheckParameter2);
    KeAbPostRelease(BugCheckParameter2);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  }
  _InterlockedExchangeAdd((volatile signed __int32 *)(BugCheckParameter2 + 616), v7);
  _InterlockedExchangeAdd((volatile signed __int32 *)(BugCheckParameter2 + 620), v8);
  if ( a3 > v8 + v7 )
    _InterlockedExchangeAdd((volatile signed __int32 *)(BugCheckParameter2 + 624), a3 - v8 - v7);
  return v7;
}
