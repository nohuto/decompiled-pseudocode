/*
 * XREFs of AlpcpSendMessage @ 0x1405E1660
 * Callers:
 *     ExpWorkerFactoryStartDeferredWork @ 0x1400457F0 (ExpWorkerFactoryStartDeferredWork.c)
 *     NtAlpcSendWaitReceivePort @ 0x1405DEDB0 (NtAlpcSendWaitReceivePort.c)
 *     AlpcpProcessSynchronousRequest @ 0x1405E0800 (AlpcpProcessSynchronousRequest.c)
 *     LpcRequestPort @ 0x14060CC90 (LpcRequestPort.c)
 *     NtReplyPort @ 0x140644E30 (NtReplyPort.c)
 *     NtReplyWaitReceivePortEx @ 0x140645B30 (NtReplyWaitReceivePortEx.c)
 *     AlpcpSendLegacySynchronousRequest @ 0x140646A90 (AlpcpSendLegacySynchronousRequest.c)
 *     NtRequestPort @ 0x1406E6570 (NtRequestPort.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x14000D6B0 (ObfReferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x14003E260 (ObfDereferenceObject.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14003ED70 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x14003EF30 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x14003F880 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x14009E3E0 (ExfReleasePushLockShared.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 *     RtlpInterlockedPopEntrySList @ 0x1401CB9F0 (RtlpInterlockedPopEntrySList.c)
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     AlpcpAvailableBufferSize @ 0x1405B0AF4 (AlpcpAvailableBufferSize.c)
 *     AlpcpDispatchReplyToWaitingThread @ 0x1405E1230 (AlpcpDispatchReplyToWaitingThread.c)
 *     AlpcpDispatchNewMessage @ 0x1405E20D0 (AlpcpDispatchNewMessage.c)
 *     AlpcpCaptureAttributes @ 0x1405E3090 (AlpcpCaptureAttributes.c)
 *     AlpcpLookupMessage @ 0x1405E3660 (AlpcpLookupMessage.c)
 *     PspChargeProcessWakeCounter @ 0x1405E3900 (PspChargeProcessWakeCounter.c)
 *     AlpcpUnlockMessage @ 0x1405E4A40 (AlpcpUnlockMessage.c)
 *     PsReleaseProcessWakeCounter @ 0x1406451F0 (PsReleaseProcessWakeCounter.c)
 *     AlpcpCancelMessage @ 0x1406476D0 (AlpcpCancelMessage.c)
 *     AlpcpDispatchReplyToPort @ 0x140647BC8 (AlpcpDispatchReplyToPort.c)
 *     AlpcpValidateMessage @ 0x140648020 (AlpcpValidateMessage.c)
 *     AlpcpReleaseAttributes @ 0x1406488D8 (AlpcpReleaseAttributes.c)
 *     AlpcpDereferenceBlobEx @ 0x14064B150 (AlpcpDereferenceBlobEx.c)
 *     AlpcpChargePagedPoolQuota @ 0x14064B958 (AlpcpChargePagedPoolQuota.c)
 *     AlpcpCaptureMessageData @ 0x1406C86F8 (AlpcpCaptureMessageData.c)
 *     AlpcpReleaseViewAttribute @ 0x1406E3868 (AlpcpReleaseViewAttribute.c)
 *     AlpcpEnterAllocationEventMessageLog @ 0x1408859A4 (AlpcpEnterAllocationEventMessageLog.c)
 *     AlpcpValidateDataInformation @ 0x140886110 (AlpcpValidateDataInformation.c)
 */

__int64 __fastcall AlpcpSendMessage(__int64 a1, __m256i *a2, __int64 a3, char a4)
{
  char v4; // r11
  __m256i *v5; // r8
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
  bool v16; // al
  unsigned __int16 v17; // cx
  __int16 v18; // bx
  int v19; // esi
  PSLIST_ENTRY v20; // rax
  ULONG_PTR v21; // rdi
  signed __int64 BugCheckParameter4; // rax
  int v23; // ebx
  signed __int32 v24; // eax
  int v25; // ebx
  int v26; // ecx
  __int64 v27; // rax
  __int64 v28; // rdx
  _QWORD *v29; // rbx
  bool v30; // di
  bool v31; // zf
  __int64 v32; // rdx
  _QWORD *v33; // rax
  _QWORD *v34; // r12
  __int64 v35; // rcx
  unsigned int v36; // eax
  unsigned int v37; // eax
  unsigned int v38; // ebx
  __int64 v39; // rcx
  __int64 v40; // rcx
  __int64 v41; // rbx
  ULONG_PTR v42; // rcx
  ULONG_PTR v43; // rcx
  ULONG_PTR v44; // rcx
  unsigned __int64 v45; // rcx
  __int64 v46; // rcx
  __int8 *v47; // rcx
  unsigned __int64 v48; // rax
  unsigned __int64 v49; // rdx
  __int64 v50; // rcx
  unsigned __int16 v51; // [rsp+40h] [rbp-108h]
  int v52; // [rsp+48h] [rbp-100h]
  __m256i v53; // [rsp+50h] [rbp-F8h] BYREF
  __int64 v54; // [rsp+70h] [rbp-D8h]
  ULONG_PTR BugCheckParameter2; // [rsp+78h] [rbp-D0h] BYREF
  __int64 v56; // [rsp+80h] [rbp-C8h]
  __int64 v57; // [rsp+88h] [rbp-C0h]
  __m128i v58; // [rsp+90h] [rbp-B8h]
  __int64 v59; // [rsp+A0h] [rbp-A8h]
  _QWORD v60[19]; // [rsp+B0h] [rbp-98h] BYREF
  __m256i *v62; // [rsp+158h] [rbp+10h]

  v62 = a2;
  v4 = a4;
  v5 = a2;
  memset(&v53, 0, sizeof(v53));
  v54 = 0LL;
  memset(v60, 0, 72);
  v6 = *(_QWORD *)a1;
  v56 = v6;
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
      v58 = *(__m128i *)v10;
      v59 = *(_QWORD *)(v10 + 16);
      v11 = _mm_cvtsi128_si32(v58);
      v53.m256i_i16[0] = v11;
      v53.m256i_i16[1] = v11 + 40;
      v53.m256i_i32[1] = _mm_cvtsi128_si32(_mm_srli_si128(v58, 4));
      v53.m256i_i64[1] = (unsigned int)_mm_cvtsi128_si32(_mm_srli_si128(v58, 8));
      v53.m256i_i64[2] = (unsigned int)_mm_cvtsi128_si32(_mm_srli_si128(v58, 12));
      v12 = v59;
      v53.m256i_i32[6] = v59;
      v54 = HIDWORD(v59);
    }
    else
    {
      if ( (unsigned __int64)a2 < 0x7FFFFFFF0000LL )
        v10 = (__int64)a2;
      v53 = *(__m256i *)v10;
      v54 = *(_QWORD *)(v10 + 32);
      v12 = v53.m256i_i32[6];
      v11 = v53.m256i_i16[0];
    }
    v51 = v11;
    v13 = (*(_DWORD *)(v6 + 256) & 0x1000) != 0 || (v7 & 2) != 0;
    if ( v11 < (unsigned __int16)(v11 + 40) )
    {
      if ( v13 )
      {
        if ( (unsigned __int64)v11 + 40 <= v53.m256i_u16[1] )
        {
          v53.m256i_i16[1] = v11 + 40;
LABEL_25:
          v14 = v53.m256i_i16[2] & 0x7FFF;
          v53.m256i_i16[2] &= ~0x8000u;
          if ( v53.m256i_i16[3] )
          {
            result = AlpcpValidateDataInformation(v5, &v53);
            if ( (int)result < 0 )
              return result;
            v4 = a4;
          }
          v15 = *(_DWORD *)(v6 + 256);
          goto LABEL_36;
        }
      }
      else if ( v11 + 40LL == v53.m256i_u16[1] )
      {
        goto LABEL_25;
      }
    }
    return 3221225485LL;
  }
  v53 = *a2;
  v54 = a2[1].m256i_i64[0];
  LOBYTE(a2) = (*(_DWORD *)(v6 + 256) & 0x1000) != 0 || (v7 & 2) != 0;
  result = AlpcpValidateMessage(&v53, a2, v5);
  if ( (int)result < 0 )
    return result;
  v12 = v53.m256i_i32[6];
  v14 = v53.m256i_i16[2];
  v51 = v53.m256i_i16[0];
LABEL_36:
  v16 = (v15 & 0x1000) != 0 || (v7 & 2) != 0;
  v17 = (unsigned __int8)v14;
  v18 = v14 & 0xFF00;
  if ( v16 )
  {
    if ( (v7 & 1) != 0 )
    {
      if ( v12 )
      {
        v19 = 0;
        v18 = 0;
        v17 = 2;
        goto LABEL_62;
      }
      return 3221225485LL;
    }
    if ( (v7 & 0x10000) != 0 )
    {
      if ( v17 )
      {
        if ( v17 < 3u || v17 > 6u && v17 != 13 || (v7 & 2) == 0 )
          return 3221225485LL;
      }
      else
      {
        v17 = 3;
      }
    }
    else if ( v17 )
    {
      if ( v17 == 1 )
      {
        if ( !v12 )
          return 3221225485LL;
        v19 = 0;
LABEL_62:
        v53.m256i_i32[6] = v12;
        if ( !v4 )
          LODWORD(v54) = 0;
        goto LABEL_64;
      }
      if ( (unsigned int)v17 - 7 > 2 || (v7 & 2) == 0 )
        return 3221225485LL;
    }
    else
    {
      v17 = 1;
    }
    v19 = 0;
    v12 = 0;
    goto LABEL_62;
  }
  if ( v17 == 7 && !v4 )
    goto LABEL_73;
  if ( v12 <= 0 )
  {
    if ( (v7 & 0x10000) != 0 )
      v17 = 3;
    else
      v17 = 1;
LABEL_73:
    v19 = 0;
    goto LABEL_74;
  }
  v19 = 0;
  v17 = ((v7 & 0x10000) != 0) + 1;
LABEL_74:
  if ( !v12 && *(_OWORD *)&v53.m256i_u64[1] != 0LL )
    return 3221227266LL;
LABEL_64:
  v53.m256i_i16[2] = v17 | v18 & 0xEFFF;
  if ( (unsigned __int64)v53.m256i_u16[1] > *(_QWORD *)(v6 + 272) )
    return 3221225519LL;
  if ( (v7 & 0x20000) != 0 )
  {
    if ( (*((_DWORD *)&KeGetCurrentThread()[1].SwapListEntry + 3) & 0x20) != 0 )
      return 3221225473LL;
    v12 = v53.m256i_i32[6];
    v51 = v53.m256i_i16[0];
  }
  if ( v12 )
  {
    v7 |= 0x10u;
    v25 = AlpcpLookupMessage(v6, v12, v54, a4, (__int64)&BugCheckParameter2);
    v52 = v25;
    v21 = BugCheckParameter2;
    if ( v25 < 0 )
      goto LABEL_121;
    v26 = *(_DWORD *)(BugCheckParameter2 + 40);
    if ( (v26 & 0x80u) != 0 )
      goto LABEL_121;
    v27 = *(_QWORD *)(BugCheckParameter2 + 24);
    v57 = v27;
    if ( !v27 )
    {
LABEL_107:
      if ( *(_QWORD *)(v21 + 32) && !*(_QWORD *)(v21 + 48) && (v7 & 0x30000) == 0 )
      {
        v32 = 792LL;
        if ( *(_QWORD *)(v21 + 224) )
          v32 = *(_QWORD *)(v21 + 232) + 792LL;
        v25 = AlpcpChargePagedPoolQuota(KeGetCurrentThread()->ApcState.Process, v32);
        if ( v25 < 0 )
        {
          AlpcpUnlockMessage(BugCheckParameter2);
          return (unsigned int)v25;
        }
        *(_QWORD *)(v21 + 48) = KeGetCurrentThread()->ApcState.Process;
        ObfReferenceObjectWithTag(KeGetCurrentThread()->ApcState.Process, 0x63706C41u);
        v12 = v53.m256i_i32[6];
        v51 = v53.m256i_i16[0];
        v21 = BugCheckParameter2;
      }
LABEL_121:
      if ( v25 >= 0 )
        goto LABEL_122;
      return (unsigned int)v25;
    }
    v28 = *(_QWORD *)(BugCheckParameter2 + 16);
    if ( v28 != v6 )
    {
      if ( !v28 )
      {
        v29 = *(_QWORD **)(v27 + 16);
        ExAcquirePushLockSharedEx((ULONG_PTR)(v29 - 2), 0LL);
        if ( ((*(_DWORD *)(v57 + 416) >> 1) & 3) == 2 )
          v30 = *v29 == v6 || v29[1] == v6;
        else
          v30 = v29[2] == v6;
        if ( _InterlockedCompareExchange64(v29 - 2, 0LL, 17LL) != 17 )
          ExfReleasePushLockShared(v29 - 2);
        KeAbPostRelease((ULONG_PTR)(v29 - 2));
        v31 = !v30;
        v21 = BugCheckParameter2;
        if ( !v31 )
        {
          v12 = v53.m256i_i32[6];
          v51 = v53.m256i_i16[0];
          v25 = v52;
          goto LABEL_107;
        }
LABEL_119:
        AlpcpUnlockMessage(v21);
        return 3221225506LL;
      }
      if ( (*(_BYTE *)(v6 + 416) & 6) != 6 )
        goto LABEL_119;
      v33 = *(_QWORD **)(v6 + 16);
      if ( !v33 || *v33 != v28 )
        goto LABEL_119;
    }
    if ( (v26 & 7) == 3 )
      goto LABEL_107;
    goto LABEL_119;
  }
  ++dword_140503654;
  v20 = RtlpInterlockedPopEntrySList(&AlpcpLookasides);
  if ( !v20 )
  {
    ++dword_140503658;
    v20 = (PSLIST_ENTRY)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))qword_140503670)(
                          (unsigned int)dword_140503664,
                          (unsigned int)dword_14050366C,
                          (unsigned int)dword_140503668);
    if ( !v20 )
      return 3221225626LL;
  }
  LOWORD(v20[1].Next) = 512;
  *(_DWORD *)((char *)&v20[1].Next + 2) = 0;
  HIWORD(v20[1].Next) = 0;
  *((_QWORD *)&v20[2].Next + 1) = 0LL;
  v20[2].Next = 0LL;
  *((_QWORD *)&v20->Next + 1) = v20;
  v20->Next = v20;
  LOBYTE(v20[1].Next) |= 2u;
  *((_QWORD *)&v20[1].Next + 1) = 1LL;
  v21 = (ULONG_PTR)&v20[3];
  if ( v20 == (PSLIST_ENTRY)-48LL )
    return 3221225626LL;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&v20[2], 0LL);
  *(_BYTE *)(v21 - 32) |= 1u;
  BugCheckParameter4 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v21 - 24), 0x10000uLL) + 0x10000;
  if ( BugCheckParameter4 <= 0 )
    KeBugCheckEx(0x18u, 0LL, v21, 0x26uLL, BugCheckParameter4);
  v23 = *(_DWORD *)(v21 + 264);
  memset((void *)v21, 0, 0x118uLL);
  *(_WORD *)(v21 + 242) = 40;
  --*(_WORD *)(v21 - 30);
  *(_DWORD *)(v21 + 264) = v23 & 0x7FFFFFFF;
  do
    v24 = _InterlockedIncrement(&AlpcpNextCallbackId);
  while ( !v24 );
  *(_DWORD *)(v21 + 272) = v24;
  if ( AlpcpMessageLogEnabled )
    AlpcpEnterAllocationEventMessageLog(v21);
  *(_WORD *)(v21 + 242) = 40;
  v25 = 0;
  v12 = v53.m256i_i32[6];
  v51 = v53.m256i_i16[0];
LABEL_122:
  v34 = 0LL;
  v35 = a3;
  if ( a3 )
  {
    v34 = v60;
    v25 = AlpcpCaptureAttributes(v56, v7, a3, v21, v60);
    v35 = a3;
  }
  if ( !v12 )
    goto LABEL_127;
  v36 = *(_DWORD *)(v21 + 40);
  if ( (v36 & 0x200) != 0 )
  {
    v37 = v36 >> 7;
  }
  else
  {
    v37 = v36 >> 7;
    if ( (v37 & 1) == 0 )
    {
LABEL_127:
      if ( v25 >= 0 )
      {
        if ( v12 )
        {
          v39 = *(_QWORD *)(v21 + 208);
          if ( v39 )
          {
            PspChargeProcessWakeCounter((PVOID)(v39 & 0xFFFFFFFFFFFFFFF8uLL), -1, 1, 0LL);
            *(_QWORD *)(v21 + 208) = 0LL;
          }
          v40 = *(_QWORD *)(v21 + 216);
          if ( v40 )
          {
            PsReleaseProcessWakeCounter(v40, *(unsigned int *)(v21 + 264));
            *(_QWORD *)(v21 + 216) = 0LL;
          }
        }
        v41 = 0LL;
        if ( v12 > 0 )
        {
          v41 = *(_QWORD *)(v21 + 160);
          *(_QWORD *)(v21 + 160) = 0LL;
          v42 = *(_QWORD *)(v21 + 136);
          if ( v42 )
          {
            AlpcpDereferenceBlobEx(v42);
            *(_QWORD *)(v21 + 136) = 0LL;
          }
          v43 = *(_QWORD *)(v21 + 144);
          if ( v43 )
          {
            AlpcpReleaseViewAttribute(v43);
            *(_QWORD *)(v21 + 144) = 0LL;
          }
          v44 = *(_QWORD *)(v21 + 152);
          if ( v44 )
          {
            AlpcpDereferenceBlobEx(v44);
            *(_QWORD *)(v21 + 152) = 0LL;
          }
          v45 = *(_QWORD *)(v21 + 160);
          if ( (v45 & 1) != 0 )
          {
            if ( v45 >= 4 && (v45 & 2) != 0 )
              ObfDereferenceObject((PVOID)(v45 & 0xFFFFFFFFFFFFFFFCuLL));
            *(_QWORD *)(v21 + 160) = 0LL;
          }
        }
        if ( v34 )
        {
          *(_OWORD *)(v21 + 104) = *(_OWORD *)v34;
          *(_OWORD *)(v21 + 120) = *((_OWORD *)v34 + 1);
          *(_OWORD *)(v21 + 136) = *((_OWORD *)v34 + 2);
          *(_OWORD *)(v21 + 152) = *((_OWORD *)v34 + 3);
          *(_QWORD *)(v21 + 168) = v34[8];
        }
        if ( v41 )
          *(_QWORD *)(v21 + 160) = v41;
        v46 = 24LL;
        if ( (v7 & 0xC0000000) != 0x80000000 )
          v46 = 40LL;
        v47 = &v62->m256i_i8[v46];
        if ( a4 && (unsigned __int64)&v47[v51] > 0x7FFFFFFF0000LL )
        {
          AlpcpUnlockMessage(v21);
          return 3221225477LL;
        }
        else
        {
          *(_QWORD *)(v21 + 176) = v47;
          v48 = AlpcpAvailableBufferSize(v21);
          if ( v49 > v48 )
            v19 = AlpcpCaptureMessageData(v50, v49, 0LL);
          if ( v19 >= 0 )
          {
            *(_QWORD *)(a1 + 8) = v21;
            *(_DWORD *)(a1 + 52) = *(__int32 *)((char *)v53.m256i_i32 + 2);
            *(_WORD *)(a1 + 56) = v53.m256i_i16[3];
            if ( *(_QWORD *)(v21 + 24) )
            {
              if ( *(_QWORD *)(v21 + 32) )
                return AlpcpDispatchReplyToWaitingThread(a1);
              else
                return AlpcpDispatchReplyToPort();
            }
            else
            {
              return AlpcpDispatchNewMessage();
            }
          }
          else
          {
            AlpcpUnlockMessage(v21);
            return (unsigned int)v19;
          }
        }
      }
      else
      {
        AlpcpUnlockMessage(v21);
        return (unsigned int)v25;
      }
    }
  }
  v38 = (v37 & 1) != 0 ? 0xC0000703 : 0;
  if ( v35 )
    AlpcpReleaseAttributes(v34);
  AlpcpReleaseAttributes(v21 + 104);
  AlpcpCancelMessage(v56, v21, 0x10000LL);
  return v38;
}
