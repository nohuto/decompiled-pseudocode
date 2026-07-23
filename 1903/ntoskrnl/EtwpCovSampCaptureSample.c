/*
 * XREFs of EtwpCovSampCaptureSample @ 0x1403358F4
 * Callers:
 *     EtwpCovSampProfileInterrupt @ 0x140335CB0 (EtwpCovSampProfileInterrupt.c)
 *     EtwpCoverageSamplerContextSwap @ 0x1403362C8 (EtwpCoverageSamplerContextSwap.c)
 *     EtwpCoverageSamplerPageFault @ 0x140336490 (EtwpCoverageSamplerPageFault.c)
 *     EtwpCoverageSamplerReadyThread @ 0x1403366A0 (EtwpCoverageSamplerReadyThread.c)
 * Callees:
 *     EtwpCovSampCaptureBufferAddIP @ 0x140334D2C (EtwpCovSampCaptureBufferAddIP.c)
 *     EtwpCovSampCaptureBufferGet @ 0x140334D64 (EtwpCovSampCaptureBufferGet.c)
 *     EtwpCovSampCaptureBufferQueue @ 0x140334E74 (EtwpCovSampCaptureBufferQueue.c)
 *     EtwpCovSampCaptureKernelStack @ 0x140335494 (EtwpCovSampCaptureKernelStack.c)
 *     EtwpCovSampCaptureQueueApc @ 0x140335558 (EtwpCovSampCaptureQueueApc.c)
 *     EtwpCovSampCaptureReleaseToLookaside @ 0x140335880 (EtwpCovSampCaptureReleaseToLookaside.c)
 *     EtwpCovSampSafeForUserAddressCapture @ 0x140335EC8 (EtwpCovSampSafeForUserAddressCapture.c)
 *     EtwpCovSampCaptureUserAddresses @ 0x14090163C (EtwpCovSampCaptureUserAddresses.c)
 */

char __fastcall EtwpCovSampCaptureSample(unsigned __int64 a1, unsigned int a2)
{
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v4; // rdi
  __int64 v5; // rbp
  __int64 v7; // rax
  unsigned int v8; // r9d
  unsigned int v9; // ecx
  __int64 v10; // rcx
  __int64 v11; // rcx
  int v13; // [rsp+50h] [rbp+18h] BYREF
  unsigned int v14; // [rsp+58h] [rbp+20h]

  CurrentThread = KeGetCurrentThread();
  v4 = 0LL;
  v5 = qword_140432588;
  v7 = (*(_QWORD *)(qword_140432588 + 8) >> 4) & 0x1FFLL;
  v8 = ((unsigned int)*(_QWORD *)(qword_140432588 + 8) >> 13) & 0x3FFFF;
  _BitScanReverse(&v9, v8);
  v14 = v9;
  v10 = *(_QWORD *)(*((_QWORD *)KeGetCurrentPrcb()->ExSaPageArray + v9 - 2) + 8LL * ((1 << v9) ^ v8) + 8);
  if ( *(_DWORD *)(v10 + 8 * v7 + 60) )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v10 + 8 * v7 + 304));
  }
  else
  {
    LOBYTE(v7) = a1 - 1;
    if ( a1 - 1 > 0xFFFF7FFFFFFFFFFEuLL )
    {
      v7 = EtwpCovSampCaptureBufferGet(qword_140432588);
      v4 = v7;
      if ( v7 )
      {
        EtwpCovSampCaptureBufferAddIP(v7, a1);
        EtwpCovSampCaptureKernelStack(v11, a2);
        LOBYTE(v7) = EtwpCovSampCaptureBufferQueue(v5, v4);
        v4 = 0LL;
      }
      a1 = 0LL;
    }
    if ( (CurrentThread->MiscFlags & 0x400) == 0 )
    {
      LODWORD(v7) = *((_DWORD *)&CurrentThread[1].SwapListEntry + 2);
      if ( (v7 & 1) == 0 && (CurrentThread->MiscFlags & 0x4000) != 0 )
      {
        if ( CurrentThread->Teb )
        {
          LODWORD(v7) = CurrentThread->Process->FreezeCount + ((*(_DWORD *)&CurrentThread->Process->0 >> 3) & 1);
          if ( !(_DWORD)v7 && !CurrentThread->SuspendCount )
          {
            LODWORD(v7) = EtwpCovSampSafeForUserAddressCapture(0LL, &v13);
            if ( (int)v7 >= 0 )
            {
              if ( !_interlockedbittestandset((volatile signed __int32 *)&CurrentThread[1].SwapListEntry + 2, 0x17u) )
              {
                LOBYTE(v7) = EtwpCovSampCaptureUserAddresses(v5, a1);
                _InterlockedAnd((volatile signed __int32 *)&CurrentThread[1].SwapListEntry + 2, 0xFF7FFFFF);
              }
            }
            else if ( !v13 )
            {
              LOBYTE(v7) = EtwpCovSampCaptureQueueApc(a1);
            }
          }
        }
      }
    }
    if ( v4 )
      LOBYTE(v7) = EtwpCovSampCaptureReleaseToLookaside(v5, *(_QWORD *)(v4 + 48), (_SLIST_ENTRY *)v4);
  }
  return v7;
}
