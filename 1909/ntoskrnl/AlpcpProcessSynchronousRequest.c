/*
 * XREFs of AlpcpProcessSynchronousRequest @ 0x1405E0F10
 * Callers:
 *     NtAlpcSendWaitReceivePort @ 0x1405DF5B0 (NtAlpcSendWaitReceivePort.c)
 *     LpcpRequestWaitReplyPort @ 0x1406C9658 (LpcpRequestWaitReplyPort.c)
 *     LpcSendWaitReceivePort @ 0x1408845C0 (LpcSendWaitReceivePort.c)
 *     LpcpReplyWaitReplyPort @ 0x140884670 (LpcpReplyWaitReplyPort.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14003DFA0 (ObfDereferenceObject.c)
 *     ExAcquirePushLockSharedEx @ 0x14003EC70 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x14003F5C0 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x1400C6220 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x1400C6390 (ExfTryToWakePushLock.c)
 *     ObReferenceObjectSafe @ 0x140107F50 (ObReferenceObjectSafe.c)
 *     KeBugCheckEx @ 0x1401C46A0 (KeBugCheckEx.c)
 *     RtlpInterlockedPushEntrySList @ 0x1401CC5B0 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     AlpcpExposeAttributes @ 0x1405DFFB0 (AlpcpExposeAttributes.c)
 *     AlpcpReceiveSynchronousReply @ 0x1405E1710 (AlpcpReceiveSynchronousReply.c)
 *     AlpcpSendMessage @ 0x1405E1E30 (AlpcpSendMessage.c)
 *     AlpcpUnlockMessage @ 0x1405E5210 (AlpcpUnlockMessage.c)
 *     ProbeForWrite @ 0x1405F10D0 (ProbeForWrite.c)
 *     AlpcpReadMessageData @ 0x14065A00C (AlpcpReadMessageData.c)
 *     AlpcpSendLegacySynchronousRequest @ 0x14065A7F0 (AlpcpSendLegacySynchronousRequest.c)
 *     AlpcpCancelMessage @ 0x14065B22C (AlpcpCancelMessage.c)
 *     AlpcpClearOwnerPortMessage @ 0x14065BA34 (AlpcpClearOwnerPortMessage.c)
 *     AlpcpExposeCapturedContextAttribute @ 0x1406C0778 (AlpcpExposeCapturedContextAttribute.c)
 *     AlpcpGetDataFromUserVaSafe @ 0x1406CA318 (AlpcpGetDataFromUserVaSafe.c)
 *     AlpcpReturnMessageOnInsufficientBuffer @ 0x1406D79D0 (AlpcpReturnMessageOnInsufficientBuffer.c)
 *     AlpcpEnterFreeEventMessageLog @ 0x140885210 (AlpcpEnterFreeEventMessageLog.c)
 *     AlpcpEnterStateChangeEventMessageLog @ 0x140885278 (AlpcpEnterStateChangeEventMessageLog.c)
 *     ExRaiseDatatypeMisalignment @ 0x140913920 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall AlpcpProcessSynchronousRequest(
        __int64 a1,
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
  int v12; // r12d
  unsigned __int8 v13; // r11
  __int64 v14; // rax
  unsigned __int64 v15; // rcx
  unsigned __int64 *v16; // r14
  __int64 v17; // rax
  __int64 v18; // rcx
  int *v19; // rsi
  int *v20; // rax
  ULONG v21; // r10d
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
  unsigned __int64 v39; // rdx
  __int16 v40; // ax
  __int16 v41; // dx
  int v42; // ecx
  ULONG_PTR v43; // rsi
  char v44; // dl
  signed __int64 BugCheckParameter4; // rcx
  __int64 v46; // r14
  signed __int64 v47; // rax
  _SLIST_HEADER *v48; // rcx
  void *v49; // rcx
  char v51; // bl
  signed __int64 v52; // rax
  volatile signed __int64 *v53; // r12
  __int64 v54; // rdi
  void *v55; // rcx
  PVOID Object; // [rsp+30h] [rbp-108h]
  int v57; // [rsp+38h] [rbp-100h]
  ULONG_PTR BugCheckParameter2; // [rsp+40h] [rbp-F8h] BYREF
  char v59; // [rsp+48h] [rbp-F0h]
  unsigned __int64 v60; // [rsp+50h] [rbp-E8h]
  __int64 *v61; // [rsp+58h] [rbp-E0h]
  unsigned __int64 v62; // [rsp+60h] [rbp-D8h]
  __int64 v63; // [rsp+68h] [rbp-D0h]
  __int64 v64; // [rsp+70h] [rbp-C8h] BYREF
  int v65[2]; // [rsp+80h] [rbp-B8h] BYREF
  __int64 v66; // [rsp+88h] [rbp-B0h]
  __int128 v67; // [rsp+90h] [rbp-A8h]
  __int128 v68; // [rsp+A0h] [rbp-98h]
  unsigned int v69; // [rsp+B0h] [rbp-88h]
  __int64 v70; // [rsp+B4h] [rbp-84h]
  int v71; // [rsp+BCh] [rbp-7Ch]
  __int64 v72; // [rsp+C0h] [rbp-78h]
  signed __int64 v73; // [rsp+C8h] [rbp-70h]
  signed __int64 v74; // [rsp+D8h] [rbp-60h]
  _BYTE v75[88]; // [rsp+E0h] [rbp-58h] BYREF
  int v79; // [rsp+180h] [rbp+48h]

  v10 = a2;
  v66 = 0LL;
  v67 = 0LL;
  v68 = 0LL;
  v70 = 0LL;
  v71 = 0;
  v64 = 0LL;
  v12 = 0;
  v57 = 0;
  v62 = -1LL;
  v13 = a9;
  if ( a9 )
  {
    v14 = (__int64)a8;
    if ( a8 )
    {
      if ( (unsigned __int64)a8 >= 0x7FFFFFFF0000LL )
        v14 = 0x7FFFFFFF0000LL;
      v72 = *(_QWORD *)v14;
      v64 = v72;
      a8 = (LARGE_INTEGER *)&v64;
    }
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
      v62 = *(_QWORD *)v17;
      v18 = (__int64)a6;
      if ( (unsigned __int64)a6 >= 0x7FFFFFFF0000LL )
        v18 = 0x7FFFFFFF0000LL;
      *(_QWORD *)v18 = *(_QWORD *)v18;
    }
    v19 = Address;
    if ( Address )
    {
      v59 = 1;
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
        v13 = a9;
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
      v57 = v12;
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
      v62 = *a6;
    v19 = Address;
    if ( Address )
    {
      v12 = *Address;
      v57 = *Address;
    }
  }
  v32 = *(_DWORD *)(a1 + 416);
  if ( (*(_BYTE *)(a1 + 416) & 6) != 6 )
  {
    Object = (PVOID)a1;
    v63 = a1;
    goto LABEL_66;
  }
  v61 = *(__int64 **)(a1 + 16);
  v53 = v61 - 2;
  ExAcquirePushLockSharedEx((ULONG_PTR)(v61 - 2), 0LL);
  v54 = *v61;
  Object = (PVOID)v54;
  v63 = *v61;
  if ( v54 && ObReferenceObjectSafe(v54) )
  {
    v73 = _InterlockedCompareExchange64(v53, 0LL, 17LL);
    if ( v73 != 17 )
      ExfReleasePushLockShared((signed __int64 *)v53);
    KeAbPostRelease((ULONG_PTR)v53);
    v32 = *(_DWORD *)(a1 + 416);
    v12 = v57;
    v10 = a2;
    v13 = a9;
LABEL_66:
    *(_QWORD *)v65 = a1;
    v69 = v10;
    if ( (v32 & 0x1000) != 0 )
      v33 = AlpcpSendLegacySynchronousRequest(a1, v65, a3, v13);
    else
      v33 = AlpcpSendMessage(v65, a3, a4, v13);
    v34 = v33;
    if ( v33 >= 0 )
    {
      BugCheckParameter2 = 0LL;
      *(_QWORD *)v65 = Object;
      v34 = AlpcpReceiveSynchronousReply((int)v65, a10, (int)&BugCheckParameter2, v12, a8);
      v79 = v34;
      if ( !v34 )
      {
        v35 = BugCheckParameter2;
        v36 = *(unsigned __int16 *)(BugCheckParameter2 + 240);
        v37 = 24;
        if ( (a2 & 0xC0000000) != 0x80000000 )
          v37 = 40;
        v38 = (unsigned int)(v36 + v37);
        LODWORD(v61) = v38;
        if ( v16 && (v60 = v38, v38 > v62) )
        {
          memset(v75, 0, 0x20uLL);
          v79 = AlpcpReturnMessageOnInsufficientBuffer(Object, BugCheckParameter2, v75);
          if ( v79 == -1073741789 )
          {
            AlpcpUnlockMessage(v35);
            *v16 = v60;
            AlpcpExposeCapturedContextAttribute(a2, v75, (unsigned int)v12, v19);
            v34 = -1073741789;
            v49 = Object;
            goto LABEL_109;
          }
          AlpcpCancelMessage(Object, v35, 0x10000LL);
        }
        else
        {
          if ( (a2 & 0xC0000000) == 0x80000000 )
          {
            *(_WORD *)a5 = v36;
            LODWORD(v60) = *(unsigned __int16 *)(v35 + 240) + 24;
            *(_WORD *)(a5 + 2) = v60;
            v40 = *(_WORD *)(v35 + 246);
            if ( v40 )
              *(_WORD *)(a5 + 6) = v40 - 16;
            else
              *(_WORD *)(a5 + 6) = 0;
            v41 = *(_WORD *)(v35 + 244) | 0x1000;
            *(_WORD *)(a5 + 4) = v41;
            *(_DWORD *)(a5 + 8) = *(_DWORD *)(v35 + 248);
            *(_DWORD *)(a5 + 12) = *(_DWORD *)(v35 + 256);
            *(_DWORD *)(a5 + 16) = *(_DWORD *)(v35 + 264);
            *(_DWORD *)(a5 + 20) = *(_DWORD *)(v35 + 272);
            *(_DWORD *)(a5 + 20) = *(_DWORD *)(v35 + 272);
            if ( (*(_DWORD *)(a1 + 256) & 0x1000) != 0 )
              *(_WORD *)(a5 + 4) = v41 & 0xC00F;
            v39 = a5 + 24;
          }
          else
          {
            *(_OWORD *)a5 = *(_OWORD *)(BugCheckParameter2 + 240);
            *(_OWORD *)(a5 + 16) = *(_OWORD *)(v35 + 256);
            *(_QWORD *)(a5 + 32) = *(_QWORD *)(v35 + 272);
            if ( (*(_DWORD *)(a1 + 256) & 0x1000) != 0 )
              *(_WORD *)(a5 + 4) &= 0xC00Fu;
            LODWORD(v60) = *(unsigned __int16 *)(v35 + 242);
            v39 = a5 + 40;
          }
          if ( *(_QWORD *)(v35 + 176) )
            AlpcpGetDataFromUserVaSafe(v35, v39);
          else
            AlpcpReadMessageData(v35, v39);
          if ( v16 )
            *v16 = (unsigned int)v61;
          if ( v19 )
            AlpcpExposeAttributes(a1, a2, v35, v12, (__int64)v19);
          if ( (*(_DWORD *)(v35 + 40) & 0x200) != 0 && (*(_DWORD *)(a1 + 416) & 0x2000) != 0 )
          {
            v52 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 440), v35, 0LL);
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
          v42 = 0;
          v43 = v35 - 48;
          v44 = *(_BYTE *)(v35 - 48 + 16);
          if ( (v44 & 1) != 0 )
          {
            v42 = 0x10000 - *(__int16 *)(v43 + 18);
            *(_BYTE *)(v43 + 16) = v44 & 0xFE;
            *(_WORD *)(v43 + 18) = 0;
          }
          if ( v42 > 0 )
          {
            BugCheckParameter4 = -v42 + _InterlockedExchangeAdd64((volatile signed __int64 *)(v43 + 24), -v42);
            if ( BugCheckParameter4 <= 0 )
            {
              if ( BugCheckParameter4 )
                KeBugCheckEx(0x18u, 0LL, BugCheckParameter2, 0x28uLL, BugCheckParameter4);
              v46 = AlpcpRegisteredTypes[*(unsigned __int8 *)(v43 + 17)];
              (*(void (__fastcall **)(ULONG_PTR))(v46 + 24))(BugCheckParameter2);
              v47 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v35 - 16), 0xFFFFFFFFFFFFFFFFuLL);
              v74 = v47;
              if ( (v47 & 2) != 0 && (v47 & 4) == 0 )
                ExfTryToWakePushLock((volatile signed __int64 *)(v35 - 16));
              KeAbPostRelease(v35 - 16);
              if ( (*(int (__fastcall **)(ULONG_PTR))(v46 + 40))(BugCheckParameter2) >= 0 )
              {
                if ( (*(_BYTE *)(v43 + 16) & 2) != 0 )
                {
                  v48 = &AlpcpLookasides + 8 * (unsigned __int64)*(unsigned int *)(v46 + 8);
                  ++*((_DWORD *)&v48[1].HeaderX64 + 3);
                  if ( LOWORD(v48->Alignment) >= LOWORD(v48[1].Alignment) )
                  {
                    ++LODWORD(v48[2].Alignment);
                    ((void (__fastcall *)(ULONG_PTR))v48[3].Region)(v35 - 48);
                  }
                  else
                  {
                    RtlpInterlockedPushEntrySList(v48, (PSLIST_ENTRY)(v35 - 48));
                  }
                }
                else
                {
                  v55 = (void *)(v35 - 48);
                  if ( *(_QWORD *)(v46 + 48) )
                    (*((void (__fastcall **)(void *))&AlpcpLookasides
                     + 16 * (unsigned __int64)*(unsigned int *)(v46 + 8)
                     + 7))(v55);
                  else
                    ExFreePoolWithTag(v55, *(_DWORD *)(v46 + 4));
                }
              }
              v35 = 0LL;
            }
          }
          if ( v35 )
          {
            v51 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v43 + 32), 0xFFFFFFFFFFFFFFFFuLL);
            if ( (v51 & 2) != 0 && (v51 & 4) == 0 )
              ExfTryToWakePushLock((volatile signed __int64 *)(v43 + 32));
            KeAbPostRelease(v43 + 32);
          }
        }
        v34 = v79;
      }
    }
    v49 = Object;
LABEL_109:
    if ( v49 != (void *)a1 )
      ObfDereferenceObject(v49);
    return v34;
  }
  if ( _InterlockedCompareExchange64(v61 - 2, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v61 - 2);
  KeAbPostRelease((ULONG_PTR)(v61 - 2));
  return 3221225527LL;
}
