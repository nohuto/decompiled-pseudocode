/*
 * XREFs of AlpcpProcessSynchronousRequest @ 0x140634A50
 * Callers:
 *     NtAlpcSendWaitReceivePort @ 0x140633040 (NtAlpcSendWaitReceivePort.c)
 *     LpcpRequestWaitReplyPort @ 0x1406A5748 (LpcpRequestWaitReplyPort.c)
 *     LpcSendWaitReceivePort @ 0x14084ABF0 (LpcSendWaitReceivePort.c)
 *     LpcpReplyWaitReplyPort @ 0x14084ACA0 (LpcpReplyWaitReplyPort.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     ExAcquirePushLockSharedEx @ 0x14004EE20 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x1400913F0 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x140091500 (ExfTryToWakePushLock.c)
 *     ObReferenceObjectSafe @ 0x14010C190 (ObReferenceObjectSafe.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     RtlpInterlockedPushEntrySList @ 0x1401C5570 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     AlpcpAvailableBufferSize @ 0x140583068 (AlpcpAvailableBufferSize.c)
 *     AlpcpReadMessageData @ 0x140615164 (AlpcpReadMessageData.c)
 *     AlpcpCancelMessage @ 0x14061690C (AlpcpCancelMessage.c)
 *     AlpcpUnlockMessage @ 0x140616E4C (AlpcpUnlockMessage.c)
 *     AlpcpClearOwnerPortMessage @ 0x140617260 (AlpcpClearOwnerPortMessage.c)
 *     AlpcpSendLegacySynchronousRequest @ 0x14061B900 (AlpcpSendLegacySynchronousRequest.c)
 *     ProbeForWrite @ 0x14062AA80 (ProbeForWrite.c)
 *     AlpcpExposeAttributes @ 0x1406341B0 (AlpcpExposeAttributes.c)
 *     AlpcpReceiveSynchronousReply @ 0x1406352B0 (AlpcpReceiveSynchronousReply.c)
 *     AlpcpSendMessage @ 0x140635910 (AlpcpSendMessage.c)
 *     AlpcpExposeCapturedContextAttribute @ 0x14069D0BC (AlpcpExposeCapturedContextAttribute.c)
 *     AlpcpReturnMessageOnInsufficientBuffer @ 0x1406B752C (AlpcpReturnMessageOnInsufficientBuffer.c)
 *     AlpcpGetDataFromUserVaSafe @ 0x1406D5CE0 (AlpcpGetDataFromUserVaSafe.c)
 *     AlpcpEnterFreeEventMessageLog @ 0x14084B790 (AlpcpEnterFreeEventMessageLog.c)
 *     AlpcpEnterStateChangeEventMessageLog @ 0x14084B7F8 (AlpcpEnterStateChangeEventMessageLog.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408D7880 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall AlpcpProcessSynchronousRequest(
        __int64 a1,
        unsigned int a2,
        __int128 *a3,
        __int64 a4,
        unsigned __int64 a5,
        unsigned __int64 *a6,
        int *Address,
        LARGE_INTEGER *a8,
        unsigned __int8 a9,
        unsigned __int8 a10)
{
  int v11; // r12d
  unsigned __int8 v12; // di
  __int64 v13; // r8
  __int64 v14; // rax
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rcx
  int *v19; // rax
  ULONG v20; // r9d
  ULONG v21; // eax
  ULONG v22; // ecx
  ULONG v23; // eax
  bool v24; // zf
  unsigned int v25; // ecx
  int v26; // ecx
  int v27; // eax
  int v28; // ecx
  int v29; // edx
  __int64 v30; // rax
  int v31; // ecx
  void **v32; // r12
  void *v33; // r15
  int v35; // eax
  unsigned int v36; // edi
  ULONG_PTR v37; // rdi
  int v38; // edx
  int v39; // eax
  unsigned __int64 v40; // rax
  __int16 v41; // ax
  __int16 v42; // ax
  __int16 v43; // cx
  char *v44; // rdx
  size_t v45; // rax
  void *v46; // r9
  size_t v47; // rsi
  const void *v48; // rdx
  void *v49; // rcx
  signed __int64 v50; // rax
  int v51; // ecx
  ULONG_PTR v52; // rsi
  char v53; // dl
  signed __int64 BugCheckParameter4; // rcx
  __int64 v55; // r13
  _SLIST_HEADER *v56; // rcx
  void *v57; // rcx
  int v58; // [rsp+30h] [rbp-E8h]
  ULONG_PTR BugCheckParameter2; // [rsp+38h] [rbp-E0h] BYREF
  char v60; // [rsp+40h] [rbp-D8h]
  size_t v61; // [rsp+48h] [rbp-D0h]
  unsigned int v62; // [rsp+50h] [rbp-C8h]
  unsigned __int64 v63; // [rsp+58h] [rbp-C0h]
  __int64 v64; // [rsp+60h] [rbp-B8h]
  unsigned __int64 v65; // [rsp+68h] [rbp-B0h]
  __int64 v66; // [rsp+70h] [rbp-A8h] BYREF
  int v67[2]; // [rsp+80h] [rbp-98h] BYREF
  __int64 v68; // [rsp+88h] [rbp-90h]
  __int64 v69; // [rsp+90h] [rbp-88h]
  __int64 v70; // [rsp+98h] [rbp-80h]
  __int64 v71; // [rsp+A0h] [rbp-78h]
  __int64 v72; // [rsp+A8h] [rbp-70h]
  __int64 v73; // [rsp+B0h] [rbp-68h]
  __int64 v74; // [rsp+B8h] [rbp-60h]
  _BYTE v75[88]; // [rsp+C0h] [rbp-58h] BYREF
  int v79; // [rsp+160h] [rbp+48h]

  *(_QWORD *)v67 = 0LL;
  v68 = 0LL;
  v69 = 0LL;
  v70 = 0LL;
  v71 = 0LL;
  v72 = 0LL;
  v73 = 0LL;
  v74 = 0LL;
  v11 = 0;
  v58 = 0;
  v63 = -1LL;
  v12 = a9;
  if ( a9 )
  {
    v13 = 0x7FFFFFFF0000LL;
    if ( a8 )
    {
      v14 = 0x7FFFFFFF0000LL;
      if ( (unsigned __int64)a8 < 0x7FFFFFFF0000LL )
        v14 = (__int64)a8;
      v66 = *(_QWORD *)v14;
      a8 = (LARGE_INTEGER *)&v66;
    }
    if ( (a2 & 0xC0000000) == 0x80000000 )
    {
      if ( (a5 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v15 = 0x7FFFFFFF0000LL;
      if ( a5 < 0x7FFFFFFF0000LL )
        v15 = a5;
      *(_BYTE *)v15 = *(_BYTE *)v15;
      *(_BYTE *)(v15 + 23) = *(_BYTE *)(v15 + 23);
    }
    else
    {
      if ( (a5 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v16 = 0x7FFFFFFF0000LL;
      if ( a5 < 0x7FFFFFFF0000LL )
        v16 = a5;
      *(_BYTE *)v16 = *(_BYTE *)v16;
      *(_BYTE *)(v16 + 39) = *(_BYTE *)(v16 + 39);
    }
    if ( a6 )
    {
      v17 = 0x7FFFFFFF0000LL;
      if ( (unsigned __int64)a6 < 0x7FFFFFFF0000LL )
        v17 = (__int64)a6;
      v63 = *(_QWORD *)v17;
      v18 = 0x7FFFFFFF0000LL;
      if ( (unsigned __int64)a6 < 0x7FFFFFFF0000LL )
        v18 = (__int64)a6;
      *(_QWORD *)v18 = *(_QWORD *)v18;
    }
    if ( Address )
    {
      v60 = 1;
      v19 = (int *)0x7FFFFFFF0000LL;
      if ( (unsigned __int64)Address < 0x7FFFFFFF0000LL )
        v19 = Address;
      v11 = *v19;
      v20 = 8;
      if ( (a2 & 0xC0000000) == 0x80000000 )
      {
        if ( v11 < 0 )
          v20 = 20;
        v21 = v20 + 16;
        if ( (v11 & 0x40000000) == 0 )
          v21 = v20;
        v22 = v21 + 20;
        if ( (v11 & 0x20000000) == 0 )
          v22 = v21;
        v23 = v22 + 16;
        if ( (v11 & 0x10000000) == 0 )
          v23 = v22;
        v24 = (v11 & 0x8000000) == 0;
        v25 = v23 + 24;
        v20 = 4;
      }
      else
      {
        v26 = 8;
        if ( v11 < 0 )
          v26 = 32;
        v27 = v26 + 32;
        if ( (v11 & 0x40000000) == 0 )
          v27 = v26;
        v28 = v27 + 32;
        if ( (v11 & 0x20000000) == 0 )
          v28 = v27;
        v29 = v28 + 24;
        if ( (v11 & 0x10000000) == 0 )
          v29 = v28;
        v23 = v29 + 24;
        if ( (v11 & 0x8000000) == 0 )
          v23 = v29;
        v24 = (v11 & 0x4000000) == 0;
        v25 = v23 + 8;
      }
      if ( v24 )
        v25 = v23;
      v30 = v25 + 8;
      if ( (v11 & 0x2000000) == 0 )
        v30 = v25;
      if ( (unsigned __int64)(v30 - 1) > 0xFFE )
      {
        ProbeForWrite(Address, (unsigned int)v30, v20);
        v58 = v11;
      }
      else
      {
        if ( ((v20 - 1) & (unsigned int)Address) != 0 )
          ExRaiseDatatypeMisalignment();
        if ( (unsigned __int64)Address < 0x7FFFFFFF0000LL )
          v13 = (__int64)Address;
        *(_BYTE *)v13 = *(_BYTE *)v13;
        *(_BYTE *)((unsigned int)v30 + v13 - 1) = *(_BYTE *)((unsigned int)v30 + v13 - 1);
        v58 = v11;
      }
    }
    else
    {
      v11 = 0;
    }
  }
  else
  {
    if ( a6 )
      v63 = *a6;
    if ( Address )
    {
      v11 = *Address;
      v58 = *Address;
    }
  }
  v31 = *(_DWORD *)(a1 + 416);
  if ( (*(_BYTE *)(a1 + 416) & 6) != 6 )
  {
    v33 = (void *)a1;
    v64 = a1;
    goto LABEL_70;
  }
  v32 = *(void ***)(a1 + 16);
  ExAcquirePushLockSharedEx((ULONG_PTR)(v32 - 2), 0LL);
  v33 = *v32;
  v64 = (__int64)v33;
  if ( v33 && ObReferenceObjectSafe((__int64)v33) )
  {
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)v32 - 2, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)v32 - 2);
    KeAbPostRelease((ULONG_PTR)(v32 - 2));
    v31 = *(_DWORD *)(a1 + 416);
    v11 = v58;
    v12 = a9;
LABEL_70:
    *(_QWORD *)v67 = a1;
    LODWORD(v73) = a2;
    if ( (v31 & 0x1000) != 0 )
      v35 = AlpcpSendLegacySynchronousRequest(a1, (__int64)v67, a3, v12);
    else
      v35 = AlpcpSendMessage(v67, a3, a4, v12);
    v36 = v35;
    if ( v35 < 0 )
      goto LABEL_132;
    BugCheckParameter2 = 0LL;
    *(_QWORD *)v67 = v33;
    v36 = AlpcpReceiveSynchronousReply((int)v67, a10, (int)&BugCheckParameter2, v11, a8);
    v79 = v36;
    if ( v36 )
      goto LABEL_132;
    v37 = BugCheckParameter2;
    v38 = *(unsigned __int16 *)(BugCheckParameter2 + 240);
    v39 = 24;
    if ( (a2 & 0xC0000000) != 0x80000000 )
      v39 = 40;
    v40 = (unsigned int)(v38 + v39);
    v62 = v40;
    if ( a6 && (v61 = v40, v40 > v63) )
    {
      v79 = AlpcpReturnMessageOnInsufficientBuffer(v33, BugCheckParameter2, v75);
      if ( v79 == -1073741789 )
      {
        AlpcpUnlockMessage(v37);
        *a6 = v61;
        AlpcpExposeCapturedContextAttribute(a2, v75, (unsigned int)v11, Address);
        v36 = -1073741789;
LABEL_132:
        if ( v33 != (void *)a1 )
          ObfDereferenceObject(v33);
        return v36;
      }
      AlpcpCancelMessage((__int64)v33, v37, 0x10000);
    }
    else
    {
      if ( (a2 & 0xC0000000) == 0x80000000 )
      {
        *(_WORD *)a5 = v38;
        LODWORD(v61) = *(unsigned __int16 *)(v37 + 240) + 24;
        *(_WORD *)(a5 + 2) = v61;
        v41 = *(_WORD *)(v37 + 246);
        if ( v41 )
          v42 = v41 - 16;
        else
          v42 = 0;
        *(_WORD *)(a5 + 6) = v42;
        v43 = *(_WORD *)(v37 + 244) | 0x1000;
        *(_WORD *)(a5 + 4) = v43;
        *(_DWORD *)(a5 + 8) = *(_DWORD *)(v37 + 248);
        *(_DWORD *)(a5 + 12) = *(_DWORD *)(v37 + 256);
        *(_DWORD *)(a5 + 16) = *(_DWORD *)(v37 + 264);
        *(_DWORD *)(a5 + 20) = *(_DWORD *)(v37 + 272);
        *(_DWORD *)(a5 + 20) = *(_DWORD *)(v37 + 272);
        if ( (*(_DWORD *)(a1 + 256) & 0x1000) != 0 )
          *(_WORD *)(a5 + 4) = v43 & 0xC00F;
        v44 = (char *)(a5 + 24);
        if ( *(_QWORD *)(v37 + 176) )
          AlpcpGetDataFromUserVaSafe(v37, v44);
        else
          AlpcpReadMessageData(v37, v44);
      }
      else
      {
        *(_OWORD *)a5 = *(_OWORD *)(BugCheckParameter2 + 240);
        *(_OWORD *)(a5 + 16) = *(_OWORD *)(v37 + 256);
        *(_QWORD *)(a5 + 32) = *(_QWORD *)(v37 + 272);
        if ( (*(_DWORD *)(a1 + 256) & 0x1000) != 0 )
          *(_WORD *)(a5 + 4) &= 0xC00Fu;
        LODWORD(v61) = *(unsigned __int16 *)(v37 + 242);
        v65 = a5 + 40;
        if ( *(_QWORD *)(v37 + 176) )
        {
          AlpcpGetDataFromUserVaSafe(v37, a5 + 40);
        }
        else
        {
          v45 = AlpcpAvailableBufferSize(v37);
          v61 = v45;
          v47 = *(unsigned __int16 *)(v37 + 240);
          v48 = (const void *)(v37 + 280);
          v49 = v46;
          if ( v47 > v45 )
          {
            memmove(v46, v48, v45);
            v47 -= v61;
            v49 = (void *)(v65 + v61);
            v48 = *(const void **)(v37 + 224);
          }
          memmove(v49, v48, v47);
        }
      }
      if ( a6 )
        *a6 = v62;
      if ( Address )
        AlpcpExposeAttributes(a1, a2, v37, v11, (__int64)Address);
      if ( (*(_DWORD *)(v37 + 40) & 0x200) != 0 && !*(_QWORD *)(v37 + 96) && (*(_DWORD *)(a1 + 416) & 0x2000) != 0 )
      {
        v50 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 440), v37, 0LL);
        v37 = BugCheckParameter2;
        if ( !v50 )
        {
          if ( AlpcpMessageLogEnabled )
            AlpcpEnterFreeEventMessageLog(BugCheckParameter2);
          ++*(_WORD *)(v37 - 30);
          *(_DWORD *)(v37 + 264) |= 0x80000000;
          AlpcpClearOwnerPortMessage(v37);
        }
      }
      if ( AlpcpMessageLogEnabled )
        AlpcpEnterStateChangeEventMessageLog(v37);
      v51 = 0;
      v52 = v37 - 48;
      v53 = *(_BYTE *)(v37 - 48 + 16);
      if ( (v53 & 1) != 0 )
      {
        v51 = 0x10000 - *(__int16 *)(v52 + 18);
        *(_BYTE *)(v52 + 16) = v53 & 0xFE;
        *(_WORD *)(v52 + 18) = 0;
      }
      if ( v51 > 0 )
      {
        BugCheckParameter4 = -v51 + _InterlockedExchangeAdd64((volatile signed __int64 *)(v52 + 24), -v51);
        if ( BugCheckParameter4 <= 0 )
        {
          if ( BugCheckParameter4 )
            KeBugCheckEx(0x18u, 0LL, BugCheckParameter2, 0x28uLL, BugCheckParameter4);
          v55 = AlpcpRegisteredTypes[*(unsigned __int8 *)(v52 + 17)];
          (*(void (__fastcall **)(ULONG_PTR))(v55 + 24))(BugCheckParameter2);
          if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v37 - 16), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock((volatile signed __int64 *)(v37 - 16));
          KeAbPostRelease(v37 - 16);
          if ( (*(int (__fastcall **)(ULONG_PTR))(v55 + 40))(BugCheckParameter2) >= 0 )
          {
            if ( (*(_BYTE *)(v52 + 16) & 2) != 0 )
            {
              v56 = &AlpcpLookasides + 8 * (unsigned __int64)*(unsigned int *)(v55 + 8);
              ++*((_DWORD *)&v56[1].HeaderX64 + 3);
              if ( LOWORD(v56->Alignment) < LOWORD(v56[1].Alignment) )
              {
                RtlpInterlockedPushEntrySList(v56, (PSLIST_ENTRY)(v37 - 48));
              }
              else
              {
                ++LODWORD(v56[2].Alignment);
                ((void (__fastcall *)(ULONG_PTR))v56[3].Region)(v37 - 48);
              }
            }
            else
            {
              v57 = (void *)(v37 - 48);
              if ( *(_QWORD *)(v55 + 48) )
                (*((void (__fastcall **)(void *))&AlpcpLookasides + 16 * (unsigned __int64)*(unsigned int *)(v55 + 8)
                                                                  + 7))(v57);
              else
                ExFreePoolWithTag(v57, *(_DWORD *)(v55 + 4));
            }
          }
          v37 = 0LL;
        }
      }
      if ( v37 )
      {
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v52 + 32), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)(v52 + 32));
        KeAbPostRelease(v52 + 32);
      }
    }
    v36 = v79;
    goto LABEL_132;
  }
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)v32 - 2, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)v32 - 2);
  KeAbPostRelease((ULONG_PTR)(v32 - 2));
  return 3221225527LL;
}
