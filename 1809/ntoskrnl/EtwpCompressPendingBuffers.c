/*
 * XREFs of EtwpCompressPendingBuffers @ 0x140315008
 * Callers:
 *     EtwpBufferingModeCompressionFlush @ 0x140314C20 (EtwpBufferingModeCompressionFlush.c)
 *     EtwpCompressionProc @ 0x140315180 (EtwpCompressionProc.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x140091500 (ExfTryToWakePushLock.c)
 *     EtwpCompressBuffer @ 0x140314C88 (EtwpCompressBuffer.c)
 *     EtwpDequeueBufferPendingCompression @ 0x140315234 (EtwpDequeueBufferPendingCompression.c)
 *     EtwpRotateCompressionTargetIfNeeded @ 0x140315A6C (EtwpRotateCompressionTargetIfNeeded.c)
 *     EtwpCompleteBuffer @ 0x1406D5418 (EtwpCompleteBuffer.c)
 */

__int64 __fastcall EtwpCompressPendingBuffers(__int64 a1)
{
  volatile signed __int64 *v1; // rbp
  LARGE_INTEGER PerformanceCounter; // rbx
  _DWORD *v4; // rax
  _DWORD *v5; // rsi
  LARGE_INTEGER v6; // rax
  __int64 v7; // rcx
  LONGLONG v8; // rax

  v1 = (volatile signed __int64 *)(a1 + 1128);
  ExAcquirePushLockExclusiveEx(a1 + 1128, 0LL);
  EtwpRotateCompressionTargetIfNeeded(a1);
  while ( 1 )
  {
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
    v4 = (_DWORD *)EtwpDequeueBufferPendingCompression(a1);
    v5 = v4;
    if ( !v4 )
      break;
    if ( (int)v4[3] > 0 || v4[1] > 0x48u && v4[2] > 0x48u )
    {
      if ( (int)EtwpCompressBuffer(a1, (__int64)v4) < 0 )
        _InterlockedIncrement((volatile signed __int32 *)(a1 + 268));
      EtwpCompleteBuffer(a1, v5);
      v6 = KeQueryPerformanceCounter(0LL);
      v7 = *(_QWORD *)(a1 + 1256);
      v8 = v6.QuadPart - PerformanceCounter.QuadPart;
      if ( v7 )
        *(_QWORD *)(a1 + 1256) = (v8 + 4 * v7) / 5;
      else
        *(_QWORD *)(a1 + 1256) = v8;
    }
    else
    {
      EtwpCompleteBuffer(a1, v4);
    }
  }
  if ( (_InterlockedExchangeAdd64(v1, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v1);
  return KeAbPostRelease((ULONG_PTR)v1);
}
