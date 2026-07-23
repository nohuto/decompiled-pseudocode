/*
 * XREFs of AlpcpProcessSynchronousRequest @ 0x1405E0800
 * Callers:
 *     NtAlpcSendWaitReceivePort @ 0x1405DEDB0 (NtAlpcSendWaitReceivePort.c)
 *     LpcpRequestWaitReplyPort @ 0x1406CAC38 (LpcpRequestWaitReplyPort.c)
 *     LpcSendWaitReceivePort @ 0x140884E70 (LpcSendWaitReceivePort.c)
 *     LpcpReplyWaitReplyPort @ 0x140884F20 (LpcpReplyWaitReplyPort.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14003E260 (ObfDereferenceObject.c)
 *     ExAcquirePushLockSharedEx @ 0x14003EF30 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x14003F880 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x14009E3E0 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x14009E550 (ExfTryToWakePushLock.c)
 *     ObReferenceObjectSafe @ 0x140104560 (ObReferenceObjectSafe.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 *     RtlpInterlockedPushEntrySList @ 0x1401CBA30 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     AlpcpExposeAttributes @ 0x1405DF780 (AlpcpExposeAttributes.c)
 *     AlpcpReceiveSynchronousReply @ 0x1405E1020 (AlpcpReceiveSynchronousReply.c)
 *     AlpcpSendMessage @ 0x1405E1660 (AlpcpSendMessage.c)
 *     AlpcpUnlockMessage @ 0x1405E4A40 (AlpcpUnlockMessage.c)
 *     ProbeForWrite @ 0x1405F07E0 (ProbeForWrite.c)
 *     AlpcpReadMessageData @ 0x140645FCC (AlpcpReadMessageData.c)
 *     AlpcpSendLegacySynchronousRequest @ 0x140646A90 (AlpcpSendLegacySynchronousRequest.c)
 *     AlpcpCancelMessage @ 0x1406476D0 (AlpcpCancelMessage.c)
 *     AlpcpClearOwnerPortMessage @ 0x140647ED0 (AlpcpClearOwnerPortMessage.c)
 *     AlpcpExposeCapturedContextAttribute @ 0x1406C1588 (AlpcpExposeCapturedContextAttribute.c)
 *     AlpcpGetDataFromUserVaSafe @ 0x1406CB4E8 (AlpcpGetDataFromUserVaSafe.c)
 *     AlpcpReturnMessageOnInsufficientBuffer @ 0x1406D7BF0 (AlpcpReturnMessageOnInsufficientBuffer.c)
 *     AlpcpEnterFreeEventMessageLog @ 0x140885A70 (AlpcpEnterFreeEventMessageLog.c)
 *     AlpcpEnterStateChangeEventMessageLog @ 0x140885AD8 (AlpcpEnterStateChangeEventMessageLog.c)
 *     ExRaiseDatatypeMisalignment @ 0x140913EC0 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall AlpcpProcessSynchronousRequest(
        void ***a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        unsigned __int64 a5,
        unsigned __int64 *a6,
        int *Address,
        LARGE_INTEGER *a8,
        unsigned __int8 a9,
        unsigned __int8 a10)
{
  unsigned int v10; // r8d
  void ***v11; // r10
  int v12; // r12d
  __int64 v13; // rax
  __int64 v14; // r13
  __int64 v15; // rcx
  unsigned __int64 *v16; // r14
  __int64 v17; // rax
  __int64 v18; // rcx
  int *v19; // rsi
  int *v20; // rax
  ULONG v21; // r11d
  int v22; // eax
  int v23; // r8d
  int v24; // ecx
  int v25; // eax
  unsigned int v26; // ecx
  __int64 v27; // rax
  __int64 v28; // r8
  ULONG v29; // eax
  ULONG v30; // ecx
  ULONG v31; // r8d
  int v32; // ecx
  int v33; // eax
  unsigned int v34; // edi
  ULONG_PTR v35; // rdi
  int v36; // edx
  int v37; // eax
  unsigned __int64 v38; // rax
  __int64 v39; // rdx
  volatile signed __int64 *v40; // rsi
  __int16 v41; // ax
  __int16 v42; // cx
  int v43; // ecx
  ULONG_PTR v44; // rsi
  char v45; // dl
  signed __int64 v46; // rcx
  __int64 v47; // r14
  signed __int64 v48; // rax
  _SLIST_HEADER *v49; // rcx
  char v51; // bl
  signed __int64 v52; // rax
  volatile signed __int64 *v53; // r12
  void *v54; // rdi
  PVOID v55; // rbx
  void *v56; // rcx
  ULONG_PTR BugCheckParameter4; // [rsp+20h] [rbp-118h]
  int v58; // [rsp+30h] [rbp-108h]
  ULONG_PTR BugCheckParameter2; // [rsp+38h] [rbp-100h] BYREF
  char v60; // [rsp+40h] [rbp-F8h]
  PVOID Object; // [rsp+48h] [rbp-F0h]
  unsigned __int64 v62; // [rsp+50h] [rbp-E8h]
  void **v63; // [rsp+58h] [rbp-E0h]
  unsigned __int64 v64; // [rsp+60h] [rbp-D8h]
  void ***v65; // [rsp+68h] [rbp-D0h]
  __int64 v66; // [rsp+70h] [rbp-C8h] BYREF
  int v67[2]; // [rsp+80h] [rbp-B8h] BYREF
  __int64 v68; // [rsp+88h] [rbp-B0h]
  __int128 v69; // [rsp+90h] [rbp-A8h]
  __int128 v70; // [rsp+A0h] [rbp-98h]
  unsigned int v71; // [rsp+B0h] [rbp-88h]
  __int64 v72; // [rsp+B4h] [rbp-84h]
  int v73; // [rsp+BCh] [rbp-7Ch]
  __int64 v74; // [rsp+C0h] [rbp-78h]
  signed __int64 v75; // [rsp+C8h] [rbp-70h]
  signed __int64 v76; // [rsp+D8h] [rbp-60h]
  _BYTE v77[88]; // [rsp+E0h] [rbp-58h] BYREF
  int v82; // [rsp+180h] [rbp+48h]

  v10 = a2;
  v11 = a1;
  v68 = 0LL;
  v69 = 0LL;
  v70 = 0LL;
  v72 = 0LL;
  v73 = 0;
  v66 = 0LL;
  v12 = 0;
  v58 = 0;
  v64 = -1LL;
  if ( a9 )
  {
    v13 = (__int64)a8;
    if ( a8 )
    {
      if ( (unsigned __int64)a8 >= 0x7FFFFFFF0000LL )
        v13 = 0x7FFFFFFF0000LL;
      v74 = *(_QWORD *)v13;
      v66 = v74;
      a8 = (LARGE_INTEGER *)&v66;
    }
    v14 = a5;
    v15 = a5;
    if ( (a2 & 0xC0000000) == 0x80000000 )
    {
      if ( (a5 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( a5 >= 0x7FFFFFFF0000LL )
        v15 = 0x7FFFFFFF0000LL;
      *(_BYTE *)v15 = *(_BYTE *)v15;
      *(_BYTE *)(v15 + 23) = *(_BYTE *)(v15 + 23);
    }
    else
    {
      if ( (a5 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( a5 >= 0x7FFFFFFF0000LL )
        v15 = 0x7FFFFFFF0000LL;
      *(_BYTE *)v15 = *(_BYTE *)v15;
      *(_BYTE *)(v15 + 39) = *(_BYTE *)(v15 + 39);
    }
    v16 = a6;
    if ( a6 )
    {
      v17 = (__int64)a6;
      if ( (unsigned __int64)a6 >= 0x7FFFFFFF0000LL )
        v17 = 0x7FFFFFFF0000LL;
      v64 = *(_QWORD *)v17;
      v18 = (__int64)a6;
      if ( (unsigned __int64)a6 >= 0x7FFFFFFF0000LL )
        v18 = 0x7FFFFFFF0000LL;
      *(_QWORD *)v18 = *(_QWORD *)v18;
    }
    v19 = Address;
    if ( Address )
    {
      v60 = 1;
      v20 = Address;
      if ( (unsigned __int64)Address >= 0x7FFFFFFF0000LL )
        v20 = (int *)0x7FFFFFFF0000LL;
      v12 = *v20;
      v21 = 8;
      if ( (a2 & 0xC0000000) == 0x80000000 )
      {
        if ( v12 < 0 )
          v21 = 20;
        v29 = v21 + 16;
        if ( (v12 & 0x40000000) == 0 )
          v29 = v21;
        v30 = v29 + 20;
        if ( (v12 & 0x20000000) == 0 )
          v30 = v29;
        v31 = v30 + 16;
        if ( (v12 & 0x10000000) == 0 )
          v31 = v30;
        if ( (v12 & 0x8000000) != 0 )
          v31 += 24;
        v27 = v31 + 8;
        if ( (v12 & 0x2000000) == 0 )
          v27 = v31;
        v21 = 4;
      }
      else
      {
        v22 = 8;
        if ( v12 < 0 )
          v22 = 32;
        v23 = v22 + 32;
        if ( (v12 & 0x40000000) == 0 )
          v23 = v22;
        if ( (v12 & 0x20000000) != 0 )
          v23 += 32;
        v24 = v23 + 24;
        if ( (v12 & 0x10000000) == 0 )
          v24 = v23;
        v25 = v24 + 24;
        if ( (v12 & 0x8000000) == 0 )
          v25 = v24;
        v26 = v25 + 8;
        if ( (v12 & 0x4000000) == 0 )
          v26 = v25;
        v27 = v26 + 8;
        if ( (v12 & 0x2000000) == 0 )
          v27 = v26;
      }
      v28 = (__int64)Address;
      if ( (unsigned __int64)(v27 - 1) > 0xFFE )
      {
        ProbeForWrite(Address, (unsigned int)v27, v21);
        v11 = a1;
      }
      else
      {
        if ( ((v21 - 1) & (unsigned int)Address) != 0 )
          ExRaiseDatatypeMisalignment();
        if ( (unsigned __int64)Address >= 0x7FFFFFFF0000LL )
          v28 = 0x7FFFFFFF0000LL;
        *(_BYTE *)v28 = *(_BYTE *)v28;
        *(_BYTE *)(v28 + (unsigned int)v27 - 1) = *(_BYTE *)(v28 + (unsigned int)v27 - 1);
      }
      v58 = v12;
    }
    else
    {
      v12 = 0;
    }
    v10 = a2;
  }
  else
  {
    v16 = a6;
    if ( a6 )
      v64 = *a6;
    v19 = Address;
    v14 = a5;
    if ( Address )
    {
      v12 = *Address;
      v58 = *Address;
    }
  }
  v32 = *((_DWORD *)v11 + 104);
  if ( ((_BYTE)v11[52] & 6) != 6 )
  {
    Object = v11;
    v65 = v11;
    goto LABEL_66;
  }
  v63 = v11[2];
  v53 = (volatile signed __int64 *)(v63 - 2);
  ExAcquirePushLockSharedEx((ULONG_PTR)(v63 - 2), 0LL);
  v54 = *v63;
  Object = v54;
  v65 = (void ***)v54;
  if ( v54 && ObReferenceObjectSafe((__int64)v54) )
  {
    v75 = _InterlockedCompareExchange64(v53, 0LL, 17LL);
    if ( v75 != 17 )
      ExfReleasePushLockShared((signed __int64 *)v53);
    KeAbPostRelease((ULONG_PTR)v53);
    v11 = a1;
    v32 = *((_DWORD *)a1 + 104);
    v12 = v58;
    v10 = a2;
LABEL_66:
    *(_QWORD *)v67 = v11;
    v71 = v10;
    if ( (v32 & 0x1000) != 0 )
      v33 = AlpcpSendLegacySynchronousRequest(v11, v67, a3, a9);
    else
      v33 = AlpcpSendMessage(v67, a3, a4, a9);
    v34 = v33;
    if ( v33 < 0 )
      goto LABEL_109;
    BugCheckParameter2 = 0LL;
    *(_QWORD *)v67 = Object;
    v34 = AlpcpReceiveSynchronousReply((int)v67, a10, (int)&BugCheckParameter2, v12, a8);
    v82 = v34;
    if ( v34 )
      goto LABEL_109;
    v35 = BugCheckParameter2;
    v36 = *(unsigned __int16 *)(BugCheckParameter2 + 240);
    v37 = 24;
    if ( (a2 & 0xC0000000) != 0x80000000 )
      v37 = 40;
    v38 = (unsigned int)(v36 + v37);
    LODWORD(v63) = v38;
    if ( v16 && (v62 = v38, v38 > v64) )
    {
      memset(v77, 0, 0x20uLL);
      v55 = Object;
      v82 = AlpcpReturnMessageOnInsufficientBuffer(Object, BugCheckParameter2, v77);
      if ( v82 == -1073741789 )
      {
        AlpcpUnlockMessage(v35);
        *v16 = v62;
        AlpcpExposeCapturedContextAttribute(a2, v77, (unsigned int)v12, v19);
        v34 = -1073741789;
        goto LABEL_109;
      }
      AlpcpCancelMessage(v55, v35, 0x10000LL);
    }
    else
    {
      if ( (a2 & 0xC0000000) == 0x80000000 )
      {
        *(_WORD *)v14 = v36;
        LODWORD(v62) = v36 + 24;
        *(_WORD *)(v14 + 2) = v36 + 24;
        v41 = *(_WORD *)(v35 + 246);
        if ( v41 )
          *(_WORD *)(v14 + 6) = v41 - 16;
        else
          *(_WORD *)(v14 + 6) = 0;
        v42 = *(_WORD *)(v35 + 244) | 0x1000;
        *(_WORD *)(v14 + 4) = v42;
        *(_DWORD *)(v14 + 8) = *(_DWORD *)(v35 + 248);
        *(_DWORD *)(v14 + 12) = *(_DWORD *)(v35 + 256);
        *(_DWORD *)(v14 + 16) = *(_DWORD *)(v35 + 264);
        *(_DWORD *)(v14 + 20) = *(_DWORD *)(v35 + 272);
        *(_DWORD *)(v14 + 20) = *(_DWORD *)(v35 + 272);
        if ( ((_DWORD)a1[32] & 0x1000) != 0 )
          *(_WORD *)(v14 + 4) = v42 & 0xC00F;
        v39 = v14 + 24;
      }
      else
      {
        *(_OWORD *)v14 = *(_OWORD *)(BugCheckParameter2 + 240);
        *(_OWORD *)(v14 + 16) = *(_OWORD *)(v35 + 256);
        *(_QWORD *)(v14 + 32) = *(_QWORD *)(v35 + 272);
        if ( ((_DWORD)a1[32] & 0x1000) != 0 )
          *(_WORD *)(v14 + 4) &= 0xC00Fu;
        LODWORD(v62) = *(unsigned __int16 *)(v14 + 2);
        v39 = v14 + 40;
      }
      if ( *(_QWORD *)(v35 + 176) )
        AlpcpGetDataFromUserVaSafe(v35, v39);
      else
        AlpcpReadMessageData(v35, v39);
      if ( v16 )
        *v16 = (unsigned int)v63;
      if ( v19 )
      {
        BugCheckParameter4 = (ULONG_PTR)v19;
        v40 = (volatile signed __int64 *)a1;
        AlpcpExposeAttributes((__int64)a1, a2, v35, v12, BugCheckParameter4);
      }
      else
      {
        v40 = (volatile signed __int64 *)a1;
      }
      if ( (*(_DWORD *)(v35 + 40) & 0x200) != 0 && (v40[52] & 0x2000) != 0 )
      {
        v52 = _InterlockedCompareExchange64(v40 + 55, v35, 0LL);
        v35 = BugCheckParameter2;
        if ( !v52 )
        {
          if ( AlpcpMessageLogEnabled )
            AlpcpEnterFreeEventMessageLog(BugCheckParameter2);
          ++*(_WORD *)(v35 - 30);
          *(_DWORD *)(v35 + 264) |= 0x80000000;
          AlpcpClearOwnerPortMessage(v35);
        }
      }
      if ( AlpcpMessageLogEnabled )
        AlpcpEnterStateChangeEventMessageLog(v35);
      v43 = 0;
      v44 = v35 - 48;
      v45 = *(_BYTE *)(v35 - 48 + 16);
      if ( (v45 & 1) != 0 )
      {
        v43 = 0x10000 - *(__int16 *)(v44 + 18);
        *(_BYTE *)(v44 + 16) = v45 & 0xFE;
        *(_WORD *)(v44 + 18) = 0;
      }
      if ( v43 > 0 )
      {
        v46 = -v43 + _InterlockedExchangeAdd64((volatile signed __int64 *)(v44 + 24), -v43);
        if ( v46 <= 0 )
        {
          if ( v46 )
            KeBugCheckEx(0x18u, 0LL, BugCheckParameter2, 0x28uLL, v46);
          v47 = AlpcpRegisteredTypes[*(unsigned __int8 *)(v44 + 17)];
          (*(void (__fastcall **)(ULONG_PTR))(v47 + 24))(BugCheckParameter2);
          v48 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v35 - 16), 0xFFFFFFFFFFFFFFFFuLL);
          v76 = v48;
          if ( (v48 & 2) != 0 && (v48 & 4) == 0 )
            ExfTryToWakePushLock((volatile signed __int64 *)(v35 - 16));
          KeAbPostRelease(v35 - 16);
          if ( (*(int (__fastcall **)(ULONG_PTR))(v47 + 40))(BugCheckParameter2) >= 0 )
          {
            if ( (*(_BYTE *)(v44 + 16) & 2) != 0 )
            {
              v49 = &AlpcpLookasides + 8 * (unsigned __int64)*(unsigned int *)(v47 + 8);
              ++*((_DWORD *)&v49[1].HeaderX64 + 3);
              if ( LOWORD(v49->Alignment) >= LOWORD(v49[1].Alignment) )
              {
                ++LODWORD(v49[2].Alignment);
                ((void (__fastcall *)(ULONG_PTR))v49[3].Region)(v35 - 48);
              }
              else
              {
                RtlpInterlockedPushEntrySList(v49, (PSLIST_ENTRY)(v35 - 48));
              }
            }
            else
            {
              v56 = (void *)(v35 - 48);
              if ( *(_QWORD *)(v47 + 48) )
                (*((void (__fastcall **)(void *))&AlpcpLookasides + 16 * (unsigned __int64)*(unsigned int *)(v47 + 8)
                                                                  + 7))(v56);
              else
                ExFreePoolWithTag(v56, *(_DWORD *)(v47 + 4));
            }
          }
          v35 = 0LL;
        }
      }
      if ( v35 )
      {
        v51 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v44 + 32), 0xFFFFFFFFFFFFFFFFuLL);
        if ( (v51 & 2) != 0 && (v51 & 4) == 0 )
          ExfTryToWakePushLock((volatile signed __int64 *)(v44 + 32));
        KeAbPostRelease(v44 + 32);
      }
    }
    v34 = v82;
LABEL_109:
    if ( Object != a1 )
      ObfDereferenceObject(Object);
    return v34;
  }
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)v63 - 2, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)v63 - 2);
  KeAbPostRelease((ULONG_PTR)(v63 - 2));
  return 3221225527LL;
}
