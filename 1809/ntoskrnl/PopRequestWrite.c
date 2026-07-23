/*
 * XREFs of PopRequestWrite @ 0x14056B5F4
 * Callers:
 *     PopWriteHiberImage @ 0x14056B4C8 (PopWriteHiberImage.c)
 *     PopCompressCallback @ 0x14056B5D0 (PopCompressCallback.c)
 * Callees:
 *     MmGetPhysicalAddress @ 0x1401211A0 (MmGetPhysicalAddress.c)
 *     IoAddTriageDumpDataBlock @ 0x140191E2C (IoAddTriageDumpDataBlock.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     PopInternalAddToDumpFile @ 0x1402D3514 (PopInternalAddToDumpFile.c)
 *     PopCheckpointSystemSleep @ 0x14056A714 (PopCheckpointSystemSleep.c)
 *     PopGetIoLocation @ 0x14056B930 (PopGetIoLocation.c)
 *     ConsumerGetBuffer @ 0x14056B988 (ConsumerGetBuffer.c)
 *     PopHiberChecksumHiberFileData @ 0x14056BA44 (PopHiberChecksumHiberFileData.c)
 *     ProducerConsumerBufferComplete @ 0x14056BED8 (ProducerConsumerBufferComplete.c)
 *     PopGetRemainingHibernateRangeDataSize @ 0x14057DCE4 (PopGetRemainingHibernateRangeDataSize.c)
 *     PopRecordHibernateDiagnosticInfo @ 0x14057E190 (PopRecordHibernateDiagnosticInfo.c)
 *     MmGetNumberOfPhysicalPages @ 0x1406269DC (MmGetNumberOfPhysicalPages.c)
 */

char __fastcall PopRequestWrite(ULONG_PTR BugCheckParameter3, __int64 a2, unsigned int a3)
{
  unsigned int v3; // ebx
  ULONG_PTR RemainingHibernateRangeDataSize; // rsi
  __int64 v5; // r13
  __int64 v6; // r14
  ULONG_PTR i; // rdi
  int v8; // ecx
  __int64 v9; // rdx
  ULONG_PTR v10; // r12
  __int64 v11; // rcx
  __int64 IoLocation; // rax
  __int64 v13; // r15
  unsigned __int64 v14; // r15
  __int64 Buffer; // rax
  __int64 v16; // r13
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rbp
  unsigned __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // r8
  __int64 v23; // rcx
  unsigned __int64 v24; // rdx
  __int64 v25; // r12
  unsigned int v26; // edi
  unsigned __int64 v27; // rbp
  ULONG_PTR v28; // r15
  unsigned __int64 v29; // rax
  ULONG_PTR BugCheckParameter4; // r15
  unsigned __int64 v31; // rax
  ULONG_PTR v32; // r15
  unsigned __int64 v33; // rax
  int v34; // ecx
  _QWORD v36[2]; // [rsp+38h] [rbp-60h] BYREF
  ULONG_PTR v37; // [rsp+48h] [rbp-50h]
  __int64 NumberOfPhysicalPages; // [rsp+50h] [rbp-48h] BYREF
  __int64 v41; // [rsp+B8h] [rbp+20h] BYREF

  v3 = a3;
  RemainingHibernateRangeDataSize = 0LL;
  v5 = a2;
  v6 = *(_QWORD *)(BugCheckParameter3 + 320);
  for ( i = BugCheckParameter3; ; *(_QWORD *)(i + 336) = v27 )
  {
    while ( 1 )
    {
      v8 = *(_DWORD *)(i + 328);
      if ( !v8 )
        break;
      v18 = __rdtsc();
      v19 = v18;
      if ( v8 == 1 )
      {
        BugCheckParameter4 = (*(int (__fastcall **)(__int64, ULONG_PTR, __int64))(*(_QWORD *)(i + 168) + 128LL))(
                               2LL,
                               i + 368,
                               v6);
        v31 = __rdtsc();
        qword_140418C40 += (((unsigned __int64)HIDWORD(v31) << 32) | (unsigned int)v31) - v19;
        if ( (BugCheckParameter4 & 0x80000000) != 0LL )
        {
          PopCheckpointSystemSleep(0x15u);
          PopInternalAddToDumpFile(i, 0x1C8u, 0LL);
          PopInternalAddToDumpFile(*(_QWORD *)(i + 168), 0x178u, 0LL);
          KeBugCheckEx(0xA0u, 0x10AuLL, 0xAuLL, i, BugCheckParameter4);
        }
        if ( (_DWORD)BugCheckParameter4 == 259 )
          return RemainingHibernateRangeDataSize;
        *(_DWORD *)(i + 328) = 2;
      }
      else
      {
        qword_140418C38 += v18 - *(_QWORD *)(i + 336);
        ProducerConsumerBufferComplete(v5, v5 + 48, *(_QWORD *)(i + 384), *(unsigned int *)(i + 360));
        v20 = __rdtsc();
        qword_140418C60 += (((unsigned __int64)HIDWORD(v20) << 32) | (unsigned int)v20) - v19;
        qword_140418E08 += *(_QWORD *)(i + 360);
        dword_140418E10 += (unsigned __int64)(*(_QWORD *)(i + 352) + 4095LL) >> 12;
        v21 = *(_QWORD *)(i + 352);
        *(_QWORD *)(i + 376) += v21;
        *(_QWORD *)(i + 344) += v21;
        *(_QWORD *)(i + 352) = 0LL;
        *(_DWORD *)(i + 328) = 0;
      }
    }
    if ( (PopWatchdogTimerCount & 0x1F) == 0 )
      off_1403FF600[0]();
    v9 = *(_QWORD *)(i + 376);
    v10 = i + 368;
    v11 = *(_QWORD *)(i + 160);
    ++PopWatchdogTimerCount;
    v37 = i + 368;
    IoLocation = PopGetIoLocation(v11, v9, v36);
    v13 = *(unsigned int *)(i + 408);
    *(_QWORD *)(i + 368) = IoLocation;
    v14 = (v13 << 12) - *(_QWORD *)(i + 344) % (unsigned __int64)(v13 << 12);
    if ( v14 >= v36[0] )
      v14 = v36[0];
    v41 = v14;
    Buffer = ConsumerGetBuffer(v5, &v41, v3);
    v16 = Buffer;
    if ( !Buffer )
      break;
    v22 = *(_QWORD *)(i + 376);
    v23 = v41;
    *(_QWORD *)(i + 384) = Buffer;
    *(_QWORD *)(i + 360) = v23;
    if ( v22 + v14 > qword_1404188D0 )
    {
      PopCheckpointSystemSleep(0x16u);
      if ( (unsigned int)(*(_DWORD *)(i + 184) - 4) <= 1 )
        RemainingHibernateRangeDataSize = PopGetRemainingHibernateRangeDataSize(i);
      NumberOfPhysicalPages = MmGetNumberOfPhysicalPages(0LL);
      IoAddTriageDumpDataBlock((int)&NumberOfPhysicalPages, v34 + 8);
      PopRecordHibernateDiagnosticInfo(i);
      IoAddTriageDumpDataBlock((int)&PopHibernateDiagnosticInfo, 128);
      KeBugCheckEx(0xA0u, 0xBuLL, qword_1404188D0, *(unsigned int *)(i + 184), RemainingHibernateRangeDataSize);
    }
    PopHiberChecksumHiberFileData(i, 1, v22, Buffer, v23);
    *(_QWORD *)v6 = 0LL;
    *(_DWORD *)(v6 + 40) = v14;
    *(_QWORD *)(v6 + 24) = v16;
    v24 = ((v16 & 0xFFF) + v14 + 4095) >> 12;
    *(_DWORD *)(v6 + 44) = v16 & 0xFFF;
    v36[1] = v24;
    *(_WORD *)(v6 + 10) = 1;
    *(_WORD *)(v6 + 8) = 8 * (v24 + 6);
    *(_QWORD *)(v6 + 32) = v16 & 0xFFFFFFFFFFFFF000uLL;
    if ( v24 )
    {
      v25 = 0LL;
      v26 = 0;
      do
      {
        ++v26;
        *(_QWORD *)(v6 + 8 * v25 + 48) = (unsigned __int64)MmGetPhysicalAddress((PVOID)(v16 + (v25 << 12))).QuadPart >> 12;
        v25 = v26;
      }
      while ( v26 < ((v16 & 0xFFF) + v14 + 4095) >> 12 );
      v3 = a3;
      RemainingHibernateRangeDataSize = 0LL;
      i = BugCheckParameter3;
      v10 = v37;
    }
    *(_QWORD *)(i + 352) = v14;
    if ( !*(_BYTE *)(i + 392) )
      goto LABEL_18;
    v27 = __rdtsc();
    v32 = (*(int (__fastcall **)(__int64, ULONG_PTR, __int64, _QWORD))(*(_QWORD *)(i + 168) + 128LL))(1LL, v10, v6, 0LL);
    v33 = __rdtsc();
    qword_140418C40 += (((unsigned __int64)HIDWORD(v33) << 32) | (unsigned int)v33) - v27;
    if ( (_DWORD)v32 == -1073741637 )
    {
      *(_BYTE *)(i + 392) = 0;
    }
    else
    {
      if ( (v32 & 0x80000000) != 0LL || PopSimulateHiberBugcheck == 2 )
      {
        PopCheckpointSystemSleep(0x15u);
        PopInternalAddToDumpFile(i, 0x1C8u, 0LL);
        PopInternalAddToDumpFile(*(_QWORD *)(i + 168), 0x178u, 0LL);
        KeBugCheckEx(0xA0u, 0x10AuLL, 0xAuLL, i, v32);
      }
      *(_DWORD *)(i + 328) = ((_DWORD)v32 != 259) + 1;
    }
    if ( !*(_BYTE *)(i + 392) )
    {
LABEL_18:
      v27 = __rdtsc();
      v28 = (*(int (__fastcall **)(ULONG_PTR, __int64))(*(_QWORD *)(i + 168) + 64LL))(v10, v6);
      v29 = __rdtsc();
      qword_140418C40 += (((unsigned __int64)HIDWORD(v29) << 32) | (unsigned int)v29) - v27;
      if ( (v28 & 0x80000000) != 0LL )
      {
        PopCheckpointSystemSleep(0x15u);
        PopInternalAddToDumpFile(i, 0x1C8u, 0LL);
        PopInternalAddToDumpFile(*(_QWORD *)(i + 168), 0x178u, 0LL);
        KeBugCheckEx(0xA0u, 0x10AuLL, 0xAuLL, i, v28);
      }
      *(_DWORD *)(i + 328) = 2;
    }
    v5 = a2;
  }
  LOBYTE(RemainingHibernateRangeDataSize) = v41 == 0;
  return RemainingHibernateRangeDataSize;
}
