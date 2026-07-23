/*
 * XREFs of PopRequestRead @ 0x14057E27C
 * Callers:
 *     PopRestoreHiberContext @ 0x14056A770 (PopRestoreHiberContext.c)
 *     PopDecompressCallback @ 0x14057DCC0 (PopDecompressCallback.c)
 * Callees:
 *     MmGetPhysicalAddress @ 0x1401211A0 (MmGetPhysicalAddress.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     PopInternalAddToDumpFile @ 0x1402D3514 (PopInternalAddToDumpFile.c)
 *     PopCheckpointSystemSleep @ 0x14056A714 (PopCheckpointSystemSleep.c)
 *     PopGetIoLocation @ 0x14056B930 (PopGetIoLocation.c)
 *     PopHiberChecksumHiberFileData @ 0x14056BA44 (PopHiberChecksumHiberFileData.c)
 *     ProducerConsumerBufferComplete @ 0x14056BED8 (ProducerConsumerBufferComplete.c)
 *     ProducerGetBuffer @ 0x14056BF68 (ProducerGetBuffer.c)
 *     PopHiberCheckForDebugBreak @ 0x14056BFF8 (PopHiberCheckForDebugBreak.c)
 */

void __fastcall PopRequestRead(ULONG_PTR BugCheckParameter3, __int64 a2, char a3)
{
  __int64 v3; // r14
  unsigned int v4; // r13d
  __int64 v6; // rbp
  int v8; // ecx
  unsigned __int64 v9; // rdi
  unsigned __int64 v10; // rax
  __int64 v11; // rax
  bool v12; // zf
  __int64 v13; // rax
  unsigned __int64 v14; // rbp
  int v15; // eax
  ULONG_PTR BugCheckParameter4; // rdi
  unsigned __int64 v17; // rax
  __int64 IoLocation; // rax
  __int64 v19; // rdi
  unsigned __int64 v20; // rdi
  unsigned int v21; // r8d
  unsigned __int64 Buffer; // rax
  unsigned __int64 v23; // r12
  unsigned __int64 v24; // rbp
  __int64 v25; // r15
  char v26; // r15
  int v27; // ebp
  unsigned __int64 v28; // rax
  unsigned __int64 v29; // rax
  unsigned __int64 v30; // rcx
  unsigned __int64 v31; // [rsp+70h] [rbp+8h] BYREF
  __int64 v32; // [rsp+78h] [rbp+10h]

  v32 = a2;
  v3 = *(_QWORD *)(BugCheckParameter3 + 320);
  v4 = 0;
  v6 = a2;
  if ( *(_QWORD *)(BugCheckParameter3 + 400) )
  {
    v8 = *(_DWORD *)(BugCheckParameter3 + 328);
    do
    {
      if ( v8 )
      {
        if ( v8 != 1 )
        {
          PopHiberChecksumHiberFileData(
            BugCheckParameter3,
            0,
            *(_QWORD *)(BugCheckParameter3 + 376),
            *(_QWORD *)(BugCheckParameter3 + 384),
            *(_QWORD *)(BugCheckParameter3 + 360));
          v9 = __rdtsc();
          qword_140418D68 += v9 - *(_QWORD *)(BugCheckParameter3 + 336);
          ProducerConsumerBufferComplete(
            v6,
            v6 + 32,
            *(_QWORD *)(BugCheckParameter3 + 384),
            *(_DWORD *)(BugCheckParameter3 + 360));
          v10 = __rdtsc();
          qword_140418D98 += (((unsigned __int64)HIDWORD(v10) << 32) | (unsigned int)v10) - v9;
          v11 = *(_QWORD *)(BugCheckParameter3 + 360);
          v12 = *(_QWORD *)(BugCheckParameter3 + 400) == v11;
          *(_QWORD *)(BugCheckParameter3 + 400) -= v11;
          if ( v12 )
            *(_QWORD *)(v6 + 32) = *(_QWORD *)(v6 + 40);
          v13 = *(_QWORD *)(BugCheckParameter3 + 352);
          v8 = 0;
          *(_QWORD *)(BugCheckParameter3 + 376) += v13;
          *(_QWORD *)(BugCheckParameter3 + 344) += v13;
          *(_QWORD *)(BugCheckParameter3 + 352) = 0LL;
          *(_DWORD *)(BugCheckParameter3 + 328) = 0;
          continue;
        }
        ++qword_140418D78;
        v14 = __rdtsc();
        v15 = (*(__int64 (__fastcall **)(__int64, ULONG_PTR, __int64))(*(_QWORD *)(BugCheckParameter3 + 168) + 160LL))(
                2LL,
                BugCheckParameter3 + 368,
                v3);
        BugCheckParameter4 = v15;
        if ( v15 < 0 )
        {
          PopCheckpointSystemSleep(0x1Du);
          PopInternalAddToDumpFile(BugCheckParameter3, 0x1C8u, 0LL);
          PopInternalAddToDumpFile(*(_QWORD *)(BugCheckParameter3 + 168), 0x178u, 0LL);
          KeBugCheckEx(0xA0u, 0x10AuLL, 0xAuLL, BugCheckParameter3, BugCheckParameter4);
        }
        v17 = __rdtsc();
        qword_140418D90 += (((unsigned __int64)HIDWORD(v17) << 32) | (unsigned int)v17) - v14;
        if ( (_DWORD)BugCheckParameter4 == 259 )
          return;
        *(_DWORD *)(BugCheckParameter3 + 328) = 2;
        v8 = 2;
      }
      else
      {
        PopHiberCheckForDebugBreak();
        IoLocation = PopGetIoLocation(
                       *(_QWORD *)(BugCheckParameter3 + 160),
                       *(_QWORD *)(BugCheckParameter3 + 376),
                       &v31);
        v19 = *(unsigned int *)(BugCheckParameter3 + 408);
        *(_QWORD *)(BugCheckParameter3 + 368) = IoLocation;
        v20 = (v19 << 12) - *(_QWORD *)(BugCheckParameter3 + 344) % (unsigned __int64)(v19 << 12);
        if ( v20 >= v31 )
          v20 = v31;
        v21 = v20;
        if ( v20 >= *(_QWORD *)(BugCheckParameter3 + 400) )
          v21 = *(_QWORD *)(BugCheckParameter3 + 400);
        Buffer = ProducerGetBuffer(v6, v20, v21, a3);
        v23 = Buffer;
        if ( !Buffer )
          return;
        *(_QWORD *)(BugCheckParameter3 + 384) = Buffer;
        *(_QWORD *)v3 = 0LL;
        *(_DWORD *)(v3 + 40) = v20;
        *(_QWORD *)(v3 + 24) = Buffer;
        *(_WORD *)(v3 + 10) = 1;
        v24 = ((Buffer & 0xFFF) + v20 + 4095) >> 12;
        *(_QWORD *)(v3 + 32) = Buffer & 0xFFFFFFFFFFFFF000uLL;
        *(_DWORD *)(v3 + 44) = Buffer & 0xFFF;
        *(_WORD *)(v3 + 8) = 8 * (v24 + 6);
        if ( v24 )
        {
          v25 = 0LL;
          do
          {
            ++v4;
            *(_QWORD *)(v3 + 8 * v25 + 48) = (unsigned __int64)MmGetPhysicalAddress((PVOID)(v23 + (v25 << 12))).QuadPart >> 12;
            v25 = v4;
          }
          while ( v4 < v24 );
        }
        v26 = *(_BYTE *)(BugCheckParameter3 + 392);
        v4 = 0;
        *(_QWORD *)(BugCheckParameter3 + 336) = __rdtsc();
        v27 = (*(__int64 (__fastcall **)(bool, ULONG_PTR, __int64))(*(_QWORD *)(BugCheckParameter3 + 168) + 160LL))(
                v26 != 0,
                BugCheckParameter3 + 368,
                v3);
        if ( v27 == -1073741637 )
        {
          if ( !v26 )
            goto LABEL_34;
          *(_BYTE *)(BugCheckParameter3 + 392) = 0;
          *(_QWORD *)(BugCheckParameter3 + 336) = __rdtsc();
          v27 = (*(__int64 (__fastcall **)(_QWORD, ULONG_PTR, __int64))(*(_QWORD *)(BugCheckParameter3 + 168) + 160LL))(
                  0LL,
                  BugCheckParameter3 + 368,
                  v3);
        }
        if ( v27 < 0 || PopSimulateHiberBugcheck == 8 )
        {
LABEL_34:
          PopCheckpointSystemSleep(0x1Du);
          PopInternalAddToDumpFile(*(_QWORD *)(BugCheckParameter3 + 168), 0x178u, 0LL);
          KeBugCheckEx(0xA0u, 0x10AuLL, 0xAuLL, BugCheckParameter3, v27);
        }
        v28 = __rdtsc();
        qword_140418D90 += (((unsigned __int64)HIDWORD(v28) << 32) | (unsigned int)v28)
                         - *(_QWORD *)(BugCheckParameter3 + 336);
        v29 = v20;
        v30 = *(_QWORD *)(BugCheckParameter3 + 400);
        *(_QWORD *)(BugCheckParameter3 + 352) = v20;
        if ( v20 >= v30 )
          v29 = v30;
        *(_QWORD *)(BugCheckParameter3 + 360) = v29;
        if ( !v26 || !v27 )
        {
          v6 = v32;
          v8 = 2;
          *(_DWORD *)(BugCheckParameter3 + 328) = 2;
          continue;
        }
        *(_DWORD *)(BugCheckParameter3 + 328) = 1;
        v8 = 1;
      }
      v6 = v32;
    }
    while ( *(_QWORD *)(BugCheckParameter3 + 400) );
  }
}
