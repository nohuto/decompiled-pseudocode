/*
 * XREFs of PopDecompressHiberBlocks @ 0x14056AE60
 * Callers:
 *     PopRestoreHiberContext @ 0x14056A770 (PopRestoreHiberContext.c)
 * Callees:
 *     MmMapMemoryDumpMdlEx @ 0x140144520 (MmMapMemoryDumpMdlEx.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     PopInternalAddToDumpFile @ 0x1402D3514 (PopInternalAddToDumpFile.c)
 *     RtlDecompressBufferProgress @ 0x1402FA180 (RtlDecompressBufferProgress.c)
 *     PopCheckpointSystemSleep @ 0x14056A714 (PopCheckpointSystemSleep.c)
 *     ConsumerPeekAndConsumeBuffer @ 0x14056AF90 (ConsumerPeekAndConsumeBuffer.c)
 *     ProducerConsumerBufferComplete @ 0x14056BED8 (ProducerConsumerBufferComplete.c)
 *     PopHiberCheckForDebugBreak @ 0x14056BFF8 (PopHiberCheckForDebugBreak.c)
 *     PopReadProducerConsumerBuffer @ 0x14057E11C (PopReadProducerConsumerBuffer.c)
 *     ProducerConsumerCopyFromContextBuffer @ 0x14057E968 (ProducerConsumerCopyFromContextBuffer.c)
 *     BgDisplayProgressIndicator @ 0x140952260 (BgDisplayProgressIndicator.c)
 */

__int64 __fastcall PopDecompressHiberBlocks(
        _DWORD *BugCheckParameter3,
        _QWORD *a2,
        int a3,
        char a4,
        void (__fastcall *a5)(_DWORD *))
{
  unsigned int v5; // esi
  char *v6; // r12
  int v10; // r9d
  __int64 Number; // rcx
  __int64 v12; // rax
  __int64 v13; // r13
  unsigned __int64 v15; // rdi
  unsigned __int64 v16; // rax
  _DWORD *ProducerConsumerBuffer; // r12
  unsigned int v18; // edi
  __int64 v19; // rax
  unsigned __int64 v20; // rdx
  char *v21; // r9
  _QWORD *v22; // r8
  int v23; // eax
  unsigned __int64 v24; // rdi
  __int64 v25; // r10
  unsigned __int64 v26; // rcx
  unsigned __int64 v27; // rcx
  unsigned int v28; // edi
  unsigned int v29; // ecx
  unsigned __int64 v30; // rdi
  unsigned __int64 v31; // rax
  __int64 v32; // r9
  unsigned __int64 v33; // rax
  _DWORD *v34; // r13
  unsigned __int64 v35; // r12
  int v36; // ecx
  unsigned __int64 v37; // rax
  unsigned int v38; // ecx
  unsigned int v40; // [rsp+54h] [rbp-ACh] BYREF
  int v41; // [rsp+58h] [rbp-A8h] BYREF
  unsigned __int64 v42; // [rsp+60h] [rbp-A0h]
  void (__fastcall *v43)(_DWORD *); // [rsp+68h] [rbp-98h]
  char *v44; // [rsp+70h] [rbp-90h]
  unsigned __int64 v45; // [rsp+78h] [rbp-88h]
  __int64 v46; // [rsp+80h] [rbp-80h]
  char v47; // [rsp+88h] [rbp-78h] BYREF
  _DWORD *v48; // [rsp+90h] [rbp-70h]
  __int64 v49; // [rsp+98h] [rbp-68h]
  __int64 v50; // [rsp+A0h] [rbp-60h] BYREF
  __int16 v51; // [rsp+A8h] [rbp-58h]
  __int16 v52; // [rsp+AAh] [rbp-56h]
  __int64 v53; // [rsp+B8h] [rbp-48h]
  __int64 v54; // [rsp+C0h] [rbp-40h]
  unsigned int v55; // [rsp+C8h] [rbp-38h]
  int v56; // [rsp+CCh] [rbp-34h]
  char v57; // [rsp+D0h] [rbp-30h] BYREF
  char v58; // [rsp+150h] [rbp+50h] BYREF

  v5 = 0;
  LODWORD(v6) = (_DWORD)qword_140418958;
  v43 = a5;
  v46 = 0LL;
  v44 = (char *)qword_140418958;
  v41 = 0;
  while ( 1 )
  {
    PopHiberCheckForDebugBreak();
    if ( !qword_140418DB8 && BugCheckParameter3[48] == KeGetCurrentPrcb()->Number && byte_140418900 )
      qword_140418DB8 = KeQueryPerformanceCounter(0LL).QuadPart;
    Number = KeGetCurrentPrcb()->Number;
    if ( BugCheckParameter3[48] == (_DWORD)Number
      && !byte_140418901
      && (!byte_140418900 || (unsigned int)dword_1404188E4 > 0x640) )
    {
      v15 = __rdtsc();
      if ( byte_14043D5C8 )
      {
        LOBYTE(Number) = 1;
        BgDisplayProgressIndicator(Number);
        byte_14043D6B1 = 1;
      }
      v16 = __rdtsc();
      qword_140418DA0 += (((unsigned __int64)HIDWORD(v16) << 32) | (unsigned int)v16) - v15;
    }
    v40 = 4;
    v12 = ConsumerPeekAndConsumeBuffer((_DWORD)v6, (unsigned int)&v40, a3, v10, (__int64)a2);
    v13 = v12;
    if ( !v12 )
      break;
    ProducerConsumerBuffer = (_DWORD *)PopReadProducerConsumerBuffer(
                                         v12,
                                         4,
                                         (unsigned int)&v47,
                                         (_DWORD)v6,
                                         (__int64)a2,
                                         1);
    v48 = ProducerConsumerBuffer;
    v18 = 8 * (unsigned __int8)*ProducerConsumerBuffer;
    v19 = PopReadProducerConsumerBuffer((int)v13 + 4, v18, (unsigned int)&v58, (_DWORD)v44, (__int64)a2, 1);
    v21 = &v57;
    v22 = (_QWORD *)v19;
    v23 = *ProducerConsumerBuffer;
    v42 = v13 + v18 + 4LL;
    v24 = 0LL;
    if ( (_BYTE)v23 )
    {
      v25 = (unsigned __int8)v23;
      do
      {
        v26 = *v22 >> 4;
        v20 = v26 + (*v22 & 0xFLL) + 1;
        v24 += (*v22 & 0xFLL) + 1;
        while ( v26 < v20 )
        {
          *(_QWORD *)v21 = v26++;
          v21 += 8;
        }
        ++v22;
        --v25;
      }
      while ( v25 );
    }
    if ( v24 > (unsigned int)BugCheckParameter3[71] )
    {
      PopCheckpointSystemSleep(0x1Fu);
      PopInternalAddToDumpFile((__int64)BugCheckParameter3, 0x1C8u, 0LL);
      KeBugCheckEx(0xA0u, 0x107uLL, 0xAuLL, (ULONG_PTR)BugCheckParameter3, 0LL);
    }
    v27 = a2[1];
    v28 = (_DWORD)v24 << 12;
    v49 = v28;
    v50 = 0LL;
    v51 = 8 * (((unsigned __int64)v28 >> 12) + 6);
    v52 = 0;
    v54 = 0LL;
    v56 = 0;
    v55 = v28;
    MmMapMemoryDumpMdlEx(v27, v20, (__int64)&v50, 1);
    v29 = (*ProducerConsumerBuffer >> 8) & 0x3FFFFF;
    v6 = v44;
    v45 = __rdtsc();
    if ( v29 == v28 )
    {
      ProducerConsumerCopyFromContextBuffer(v53, v28, v44, v42);
      a2[9] += __rdtsc() - v45;
      v30 = __rdtsc();
      ProducerConsumerBufferComplete(v6, v6 + 48, v13, v40);
      v31 = __rdtsc();
      a2[10] += (((unsigned __int64)HIDWORD(v31) << 32) | (unsigned int)v31) - v30;
    }
    else
    {
      ProducerConsumerCopyFromContextBuffer(a2[3], v29, v44, v42);
      v32 = v40;
      v42 = __rdtsc();
      a2[9] += v42 - v45;
      ProducerConsumerBufferComplete(v6, v6 + 48, v13, v32);
      v33 = __rdtsc();
      a2[10] += (((unsigned __int64)HIDWORD(v33) << 32) | (unsigned int)v33) - v42;
      if ( v43 )
      {
        v43(BugCheckParameter3);
        v46 = qword_140418D90;
      }
      v34 = v48;
      v35 = __rdtsc();
      v36 = RtlDecompressBufferProgress(
              PopCompressMethodMap[(unsigned __int64)(unsigned int)*v48 >> 30],
              v53,
              v28,
              a2[3],
              (*v48 >> 8) & 0x3FFFFF,
              (__int64)&v41,
              a2[2],
              (__int64)v43,
              (__int64)BugCheckParameter3);
      v37 = __rdtsc();
      if ( v36 < 0 || v41 != v28 )
      {
        BugCheckParameter3[47] = -1073741246;
        PopCheckpointSystemSleep(0x1Fu);
        PopInternalAddToDumpFile((__int64)BugCheckParameter3, 0x1C8u, 0LL);
        KeBugCheckEx(0xA0u, 0x107uLL, 0xAuLL, (ULONG_PTR)BugCheckParameter3, 0LL);
      }
      a2[8] += v37 - v35;
      if ( v43 )
        a2[8] = v46 + a2[8] - qword_140418D90;
      LODWORD(v6) = (_DWORD)v44;
      v38 = *v34 >> 30;
      *(_QWORD *)((char *)a2 + (-(__int64)(v38 < 2) & 0xFFFFFFFFFFFFFFF8uLL) + 112) += v49;
      *(_QWORD *)((char *)a2 + (-(__int64)(v38 < 2) & 0xFFFFFFFFFFFFFFF8uLL) + 96) += v37 - v42;
    }
    if ( !a4 )
      return v5;
  }
  return (unsigned int)-2147483614;
}
