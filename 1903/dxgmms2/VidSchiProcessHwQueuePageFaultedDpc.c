/*
 * XREFs of VidSchiProcessHwQueuePageFaultedDpc @ 0x1C00388EC
 * Callers:
 *     VidSchDdiNotifyDpc @ 0x1C0004570 (VidSchDdiNotifyDpc.c)
 *     VidSchDdiNotifyDpcWorker @ 0x1C002DCC0 (VidSchDdiNotifyDpcWorker.c)
 * Callees:
 *     VidSchiMarkDeviceAsError @ 0x1C00010A0 (VidSchiMarkDeviceAsError.c)
 *     ??1HwQueueStagingList@@QEAA@XZ @ 0x1C0008420 (--1HwQueueStagingList@@QEAA@XZ.c)
 *     ?Acquire@AcquireSpinLock@@QEAAXXZ @ 0x1C0011290 (-Acquire@AcquireSpinLock@@QEAAXXZ.c)
 *     ?Release@AcquireSpinLock@@QEAAXXZ @ 0x1C0011414 (-Release@AcquireSpinLock@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0018060 (__security_check_cookie.c)
 *     _TlgCreateSz @ 0x1C0029C28 (_TlgCreateSz.c)
 *     _TlgWrite @ 0x1C0029C60 (_TlgWrite.c)
 */

void __fastcall VidSchiProcessHwQueuePageFaultedDpc(PSLIST_ENTRY ListEntry)
{
  struct _SLIST_ENTRY *Next; // rdi
  __int128 v2; // xmm1
  __int128 v3; // xmm0
  __int128 v4; // xmm1
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r14
  __int64 v8; // rax
  _QWORD *v9; // rax
  _QWORD *v10; // rax
  __int64 v11; // rdx
  const CHAR *v12; // rsi
  char v13; // al
  _QWORD *v14; // rbx
  _QWORD *v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rdx
  const void *v18; // rdx
  unsigned int v19; // edx
  __int64 v20; // rcx
  unsigned __int16 *v21; // rax
  LPCGUID v22; // r9
  __int128 v23; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v24; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v25; // [rsp+70h] [rbp-90h] BYREF
  __int128 v26; // [rsp+80h] [rbp-80h] BYREF
  unsigned int v27; // [rsp+90h] [rbp-70h] BYREF
  int v28; // [rsp+94h] [rbp-6Ch] BYREF
  int v29; // [rsp+98h] [rbp-68h] BYREF
  int v30; // [rsp+9Ch] [rbp-64h] BYREF
  int v31; // [rsp+A0h] [rbp-60h] BYREF
  int v32; // [rsp+A4h] [rbp-5Ch] BYREF
  __int64 v33; // [rsp+A8h] [rbp-58h] BYREF
  _QWORD v34[2]; // [rsp+B0h] [rbp-50h] BYREF
  char v35; // [rsp+C0h] [rbp-40h]
  __int64 v36; // [rsp+C8h] [rbp-38h] BYREF
  _QWORD v37[4]; // [rsp+D0h] [rbp-30h] BYREF
  __int16 v38; // [rsp+F0h] [rbp-10h]
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
  v23 = *(__int128 *)((char *)&ListEntry[2] + 8);
  v3 = *(__int128 *)((char *)&ListEntry[4] + 8);
  v24 = v2;
  v4 = *(__int128 *)((char *)&ListEntry[5] + 8);
  v25 = v3;
  v26 = v4;
  ExpInterlockedPushEntrySList((PSLIST_HEADER)&Next[387], ListEntry);
  v6 = (unsigned int)v4;
  v7 = *((_QWORD *)&Next[1].Next + 1);
  if ( (v4 & 0x10) != 0 )
  {
    v8 = WdLogNewEntry5_WdCriticalError((unsigned int)v4, v5);
    *(_QWORD *)(v8 + 24) = 281LL;
    *(_QWORD *)(v8 + 32) = 12LL;
    *(_QWORD *)(v8 + 40) = (int)v26;
    *(_OWORD *)(v8 + 48) = v23;
    WdLogEvent5_WdCriticalError(v8);
    __debugbreak();
  }
  if ( (v6 & 0xC) == 0xC )
  {
    v9 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v6, v5);
    v9[3] = 281LL;
    v9[4] = 13LL;
    v9[5] = (int)v26;
    v9[6] = *((_QWORD *)&v24 + 1);
    v9[7] = *((_QWORD *)&v23 + 1);
    WdLogEvent5_WdCriticalError(v9);
    __debugbreak();
  }
  if ( (unsigned int)v6 >= 0x100 )
  {
    v10 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v6, v5);
    v10[3] = 281LL;
    v10[4] = 13LL;
    v10[5] = (int)v26;
    v10[6] = *((_QWORD *)&v24 + 1);
    v10[7] = *((_QWORD *)&v23 + 1);
    WdLogEvent5_WdCriticalError(v10);
    __debugbreak();
  }
  v38 = 256;
  v37[0] = v7 + 1648;
  AcquireSpinLock::Acquire((Acquire *)v37);
  v35 = 0;
  v34[1] = v34;
  v33 = 0LL;
  v34[0] = v34;
  v12 = 0LL;
  v13 = v26;
  v14 = 0LL;
  if ( (v26 & 2) == 0 )
  {
    v16 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)&v24 + 1) + 40LL) + 40LL);
    goto LABEL_18;
  }
  if ( (v26 & 0x40) != 0 )
  {
    v16 = *(_QWORD *)(*((_QWORD *)&v24 + 1) + 8LL);
LABEL_18:
    v17 = *(_QWORD *)(v16 + 8);
    v14 = *(_QWORD **)(v17 + 40);
    v12 = (const CHAR *)v14[330];
    v33 = v14[329];
    VidSchiMarkDeviceAsError((struct HwQueueStagingList *)v34, v17, 9, 0LL);
    goto LABEL_19;
  }
  if ( (v26 & 0xC) == 0 )
  {
    v15 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v26 & 0x40, v11);
    v15[3] = 281LL;
    v15[4] = 13LL;
    v15[5] = (int)v26;
    v15[6] = *((_QWORD *)&v24 + 1);
    v15[7] = *((_QWORD *)&v23 + 1);
    v13 = WdLogEvent5_WdCriticalError(v15);
    __debugbreak();
  }
  if ( (v13 & 4) != 0 )
    LODWORD(Next[126].Next) = 1;
  else
    *((_DWORD *)&Next[125].Next + 3) = 1;
  if ( (v26 & 0x80u) != 0LL )
  {
    v33 = *(_QWORD *)(*((_QWORD *)&v24 + 1) + 72LL);
    v12 = *(const CHAR **)(*((_QWORD *)&v24 + 1) + 80LL);
    v14 = *(_QWORD **)(*((_QWORD *)&v24 + 1) + 24LL);
  }
LABEL_19:
  if ( !g_PageFaultDebugMode && !KdRefreshDebuggerNotPresent() )
  {
    if ( v14 )
      v18 = (const void *)v14[331];
    else
      v18 = 0LL;
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
      *((_QWORD *)&v23 + 1),
      HIWORD(Next->Next),
      v18,
      *(_DWORD *)(v7 + 4),
      *((_QWORD *)&v23 + 1),
      &g_PageFaultDebugMode);
    __debugbreak();
  }
  if ( (v26 & 4) != 0 )
    v19 = 3;
  else
    v19 = (~(_BYTE)v26 & 8 | 0x20u) >> 3;
  if ( hProvider > 5u
    && (qword_1C004E058 & 0x400000000010LL) != 0
    && (qword_1C004E060 & 0x400000000010LL) == qword_1C004E060 )
  {
    v20 = *(_QWORD *)(v7 + 16);
    v36 = *(_QWORD *)(v20 + 276);
    v40 = &v36;
    v41 = 8LL;
    v21 = *(unsigned __int16 **)(v20 + 1408);
    v42 = v45;
    v43 = 2LL;
    LODWORD(v20) = *v21;
    v44 = *((_QWORD *)v21 + 1);
    v46 = &v27;
    v28 = v23;
    v48 = &v28;
    v50 = &v24;
    v29 = DWORD2(v25);
    v52 = &v29;
    v54 = (char *)&v25 + 12;
    v56 = &v30;
    v58 = (char *)&v23 + 8;
    v60 = &v25;
    v62 = (char *)&v25 + 4;
    v64 = (char *)&v26 + 4;
    v45[0] = v20;
    v31 = SDWORD2(v26) >> 1;
    v66 = &v31;
    v68 = &v32;
    v27 = v19;
    v32 = BYTE8(v26) & 1;
    v70 = &v33;
    v45[1] = 0;
    v47 = 4LL;
    v49 = 4LL;
    v51 = 8LL;
    v53 = 4LL;
    v55 = 4LL;
    v30 = v26;
    v57 = 4LL;
    v59 = 8LL;
    v61 = 4LL;
    v63 = 4LL;
    v65 = 4LL;
    v67 = 4LL;
    v69 = 4LL;
    v71 = 8LL;
    TlgCreateSz(&pDesc, v12);
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C0040D39, 0LL, v22, 0x13u, &pData);
  }
  HwQueueStagingList::~HwQueueStagingList((HwQueueStagingList *)v34);
  AcquireSpinLock::Release((AcquireSpinLock *)v37);
}
