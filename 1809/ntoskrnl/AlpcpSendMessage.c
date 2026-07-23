/*
 * XREFs of AlpcpSendMessage @ 0x140635910
 * Callers:
 *     NtWaitForWorkViaWorkerFactory @ 0x140059B50 (NtWaitForWorkViaWorkerFactory.c)
 *     NtReplyWaitReceivePortEx @ 0x140614CE0 (NtReplyWaitReceivePortEx.c)
 *     AlpcpSendLegacySynchronousRequest @ 0x14061B900 (AlpcpSendLegacySynchronousRequest.c)
 *     NtAlpcSendWaitReceivePort @ 0x140633040 (NtAlpcSendWaitReceivePort.c)
 *     AlpcpProcessSynchronousRequest @ 0x140634A50 (AlpcpProcessSynchronousRequest.c)
 *     LpcRequestPort @ 0x1406A2F10 (LpcRequestPort.c)
 *     NtReplyPort @ 0x1406B4090 (NtReplyPort.c)
 *     NtRequestPort @ 0x1406C0AD0 (NtRequestPort.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x14004EE20 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x1400913F0 (ExfReleasePushLockShared.c)
 *     ObfReferenceObjectWithTag @ 0x1400ACD30 (ObfReferenceObjectWithTag.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     RtlpInterlockedPopEntrySList @ 0x1401C5530 (RtlpInterlockedPopEntrySList.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     AlpcpAvailableBufferSize @ 0x140583068 (AlpcpAvailableBufferSize.c)
 *     AlpcpCancelMessage @ 0x14061690C (AlpcpCancelMessage.c)
 *     AlpcpUnlockMessage @ 0x140616E4C (AlpcpUnlockMessage.c)
 *     AlpcpDispatchReplyToPort @ 0x140616EDC (AlpcpDispatchReplyToPort.c)
 *     AlpcpValidateMessage @ 0x1406173AC (AlpcpValidateMessage.c)
 *     AlpcpChargePagedPoolQuota @ 0x140619460 (AlpcpChargePagedPoolQuota.c)
 *     AlpcpDereferenceBlobEx @ 0x140619C70 (AlpcpDereferenceBlobEx.c)
 *     AlpcpReleaseAttributes @ 0x14061B818 (AlpcpReleaseAttributes.c)
 *     PsReleaseProcessWakeCounter @ 0x14061D390 (PsReleaseProcessWakeCounter.c)
 *     AlpcpReleaseViewAttribute @ 0x14061DCAC (AlpcpReleaseViewAttribute.c)
 *     AlpcpDispatchReplyToWaitingThread @ 0x140635550 (AlpcpDispatchReplyToWaitingThread.c)
 *     AlpcpDispatchNewMessage @ 0x140636360 (AlpcpDispatchNewMessage.c)
 *     AlpcpCaptureAttributes @ 0x140637400 (AlpcpCaptureAttributes.c)
 *     AlpcpLookupMessage @ 0x140637990 (AlpcpLookupMessage.c)
 *     PspChargeProcessWakeCounter @ 0x140637C90 (PspChargeProcessWakeCounter.c)
 *     AlpcpCaptureMessageData @ 0x1406A54A8 (AlpcpCaptureMessageData.c)
 *     AlpcpEnterAllocationEventMessageLog @ 0x14084B6C4 (AlpcpEnterAllocationEventMessageLog.c)
 *     AlpcpValidateDataInformation @ 0x14084BDF8 (AlpcpValidateDataInformation.c)
 */

__int64 __fastcall AlpcpSendMessage(__int64 a1, __m256i *a2, __int64 a3, char a4)
{
  char v4; // r11
  __int64 v6; // r12
  unsigned int v7; // r13d
  int v8; // eax
  __int64 result; // rax
  __int64 v10; // rax
  unsigned __int16 v11; // dx
  int v12; // r14d
  bool v13; // cl
  __int16 v14; // bx
  int v15; // r10d
  char v16; // dl
  bool v17; // al
  unsigned __int16 v18; // cx
  __int16 v19; // bx
  int v20; // esi
  PSLIST_ENTRY v21; // rax
  ULONG_PTR v22; // rdi
  signed __int64 BugCheckParameter4; // rax
  int v24; // ebx
  signed __int32 v25; // eax
  int v26; // ebx
  int v27; // edx
  __int64 v28; // rax
  __int64 v29; // r8
  _QWORD *v30; // rbx
  bool v31; // di
  bool v32; // zf
  unsigned __int64 v33; // rdx
  _QWORD *v34; // rax
  _QWORD *v35; // r12
  __int64 v36; // rdx
  unsigned int v37; // ebx
  __int64 v38; // rcx
  __int64 v39; // rcx
  __int64 v40; // rbx
  ULONG_PTR v41; // rcx
  ULONG_PTR v42; // rcx
  ULONG_PTR v43; // rcx
  __int64 v44; // rcx
  __int64 v45; // rcx
  __int8 *v46; // rcx
  unsigned __int64 v47; // rax
  unsigned __int64 v48; // rdx
  __int64 v49; // rcx
  unsigned __int16 v50; // [rsp+40h] [rbp-F8h]
  int v51; // [rsp+48h] [rbp-F0h]
  __m256i v52; // [rsp+50h] [rbp-E8h] BYREF
  __int64 v53; // [rsp+70h] [rbp-C8h]
  ULONG_PTR v54; // [rsp+78h] [rbp-C0h] BYREF
  __int64 v55; // [rsp+80h] [rbp-B8h]
  __int64 v56; // [rsp+88h] [rbp-B0h]
  __m128i v57; // [rsp+90h] [rbp-A8h]
  __int64 v58; // [rsp+A0h] [rbp-98h]
  _QWORD v59[17]; // [rsp+B0h] [rbp-88h] BYREF

  v4 = a4;
  memset(v59, 0, 72);
  v6 = *(_QWORD *)a1;
  v55 = v6;
  v7 = *(_DWORD *)(a1 + 48);
  v8 = *(_DWORD *)(v6 + 416);
  if ( (v8 & 0x10) != 0 )
    return 3221225537LL;
  if ( (v8 & 8) != 0 )
    return 3221227271LL;
  if ( (v8 & 0x20) != 0 && (*(_DWORD *)(v6 + 256) & 0x1000) == 0 )
    return 3221225527LL;
  if ( a4 )
  {
    v10 = 0x7FFFFFFF0000LL;
    if ( (v7 & 0xC0000000) == 0x80000000 )
    {
      if ( (unsigned __int64)a2 < 0x7FFFFFFF0000LL )
        v10 = (__int64)a2;
      v57 = *(__m128i *)v10;
      v58 = *(_QWORD *)(v10 + 16);
      v11 = _mm_cvtsi128_si32(v57);
      v52.m256i_i16[0] = v11;
      v52.m256i_i16[1] = v11 + 40;
      v52.m256i_i32[1] = _mm_cvtsi128_si32(_mm_srli_si128(v57, 4));
      v52.m256i_i64[1] = (unsigned int)_mm_cvtsi128_si32(_mm_srli_si128(v57, 8));
      v52.m256i_i64[2] = (unsigned int)_mm_cvtsi128_si32(_mm_srli_si128(v57, 12));
      v12 = v58;
      v52.m256i_i32[6] = v58;
      v53 = HIDWORD(v58);
    }
    else
    {
      if ( (unsigned __int64)a2 < 0x7FFFFFFF0000LL )
        v10 = (__int64)a2;
      v52 = *(__m256i *)v10;
      v53 = *(_QWORD *)(v10 + 32);
      v12 = v52.m256i_i32[6];
      v11 = v52.m256i_i16[0];
    }
    v50 = v11;
    v13 = (*(_DWORD *)(v6 + 256) & 0x1000) != 0 || (v7 & 2) != 0;
    if ( v11 < (unsigned __int16)(v11 + 40) )
    {
      if ( v13 )
      {
        if ( (unsigned __int64)v11 + 40 <= v52.m256i_u16[1] )
        {
          v52.m256i_i16[1] = v11 + 40;
LABEL_25:
          v14 = v52.m256i_i16[2] & 0x7FFF;
          v52.m256i_i16[2] &= ~0x8000u;
          if ( v52.m256i_i16[3] )
          {
            result = AlpcpValidateDataInformation(a2, &v52);
            if ( (int)result < 0 )
              return result;
            v4 = a4;
          }
          v15 = *(_DWORD *)(v6 + 256);
          goto LABEL_36;
        }
      }
      else if ( v11 + 40LL == v52.m256i_u16[1] )
      {
        goto LABEL_25;
      }
    }
    return 3221225485LL;
  }
  v52 = *a2;
  v53 = a2[1].m256i_i64[0];
  v16 = (*(_DWORD *)(v6 + 256) & 0x1000) != 0 || (v7 & 2) != 0;
  result = AlpcpValidateMessage((unsigned __int16 *)&v52, v16);
  if ( (int)result < 0 )
    return result;
  v12 = v52.m256i_i32[6];
  v14 = v52.m256i_i16[2];
  v50 = v52.m256i_i16[0];
LABEL_36:
  v17 = (v15 & 0x1000) != 0 || (v7 & 2) != 0;
  v18 = (unsigned __int8)v14;
  v19 = v14 & 0xFF00;
  if ( v17 )
  {
    if ( (v7 & 1) != 0 )
    {
      if ( v12 )
      {
        v20 = 0;
        v19 = 0;
        v18 = 2;
        goto LABEL_61;
      }
      return 3221225485LL;
    }
    if ( (v7 & 0x10000) != 0 )
    {
      if ( v18 )
      {
        if ( (unsigned int)v18 - 3 > 3 && v18 != 13 || (v7 & 2) == 0 )
          return 3221225485LL;
      }
      else
      {
        v18 = 3;
      }
    }
    else if ( v18 )
    {
      if ( v18 == 1 )
      {
        if ( !v12 )
          return 3221225485LL;
        v20 = 0;
LABEL_61:
        v52.m256i_i32[6] = v12;
        if ( !v4 )
          LODWORD(v53) = 0;
        goto LABEL_63;
      }
      if ( (unsigned int)v18 - 7 > 2 || (v7 & 2) == 0 )
        return 3221225485LL;
    }
    else
    {
      v18 = 1;
    }
    v20 = 0;
    v12 = 0;
    goto LABEL_61;
  }
  if ( v18 == 7 && !v4 )
    goto LABEL_72;
  if ( v12 <= 0 )
  {
    if ( (v7 & 0x10000) != 0 )
      v18 = 3;
    else
      v18 = 1;
LABEL_72:
    v20 = 0;
    goto LABEL_73;
  }
  v20 = 0;
  v18 = ((v7 & 0x10000) != 0) + 1;
LABEL_73:
  if ( !v12 && *(_OWORD *)&v52.m256i_u64[1] != 0LL )
    return 3221227266LL;
LABEL_63:
  v52.m256i_i16[2] = v18 | v19 & 0xEFFF;
  if ( (unsigned __int64)v52.m256i_u16[1] > *(_QWORD *)(v6 + 272) )
    return 3221225519LL;
  if ( (v7 & 0x20000) != 0 )
  {
    if ( (*((_DWORD *)&KeGetCurrentThread()[1].SwapListEntry + 3) & 0x20) != 0 )
      return 3221225473LL;
    v12 = v52.m256i_i32[6];
    v50 = v52.m256i_i16[0];
  }
  if ( !v12 )
  {
    ++dword_1404D81D4;
    v21 = RtlpInterlockedPopEntrySList(&AlpcpLookasides);
    if ( !v21 )
    {
      ++dword_1404D81D8;
      v21 = (PSLIST_ENTRY)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))qword_1404D81F0)(
                            (unsigned int)dword_1404D81E4,
                            (unsigned int)dword_1404D81EC,
                            (unsigned int)dword_1404D81E8);
      if ( !v21 )
        return 3221225626LL;
    }
    v21[1].Next = 0LL;
    *((_QWORD *)&v21[1].Next + 1) = 0LL;
    *((_QWORD *)&v21[2].Next + 1) = 0LL;
    v21[2].Next = 0LL;
    BYTE1(v21[1].Next) = 2;
    *((_QWORD *)&v21->Next + 1) = v21;
    v21->Next = v21;
    LOBYTE(v21[1].Next) |= 2u;
    *((_QWORD *)&v21[1].Next + 1) = 1LL;
    v22 = (ULONG_PTR)&v21[3];
    if ( v21 == (PSLIST_ENTRY)-48LL )
      return 3221225626LL;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&v21[2], 0LL);
    *(_BYTE *)(v22 - 32) |= 1u;
    BugCheckParameter4 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v22 - 24), 0x10000uLL) + 0x10000;
    if ( BugCheckParameter4 <= 0 )
      KeBugCheckEx(0x18u, 0LL, v22, 0x26uLL, BugCheckParameter4);
    v24 = *(_DWORD *)(v22 + 264);
    memset((void *)v22, 0, 0x118uLL);
    *(_WORD *)(v22 + 242) = 40;
    --*(_WORD *)(v22 - 30);
    *(_DWORD *)(v22 + 264) = v24 & 0x7FFFFFFF;
    do
      v25 = _InterlockedIncrement(&AlpcpNextCallbackId);
    while ( !v25 );
    *(_DWORD *)(v22 + 272) = v25;
    if ( AlpcpMessageLogEnabled )
      AlpcpEnterAllocationEventMessageLog(v22);
    *(_WORD *)(v22 + 242) = 40;
    v26 = 0;
    v12 = v52.m256i_i32[6];
    v50 = v52.m256i_i16[0];
    goto LABEL_122;
  }
  v7 |= 0x10u;
  v26 = AlpcpLookupMessage(v6, (unsigned int)v12, (unsigned int)v53, &v54);
  v51 = v26;
  v22 = v54;
  if ( v26 < 0 )
    goto LABEL_121;
  v27 = *(_DWORD *)(v54 + 40);
  if ( (v27 & 0x80u) != 0 )
    goto LABEL_121;
  v28 = *(_QWORD *)(v54 + 24);
  v56 = v28;
  if ( v28 )
  {
    v29 = *(_QWORD *)(v54 + 16);
    if ( v29 != v6 )
    {
      if ( (v27 & 7) == 0 )
      {
        v30 = *(_QWORD **)(v28 + 16);
        ExAcquirePushLockSharedEx((ULONG_PTR)(v30 - 2), 0LL);
        if ( ((*(_DWORD *)(v56 + 416) >> 1) & 3) == 2 )
          v31 = *v30 == v6 || v30[1] == v6;
        else
          v31 = v30[2] == v6;
        if ( _InterlockedCompareExchange64(v30 - 2, 0LL, 17LL) != 17 )
          ExfReleasePushLockShared(v30 - 2);
        KeAbPostRelease((ULONG_PTR)(v30 - 2));
        v32 = !v31;
        v22 = v54;
        if ( !v32 )
        {
          v12 = v52.m256i_i32[6];
          v50 = v52.m256i_i16[0];
          v26 = v51;
          goto LABEL_106;
        }
LABEL_119:
        AlpcpUnlockMessage(v22);
        return 3221225506LL;
      }
      if ( (*(_BYTE *)(v6 + 416) & 6) != 6 )
        goto LABEL_119;
      v34 = *(_QWORD **)(v6 + 16);
      if ( !v34 || *v34 != v29 )
        goto LABEL_119;
    }
    if ( (v27 & 7) != 3 || (v27 & 0x2000) != 0 )
      goto LABEL_119;
  }
LABEL_106:
  if ( *(_QWORD *)(v22 + 32) && !*(_QWORD *)(v22 + 48) && (v7 & 0x30000) == 0 )
  {
    v33 = 792LL;
    if ( *(_QWORD *)(v22 + 224) )
      v33 = *(_QWORD *)(v22 + 232) + 792LL;
    v26 = AlpcpChargePagedPoolQuota((__int64)KeGetCurrentThread()->ApcState.Process, v33);
    if ( v26 < 0 )
    {
      AlpcpUnlockMessage(v54);
      return (unsigned int)v26;
    }
    *(_QWORD *)(v22 + 48) = KeGetCurrentThread()->ApcState.Process;
    ObfReferenceObjectWithTag(KeGetCurrentThread()->ApcState.Process, 0x63706C41u);
    v12 = v52.m256i_i32[6];
    v50 = v52.m256i_i16[0];
    v22 = v54;
  }
LABEL_121:
  if ( v26 < 0 )
    return (unsigned int)v26;
LABEL_122:
  v35 = 0LL;
  v36 = a3;
  if ( a3 )
  {
    v35 = v59;
    v26 = AlpcpCaptureAttributes(v55, v7, a3, v22, v59);
    v36 = a3;
  }
  if ( v12 && ((*(_DWORD *)(v22 + 40) & 0x200) != 0 || (*(_DWORD *)(v22 + 40) & 0x80) != 0) )
  {
    v37 = (*(_DWORD *)(v22 + 40) & 0x80) != 0 ? 0xC0000703 : 0;
    if ( v36 )
      AlpcpReleaseAttributes(v35);
    AlpcpReleaseAttributes((_QWORD *)(v22 + 104));
    AlpcpCancelMessage(v55, v22, 0x10000);
    return v37;
  }
  else if ( v26 >= 0 )
  {
    if ( v12 )
    {
      v38 = *(_QWORD *)(v22 + 208);
      if ( v38 )
      {
        PspChargeProcessWakeCounter((PVOID)(v38 & 0xFFFFFFFFFFFFFFF8uLL), -1, 1, 0LL);
        *(_QWORD *)(v22 + 208) = 0LL;
      }
      v39 = *(_QWORD *)(v22 + 216);
      if ( v39 )
      {
        PsReleaseProcessWakeCounter(v39);
        *(_QWORD *)(v22 + 216) = 0LL;
      }
    }
    v40 = 0LL;
    if ( v12 > 0 )
    {
      v40 = *(_QWORD *)(v22 + 160);
      *(_QWORD *)(v22 + 160) = 0LL;
      v41 = *(_QWORD *)(v22 + 136);
      if ( v41 )
      {
        AlpcpDereferenceBlobEx(v41, 1);
        *(_QWORD *)(v22 + 136) = 0LL;
      }
      v42 = *(_QWORD *)(v22 + 144);
      if ( v42 )
      {
        AlpcpReleaseViewAttribute(v42);
        *(_QWORD *)(v22 + 144) = 0LL;
      }
      v43 = *(_QWORD *)(v22 + 152);
      if ( v43 )
      {
        AlpcpDereferenceBlobEx(v43, 1);
        *(_QWORD *)(v22 + 152) = 0LL;
      }
      v44 = *(_QWORD *)(v22 + 160);
      if ( v44 )
      {
        if ( (v44 & 1) != 0 )
          ObfDereferenceObject((PVOID)(v44 & 0xFFFFFFFFFFFFFFFEuLL));
        *(_QWORD *)(v22 + 160) = 0LL;
      }
    }
    if ( v35 )
    {
      *(_OWORD *)(v22 + 104) = *(_OWORD *)v35;
      *(_OWORD *)(v22 + 120) = *((_OWORD *)v35 + 1);
      *(_OWORD *)(v22 + 136) = *((_OWORD *)v35 + 2);
      *(_OWORD *)(v22 + 152) = *((_OWORD *)v35 + 3);
      *(_QWORD *)(v22 + 168) = v35[8];
    }
    if ( v40 )
      *(_QWORD *)(v22 + 160) = v40;
    v45 = 24LL;
    if ( (v7 & 0xC0000000) != 0x80000000 )
      v45 = 40LL;
    v46 = &a2->m256i_i8[v45];
    if ( a4 && (unsigned __int64)&v46[v50] > 0x7FFFFFFF0000LL )
    {
      AlpcpUnlockMessage(v22);
      return 3221225477LL;
    }
    else
    {
      *(_QWORD *)(v22 + 176) = v46;
      v47 = AlpcpAvailableBufferSize(v22);
      if ( v48 > v47 )
        v20 = AlpcpCaptureMessageData(v49, v48, 0LL);
      if ( v20 >= 0 )
      {
        *(_QWORD *)(a1 + 8) = v22;
        *(_DWORD *)(a1 + 52) = *(__int32 *)((char *)v52.m256i_i32 + 2);
        *(_WORD *)(a1 + 56) = v52.m256i_i16[3];
        if ( *(_QWORD *)(v22 + 24) )
        {
          if ( *(_QWORD *)(v22 + 32) )
            return AlpcpDispatchReplyToWaitingThread((__int64 *)a1);
          else
            return AlpcpDispatchReplyToPort(a1);
        }
        else
        {
          return AlpcpDispatchNewMessage();
        }
      }
      else
      {
        AlpcpUnlockMessage(v22);
        return (unsigned int)v20;
      }
    }
  }
  else
  {
    AlpcpUnlockMessage(v22);
    return (unsigned int)v26;
  }
}
