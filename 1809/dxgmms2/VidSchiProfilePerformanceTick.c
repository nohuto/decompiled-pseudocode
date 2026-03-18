/*
 * XREFs of VidSchiProfilePerformanceTick @ 0x1C0007960
 * Callers:
 *     VidSchSignalSyncObjectsFromGpu @ 0x1C0003AA0 (VidSchSignalSyncObjectsFromGpu.c)
 *     VidSchiSubmitCommandPacketToQueue @ 0x1C0004750 (VidSchiSubmitCommandPacketToQueue.c)
 *     VidSchiCheckPreemptionPolicy @ 0x1C0004DE0 (VidSchiCheckPreemptionPolicy.c)
 *     VidSchiSendToExecutionQueue @ 0x1C0005150 (VidSchiSendToExecutionQueue.c)
 *     VidSchiProcessDpcCompletedPacket @ 0x1C0005960 (VidSchiProcessDpcCompletedPacket.c)
 *     ?VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z @ 0x1C0006430 (-VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z.c)
 *     VidSchiScheduleCommandToRun @ 0x1C00073F0 (VidSchiScheduleCommandToRun.c)
 *     VidSchiSwitchContextWithCheck @ 0x1C0008630 (VidSchiSwitchContextWithCheck.c)
 *     VidSchiProcessIsrCompletedPacket @ 0x1C000A720 (VidSchiProcessIsrCompletedPacket.c)
 *     VidSchiProcessIsrPreemptedPacket @ 0x1C000E2EC (VidSchiProcessIsrPreemptedPacket.c)
 *     VidSchiProcessDpcPreemptedPacket @ 0x1C0012BF0 (VidSchiProcessDpcPreemptedPacket.c)
 *     VidSchiProcessDpcSystemRequest @ 0x1C001306C (VidSchiProcessDpcSystemRequest.c)
 *     VidSchiNeedToForcePreemptNode @ 0x1C0013C90 (VidSchiNeedToForcePreemptNode.c)
 *     VidSchiProcessIsrFaultedPacket @ 0x1C002E7A4 (VidSchiProcessIsrFaultedPacket.c)
 *     VidSchiReadCommandFromContextQueue @ 0x1C002ED58 (VidSchiReadCommandFromContextQueue.c)
 *     VidSchiSelectContext @ 0x1C002FDD8 (VidSchiSelectContext.c)
 *     ?VidSchiFreeCompletedHwQueuePacket@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1C0034BD8 (-VidSchiFreeCompletedHwQueuePacket@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 *     VidSchiSubmitCommandPacketToHwQueue @ 0x1C003907C (VidSchiSubmitCommandPacketToHwQueue.c)
 *     VidSchiCompletePendingCommandInNodeHwQueue @ 0x1C0039794 (VidSchiCompletePendingCommandInNodeHwQueue.c)
 *     VidSchiWaitForSchedulerEvents @ 0x1C0069790 (VidSchiWaitForSchedulerEvents.c)
 *     VidSchiWaitForDrainFlipQueue @ 0x1C0080C28 (VidSchiWaitForDrainFlipQueue.c)
 *     VidSchiWaitForCompletePreemption @ 0x1C00C78D0 (VidSchiWaitForCompletePreemption.c)
 *     VidSchiWaitForEmptyHwQueue @ 0x1C00C7990 (VidSchiWaitForEmptyHwQueue.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0001AD8 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?VidSchiFlushGpuWorkEntries@@YAXPEAU_VIDSCH_CONTEXT@@@Z @ 0x1C0012A9C (-VidSchiFlushGpuWorkEntries@@YAXPEAU_VIDSCH_CONTEXT@@@Z.c)
 *     __security_check_cookie @ 0x1C0018BA0 (__security_check_cookie.c)
 *     memset @ 0x1C001A9C0 (memset.c)
 *     McTemplateK0pq @ 0x1C002672C (McTemplateK0pq.c)
 *     McTemplateK0pqq @ 0x1C00267A4 (McTemplateK0pqq.c)
 *     McTemplateK0ppqqqPR4PR4 @ 0x1C002BCB0 (McTemplateK0ppqqqPR4PR4.c)
 *     McTemplateK0ppqxqpq @ 0x1C002BE38 (McTemplateK0ppqxqpq.c)
 *     McTemplateK0pqqPR2p @ 0x1C002C108 (McTemplateK0pqqPR2p.c)
 *     McTemplateK0pqqpxp @ 0x1C002C394 (McTemplateK0pqqpxp.c)
 *     McTemplateK0pqqqPR3XR3p @ 0x1C002C544 (McTemplateK0pqqqPR3XR3p.c)
 *     McTemplateK0pqqttp @ 0x1C002C848 (McTemplateK0pqqttp.c)
 *     McTemplateK0pqqxqqtppx @ 0x1C002CB90 (McTemplateK0pqqxqqtppx.c)
 *     McTemplateK0pqxqqqxqp @ 0x1C002CE24 (McTemplateK0pqxqqqxqp.c)
 *     McTemplateK0pqxqt @ 0x1C002CF14 (McTemplateK0pqxqt.c)
 *     McTemplateK0qtpiixi @ 0x1C002D434 (McTemplateK0qtpiixi.c)
 */

void __fastcall VidSchiProfilePerformanceTick(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  __int64 v8; // r13
  __int64 v9; // r14
  __int64 v10; // r9
  int v11; // r10d
  int v12; // ebx
  __int64 v14; // r9
  unsigned __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rdx
  int v18; // r8d
  __int16 v19; // r9
  __int64 v20; // rcx
  __int64 v21; // r9
  int v22; // edx
  __int64 v23; // rcx
  __int64 v24; // r9
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // rcx
  __int64 v28; // r9
  __int64 v29; // rcx
  __int64 *v30; // r14
  int v31; // r8d
  __int64 v32; // rcx
  __int64 v33; // r9
  int v34; // ecx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // rcx
  __int64 v38; // r9
  __int64 v39; // rcx
  __int64 *v40; // r14
  __int64 v41; // rcx
  __int64 v42; // r9
  __int64 v43; // rcx
  __int64 *v44; // rdx
  __int64 v45; // rax
  __int64 v46; // r12
  _BYTE *PoolWithTag; // r9
  __int64 v48; // r12
  _BYTE *v49; // rcx
  __int64 v50; // r11
  __int64 v51; // r12
  unsigned int v52; // r8d
  unsigned int v53; // edx
  int v54; // r9d
  __int64 v55; // rax
  __int64 v56; // rdx
  __int64 v57; // r10
  __int64 v58; // r12
  __int64 v59; // r13
  int v60; // r8d
  __int64 v61; // rdx
  __int64 v62; // rcx
  __int64 v63; // r9
  __int64 v64; // rdx
  int v65; // r8d
  __int64 v66; // r9
  int v67; // ecx
  __int64 v68; // rcx
  __int64 v69; // r9
  __int64 v70; // r9
  __int64 v71; // rcx
  __int64 v72; // r8
  __int64 v73; // rcx
  __int64 *v74; // r14
  __int64 v75; // rax
  __int64 v76; // r9
  __int64 v77; // rcx
  __int64 v78; // r8
  __int64 v79; // rcx
  __int64 *v80; // r14
  __int64 v81; // r9
  __int64 v82; // rcx
  __int64 v83; // r8
  __int64 v84; // rcx
  __int64 v85; // rdx
  __int64 v86; // rax
  __int64 v87; // r9
  __int64 v88; // rcx
  __int64 v89; // r9
  __int64 v90; // r9
  __int64 v91; // rcx
  __int64 v92; // r8
  __int64 v93; // rcx
  __int64 *v94; // r14
  _BYTE *v95; // rax
  PVOID v96; // rax
  __int64 v97; // rdx
  __int64 v98; // rcx
  void *v99; // rdx
  __int64 v100; // rax
  __int64 v101; // r10
  __int64 v102; // r11
  __int64 v103; // rdx
  __int64 v104; // r9
  __int64 v105; // r8
  __int64 v106; // rdx
  __int64 v107; // rcx
  __int64 v108; // rax
  __int64 v109; // r8
  __int64 v110; // rcx
  __int64 v111; // r9
  __int64 v112; // rcx
  __int64 v113; // r8
  __int64 v114; // rcx
  __int64 *v115; // r14
  __int64 v116; // rax
  __int64 v117; // rcx
  __int64 v118; // rax
  __int64 v119; // r8
  __int64 v120; // rcx
  int v121; // [rsp+28h] [rbp-B9h]
  _BYTE *v123; // [rsp+90h] [rbp-51h]
  _BYTE v124[16]; // [rsp+98h] [rbp-49h] BYREF
  int v125; // [rsp+A8h] [rbp-39h]
  _BYTE *v126; // [rsp+B0h] [rbp-31h]
  PVOID P; // [rsp+B8h] [rbp-29h]
  _BYTE v128[16]; // [rsp+C0h] [rbp-21h] BYREF
  int v129; // [rsp+D0h] [rbp-11h]

  v8 = a7;
  v9 = 0LL;
  v10 = a3;
  v11 = a8;
  v12 = a1;
  if ( !bTracingEnabled )
    goto LABEL_17;
  if ( (_DWORD)a1 == 2 )
  {
    v15 = ((unsigned __int64)*(unsigned int *)(a2 + 72) + 63) >> 6;
    if ( a5 )
    {
      v16 = *(_QWORD *)(a5 + 96);
      v17 = *(_QWORD *)(a5 + 56);
      v18 = *(_DWORD *)(v16 + 1752);
      v19 = *(_WORD *)(v16 + 4);
      if ( !v17 || (*(_DWORD *)(a5 + 112) & 0x40) != 0 )
        LODWORD(v17) = a5;
    }
    else
    {
      v18 = 0;
      LOBYTE(v19) = 0;
      LODWORD(v17) = 0;
    }
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) == 0 )
      goto LABEL_16;
    McTemplateK0ppqqqPR4PR4(
      v15,
      v17,
      v18,
      *(_QWORD *)(a2 + 16),
      v17,
      v19,
      v18,
      v15,
      *(_QWORD *)(a2 + 440),
      *(_QWORD *)(a2 + 488));
    goto LABEL_99;
  }
  if ( (_DWORD)a1 == 9 )
  {
LABEL_27:
    if ( a7 )
    {
      v68 = *(_QWORD *)(a7 + 48);
      v69 = *(_QWORD *)(v68 + 56);
      if ( !v69 || (*(_DWORD *)(v68 + 112) & 0x40) != 0 )
        v69 = *(_QWORD *)(a7 + 48);
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      {
        McTemplateK0pqxqt(
          v68,
          v12 == 11,
          a3,
          v69,
          *(_DWORD *)(a7 + 88),
          *(_QWORD *)(a7 + 104),
          *(_DWORD *)(a7 + 96),
          v12 == 11);
        goto LABEL_99;
      }
    }
    else
    {
      if ( !a6 )
        goto LABEL_17;
      if ( (_DWORD)a1 != 9 )
      {
        v22 = 1;
        if ( (_DWORD)a1 == 11 )
        {
LABEL_32:
          v23 = *(_QWORD *)(a6 + 88);
          if ( v23 )
          {
            v24 = *(_QWORD *)(v23 + 56);
            if ( !v24 || (*(_DWORD *)(v23 + 112) & 0x40) != 0 )
              v24 = *(_QWORD *)(a6 + 88);
          }
          else
          {
            v24 = *(_QWORD *)(*(_QWORD *)(a6 + 96) + 48LL);
            if ( !v24 )
              v24 = *(_QWORD *)(a6 + 96);
          }
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          {
            McTemplateK0pqqttp(v23, v22, a3, v24, *(_DWORD *)(a6 + 48), *(_DWORD *)(a6 + 112), v22);
            goto LABEL_99;
          }
          goto LABEL_26;
        }
LABEL_31:
        v22 = 0;
        goto LABEL_32;
      }
      if ( *(_DWORD *)(a6 + 48) != 4 )
        goto LABEL_31;
      v88 = *(_QWORD *)(a6 + 88);
      if ( v88 )
      {
        v89 = *(_QWORD *)(v88 + 56);
        if ( !v89 || (*(_DWORD *)(v88 + 112) & 0x40) != 0 )
          v89 = *(_QWORD *)(a6 + 88);
      }
      else
      {
        v89 = *(_QWORD *)(*(_QWORD *)(a6 + 96) + 48LL);
        if ( !v89 )
          v89 = *(_QWORD *)(a6 + 96);
      }
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      {
        McTemplateK0pqqttp(v88, a2, a3, v89, 4, *(_DWORD *)(a6 + 112), (*(_DWORD *)(a6 + 272) & 2) != 0);
        goto LABEL_99;
      }
    }
LABEL_26:
    v10 = a3;
    goto LABEL_17;
  }
  if ( (_DWORD)a1 != 20 )
  {
    if ( (_DWORD)a1 != 5 )
    {
      if ( (_DWORD)a1 != 4 )
      {
        switch ( (int)a1 )
        {
          case 1:
            v14 = *(_QWORD *)(a5 + 56);
            if ( !v14 || (*(_DWORD *)(a5 + 112) & 0x40) != 0 )
              v14 = a5;
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) == 0 )
              goto LABEL_26;
            v121 = a8;
            v99 = &EventAttemptPreemption;
            goto LABEL_195;
          case 7:
            v58 = 0LL;
            if ( *(_DWORD *)(a7 + 88) == 1 )
            {
              v86 = *(_QWORD *)(a7 + 56);
              if ( v86 )
              {
                if ( *(_DWORD *)(v86 + 48) == 8 )
                  v58 = *(_QWORD *)(v86 + 88);
              }
            }
            v59 = *(_QWORD *)(a7 + 48);
            if ( *(_DWORD *)(v59 + 968) >= 0x80u )
              VidSchiFlushGpuWorkEntries((struct _VIDSCH_CONTEXT *)v59);
            if ( *(_QWORD *)(v59 + 976)
              || (v96 = operator new[](0x400uLL, 0x61616956u, (POOL_TYPE)512), (*(_QWORD *)(v59 + 976) = v96) != 0LL) )
            {
              *(LARGE_INTEGER *)(*(_QWORD *)(v59 + 976) + 8LL * (unsigned int)(*(_DWORD *)(v59 + 968))++) = KeQueryPerformanceCounter(0LL);
            }
            else
            {
              v100 = WdLogNewEntry5_WdAssertion(v98, v97);
              WdLogEvent5_WdAssertion(v100);
            }
            if ( v58 )
            {
              v61 = *(_QWORD *)(v58 + 56);
              if ( !v61 || (*(_DWORD *)(v58 + 112) & 0x40) != 0 )
                LODWORD(v61) = v58;
            }
            else
            {
              LODWORD(v61) = 0;
            }
            v8 = a7;
            v62 = *(_QWORD *)(a7 + 48);
            v63 = *(_QWORD *)(v62 + 56);
            if ( !v63 || (*(_DWORD *)(v62 + 112) & 0x40) != 0 )
              v63 = *(_QWORD *)(a7 + 48);
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
              McTemplateK0ppqxqpq(
                v62,
                v61,
                v60,
                v63,
                v61,
                *(_DWORD *)(a7 + 88),
                *(_QWORD *)(a7 + 104),
                *(_DWORD *)(a7 + 96),
                *(_QWORD *)(a7 + 64),
                *(_DWORD *)(v62 + 436));
            goto LABEL_99;
          case 8:
          case 10:
          case 12:
            LODWORD(v64) = 0;
            v65 = 0;
            LOBYTE(v66) = 0;
            switch ( (_DWORD)a1 )
            {
              case 8:
                v67 = 1;
                break;
              case 0xA:
                v67 = 2;
                break;
              case 0xC:
                v64 = *(_QWORD *)(a8 + 40);
                v67 = 9;
                v65 = *(_DWORD *)(a8 + 32);
                v66 = *(_QWORD *)(a8 + 64);
                break;
              default:
                v67 = a3;
                break;
            }
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) == 0 )
              goto LABEL_16;
            v101 = *(_QWORD *)(a7 + 48);
            v102 = *(_QWORD *)(v101 + 56);
            if ( !v102 || (*(_DWORD *)(v101 + 112) & 0x40) != 0 )
              v102 = *(_QWORD *)(a7 + 48);
            McTemplateK0pqxqqqxqp(
              v67,
              v64,
              v65,
              v102,
              *(_DWORD *)(a7 + 88),
              *(_QWORD *)(a7 + 104),
              *(_DWORD *)(a7 + 96),
              v67,
              *(_DWORD *)(v101 + 436),
              v64,
              v65,
              v66);
            goto LABEL_99;
          case 11:
          case 13:
            goto LABEL_27;
          case 14:
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) == 0 )
              goto LABEL_17;
            v121 = 1;
            goto LABEL_193;
          case 15:
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) == 0 )
              goto LABEL_17;
            McTemplateK0pq(a1, &EventExitWorkerThread, a3, *(_QWORD *)(a2 + 16), 1);
            goto LABEL_99;
          case 16:
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) == 0 )
              goto LABEL_17;
            v121 = 3;
            goto LABEL_193;
          case 17:
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) == 0 )
              goto LABEL_17;
            McTemplateK0pq(a1, &EventExitWorkerThread, a3, *(_QWORD *)(a2 + 16), 3);
            goto LABEL_99;
          case 18:
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) == 0 )
              goto LABEL_17;
            a1 = 2LL;
            v121 = 2;
LABEL_193:
            v14 = *(_QWORD *)(a2 + 16);
            v99 = &EventEnterWorkerThread;
LABEL_195:
            McTemplateK0pq(a1, v99, a3, v14, v121);
            break;
          case 19:
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) == 0 )
              goto LABEL_17;
            McTemplateK0pq(2LL, &EventExitWorkerThread, a3, *(_QWORD *)(a2 + 16), 2);
            break;
          default:
            goto LABEL_17;
        }
        goto LABEL_99;
      }
      v31 = *(_DWORD *)(a6 + 48);
      if ( v31 != 5 )
      {
        v32 = *(_QWORD *)(a6 + 88);
        if ( v31 )
        {
          if ( v31 == 4 )
          {
            if ( v32 )
            {
              v87 = *(_QWORD *)(v32 + 56);
              if ( !v87 || (*(_DWORD *)(v32 + 112) & 0x40) != 0 )
                v87 = *(_QWORD *)(a6 + 88);
            }
            else
            {
              v87 = *(_QWORD *)(*(_QWORD *)(a6 + 96) + 48LL);
              if ( !v87 )
                v87 = *(_QWORD *)(a6 + 96);
            }
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) == 0 )
              goto LABEL_16;
            McTemplateK0pqqpxp(
              v32,
              a2,
              4,
              v87,
              *(_DWORD *)(a6 + 112),
              *(_DWORD *)(a6 + 272),
              *(_QWORD *)(a6 + 280),
              *(_QWORD *)(a6 + 304),
              a6);
          }
          else
          {
            if ( v32 )
            {
              v81 = *(_QWORD *)(v32 + 56);
              if ( !v81 || (*(_DWORD *)(v32 + 112) & 0x40) != 0 )
                v81 = *(_QWORD *)(a6 + 88);
            }
            else
            {
              v81 = *(_QWORD *)(*(_QWORD *)(a6 + 96) + 48LL);
              if ( !v81 )
                v81 = *(_QWORD *)(a6 + 96);
            }
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) == 0 )
              goto LABEL_16;
            McTemplateK0pqqxqqtppx(
              (*(_DWORD *)(a6 + 72) >> 14) & 1,
              a2,
              v31,
              v81,
              v31,
              *(_DWORD *)(a6 + 112),
              0,
              0,
              0,
              (*(_DWORD *)(a6 + 72) & 0x4000) != 0,
              *(_QWORD *)(a6 + 280),
              a6,
              *(_QWORD *)(a6 + 760));
          }
        }
        else
        {
          if ( v32 )
          {
            v33 = *(_QWORD *)(v32 + 56);
            if ( !v33 || (*(_DWORD *)(v32 + 112) & 0x40) != 0 )
              v33 = *(_QWORD *)(a6 + 88);
          }
          else
          {
            v33 = *(_QWORD *)(*(_QWORD *)(a6 + 96) + 48LL);
            if ( !v33 )
              v33 = *(_QWORD *)(a6 + 96);
          }
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          {
            McTemplateK0pqqxqqtppx(
              (*(_DWORD *)(a6 + 72) >> 14) & 1,
              *(_DWORD *)(a6 + 332),
              0,
              v33,
              0,
              *(_DWORD *)(a6 + 112),
              *(_DWORD *)(a6 + 332),
              *(_DWORD *)(a6 + 340),
              *(_DWORD *)(a6 + 348),
              (*(_DWORD *)(a6 + 72) & 0x4000) != 0,
              *(_QWORD *)(a6 + 280),
              a6,
              *(_QWORD *)(a6 + 760));
            v11 = a8;
          }
          v34 = *(_DWORD *)(a6 + 472);
          if ( !v34 || (Microsoft_Windows_DxgKrnlEnableBits & 0x400) == 0 )
            goto LABEL_16;
          v103 = *(_QWORD *)(a6 + 88);
          if ( v103 )
          {
            v104 = *(_QWORD *)(v103 + 56);
            if ( !v104 || (*(_DWORD *)(v103 + 112) & 0x40) != 0 )
              v104 = *(_QWORD *)(a6 + 88);
          }
          else
          {
            v104 = *(_QWORD *)(*(_QWORD *)(a6 + 96) + 48LL);
            if ( !v104 )
              v104 = *(_QWORD *)(a6 + 96);
          }
          McTemplateK0pqqPR2p(v34, v103, v31, v104, *(_DWORD *)(a6 + 112), v34, a6 + 480, a6);
        }
LABEL_99:
        v11 = a8;
LABEL_16:
        v10 = a3;
        goto LABEL_17;
      }
      v46 = *(unsigned int *)(a6 + 276);
      PoolWithTag = 0LL;
      v123 = 0LL;
      v125 = 0;
      if ( (unsigned int)v46 > 2 )
      {
        if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v46 < 8 )
        {
          v126 = 0LL;
          goto LABEL_78;
        }
        PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)512, 8 * v46, 0x38616956u);
        v123 = PoolWithTag;
      }
      else
      {
        PoolWithTag = v124;
        v123 = v124;
      }
      v125 = v46;
      if ( PoolWithTag && (_DWORD)v46 )
      {
        memset(PoolWithTag, 0, 8 * v46);
        PoolWithTag = v123;
      }
      v126 = PoolWithTag;
LABEL_78:
      v48 = *(unsigned int *)(a6 + 276);
      v49 = 0LL;
      P = 0LL;
      v129 = 0;
      if ( (unsigned int)v48 > 2 )
      {
        if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v48 < 8 )
        {
          v50 = 0LL;
LABEL_84:
          v51 = (__int64)v126;
          if ( v126 && v50 )
          {
            v52 = *(_DWORD *)(a6 + 276);
            v53 = 0;
            if ( v52 )
            {
              do
              {
                *(_QWORD *)(8LL * v53 + v51) = *(_QWORD *)(a6 + 8LL * v53 + 280);
                v54 = *(_DWORD *)(*(_QWORD *)(a6 + 8LL * v53 + 280) + 44LL);
                if ( v54 == 4 || v54 == 2 || v54 == 5 )
                  v55 = *(_QWORD *)(a6 + 8LL * v53 + 536);
                else
                  v55 = 0LL;
                *(_QWORD *)(8LL * v53++ + v50) = v55;
                v52 = *(_DWORD *)(a6 + 276);
              }
              while ( v53 < v52 );
              PoolWithTag = v123;
              v49 = P;
            }
            v56 = *(_QWORD *)(a6 + 88);
            if ( v56 )
            {
              v57 = *(_QWORD *)(v56 + 56);
              if ( !v57 || (*(_DWORD *)(v56 + 112) & 0x40) != 0 )
                v57 = *(_QWORD *)(a6 + 88);
            }
            else
            {
              v57 = *(_QWORD *)(*(_QWORD *)(a6 + 96) + 48LL);
              if ( !v57 )
                v57 = *(_QWORD *)(a6 + 96);
            }
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
            {
              McTemplateK0pqqqPR3XR3p(
                (_DWORD)v49,
                v56,
                v52,
                v57,
                *(_DWORD *)(a6 + 112),
                *(_DWORD *)(a6 + 272),
                v52,
                v51,
                v50,
                a6);
              PoolWithTag = v123;
              v49 = P;
            }
          }
          if ( v49 != v128 && v49 )
          {
            ExFreePoolWithTag(v49, 0);
            PoolWithTag = v123;
          }
          P = 0LL;
          v129 = 0;
          if ( PoolWithTag != v124 && PoolWithTag )
            ExFreePoolWithTag(PoolWithTag, 0);
          v8 = a7;
          goto LABEL_99;
        }
        v95 = ExAllocatePoolWithTag((POOL_TYPE)512, 8 * v48, 0x38616956u);
        PoolWithTag = v123;
        v49 = v95;
        P = v95;
      }
      else
      {
        v49 = v128;
        P = v128;
      }
      v129 = v48;
      if ( v49 && (_DWORD)v48 )
      {
        memset(v49, 0, 8 * v48);
        PoolWithTag = v123;
        v49 = P;
      }
      v50 = (__int64)v49;
      goto LABEL_84;
    }
    v20 = *(_QWORD *)(a6 + 88);
    v21 = *(_QWORD *)(v20 + 56);
    if ( !v21 || (*(_DWORD *)(v20 + 112) & 0x40) != 0 )
      v21 = *(_QWORD *)(a6 + 88);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    {
      McTemplateK0pqq(v20, (unsigned int)&EventQueueSelect, a3, v21, *(_DWORD *)(a6 + 48), *(_DWORD *)(a6 + 112));
      goto LABEL_99;
    }
    goto LABEL_26;
  }
  if ( (*(_DWORD *)(a2 + 1936) & 4) != 0 && !gulPriorityToYieldPriorityBand[*(unsigned int *)(a5 + 404)] )
  {
    v105 = *(_QWORD *)(a5 + 440);
    if ( v105 <= 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    {
      v106 = *(_QWORD *)(a5 + 56);
      if ( !v106 || (*(_DWORD *)(a5 + 112) & 0x40) != 0 )
        LODWORD(v106) = a5;
      McTemplateK0qtpiixi(
        a8 != 0,
        v106,
        v105,
        *(unsigned __int16 *)(v10 + 4),
        a8 != 0,
        v106,
        *(_QWORD *)(a5 + 464),
        v105,
        *(_QWORD *)(a5 + 456),
        *(_QWORD *)(a5 + 448));
      goto LABEL_99;
    }
  }
LABEL_17:
  if ( *(int *)(a2 + 5784) >= 1 )
  {
    if ( v12 == 1 )
    {
      if ( v11 < 0 )
      {
        v11 = -v11;
      }
      else if ( v11 >= 16 )
      {
        v11 = 1;
      }
      ++*(_DWORD *)(v10 + 2628);
      ++*(_DWORD *)(v10 + 4LL * v11 + 2628);
      v41 = *(_QWORD *)(a5 + 96);
      if ( (*(_DWORD *)(v41 + 12) & 8) != 0 )
      {
        v45 = 0LL;
      }
      else
      {
        v42 = *(unsigned __int16 *)(v41 + 4);
        v43 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a5 + 104) + 40LL) + 24LL)
                        + 8LL * *(unsigned int *)(*(_QWORD *)(v41 + 24) + 4LL));
        v44 = *(__int64 **)(v43 + 8);
        if ( (unsigned int)v42 < *(_DWORD *)(v43 + 80) )
          v44 += v42;
        v45 = *v44;
        v10 = a3;
      }
      ++*(_DWORD *)(v45 + 12);
      ++*(_DWORD *)(v45 + 4LL * v11 + 12);
    }
    else if ( v12 == 3 )
    {
      ++*(_DWORD *)(v10 + 2624);
      v82 = *(_QWORD *)(a5 + 96);
      if ( (*(_DWORD *)(v82 + 12) & 8) == 0 )
      {
        v83 = *(unsigned __int16 *)(v82 + 4);
        v84 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a5 + 104) + 40LL) + 24LL)
                        + 8LL * *(unsigned int *)(*(_QWORD *)(v82 + 24) + 4LL));
        v85 = *(_QWORD *)(v84 + 8);
        if ( (unsigned int)v83 < *(_DWORD *)(v84 + 80) )
          v85 += 8 * v83;
        if ( *(_QWORD *)v85 )
          ++*(_DWORD *)(*(_QWORD *)v85 + 8LL);
      }
    }
  }
  if ( *(int *)(a2 + 5784) >= 2 )
  {
    switch ( v12 )
    {
      case 4:
        ++*(_DWORD *)(v10 + 8LL * *(int *)(a6 + 48) + 2692);
        v35 = *(_QWORD *)(a6 + 96);
        if ( v35 )
        {
          v107 = *(_QWORD *)(v35 + 40);
          v108 = *(_QWORD *)(v107 + 16);
          v109 = *(unsigned __int16 *)(v108 + 4);
          v110 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v107 + 8) + 40LL) + 24LL)
                           + 8LL * *(unsigned int *)(*(_QWORD *)(v108 + 24) + 4LL));
          v40 = *(__int64 **)(v110 + 8);
          if ( (unsigned int)v109 < *(_DWORD *)(v110 + 80) )
            v40 += v109;
        }
        else
        {
          v36 = *(_QWORD *)(a6 + 88);
          v37 = *(_QWORD *)(v36 + 96);
          if ( (*(_DWORD *)(v37 + 12) & 8) != 0 )
            goto LABEL_62;
          v38 = *(unsigned __int16 *)(v37 + 4);
          v39 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v36 + 104) + 40LL) + 24LL)
                          + 8LL * *(unsigned int *)(*(_QWORD *)(v37 + 24) + 4LL));
          v40 = *(__int64 **)(v39 + 8);
          if ( (unsigned int)v38 < *(_DWORD *)(v39 + 80) )
            v40 += v38;
        }
        v9 = *v40;
LABEL_62:
        if ( v9 )
          ++*(_DWORD *)(v9 + 8LL * *(int *)(a6 + 48) + 76);
        return;
      case 7:
        ++*(_DWORD *)(v10 + 16LL * *(int *)(v8 + 88) + 2764);
        v70 = *(_QWORD *)(v8 + 48);
        v71 = *(_QWORD *)(v70 + 96);
        if ( (*(_DWORD *)(v71 + 12) & 8) == 0 )
        {
          v72 = *(unsigned __int16 *)(v71 + 4);
          v73 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v70 + 104) + 40LL) + 24LL)
                          + 8LL * *(unsigned int *)(*(_QWORD *)(v71 + 24) + 4LL));
          v74 = *(__int64 **)(v73 + 8);
          if ( (unsigned int)v72 < *(_DWORD *)(v73 + 80) )
            v74 += v72;
          v9 = *v74;
        }
        ++*(_DWORD *)(v9 + 16LL * *(int *)(v8 + 88) + 148);
        return;
      case 8:
        v75 = 2 * (*(int *)(v8 + 88) + 173LL);
        ++*(_DWORD *)(v10 + 8 * v75);
        v76 = *(_QWORD *)(v8 + 48);
        v77 = *(_QWORD *)(v76 + 96);
        if ( (*(_DWORD *)(v77 + 12) & 8) == 0 )
        {
          v78 = *(unsigned __int16 *)(v77 + 4);
          v79 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v76 + 104) + 40LL) + 24LL)
                          + 8LL * *(unsigned int *)(*(_QWORD *)(v77 + 24) + 4LL));
          v80 = *(__int64 **)(v79 + 8);
          if ( (unsigned int)v78 < *(_DWORD *)(v79 + 80) )
            v80 += v78;
          v9 = *v80;
        }
        ++*(_DWORD *)(v9 + 16LL * *(int *)(v8 + 88) + 152);
        return;
      case 9:
      case 11:
      case 13:
        if ( !a6 )
          return;
        ++*(_DWORD *)(v10 + 8LL * *(int *)(a6 + 48) + 2696);
        v25 = *(_QWORD *)(a6 + 96);
        if ( v25 )
        {
          v117 = *(_QWORD *)(v25 + 40);
          v118 = *(_QWORD *)(v117 + 16);
          v119 = *(unsigned __int16 *)(v118 + 4);
          v120 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v117 + 8) + 40LL) + 24LL)
                           + 8LL * *(unsigned int *)(*(_QWORD *)(v118 + 24) + 4LL));
          v30 = *(__int64 **)(v120 + 8);
          if ( (unsigned int)v119 < *(_DWORD *)(v120 + 80) )
            v30 += v119;
        }
        else
        {
          v26 = *(_QWORD *)(a6 + 88);
          v27 = *(_QWORD *)(v26 + 96);
          if ( (*(_DWORD *)(v27 + 12) & 8) != 0 )
            goto LABEL_43;
          v28 = *(unsigned __int16 *)(v27 + 4);
          v29 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v26 + 104) + 40LL) + 24LL)
                          + 8LL * *(unsigned int *)(*(_QWORD *)(v27 + 24) + 4LL));
          v30 = *(__int64 **)(v29 + 8);
          if ( (unsigned int)v28 < *(_DWORD *)(v29 + 80) )
            v30 += v28;
        }
        v9 = *v30;
LABEL_43:
        if ( v9 )
          ++*(_DWORD *)(v9 + 8LL * *(int *)(a6 + 48) + 80);
        break;
      case 10:
        ++*(_DWORD *)(v10 + 16LL * *(int *)(v8 + 88) + 2772);
        v90 = *(_QWORD *)(v8 + 48);
        v91 = *(_QWORD *)(v90 + 96);
        if ( (*(_DWORD *)(v91 + 12) & 8) == 0 )
        {
          v92 = *(unsigned __int16 *)(v91 + 4);
          v93 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v90 + 104) + 40LL) + 24LL)
                          + 8LL * *(unsigned int *)(*(_QWORD *)(v91 + 24) + 4LL));
          v94 = *(__int64 **)(v93 + 8);
          if ( (unsigned int)v92 < *(_DWORD *)(v93 + 80) )
            v94 += v92;
          v9 = *v94;
        }
        ++*(_DWORD *)(v9 + 16LL * *(int *)(v8 + 88) + 156);
        return;
      case 12:
        ++*(_DWORD *)(v10 + 16LL * *(int *)(v8 + 88) + 2776);
        v111 = *(_QWORD *)(v8 + 48);
        v112 = *(_QWORD *)(v111 + 96);
        if ( (*(_DWORD *)(v112 + 12) & 8) == 0 )
        {
          v113 = *(unsigned __int16 *)(v112 + 4);
          v114 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v111 + 104) + 40LL) + 24LL)
                           + 8LL * *(unsigned int *)(*(_QWORD *)(v112 + 24) + 4LL));
          v115 = *(__int64 **)(v114 + 8);
          if ( (unsigned int)v113 < *(_DWORD *)(v114 + 80) )
            v115 += v113;
          v9 = *v115;
        }
        v116 = 2 * (*(int *)(v8 + 88) + 10LL);
        ++*(_DWORD *)(v9 + 8 * v116);
        return;
      default:
        return;
    }
  }
}
