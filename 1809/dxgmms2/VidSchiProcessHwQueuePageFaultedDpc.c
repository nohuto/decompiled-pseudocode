/*
 * XREFs of VidSchiProcessHwQueuePageFaultedDpc @ 0x1C0037EB0
 * Callers:
 *     VidSchDdiNotifyDpc @ 0x1C00033B0 (VidSchDdiNotifyDpc.c)
 *     VidSchDdiNotifyDpcWorker @ 0x1C002D5AC (VidSchDdiNotifyDpcWorker.c)
 * Callees:
 *     VidSchiMarkDeviceAsError @ 0x1C0001098 (VidSchiMarkDeviceAsError.c)
 *     ??1HwQueueStagingList@@QEAA@XZ @ 0x1C0007350 (--1HwQueueStagingList@@QEAA@XZ.c)
 *     ?Release@AcquireSpinLock@@QEAAXXZ @ 0x1C0011474 (-Release@AcquireSpinLock@@QEAAXXZ.c)
 *     ??0AcquireSpinLock@@QEAA@AEA_K_N1@Z @ 0x1C0011694 (--0AcquireSpinLock@@QEAA@AEA_K_N1@Z.c)
 *     __security_check_cookie @ 0x1C0018BA0 (__security_check_cookie.c)
 *     _TlgCreateSz @ 0x1C00290D8 (_TlgCreateSz.c)
 *     _TlgWrite @ 0x1C0029110 (_TlgWrite.c)
 */

void __fastcall VidSchiProcessHwQueuePageFaultedDpc(PSLIST_ENTRY ListEntry)
{
  struct _SLIST_ENTRY *Next; // rdi
  __int128 v2; // xmm1
  __int128 v3; // xmm0
  __int128 v4; // xmm1
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // rcx
  __int64 v8; // r14
  __int64 v9; // rax
  _QWORD *v10; // rax
  _QWORD *v11; // rax
  __int64 v12; // rdx
  const CHAR *v13; // rsi
  _QWORD *v14; // rbx
  char v15; // al
  _QWORD *v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rdx
  const void *v19; // rdx
  unsigned int v20; // edx
  __int64 v21; // rcx
  unsigned __int16 *v22; // rax
  LPCGUID v23; // r9
  __int128 v24; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v25; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v26; // [rsp+70h] [rbp-90h] BYREF
  __int128 v27; // [rsp+80h] [rbp-80h] BYREF
  unsigned int v28; // [rsp+90h] [rbp-70h] BYREF
  int v29; // [rsp+94h] [rbp-6Ch] BYREF
  int v30; // [rsp+98h] [rbp-68h] BYREF
  int v31; // [rsp+9Ch] [rbp-64h] BYREF
  int v32; // [rsp+A0h] [rbp-60h] BYREF
  int v33; // [rsp+A4h] [rbp-5Ch] BYREF
  __int64 v34; // [rsp+A8h] [rbp-58h] BYREF
  _QWORD v35[2]; // [rsp+B0h] [rbp-50h] BYREF
  char v36; // [rsp+C0h] [rbp-40h]
  __int64 v37; // [rsp+C8h] [rbp-38h] BYREF
  _BYTE v38[48]; // [rsp+D0h] [rbp-30h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+100h] [rbp+0h] BYREF
  __int64 *v40; // [rsp+120h] [rbp+20h]
  __int64 v41; // [rsp+128h] [rbp+28h]
  _DWORD *v42; // [rsp+130h] [rbp+30h]
  __int64 v43; // [rsp+138h] [rbp+38h]
  __int64 v44; // [rsp+140h] [rbp+40h]
  _DWORD v45[2]; // [rsp+148h] [rbp+48h] BYREF
  unsigned int *v46; // [rsp+150h] [rbp+50h]
  __int64 v47; // [rsp+158h] [rbp+58h]
  int *v48; // [rsp+160h] [rbp+60h]
  __int64 v49; // [rsp+168h] [rbp+68h]
  __int128 *v50; // [rsp+170h] [rbp+70h]
  __int64 v51; // [rsp+178h] [rbp+78h]
  int *v52; // [rsp+180h] [rbp+80h]
  __int64 v53; // [rsp+188h] [rbp+88h]
  char *v54; // [rsp+190h] [rbp+90h]
  __int64 v55; // [rsp+198h] [rbp+98h]
  int *v56; // [rsp+1A0h] [rbp+A0h]
  __int64 v57; // [rsp+1A8h] [rbp+A8h]
  char *v58; // [rsp+1B0h] [rbp+B0h]
  __int64 v59; // [rsp+1B8h] [rbp+B8h]
  __int128 *v60; // [rsp+1C0h] [rbp+C0h]
  __int64 v61; // [rsp+1C8h] [rbp+C8h]
  char *v62; // [rsp+1D0h] [rbp+D0h]
  __int64 v63; // [rsp+1D8h] [rbp+D8h]
  char *v64; // [rsp+1E0h] [rbp+E0h]
  __int64 v65; // [rsp+1E8h] [rbp+E8h]
  int *v66; // [rsp+1F0h] [rbp+F0h]
  __int64 v67; // [rsp+1F8h] [rbp+F8h]
  int *v68; // [rsp+200h] [rbp+100h]
  __int64 v69; // [rsp+208h] [rbp+108h]
  __int64 *v70; // [rsp+210h] [rbp+110h]
  __int64 v71; // [rsp+218h] [rbp+118h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+220h] [rbp+120h] BYREF

  Next = ListEntry[2].Next;
  v2 = *(__int128 *)((char *)&ListEntry[3] + 8);
  v24 = *(__int128 *)((char *)&ListEntry[2] + 8);
  v3 = *(__int128 *)((char *)&ListEntry[4] + 8);
  v25 = v2;
  v4 = *(__int128 *)((char *)&ListEntry[5] + 8);
  v26 = v3;
  v27 = v4;
  ExpInterlockedPushEntrySList((PSLIST_HEADER)&Next[387], ListEntry);
  v7 = (unsigned int)v4;
  v8 = *((_QWORD *)&Next[1].Next + 1);
  if ( (v4 & 0x10) != 0 )
  {
    v9 = WdLogNewEntry5_WdCriticalError((unsigned int)v4, v5);
    *(_QWORD *)(v9 + 24) = 281LL;
    *(_QWORD *)(v9 + 32) = 12LL;
    *(_QWORD *)(v9 + 40) = (int)v27;
    *(_OWORD *)(v9 + 48) = v24;
    WdLogEvent5_WdCriticalError(v9);
    __debugbreak();
  }
  if ( (v7 & 0xC) == 0xC )
  {
    v10 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v7, v5);
    v10[3] = 281LL;
    v10[4] = 13LL;
    v10[5] = (int)v27;
    v10[6] = *((_QWORD *)&v25 + 1);
    v10[7] = *((_QWORD *)&v24 + 1);
    WdLogEvent5_WdCriticalError(v10);
    __debugbreak();
  }
  if ( (unsigned int)v7 >= 0x100 )
  {
    v11 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v7, v5);
    v11[3] = 281LL;
    v11[4] = 13LL;
    v11[5] = (int)v27;
    v11[6] = *((_QWORD *)&v25 + 1);
    v11[7] = *((_QWORD *)&v24 + 1);
    WdLogEvent5_WdCriticalError(v11);
    __debugbreak();
  }
  AcquireSpinLock::AcquireSpinLock((AcquireSpinLock *)v38, (unsigned __int64 *)(v8 + 1648), v6, 1);
  v35[1] = v35;
  v13 = 0LL;
  v36 = 0;
  v35[0] = v35;
  v14 = 0LL;
  v15 = v27;
  v34 = 0LL;
  if ( (v27 & 2) == 0 )
  {
    v17 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)&v25 + 1) + 40LL) + 40LL);
    goto LABEL_18;
  }
  if ( (v27 & 0x40) != 0 )
  {
    v17 = *(_QWORD *)(*((_QWORD *)&v25 + 1) + 8LL);
LABEL_18:
    v18 = *(_QWORD *)(v17 + 8);
    v14 = *(_QWORD **)(v18 + 40);
    v13 = (const CHAR *)v14[330];
    v34 = v14[329];
    VidSchiMarkDeviceAsError((struct HwQueueStagingList *)v35, v18, 9, 0LL);
    goto LABEL_19;
  }
  if ( (v27 & 0xC) == 0 )
  {
    v16 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v27 & 0x40, v12);
    v16[3] = 281LL;
    v16[4] = 13LL;
    v16[5] = (int)v27;
    v16[6] = *((_QWORD *)&v25 + 1);
    v16[7] = *((_QWORD *)&v24 + 1);
    v15 = WdLogEvent5_WdCriticalError(v16);
    __debugbreak();
  }
  if ( (v15 & 4) != 0 )
    LODWORD(Next[126].Next) = 1;
  else
    *((_DWORD *)&Next[125].Next + 3) = 1;
  if ( (v27 & 0x80u) != 0LL )
  {
    v34 = *(_QWORD *)(*((_QWORD *)&v25 + 1) + 72LL);
    v13 = *(const CHAR **)(*((_QWORD *)&v25 + 1) + 80LL);
    v14 = *(_QWORD **)(*((_QWORD *)&v25 + 1) + 24LL);
  }
LABEL_19:
  if ( !g_PageFaultDebugMode && !KdRefreshDebuggerNotPresent() )
  {
    if ( v14 )
      v19 = (const void *)v14[331];
    else
      v19 = 0LL;
    DbgPrintEx(
      0x65u,
      0,
      "\n"
      "The GPU Scheduler detected a HW queue page fault at GPU VA 0x%I64X.\n"
      "We broke into the debugger to allow a chance for debugging this issue.\n"
      "Run \"!dxgkdx.gpuva -a %d -p 0x%p -o %d 0x%I64X[ -h]\" command for more info.\n"
      "To disable debug breaks on page fault, run \"?? dxgmms2!g_PageFaultDebugMode=1\" command,\n"
      "or \"ed 0x%p 1\"\n"
      "\n",
      *((_QWORD *)&v24 + 1),
      HIWORD(Next->Next),
      v19,
      *(_DWORD *)(v8 + 4),
      *((_QWORD *)&v24 + 1),
      &g_PageFaultDebugMode);
    __debugbreak();
  }
  if ( (v27 & 4) != 0 )
    v20 = 3;
  else
    v20 = (~(_BYTE)v27 & 8 | 0x20u) >> 3;
  if ( hProvider > 5u
    && (qword_1C004D058 & 0x400000000010LL) != 0
    && (qword_1C004D060 & 0x400000000010LL) == qword_1C004D060 )
  {
    v21 = *(_QWORD *)(v8 + 16);
    v37 = *(_QWORD *)(v21 + 276);
    v40 = &v37;
    v41 = 8LL;
    v22 = *(unsigned __int16 **)(v21 + 1392);
    v42 = v45;
    v43 = 2LL;
    LODWORD(v21) = *v22;
    v44 = *((_QWORD *)v22 + 1);
    v46 = &v28;
    v29 = v24;
    v48 = &v29;
    v50 = &v25;
    v30 = DWORD2(v26);
    v52 = &v30;
    v54 = (char *)&v26 + 12;
    v56 = &v31;
    v58 = (char *)&v24 + 8;
    v60 = &v26;
    v62 = (char *)&v26 + 4;
    v64 = (char *)&v27 + 4;
    v45[0] = v21;
    v32 = SDWORD2(v27) >> 1;
    v66 = &v32;
    v68 = &v33;
    v28 = v20;
    v33 = BYTE8(v27) & 1;
    v70 = &v34;
    v45[1] = 0;
    v47 = 4LL;
    v49 = 4LL;
    v51 = 8LL;
    v53 = 4LL;
    v55 = 4LL;
    v31 = v27;
    v57 = 4LL;
    v59 = 8LL;
    v61 = 4LL;
    v63 = 4LL;
    v65 = 4LL;
    v67 = 4LL;
    v69 = 4LL;
    v71 = 8LL;
    TlgCreateSz(&pDesc, v13);
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C0040D61, 0LL, v23, 0x13u, &pData);
  }
  HwQueueStagingList::~HwQueueStagingList((HwQueueStagingList *)v35);
  AcquireSpinLock::Release((AcquireSpinLock *)v38);
}
