/*
 * XREFs of AsyncEvalObject @ 0x1C0002B10
 * Callers:
 *     ACPIGet @ 0x1C0002200 (ACPIGet.c)
 *     SyncEvalObject @ 0x1C0002800 (SyncEvalObject.c)
 *     AMLIAsyncEvalObject @ 0x1C000E3CC (AMLIAsyncEvalObject.c)
 *     DebugRunMethod @ 0x1C0065F60 (DebugRunMethod.c)
 * Callees:
 *     HeapAlloc @ 0x1C0003960 (HeapAlloc.c)
 *     GetObjectPathNoLock @ 0x1C0004750 (GetObjectPathNoLock.c)
 *     InsertReadyQueue @ 0x1C0004A80 (InsertReadyQueue.c)
 *     GetObjectPath @ 0x1C0006C18 (GetObjectPath.c)
 *     DupObjData @ 0x1C001B9B0 (DupObjData.c)
 *     ReadField @ 0x1C001F540 (ReadField.c)
 *     PushFrame @ 0x1C0020A84 (PushFrame.c)
 *     PrintDebugMessage @ 0x1C0020B04 (PrintDebugMessage.c)
 *     AcpiDiagTraceAmlError @ 0x1C0020C1C (AcpiDiagTraceAmlError.c)
 *     LogError @ 0x1C0020D64 (LogError.c)
 *     OSQueueWorkItem @ 0x1C002A790 (OSQueueWorkItem.c)
 *     __security_check_cookie @ 0x1C0031700 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00319E0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0031D40 (memset.c)
 *     AMLIReadNamespaceOverrideObject @ 0x1C0064B58 (AMLIReadNamespaceOverrideObject.c)
 *     ConPrintf @ 0x1C0065888 (ConPrintf.c)
 *     PrintObject @ 0x1C006641C (PrintObject.c)
 *     FreeContext @ 0x1C0067BB4 (FreeContext.c)
 *     PushPost @ 0x1C0067DB8 (PushPost.c)
 */

__int64 __fastcall AsyncEvalObject(
        __int64 a1,
        _SLIST_ENTRY *a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        char a7)
{
  unsigned int v7; // r13d
  __int64 v8; // rdi
  struct _KTHREAD *CurrentThread; // r8
  __int64 v12; // r10
  __int64 CurrentIrql; // r9
  __int64 v14; // rdx
  PSLIST_ENTRY v15; // r12
  KIRQL v16; // al
  int v17; // edx
  char *v18; // rax
  size_t v19; // rbx
  _SLIST_ENTRY *PoolWithTag; // rax
  KIRQL v21; // al
  struct _SLIST_ENTRY **v22; // rdx
  struct _SLIST_ENTRY *v23; // rax
  __int16 v24; // ax
  char v25; // al
  char v26; // al
  __int64 v27; // rsi
  _BYTE *v28; // r15
  KIRQL v29; // r14
  __int64 v30; // rdi
  __int64 ObjectPathNoLock; // rax
  _BYTE *v32; // rbx
  __int64 v33; // rdx
  _BYTE *v34; // rax
  __int64 v35; // r8
  __int64 v36; // rcx
  __int64 v37; // rcx
  __int64 v38; // r8
  _BYTE *v39; // rdx
  char v40; // al
  __int64 v41; // rcx
  __int64 v42; // rcx
  int v43; // r8d
  __int64 v44; // rdx
  _BYTE *v45; // rax
  __int64 v46; // r9
  _BYTE *v47; // rdx
  __int64 v48; // r8
  __int64 v49; // rcx
  const char *v50; // r9
  char v51; // al
  __int64 v52; // rcx
  __int64 v53; // rcx
  int v54; // r8d
  __int64 v55; // rdx
  _BYTE *v56; // rax
  __int64 v57; // r9
  _BYTE *v58; // rdx
  __int64 v59; // r8
  __int64 v60; // rcx
  __int64 v61; // rsi
  char v62; // al
  int v63; // edi
  __int64 i; // rax
  unsigned __int16 *v65; // rsi
  _BYTE *v66; // rax
  __int64 v67; // rcx
  __int64 v68; // rbx
  _SLIST_ENTRY *Next; // rax
  __int64 v70; // rdx
  char *v71; // r8
  __int16 v72; // cx
  _SLIST_ENTRY *v73; // rcx
  __int64 v74; // r15
  __int64 v75; // rax
  _SLIST_ENTRY *v76; // r14
  __int16 v77; // dx
  __int64 v78; // r15
  __int64 v79; // rbx
  struct _SLIST_ENTRY *v80; // r14
  PSLIST_ENTRY v81; // rcx
  unsigned int Field; // edi
  __int64 v83; // rax
  __int16 v84; // ax
  __int64 v85; // rax
  __int64 v86; // r8
  struct _KTHREAD *v87; // r11
  __int64 v88; // r9
  __int64 v89; // r10
  __int64 v90; // rbx
  __int64 v91; // rdx
  __int64 v93; // rax
  __int64 v94; // rsi
  __int64 v95; // rdx
  bool v96; // zf
  int v97; // eax
  _SLIST_ENTRY *v98; // rbx
  unsigned int v99; // esi
  KIRQL v100; // al
  _SLIST_ENTRY *v101; // rdx
  __int64 v102; // r14
  unsigned int v103; // eax
  void *v104; // rax
  char v105; // al
  _BYTE *v106; // rax
  unsigned __int16 v107; // di
  ULONG TimeIncrement; // eax
  __int64 v109; // rcx
  unsigned __int64 v110; // rdx
  unsigned __int16 v111; // ax
  unsigned __int16 v112; // ax
  void *ObjectPath; // rdi
  __int64 v114; // rax
  unsigned __int64 v115; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v116; // [rsp+38h] [rbp-C8h]
  __int16 v117; // [rsp+40h] [rbp-C0h] BYREF
  __int16 v118; // [rsp+44h] [rbp-BCh] BYREF
  __int16 v119; // [rsp+48h] [rbp-B8h] BYREF
  unsigned int v120; // [rsp+4Ch] [rbp-B4h]
  __int64 v121; // [rsp+50h] [rbp-B0h]
  __int64 v122; // [rsp+58h] [rbp-A8h]
  __int64 v123; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v124; // [rsp+68h] [rbp-98h]
  _QWORD v125[2]; // [rsp+70h] [rbp-90h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v126; // [rsp+80h] [rbp-80h] BYREF
  _SLIST_ENTRY *v127; // [rsp+90h] [rbp-70h]
  int v128; // [rsp+98h] [rbp-68h]
  int v129; // [rsp+9Ch] [rbp-64h]
  unsigned __int64 *v130; // [rsp+A0h] [rbp-60h]
  __int64 v131; // [rsp+A8h] [rbp-58h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+B0h] [rbp-50h] BYREF
  _SLIST_ENTRY *v133; // [rsp+C0h] [rbp-40h]
  int v134; // [rsp+C8h] [rbp-38h]
  int v135; // [rsp+CCh] [rbp-34h]
  __int16 *v136; // [rsp+D0h] [rbp-30h]
  __int64 v137; // [rsp+D8h] [rbp-28h]
  __int64 *v138; // [rsp+E0h] [rbp-20h]
  __int64 v139; // [rsp+E8h] [rbp-18h]

  v7 = 0;
  v124 = a4;
  v8 = 0LL;
  v120 = a3;
  v116 = a1;
  CurrentThread = KeGetCurrentThread();
  v12 = (unsigned int)gReadyQueue;
  CurrentIrql = KeGetCurrentIrql();
  if ( (gDebugger & 0x8000) != 0 && qword_1C0082830 )
  {
    v14 = 72LL * (_InterlockedExchangeAdd((_DWORD *)&qword_1C0082828 + 1, 1u) % (unsigned int)qword_1C0082828);
    *(_QWORD *)((char *)qword_1C0082830 + v14 + 8) = MEMORY[0xFFFFF78000000008];
    *(_DWORD *)((char *)qword_1C0082830 + v14) = 1095981390;
    *(_QWORD *)((char *)qword_1C0082830 + v14 + 16) = CurrentThread;
    *(_QWORD *)((char *)qword_1C0082830 + v14 + 24) = 0LL;
    *(_QWORD *)((char *)qword_1C0082830 + v14 + 32) = 0LL;
    *(_QWORD *)((char *)qword_1C0082830 + v14 + 40) = v12;
    *(_QWORD *)((char *)qword_1C0082830 + v14 + 48) = CurrentIrql;
    *(_QWORD *)((char *)qword_1C0082830 + v14 + 56) = a1;
    *(_QWORD *)((char *)qword_1C0082830 + v14 + 64) = 0LL;
  }
  ++dword_1C0082B54;
  v15 = ExpInterlockedPopEntrySList(&AMLIContextLookAsideList);
  if ( !v15 )
  {
    ++dword_1C0082B58;
    v15 = (PSLIST_ENTRY)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))qword_1C0082B70)(
                          (unsigned int)dword_1C0082B64,
                          (unsigned int)dword_1C0082B6C,
                          (unsigned int)dword_1C0082B68);
    if ( !v15 )
      return (unsigned int)-1073741670;
  }
  memset(v15, 0, 0x238uLL);
  v16 = KeAcquireSpinLockRaiseToDpc(&gdwGContextSpinLock);
  v17 = gdwcCTObjs + 1;
  gdwcCTObjs = v17;
  if ( v17 > 0 && v17 > (unsigned int)gdwcCTObjsMax )
    gdwcCTObjsMax = v17;
  KeReleaseSpinLock(&gdwGContextSpinLock, v16);
  HIDWORD(v15->Next) = 0;
  memset(&v15[1], 0, 0x130uLL);
  memset(&v15[20].Next + 1, 0, 0x98uLL);
  v18 = (char *)v15 + (unsigned int)gdwCtxtBlkSize;
  LODWORD(v15->Next) = 1415074883;
  *((_QWORD *)&v15->Next + 1) = v18;
  v15[20].Next = v15 + 30;
  KeInitializeDpc((PRKDPC)&v15[16], TimeoutCallback, v15);
  KeInitializeTimer((PKTIMER)&v15[12]);
  v19 = (unsigned int)(*((_DWORD *)&v15->Next + 2) - (_DWORD)v15 - 480);
  memset(&v15[30], 0, v19);
  LODWORD(v15[30].Next) = 1346454856;
  *((_QWORD *)&v15[30].Next + 1) = (char *)v15 + v19 + 480;
  v15[32].Next = (PSLIST_ENTRY)((char *)v15 + 536);
  v15[33].Next = (PSLIST_ENTRY)((char *)v15 + 520);
  *((_QWORD *)&v15[32].Next + 1) = (char *)v15 + 520;
  *((_QWORD *)&v15[23].Next + 1) = RestartCtxtPassive;
  v15[24].Next = v15;
  *((_QWORD *)&v15[22].Next + 1) = 0LL;
  v15[25].Next = (PSLIST_ENTRY)((char *)v15 + 392);
  *((_QWORD *)&v15[24].Next + 1) = (char *)v15 + 392;
  *((_QWORD *)&v15[3].Next + 1) = v15 + 3;
  v15[3].Next = v15 + 3;
  *((_QWORD *)&v15[2].Next + 1) = v15 + 2;
  v15[2].Next = v15 + 2;
  v15[31].Next = v15 + 30;
  PoolWithTag = (_SLIST_ENTRY *)ExAllocatePoolWithTag(NonPagedPoolNx, 0xA8uLL, 0x646C6D61u);
  v15[29].Next = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0xA8uLL);
    v15[29].Next->Next = v15;
    LODWORD(v15[29].Next[1].Next) = AmliWatchdogAction;
    *((_QWORD *)&v15[28].Next + 1) = MEMORY[0xFFFFF78000000008];
    *((_BYTE *)&v15[29].Next + 8) = 0;
  }
  v21 = KeAcquireSpinLockRaiseToDpc(&gmutCtxtList);
  v22 = (struct _SLIST_ENTRY **)off_1C007F388[0];
  byte_1C0082B10 = v21;
  v23 = v15 + 1;
  if ( *(_UNKNOWN ***)off_1C007F388[0] != &glistCtxtHead )
    goto LABEL_220;
  v23->Next = (_SLIST_ENTRY *)&glistCtxtHead;
  *((_QWORD *)&v15[1].Next + 1) = v22;
  *v22 = v23;
  off_1C007F388[0] = (_UNKNOWN **)&v15[1];
  KeReleaseSpinLock(&gmutCtxtList, byte_1C0082B10);
  v24 = *(_WORD *)(a1 + 64);
  if ( (v24 & 0x400) != 0 )
  {
    v8 = *(_QWORD *)(a1 + 136);
  }
  else if ( (v24 & 0x200) != 0 )
  {
    v8 = a1;
  }
  v25 = gdwfAMLI;
  *((_QWORD *)&v15[4].Next + 1) = a1;
  if ( (v25 & 4) != 0 )
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 112));
  v26 = gdwfAMLI;
  v15[5].Next = (_SLIST_ENTRY *)a1;
  if ( (v26 & 4) != 0 )
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 112));
  if ( v8 )
  {
    v105 = gdwfAMLI;
    *((_QWORD *)&v15[26].Next + 1) = v8;
    if ( (v105 & 4) != 0 )
      _InterlockedIncrement((volatile signed __int32 *)(v8 + 112));
    v116 = v8;
  }
  *((_QWORD *)&v15[10].Next + 1) = a5;
  v15[11].Next = a2;
  v27 = *((_QWORD *)&v15[4].Next + 1);
  *((_QWORD *)&v15[11].Next + 1) = a6;
  v28 = 0LL;
  v29 = ExAcquireSpinLockShared(&ACPINamespaceLock);
  if ( v27 )
  {
    v30 = -1LL;
    if ( *(_QWORD *)(v27 + 16) )
    {
      ObjectPathNoLock = GetObjectPathNoLock();
      v32 = (_BYTE *)ObjectPathNoLock;
      if ( !ObjectPathNoLock )
        goto LABEL_83;
      v33 = -1LL;
      do
        ++v33;
      while ( *(_BYTE *)(ObjectPathNoLock + v33) );
      v34 = ExAllocatePoolWithTag(NonPagedPoolNx, v33 + 9, 0x5254535Fu);
      v28 = v34;
      if ( v34 )
      {
        v35 = -1LL;
        do
          ++v35;
        while ( v32[v35] );
        memset(v34, 0, v35 + 9);
        v36 = -1LL;
        do
          ++v36;
        while ( v32[v36] );
        v37 = v36 + 1;
        if ( (unsigned __int64)(v37 - 1) > 0x7FFFFFFE )
        {
          if ( v37 )
            *v28 = 0;
        }
        else
        {
          v38 = 2147483646 - v37;
          v39 = v28;
          while ( v38 + v37 )
          {
            v40 = v39[v32 - v28];
            if ( !v40 )
              break;
            *v39++ = v40;
            if ( !--v37 )
              goto LABEL_183;
          }
          if ( v37 )
            goto LABEL_36;
LABEL_183:
          --v39;
LABEL_36:
          *v39 = 0;
        }
        if ( *(_QWORD *)(*(_QWORD *)(v27 + 16) + 16LL) )
        {
          v41 = -1LL;
          do
            ++v41;
          while ( v32[v41] );
          v42 = v41 + 9;
          v43 = 0;
          if ( (unsigned __int64)(v42 - 1) > 0x7FFFFFFE )
            v43 = -1073741811;
          if ( v43 < 0 )
          {
            v46 = 0LL;
            v121 = 0LL;
          }
          else
          {
            v44 = v42;
            v45 = v28;
            v43 = 0;
            if ( !v42 )
              goto LABEL_186;
            while ( *v45 )
            {
              ++v45;
              if ( !--v44 )
                goto LABEL_186;
            }
            if ( v44 )
            {
              v46 = v42 - v44;
            }
            else
            {
LABEL_186:
              v43 = -1073741811;
              v46 = 0LL;
            }
            v121 = v46;
          }
          if ( v43 >= 0 )
          {
            v47 = &v28[v46];
            v48 = v42 - v46;
            if ( v42 == v46 )
              goto LABEL_188;
            v49 = 2147483646LL;
            v50 = (const char *)("." - v47);
            while ( v49 )
            {
              v51 = v47[(_QWORD)v50];
              if ( !v51 )
                break;
              *v47 = v51;
              --v49;
              ++v47;
              if ( !--v48 )
                goto LABEL_188;
            }
            if ( !v48 )
LABEL_188:
              --v47;
            *v47 = 0;
          }
        }
        v52 = -1LL;
        do
          ++v52;
        while ( v32[v52] );
        v53 = v52 + 9;
        v54 = 0;
        if ( (unsigned __int64)(v53 - 1) > 0x7FFFFFFE )
          v54 = -1073741811;
        if ( v54 < 0 )
        {
          v57 = 0LL;
          v122 = 0LL;
        }
        else
        {
          v55 = v53;
          v56 = v28;
          v54 = 0;
          if ( !v53 )
            goto LABEL_189;
          while ( *v56 )
          {
            ++v56;
            if ( !--v55 )
              goto LABEL_189;
          }
          if ( v55 )
          {
            v57 = v53 - v55;
          }
          else
          {
LABEL_189:
            v54 = -1073741811;
            v57 = 0LL;
          }
          v122 = v57;
        }
        if ( v54 >= 0 )
        {
          v58 = &v28[v57];
          v59 = v53 - v57;
          if ( v53 == v57 )
            goto LABEL_191;
          v60 = 4LL;
          v61 = v27 - (_QWORD)v58;
          while ( v60 )
          {
            v62 = v58[v61 + 40];
            if ( !v62 )
              break;
            *v58 = v62;
            --v60;
            ++v58;
            if ( !--v59 )
              goto LABEL_191;
          }
          if ( !v59 )
LABEL_191:
            --v58;
          *v58 = 0;
        }
      }
      ExFreePoolWithTag(v32, 0x5254535Fu);
    }
    else
    {
      v28 = ExAllocatePoolWithTag(NonPagedPoolNx, 8uLL, 0x5254535Fu);
      if ( !v28 )
        goto LABEL_83;
      *(_QWORD *)v28 = 0LL;
      *v28 = 92;
    }
    if ( v28 )
    {
      do
        ++v30;
      while ( v28[v30] );
      v63 = v30 - 1;
      for ( i = v63; i >= 0; v28[i--] = 0 )
      {
        if ( v28[i] != 95 )
          break;
      }
    }
  }
  else
  {
    v106 = ExAllocatePoolWithTag(NonPagedPoolNx, 1uLL, 0x5254535Fu);
    v28 = v106;
    if ( v106 )
      *v106 = 0;
  }
LABEL_83:
  ExReleaseSpinLockShared(&ACPINamespaceLock, v29);
  v65 = (unsigned __int16 *)(&v15[27].Next + 1);
  RtlInitUnicodeString((PUNICODE_STRING)(&v15[27].Next + 1), 0LL);
  if ( v28 )
  {
    if ( *v28 )
    {
      v66 = v28;
      v67 = 512LL;
      while ( *v66 )
      {
        ++v66;
        if ( !--v67 )
        {
          v107 = 512;
          goto LABEL_90;
        }
      }
      v107 = 512 - v67;
      v125[1] = 512 - v67;
LABEL_90:
      v68 = v107;
      Next = (_SLIST_ENTRY *)ExAllocatePoolWithTag(NonPagedPoolNx, 2LL * v107 + 2, 0x53706341u);
      v15[28].Next = Next;
      if ( Next )
      {
        *v65 = 2 * v107;
        *((_WORD *)&v15[27].Next + 5) = 2 * v107 + 2;
        if ( v107 )
        {
          v70 = 0LL;
          v71 = v28;
          do
          {
            v72 = *v71;
            v70 += 2LL;
            ++v71;
            *(_WORD *)((char *)v15[28].Next + v70 - 2) = v72;
            --v68;
          }
          while ( v68 );
          Next = v15[28].Next;
        }
        *((_WORD *)&Next->Next + v107) = 0;
      }
    }
    ExFreePoolWithTag(v28, 0);
  }
  v73 = v15[29].Next;
  v74 = v116;
  if ( v73 )
  {
    v75 = *(_QWORD *)(v116 + 16);
    v76 = v15[29].Next;
    if ( v75 )
    {
      v77 = *(_WORD *)(v75 + 66);
      if ( v77 == 6 || v77 == 13 || v77 == 12 )
      {
        *((_QWORD *)&v73->Next + 1) = *(_QWORD *)(v75 + 104);
        v76 = v15[29].Next;
      }
    }
    if ( AmliWatchdogEnabled )
    {
      v78 = (unsigned int)AmliWatchdogTimeout;
      if ( AmliWatchdogTimeout )
      {
        *((_BYTE *)&v76[5].Next + 8) = 1;
        KeInitializeDpc((PRKDPC)(&v76[1].Next + 1), AmliWatchdog, v76);
        KeInitializeTimer((PKTIMER)(&v76[6].Next + 1));
        v76[6].Next = (_SLIST_ENTRY *)MEMORY[0xFFFFF78000000008];
        KeSetTimer((PKTIMER)(&v76[6].Next + 1), (LARGE_INTEGER)(-10000000 * v78), (PKDPC)(&v76[1].Next + 1));
      }
      v74 = v116;
    }
  }
  v115 = 0LL;
  v116 = 0LL;
  if ( AcpiDiagHandle )
  {
    if ( EtwEventEnabled(AcpiDiagHandle, &ACPI_ETW_EVENT_FREQUENT_AML_METHOD) )
    {
      TimeIncrement = KeQueryTimeIncrement();
      v109 = *((_QWORD *)&v15[4].Next + 1);
      v110 = MEMORY[0xFFFFF78000000008] / (unsigned __int64)TimeIncrement / 0x11E1A300;
      v115 = *(_QWORD *)(v109 + 144);
      v116 = *(_QWORD *)(v109 + 152);
      if ( v116 == v110 )
      {
        ++v115;
        *(_DWORD *)(v109 + 148) = HIDWORD(v115);
        *(_DWORD *)(*((_QWORD *)&v15[4].Next + 1) + 144LL) = v115;
      }
      else
      {
        v115 = 1LL;
        *(_DWORD *)(v109 + 148) = 0;
        *(_DWORD *)(*((_QWORD *)&v15[4].Next + 1) + 144LL) = v115;
        *(_QWORD *)(*((_QWORD *)&v15[4].Next + 1) + 152LL) = v110;
      }
      if ( v115 >= 0x3C )
      {
        v111 = *v65;
        v128 = *v65;
        v117 = v111 >> 1;
        v126.Ptr = (unsigned __int64)&v117;
        v127 = v15[28].Next;
        v130 = &v115;
        *(_QWORD *)&v126.Size = 2LL;
        v129 = 0;
        v131 = 8LL;
        EtwWrite(AcpiDiagHandle, &ACPI_ETW_EVENT_FREQUENT_AML_METHOD, 0LL, 3u, &v126);
      }
    }
    v123 = 0LL;
    if ( AcpiDiagHandle && EtwEventEnabled(AcpiDiagHandle, &ACPI_ETW_EVENT_AML_METHOD_TRACE) )
    {
      v112 = *v65;
      v134 = *v65;
      v118 = v112 >> 1;
      UserData.Ptr = (unsigned __int64)&v118;
      v133 = v15[28].Next;
      v136 = &v119;
      v138 = &v123;
      *(_QWORD *)&UserData.Size = 2LL;
      v135 = 0;
      v119 = 1;
      v137 = 2LL;
      v139 = 8LL;
      EtwWrite(AcpiDiagHandle, &ACPI_ETW_EVENT_AML_METHOD_TRACE, 0LL, 4u, &UserData);
    }
  }
  if ( a7 )
    LODWORD(v15[4].Next) |= 0x100u;
  v79 = v74 + 64;
  v80 = v15 + 8;
  if ( (*(_WORD *)(v74 + 64) & 0x180) != 0 )
  {
    Field = PushPost((_DWORD)v15, (unsigned int)ProcessEvalObj, v74, 0, (__int64)&v15[8]);
    if ( !Field )
    {
      Field = AMLIReadNamespaceOverrideObject(v15, v74, &v15[8]);
      if ( Field != 32772 )
        goto LABEL_129;
    }
    goto LABEL_204;
  }
  v81 = v15 + 30;
  if ( *(_WORD *)(v74 + 66) != 8 )
  {
    Field = 0;
    v83 = HeapAlloc(v81, 1297237576LL, 56LL);
    if ( v83 )
    {
      *(_QWORD *)(v83 + 8) = v15[26].Next;
      v15[26].Next = (_SLIST_ENTRY *)v83;
      *(_QWORD *)(v83 + 24) = ProcessEvalObj;
      *(_DWORD *)v83 = 1414745936;
      *(_QWORD *)(v83 + 32) = v74;
      *(_QWORD *)(v83 + 40) = 0LL;
      *(_QWORD *)(v83 + 48) = v80;
    }
    else
    {
      Field = -1072431102;
      LogError(3222536194LL);
      AcpiDiagTraceAmlError(v15, 3222536194LL);
      PrintDebugMessage(153, 0, 0, 0, 0LL);
    }
    if ( !Field )
    {
      Field = 0;
      while ( 1 )
      {
        while ( 1 )
        {
          v84 = *(_WORD *)(v79 + 2);
          if ( v84 != 128 )
            break;
          v79 = *(_QWORD *)(v79 + 16) + 64LL;
        }
        if ( v84 != 129 )
          break;
        v79 = *(_QWORD *)(v79 + 16);
      }
      if ( v84 == 5 )
      {
        Field = PushFrame((_DWORD)v15, 1430668097, 48, (unsigned int)AccFieldUnit, (__int64)v125);
        if ( !Field )
        {
          v114 = v125[0];
          *(_QWORD *)(v125[0] + 32LL) = v79;
          *(_DWORD *)(v114 + 16) = 0x10000;
          *(_QWORD *)(v114 + 40) = v80;
        }
      }
      else if ( v84 == 14 )
      {
        Field = ReadField(v15, v79, *(_QWORD *)(v79 + 32) + 12LL, &v15[8]);
      }
      else
      {
        if ( v80 != (struct _SLIST_ENTRY *)v79 )
        {
          *v80 = *(struct _SLIST_ENTRY *)v79;
          v15[9] = *(PSLIST_ENTRY)(v79 + 16);
          v15[10].Next = *(_SLIST_ENTRY **)(v79 + 32);
          if ( (*(_BYTE *)v79 & 1) != 0 )
          {
            _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v79 + 8) + 8LL));
          }
          else if ( *(_QWORD *)(v79 + 32) )
          {
            _InterlockedIncrement((volatile signed __int32 *)(v79 + 8));
            LOWORD(v80->Next) |= 1u;
            *((_QWORD *)&v15[8].Next + 1) = v79;
          }
        }
        if ( (gDebugger & 0xD0) != 0 )
        {
          ConPrintf("=");
          PrintObject(&v15[8]);
        }
      }
      if ( Field != 32772 )
        goto LABEL_129;
    }
LABEL_204:
    FreeContext(v15);
    return Field;
  }
  v93 = HeapAlloc(v81, 1297237576LL, 400LL);
  v94 = v93;
  if ( !v93 )
  {
    Field = -1072431102;
    LogError(3222536194LL);
    AcpiDiagTraceAmlError(v15, 3222536194LL);
    PrintDebugMessage(153, 0, 0, 0, 0LL);
    goto LABEL_204;
  }
  Field = 0;
  *(_QWORD *)(v93 + 8) = v15[26].Next;
  v15[26].Next = (_SLIST_ENTRY *)v93;
  *(_DWORD *)v93 = 1280065859;
  *(_QWORD *)(v93 + 24) = ParseCall;
  v95 = *(_QWORD *)(v74 + 96);
  *(_QWORD *)(v93 + 48) = v74;
  if ( (gdwfAMLI & 4) != 0 )
    _InterlockedIncrement((volatile signed __int32 *)(v74 + 112));
  if ( (*(_BYTE *)(v95 + 193) & 8) != 0 )
    *(_DWORD *)(v93 + 16) |= 0x10000u;
  if ( *(_WORD *)(v74 + 66) == 8 && (*(_WORD *)v79 & 0x200) != 0 )
    *(_DWORD *)(v93 + 16) |= 0x80000u;
  v96 = (*(_BYTE *)(v95 + 193) & 7) == 0;
  v97 = *(_BYTE *)(v95 + 193) & 7;
  *(_DWORD *)(v94 + 60) = v97;
  if ( !v96 )
  {
    v104 = (void *)HeapAlloc(v15[20].Next, 1413563464LL, (unsigned int)(40 * v97));
    *(_QWORD *)(v94 + 64) = v104;
    if ( v104 )
    {
      memset(v104, 0, 40LL * *(unsigned int *)(v94 + 60));
    }
    else
    {
      Field = -1073741670;
      LogError(3221225626LL);
      AcpiDiagTraceAmlError(v15, 3221225626LL);
      PrintDebugMessage(152, 0, 0, 0, 0LL);
    }
  }
  *(_QWORD *)(v94 + 392) = v80;
  if ( Field )
    goto LABEL_204;
  v98 = v15[26].Next;
  v99 = v120;
  if ( v120 != *((_DWORD *)&v98[3].Next + 3) )
  {
    Field = -1072431093;
    LogError(3222536203LL);
    AcpiDiagTraceAmlError(v15, 3222536203LL);
    PrintDebugMessage(12, v99, *((_DWORD *)&v98[3].Next + 3), 0, 0LL);
    goto LABEL_204;
  }
  if ( (gDebugger & 0xD0) != 0 )
  {
    ObjectPath = (void *)GetObjectPath(v74);
    ConPrintf("\nAMLI: %p: %s(");
    if ( ObjectPath )
      ExFreePoolWithTag(ObjectPath, 0);
  }
  *((_DWORD *)&v98[3].Next + 2) = 0;
  if ( v99 )
  {
    v102 = v124;
    do
    {
      Field = DupObjData(v15[20].Next, (char *)v98[4].Next + 40 * v7, v102 + 40LL * v7);
      if ( Field )
        goto LABEL_204;
      if ( (gDebugger & 0xD0) != 0 )
      {
        PrintObject(v102 + 40LL * *((unsigned int *)&v98[3].Next + 2));
        if ( *((_DWORD *)&v98[3].Next + 2) + 1 < v99 )
          ConPrintf(",");
      }
      v103 = *((_DWORD *)&v98[3].Next + 2) + 1;
      *((_DWORD *)&v98[3].Next + 2) = v103;
      v7 = v103;
    }
    while ( v103 < v99 );
  }
  if ( (gDebugger & 0xD0) != 0 )
    ConPrintf(")\n");
  LODWORD(v98[1].Next) = (__int64)v98[1].Next & 0xFFFF0000 | 2;
LABEL_129:
  v85 = *((_QWORD *)&v15[6].Next + 1);
  if ( v85 )
    v86 = *(_QWORD *)(v85 + 32);
  else
    v86 = *((_QWORD *)&v15[4].Next + 1);
  v87 = KeGetCurrentThread();
  v88 = *((_QWORD *)&v15[7].Next + 1);
  v89 = *((_QWORD *)&v15[25].Next + 1);
  v90 = (unsigned int)gReadyQueue;
  if ( (gDebugger & 0x8000) != 0 && qword_1C0082830 )
  {
    v91 = 72LL * (_InterlockedExchangeAdd((_DWORD *)&qword_1C0082828 + 1, 1u) % (unsigned int)qword_1C0082828);
    *(_QWORD *)((char *)qword_1C0082830 + v91 + 8) = MEMORY[0xFFFFF78000000008];
    *(_DWORD *)((char *)qword_1C0082830 + v91) = 1380275028;
    *(_QWORD *)((char *)qword_1C0082830 + v91 + 16) = v87;
    *(_QWORD *)((char *)qword_1C0082830 + v91 + 24) = v89;
    *(_QWORD *)((char *)qword_1C0082830 + v91 + 32) = v15;
    *(_QWORD *)((char *)qword_1C0082830 + v91 + 40) = v90;
    *(_QWORD *)((char *)qword_1C0082830 + v91 + 48) = v15;
    *(_QWORD *)((char *)qword_1C0082830 + v91 + 56) = v86;
    *(_QWORD *)((char *)qword_1C0082830 + v91 + 64) = v88;
  }
  if ( KeGetCurrentIrql() >= 2u )
  {
    byte_1C0082700 = KeAcquireSpinLockRaiseToDpc(&SpinLock);
    if ( !v15[27].Next )
      v15[27].Next = (_SLIST_ENTRY *)++gAmliMethodCounter;
    LODWORD(v15[4].Next) |= 0x20u;
    KeReleaseSpinLock(&SpinLock, byte_1C0082700);
    if ( (gdwfAMLI & 4) != 0 )
    {
      if ( !(unsigned __int8)ExTryQueueWorkItem(&v15[22].Next + 1, 1LL) )
        OSQueueWorkItem(&v15[22].Next + 1);
      return 32772;
    }
    v100 = KeAcquireSpinLockRaiseToDpc(&ACPIWorkerQueueSpinLock);
    v101 = (_SLIST_ENTRY *)qword_1C00818B8;
    if ( *(__int64 **)qword_1C00818B8 == &ACPIWorkQueue )
    {
      *((_QWORD *)&v15[22].Next + 1) = &ACPIWorkQueue;
      v15[23].Next = v101;
      v101->Next = (PSLIST_ENTRY)((char *)v15 + 360);
      qword_1C00818B8 = (__int64)(&v15[22].Next + 1);
      KeReleaseSpinLock(&ACPIWorkerQueueSpinLock, v100);
      KeSetEvent(&ACPIProcessWorkQueueEvent, 0, 0);
      return 32772;
    }
LABEL_220:
    __fastfail(3u);
  }
  byte_1C0082700 = KeAcquireSpinLockRaiseToDpc(&SpinLock);
  if ( !v15[27].Next )
    v15[27].Next = (_SLIST_ENTRY *)++gAmliMethodCounter;
  Field = InsertReadyQueue(v15);
  KeReleaseSpinLock(&SpinLock, byte_1C0082700);
  return Field;
}
