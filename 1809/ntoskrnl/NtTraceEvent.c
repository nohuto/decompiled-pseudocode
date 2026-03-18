/*
 * XREFs of NtTraceEvent @ 0x1400CB490
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x14004F160 (ExReleasePushLockEx.c)
 *     KeLeaveCriticalRegion @ 0x14004F410 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObjectWithTag @ 0x140051510 (ObfDereferenceObjectWithTag.c)
 *     KeEnterCriticalRegion @ 0x1400B9BE0 (KeEnterCriticalRegion.c)
 *     EtwpGetEventHeaderType @ 0x1400CC1C0 (EtwpGetEventHeaderType.c)
 *     PsGetCurrentServerSiloGlobals @ 0x140109D20 (PsGetCurrentServerSiloGlobals.c)
 *     EtwpTraceMessageVa @ 0x140113220 (EtwpTraceMessageVa.c)
 *     EtwpOpenLogger @ 0x140113790 (EtwpOpenLogger.c)
 *     EtwpCloseLogger @ 0x14011383C (EtwpCloseLogger.c)
 *     EtwpLogSystemEventUnsafe @ 0x14017C6D8 (EtwpLogSystemEventUnsafe.c)
 *     __security_check_cookie @ 0x140193FF0 (__security_check_cookie.c)
 *     EtwTraceEvent @ 0x14030E6DC (EtwTraceEvent.c)
 *     EtwTraceRaw @ 0x14030EB10 (EtwTraceRaw.c)
 *     EtwpUpdateEnableMask @ 0x1405C209C (EtwpUpdateEnableMask.c)
 *     EtwpUnreferenceGuidEntry @ 0x1405C4098 (EtwpUnreferenceGuidEntry.c)
 *     EtwpFindGuidEntryByGuid @ 0x1405C4190 (EtwpFindGuidEntryByGuid.c)
 *     EtwpAccessCheck @ 0x1405C5280 (EtwpAccessCheck.c)
 *     ObReferenceObjectByHandle @ 0x1405E8350 (ObReferenceObjectByHandle.c)
 *     EtwpWriteUserEvent @ 0x1406473F0 (EtwpWriteUserEvent.c)
 *     EtwpSetMark @ 0x1408B89AC (EtwpSetMark.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408D65E0 (ExRaiseDatatypeMisalignment.c)
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall NtTraceEvent(
        ULONG TraceHandle,
        ULONG Flags,
        ULONG TraceHeaderLength,
        PEVENT_TRACE_HEADER TraceHeader)
{
  __int64 v5; // r15
  unsigned __int16 v7; // bx
  ULONG v8; // eax
  __int64 v9; // rcx
  unsigned int v10; // r12d
  char *v12; // rax
  unsigned int CurrentThread; // ebx
  __int64 v14; // rax
  int v15; // ebx
  __int64 v16; // r13
  char *v17; // r12
  unsigned __int8 *v18; // r15
  unsigned __int16 v19; // ax
  __int64 v20; // r9
  int v21; // r10d
  int v22; // r8d
  __int64 v23; // rcx
  PVOID v24; // rax
  int v25; // edx
  int v26; // edx
  char *v27; // rcx
  __int64 v28; // r10
  int v29; // edx
  int v30; // edx
  __int64 v31; // rcx
  volatile unsigned __int64 CycleTime; // rbx
  unsigned __int16 v33; // ax
  __int64 v34; // r10
  __int64 v35; // rdx
  int v36; // r9d
  char v37; // r11
  __int64 CurrentServerSiloGlobals; // rax
  __int64 GuidEntryByGuid; // rax
  _QWORD *v40; // r15
  int v41; // r9d
  unsigned __int16 EventHeaderType; // si
  int v43; // r9d
  __int64 v44; // r14
  unsigned int v45; // esi
  unsigned __int8 v46; // bl
  __int64 v47; // rax
  int v48; // r9d
  __int64 v49; // rdx
  unsigned __int8 v50; // [rsp+80h] [rbp-138h] BYREF
  char v51; // [rsp+81h] [rbp-137h]
  unsigned __int16 v52; // [rsp+82h] [rbp-136h]
  _BYTE v53[4]; // [rsp+84h] [rbp-134h] BYREF
  PEVENT_TRACE_HEADER v54; // [rsp+88h] [rbp-130h]
  int v55; // [rsp+90h] [rbp-128h]
  unsigned __int64 v56; // [rsp+98h] [rbp-120h]
  unsigned __int8 v57; // [rsp+A0h] [rbp-118h]
  char v58; // [rsp+A1h] [rbp-117h]
  __int16 v59; // [rsp+A4h] [rbp-114h]
  int v60; // [rsp+A8h] [rbp-110h]
  int v61; // [rsp+ACh] [rbp-10Ch]
  int v62; // [rsp+B0h] [rbp-108h]
  PVOID Object; // [rsp+B8h] [rbp-100h] BYREF
  __int64 v64; // [rsp+C0h] [rbp-F8h]
  __int64 v65; // [rsp+C8h] [rbp-F0h] BYREF
  __int64 v66; // [rsp+D0h] [rbp-E8h]
  __int64 v67; // [rsp+D8h] [rbp-E0h]
  __int64 v68; // [rsp+E0h] [rbp-D8h]
  int v69; // [rsp+E8h] [rbp-D0h]
  int v70; // [rsp+ECh] [rbp-CCh]
  int v71; // [rsp+F0h] [rbp-C8h]
  int v72; // [rsp+F4h] [rbp-C4h]
  int v73; // [rsp+F8h] [rbp-C0h]
  char *v74; // [rsp+100h] [rbp-B8h]
  char *v75; // [rsp+108h] [rbp-B0h]
  __int64 v76; // [rsp+110h] [rbp-A8h]
  unsigned __int64 v77; // [rsp+118h] [rbp-A0h]
  __int64 v78; // [rsp+120h] [rbp-98h]
  __int64 v79; // [rsp+128h] [rbp-90h]
  char *v80; // [rsp+130h] [rbp-88h] BYREF
  int v81; // [rsp+138h] [rbp-80h]
  int v82; // [rsp+13Ch] [rbp-7Ch]
  __int128 v83; // [rsp+140h] [rbp-78h] BYREF
  __int64 v84; // [rsp+150h] [rbp-68h] BYREF
  __int64 v85; // [rsp+158h] [rbp-60h]
  __int64 v86; // [rsp+160h] [rbp-58h]
  __int64 v87; // [rsp+168h] [rbp-50h]

  v5 = TraceHeaderLength;
  v7 = TraceHandle;
  v8 = Flags & 0xFF00;
  if ( v8 > 0x500 )
  {
    switch ( v8 )
    {
      case 0x600u:
        v44 = *(_QWORD *)(PsGetCurrentServerSiloGlobals() + 864);
        v45 = v7;
        if ( v7 == 0xFFFF || !v7 )
          v45 = *(unsigned __int8 *)(v44 + 4208);
        if ( v45 >= *(_DWORD *)(v44 + 16) )
          return -1073741816;
        v46 = KeGetCurrentThread()->$86A1A36C0FEBA810544B2F2B35F40C82::gap0[10];
        v47 = EtwpOpenLogger(v45, v44, v46, v53);
        if ( !v47 )
          return -1073741816;
        if ( (*(_DWORD *)(v47 + 12) & 0x2000000) != 0 )
        {
          v49 = 32LL * *(unsigned __int8 *)(v47 + 834) + v44 + 4260;
          if ( v49 && (*(_DWORD *)(v49 + 4) & 0x28) != 0 )
            LOBYTE(v48) = 1;
          else
            v48 = 0;
          v15 = EtwpSetMark(v47, (int)TraceHeader, v5, v48, v46);
        }
        else
        {
          v15 = -1073741811;
        }
        EtwpCloseLogger(v45, v44, v53[0]);
        return v15;
      case 0x700u:
        if ( *(_QWORD *)&TraceHandle )
        {
          if ( ((unsigned __int8)TraceHeader & 3) != 0 )
            ExRaiseDatatypeMisalignment();
          if ( (unsigned __int64)TraceHeader + 120 > 0x7FFFFFFF0000LL
            || (PEVENT_TRACE_HEADER)((char *)TraceHeader + 120) < TraceHeader )
          {
            MEMORY[0x7FFFFFFF0000] = 0;
          }
          if ( (TraceHandle & 3) != 0 )
            ExRaiseDatatypeMisalignment();
          if ( (unsigned __int64)(*(_QWORD *)&TraceHandle + 16LL) > 0x7FFFFFFF0000LL
            || (unsigned __int64)(*(_QWORD *)&TraceHandle + 16LL) < *(_QWORD *)&TraceHandle )
          {
            MEMORY[0x7FFFFFFF0000] = 0;
          }
          v67 = *((_QWORD *)TraceHeader + 11);
          v61 = *((_DWORD *)TraceHeader + 21);
          v62 = *((_DWORD *)TraceHeader + 28);
          v68 = *((_QWORD *)TraceHeader + 6);
          v51 = *((_BYTE *)TraceHeader + 44);
          v83 = **(_OWORD **)&TraceHandle;
          CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
          GuidEntryByGuid = EtwpFindGuidEntryByGuid(*(_QWORD *)(CurrentServerSiloGlobals + 864), &v83, 0LL);
          v40 = (_QWORD *)GuidEntryByGuid;
          if ( GuidEntryByGuid )
          {
            if ( *(_DWORD *)(GuidEntryByGuid + 96) )
            {
              v15 = EtwpAccessCheck(*(PSECURITY_DESCRIPTOR *)(GuidEntryByGuid + 72), 0x800u, 0LL);
              if ( v15 >= 0 )
              {
                v50 = 0;
                KeEnterCriticalRegion();
                ExAcquirePushLockExclusiveEx((ULONG_PTR)(v40 + 51), 0LL);
                v40[52] = KeGetCurrentThread();
                LOBYTE(v41) = 1;
                EtwpUpdateEnableMask((_DWORD)v40, 0, 0, v41, (__int64)&v50);
                v40[52] = 0LL;
                ExReleasePushLockEx((ULONG_PTR)(v40 + 51), 0LL);
                KeLeaveCriticalRegion();
                EventHeaderType = EtwpGetEventHeaderType(Flags);
                v15 = EtwpWriteUserEvent(
                        (_DWORD)v40,
                        v50,
                        EventHeaderType,
                        0,
                        v62,
                        (__int64)TraceHeader,
                        0LL,
                        v51,
                        v68,
                        v61,
                        v67,
                        0LL,
                        0LL,
                        0,
                        0LL,
                        0LL);
                if ( v40[50] )
                {
                  v50 = 0;
                  KeEnterCriticalRegion();
                  ExAcquirePushLockExclusiveEx((ULONG_PTR)(v40 + 51), 0LL);
                  v40[52] = KeGetCurrentThread();
                  LOBYTE(v43) = 1;
                  EtwpUpdateEnableMask(v40[50], 0, 1, v43, (__int64)&v50);
                  v40[52] = 0LL;
                  ExReleasePushLockEx((ULONG_PTR)(v40 + 51), 0LL);
                  KeLeaveCriticalRegion();
                  v15 = EtwpWriteUserEvent(
                          v40[50],
                          v50,
                          EventHeaderType,
                          0,
                          v62,
                          (__int64)TraceHeader,
                          0LL,
                          v51,
                          v68,
                          v61,
                          v67,
                          0LL,
                          0LL,
                          0,
                          0LL,
                          0LL);
                }
              }
              EtwpUnreferenceGuidEntry(v40);
              return v15;
            }
            EtwpUnreferenceGuidEntry((PVOID)GuidEntryByGuid);
          }
          return -1073741054;
        }
        return -1073741811;
      case 0x800u:
        return EtwTraceEvent(
                 TraceHandle,
                 TraceHeader,
                 72LL,
                 (((int)Flags >> 31) & 0xFFF60000) - 1072365568,
                 KeGetCurrentThread()->PreviousMode);
    }
    if ( v8 != 2304 )
      return -1073741811;
    if ( Flags != 2304 || !TraceHeaderLength || !TraceHeader )
      return -1073741811;
    return EtwTraceRaw(
             TraceHandle,
             TraceHeader,
             TraceHeaderLength,
             (unsigned __int8)KeGetCurrentThread()->$86A1A36C0FEBA810544B2F2B35F40C82::gap0[10]);
  }
  if ( v8 == 1280 )
  {
    CycleTime = KeGetCurrentThread()[1].CycleTime;
    if ( *(_DWORD *)(*(_QWORD *)(PsGetCurrentServerSiloGlobals() + 864) + 4072LL) != (_DWORD)CycleTime )
      return -1073741790;
    if ( ((unsigned __int8)TraceHeader & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( (unsigned __int64)TraceHeader + 120 > 0x7FFFFFFF0000LL
      || (PEVENT_TRACE_HEADER)((char *)TraceHeader + 120) < TraceHeader )
    {
      MEMORY[0x7FFFFFFF0000] = 0;
    }
    v78 = *((_QWORD *)TraceHeader + 11);
    v70 = *((_DWORD *)TraceHeader + 21);
    v71 = *((_DWORD *)TraceHeader + 28);
    v79 = *((_QWORD *)TraceHeader + 6);
    v58 = *((_BYTE *)TraceHeader + 44);
    v33 = EtwpGetEventHeaderType(0LL);
    return EtwpWriteUserEvent(
             (int)v34 + 24,
             *(unsigned __int8 *)(v34 + 4064),
             v33,
             0,
             v37,
             (__int64)TraceHeader,
             0LL,
             v58,
             v79,
             v36,
             v35,
             0LL,
             0LL,
             0,
             0LL,
             0LL);
  }
  if ( v8 == 256 )
    return EtwTraceEvent(
             TraceHandle,
             TraceHeader,
             48LL,
             (((int)Flags >> 31) & 0xFFF60000) - 1072431104,
             KeGetCurrentThread()->PreviousMode);
  if ( v8 != 512 )
  {
    if ( v8 == 768 )
    {
      LOBYTE(v52) = KeGetCurrentThread()->PreviousMode;
      if ( (_BYTE)v52 )
      {
        if ( ((unsigned __int8)TraceHeader & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        if ( (unsigned __int64)TraceHeader + 120 > 0x7FFFFFFF0000LL
          || (PEVENT_TRACE_HEADER)((char *)TraceHeader + 120) < TraceHeader )
        {
          MEMORY[0x7FFFFFFF0000] = 0;
        }
      }
      v16 = *((_QWORD *)TraceHeader + 11);
      v76 = v16;
      v60 = *((_DWORD *)TraceHeader + 21);
      v72 = v60;
      v66 = *((unsigned __int16 *)TraceHeader + 41);
      LODWORD(v54) = *((_DWORD *)TraceHeader + 28);
      v73 = (int)v54;
      v56 = *((_QWORD *)TraceHeader + 6);
      v77 = v56;
      v50 = *((_BYTE *)TraceHeader + 44);
      v57 = v50;
      v17 = 0LL;
      v74 = 0LL;
      if ( *((_BYTE *)TraceHeader + 80) )
      {
        v17 = (char *)TraceHeader + 96;
        v74 = (char *)TraceHeader + 96;
      }
      v15 = ObReferenceObjectByHandle(*(HANDLE *)&TraceHandle, 0x800u, EtwpRegistrationObjectType, 1, &Object, 0LL);
      if ( v15 >= 0 )
      {
        v65 = 0LL;
        v18 = (unsigned __int8 *)Object;
        v80 = (char *)*((_QWORD *)Object + 4);
        v64 = *((_QWORD *)Object + 5);
        v19 = EtwpGetEventHeaderType(Flags);
        v22 = v19;
        v52 = v19;
        v84 = 0LL;
        v85 = 0LL;
        v86 = 0LL;
        v87 = 0LL;
        v23 = *((_QWORD *)v18 + 13);
        v24 = (PVOID)(v23 + 28);
        if ( !v23 )
          v24 = 0LL;
        Object = v24;
        v25 = v18[100];
        if ( (_BYTE)v25 )
        {
          v15 = EtwpWriteUserEvent(
                  v21,
                  v25,
                  v22,
                  v66,
                  (char)v54,
                  (__int64)TraceHeader,
                  (__int64)v17,
                  v50,
                  v56,
                  v60,
                  v16,
                  (__int64)&v84,
                  0LL,
                  *((_WORD *)v18 + 49),
                  (__int64)v24,
                  (__int64)&v65);
          v24 = Object;
          v21 = (int)v80;
          v22 = v52;
          v20 = v64;
        }
        v26 = v18[101];
        if ( (_BYTE)v26 )
          v15 = EtwpWriteUserEvent(
                  v21,
                  v26,
                  v22,
                  v66,
                  (char)v54,
                  (__int64)TraceHeader,
                  (__int64)v17,
                  v50,
                  v56,
                  v60,
                  v16,
                  (__int64)&v84,
                  v20,
                  *((_WORD *)v18 + 49),
                  (__int64)v24,
                  (__int64)&v65);
        v27 = v80;
        v28 = *((_QWORD *)v80 + 50);
        if ( v28 )
        {
          v84 = 0LL;
          v85 = 0LL;
          v86 = 0LL;
          v87 = 0LL;
          v29 = v18[102];
          if ( (_BYTE)v29 )
          {
            v15 = EtwpWriteUserEvent(
                    v28,
                    v29,
                    v52,
                    0,
                    (char)v54,
                    (__int64)TraceHeader,
                    (__int64)v17,
                    v50,
                    v56,
                    v60,
                    v16,
                    (__int64)&v84,
                    0LL,
                    *((_WORD *)v18 + 49),
                    (__int64)Object,
                    (__int64)&v65);
            v27 = v80;
          }
          v30 = v18[103];
          if ( (_BYTE)v30 )
            v15 = EtwpWriteUserEvent(
                    *((_QWORD *)v27 + 50),
                    v30,
                    v52,
                    0,
                    (char)v54,
                    (__int64)TraceHeader,
                    (__int64)v17,
                    v50,
                    v56,
                    v60,
                    v16,
                    (__int64)&v84,
                    *(_QWORD *)(v64 + 400),
                    *((_WORD *)v18 + 49),
                    (__int64)Object,
                    (__int64)&v65);
        }
        ObfDereferenceObjectWithTag(v18, 0x746C6644u);
      }
      return v15;
    }
    if ( v8 == 1024 )
    {
      v9 = *(_QWORD *)(PsGetCurrentServerSiloGlobals() + 864);
      v10 = 0;
      if ( v7 != 0xFFFF )
        v10 = v7;
      if ( v10 < *(_DWORD *)(v9 + 16) )
      {
        if ( (unsigned int)v5 > 0xFFDF )
          return -1073741675;
        if ( KeGetCurrentThread()->PreviousMode == 1 )
        {
          if ( ((unsigned __int8)TraceHeader & 3) != 0 )
            ExRaiseDatatypeMisalignment();
          v12 = (char *)TraceHeader + v5 + 32;
          if ( (unsigned __int64)v12 > 0x7FFFFFFF0000LL || v12 < (char *)TraceHeader )
            MEMORY[0x7FFFFFFF0000] = 0;
          v75 = (char *)TraceHeader + 32;
          v59 = *((_WORD *)TraceHeader + 3);
          v80 = (char *)TraceHeader + 32;
          v81 = v5;
          v82 = 0;
          CurrentThread = (unsigned int)KeGetCurrentThread();
          v14 = PsGetCurrentServerSiloGlobals();
          EtwpLogSystemEventUnsafe(
            *(_QWORD *)(v14 + 864),
            (unsigned int)&v80,
            CurrentThread,
            v10,
            1,
            v59,
            Flags & 0xC00F00FF | 0x3100);
          return 0;
        }
        return -1073741637;
      }
      return -1073741811;
    }
    return -1073741811;
  }
  v64 = *(_QWORD *)&TraceHandle;
  v56 = 0LL;
  if ( TraceHeaderLength != 40 )
    return -1073741811;
  if ( KeGetCurrentThread()->PreviousMode != 1 )
    return -1073741637;
  v54 = TraceHeader;
  if ( ((unsigned __int8)TraceHeader & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  if ( (unsigned __int64)v54 + 40 > 0x7FFFFFFF0000LL || (PEVENT_TRACE_HEADER)((char *)v54 + 40) < v54 )
    MEMORY[0x7FFFFFFF0000] = 0;
  v55 = *((_DWORD *)v54 + 6);
  if ( (Flags & 0x80000000) == 0 )
  {
    v56 = *((_QWORD *)v54 + 4);
  }
  else
  {
    LODWORD(v56) = *((_DWORD *)v54 + 8);
    v55 |= 0x80u;
  }
  v31 = *((unsigned int *)v54 + 7);
  v60 = v31;
  if ( (unsigned int)v31 > 0x10000 )
  {
    v15 = -1073741811;
    v69 = -1073741811;
    return v15;
  }
  if ( (_DWORD)v31 && (v56 + v31 > 0x7FFFFFFF0000LL || v56 + v31 < v56) )
    MEMORY[0x7FFFFFFF0000] = 0;
  HIDWORD(v64) = v31;
  return EtwpTraceMessageVa(v64, v55 | 0x40u, (int)v54 + 8, *((unsigned __int16 *)v54 + 2), v56, 1);
}
