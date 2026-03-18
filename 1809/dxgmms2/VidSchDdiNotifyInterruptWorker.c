/*
 * XREFs of VidSchDdiNotifyInterruptWorker @ 0x1C000A2E0
 * Callers:
 *     VidSchDdiNotifyInterrupt @ 0x1C000A1D0 (VidSchDdiNotifyInterrupt.c)
 *     ?VidSchiCallNotifyInterruptAtISR@@YAEPEAX@Z @ 0x1C0039380 (-VidSchiCallNotifyInterruptAtISR@@YAEPEAX@Z.c)
 * Callees:
 *     VidSchiProcessIsrCompletedPacket @ 0x1C000A720 (VidSchiProcessIsrCompletedPacket.c)
 *     VidSchiProcessIsrVSync @ 0x1C000AC10 (VidSchiProcessIsrVSync.c)
 *     VidSchiProcessIsrPreemptedPacket @ 0x1C000E2EC (VidSchiProcessIsrPreemptedPacket.c)
 *     ?VidSchiVerifyDriverReportedFenceId@@YAHPEAU_VIDSCH_NODE@@KHPEAK@Z @ 0x1C00150E4 (-VidSchiVerifyDriverReportedFenceId@@YAHPEAU_VIDSCH_NODE@@KHPEAK@Z.c)
 *     ?MapVidPnTargetToVidPnSource@ADAPTER_DISPLAY@@QEAAII@Z @ 0x1C0029610 (-MapVidPnTargetToVidPnSource@ADAPTER_DISPLAY@@QEAAII@Z.c)
 *     LogPageFaultInformation @ 0x1C002B79C (LogPageFaultInformation.c)
 *     McTemplateK0qq @ 0x1C002D27C (McTemplateK0qq.c)
 *     VidSchiProcessIsrFaultedPacket @ 0x1C002E7A4 (VidSchiProcessIsrFaultedPacket.c)
 *     VidSchiProcessIsrGpuEngineTimeout @ 0x1C00383B4 (VidSchiProcessIsrGpuEngineTimeout.c)
 *     VidSchiProcessIsrHwQueuePageFaulted @ 0x1C0038434 (VidSchiProcessIsrHwQueuePageFaulted.c)
 *     VidSchiProcessIsrMonitoredFenceSignaled @ 0x1C0038568 (VidSchiProcessIsrMonitoredFenceSignaled.c)
 *     VidSchiProcessIsrSchedulingLogFull @ 0x1C00385E8 (VidSchiProcessIsrSchedulingLogFull.c)
 *     VidSchiProcessIsrSuspendContextCompleted @ 0x1C0038668 (VidSchiProcessIsrSuspendContextCompleted.c)
 */

int __fastcall VidSchDdiNotifyInterruptWorker(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  __int64 v4; // r13
  unsigned __int64 v5; // rax
  unsigned int v6; // r14d
  __int64 v7; // rsi
  __int64 v9; // rbp
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  __int64 *v12; // rbx
  __int64 v13; // rbx
  __int64 v14; // rcx
  unsigned int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  unsigned __int64 v18; // rcx
  __int64 *v19; // rbp
  int v20; // ebx
  int v21; // r8d
  _QWORD *v22; // rax
  __int64 v23; // rcx
  _QWORD *v24; // rax
  _QWORD *v25; // rax
  unsigned __int64 v26; // rcx
  unsigned __int64 v27; // rdx
  __int64 *v28; // rbx
  __int64 v29; // rbx
  _QWORD *v30; // rax
  _QWORD *v31; // rax
  _QWORD *v32; // rax
  __int64 v33; // rcx
  _QWORD *v34; // rax
  _QWORD *v35; // rax
  _QWORD *v36; // rax
  unsigned __int64 v37; // rcx
  unsigned __int64 v38; // rdx
  __int64 *v39; // r15
  __int64 v40; // r15
  _QWORD *v41; // rax
  __int64 v42; // rcx
  int v43; // eax
  _QWORD *v44; // rax
  int v45; // eax
  __int64 v46; // rcx
  _QWORD *v47; // rdx
  __int64 v48; // rcx
  _QWORD *v49; // rdx
  unsigned int v50; // eax
  union _SLIST_HEADER *v51; // rdx
  __int64 v52; // rcx
  unsigned int v53; // ebp
  PSLIST_ENTRY v54; // rax
  __int64 v55; // rdx
  __int64 v56; // rcx
  PSLIST_ENTRY v57; // rbx
  const EVENT_DESCRIPTOR *v58; // rdx
  const GUID *v59; // r8
  __int64 v60; // rax
  __int64 v61; // rax
  unsigned int v63; // [rsp+60h] [rbp+8h] BYREF
  __int64 v64; // [rsp+68h] [rbp+10h]

  LODWORD(v5) = *(_DWORD *)a2;
  v6 = a3;
  v7 = *(_QWORD *)(a1 + 528);
  v9 = a1;
  if ( *(_DWORD *)a2 <= 0xAu )
  {
    a1 = 1160LL;
    if ( _bittest((const int *)&a1, v5) )
    {
      if ( (*(_DWORD *)(v7 + 36) & 0x10) != 0 )
      {
        if ( *(_DWORD *)(v7 + 68) <= 1u
          || (v14 = *(unsigned int *)(a2 + 72), (v14 & 1) == 0)
          || ((_DWORD)v5 != 7
            ? ((_DWORD)v5 != 10
             ? (v21 = *(_DWORD *)(a2 + 24))
             : (v21 = *(_DWORD *)(a2 + 12)))
            : (v21 = *(_DWORD *)(a2 + 12)),
              v21) )
        {
          v3 = MEMORY[0xFFFFF78000000320];
          v15 = VidSchiProcessIsrVSync((struct _VIDSCH_GLOBAL *)v7, (struct _DXGKARGCB_NOTIFY_INTERRUPT_DATA *)a2);
          if ( v15 != -1 && v15 < *(_DWORD *)(v7 + 40) )
          {
            _mm_lfence();
            v16 = *(_QWORD *)(v7 + 8LL * v15 + 2576);
            v5 = *(unsigned int *)(v16 + 33276);
            *(_QWORD *)(v16 + 8 * v5 + 33280) = v3;
            v17 = 10 * v5;
            *(_OWORD *)(v16 + 8 * v17 + 33312) = *(_OWORD *)a2;
            *(_OWORD *)(v16 + 8 * v17 + 33328) = *(_OWORD *)(a2 + 16);
            *(_OWORD *)(v16 + 8 * v17 + 33344) = *(_OWORD *)(a2 + 32);
            *(_OWORD *)(v16 + 8 * v17 + 33360) = *(_OWORD *)(a2 + 48);
            *(_OWORD *)(v16 + 8 * v17 + 33376) = *(_OWORD *)(a2 + 64);
            LODWORD(v5) = ((unsigned __int8)*(_DWORD *)(v16 + 33276) + 1) & 3;
            *(_DWORD *)(v16 + 33276) = v5;
            return v5;
          }
        }
        else
        {
          v22 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v14, a2);
          v22[3] = 281LL;
          v22[4] = 6LL;
          v22[5] = v7;
          v22[6] = 0LL;
          v22[7] = 0LL;
          WdLogEvent5_WdCriticalError(v22);
          __debugbreak();
        }
        v5 = *(unsigned int *)(v7 + 5368);
        *(_QWORD *)(v7 + 8 * v5 + 5376) = v3;
        v23 = 10 * v5;
        *(_OWORD *)(v7 + 8 * v23 + 5408) = *(_OWORD *)a2;
        *(_OWORD *)(v7 + 8 * v23 + 5424) = *(_OWORD *)(a2 + 16);
        *(_OWORD *)(v7 + 8 * v23 + 5440) = *(_OWORD *)(a2 + 32);
        *(_OWORD *)(v7 + 8 * v23 + 5456) = *(_OWORD *)(a2 + 48);
        *(_OWORD *)(v7 + 8 * v23 + 5472) = *(_OWORD *)(a2 + 64);
        LODWORD(v5) = ((unsigned __int8)*(_DWORD *)(v7 + 5368) + 1) & 3;
        *(_DWORD *)(v7 + 5368) = v5;
        return v5;
      }
    }
  }
  if ( (_DWORD)v5 != 1 )
  {
    switch ( (_DWORD)v5 )
    {
      case 0xB:
LABEL_61:
        LODWORD(v5) = *(_DWORD *)(v7 + 36);
        if ( (v5 & 1) != 0 )
        {
          v26 = *(_DWORD *)(a2 + 8) + (unsigned int)*(unsigned __int8 *)(*(unsigned int *)(a2 + 12) + v7 + 76);
          v27 = v26;
          if ( !v6 || (v5 = *(_QWORD *)(v7 + 576), !_bittest64((const signed __int64 *)v5, v26)) )
          {
            v28 = *(__int64 **)(v7 + 616);
            if ( (unsigned int)v26 < *(_DWORD *)(v7 + 688) )
              v28 += v26;
            v29 = *v28;
            LODWORD(v5) = *(_DWORD *)(v29 + 16);
            if ( (_DWORD)v5 != 1 )
            {
              if ( v6 && *(_DWORD *)(v29 + 16) == 2 )
              {
                v30 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v26, v26);
                v30[3] = 281LL;
                v30[4] = 16LL;
                v30[5] = v7;
                v30[6] = *(unsigned __int16 *)(v29 + 4);
                v30[7] = 0LL;
                WdLogEvent5_WdCriticalError(v30);
                __debugbreak();
              }
              LODWORD(v5) = VidSchiProcessIsrMonitoredFenceSignaled(v29, v27);
            }
          }
        }
        return v5;
      case 2:
        LODWORD(v5) = *(_DWORD *)(v7 + 36);
        if ( (v5 & 1) == 0 )
          return v5;
        v18 = *(_DWORD *)(a2 + 16) + (unsigned int)*(unsigned __int8 *)(*(unsigned int *)(a2 + 20) + v7 + 76);
        if ( (_DWORD)a3 )
        {
          v5 = *(_QWORD *)(v7 + 576);
          if ( _bittest64((const signed __int64 *)v5, v18) )
            return v5;
        }
        v19 = *(__int64 **)(v7 + 616);
        if ( (unsigned int)v18 < *(_DWORD *)(v7 + 688) )
          v19 += v18;
        v9 = *v19;
        LODWORD(v5) = *(_DWORD *)(v9 + 16);
        if ( (_DWORD)v5 == 1 )
          return v5;
        if ( !(_DWORD)a3 || *(_DWORD *)(v9 + 16) != 2 )
        {
          LODWORD(v5) = VidSchiVerifyDriverReportedFenceId((struct _VIDSCH_NODE *)v9, *(_DWORD *)(a2 + 8), 1, 0LL);
          if ( (_DWORD)v5 )
          {
            LODWORD(v5) = VidSchiVerifyDriverReportedFenceId((struct _VIDSCH_NODE *)v9, *(_DWORD *)(a2 + 12), 0, &v63);
            if ( (_DWORD)v5 )
            {
              do
              {
                v20 = VidSchiProcessIsrCompletedPacket(v9, v63, v6, a2);
                LODWORD(v5) = VidSchiProcessIsrPreemptedPacket(v9, *(unsigned int *)(a2 + 8), v6, a2);
              }
              while ( v20 );
            }
          }
          return v5;
        }
        v31 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v18, v18);
        v31[3] = 281LL;
        v31[4] = 16LL;
        v31[5] = v7;
        v31[6] = *(unsigned __int16 *)(v9 + 4);
        v31[7] = 0LL;
        WdLogEvent5_WdCriticalError(v31);
        __debugbreak();
        break;
      case 4:
        break;
      case 9:
        goto LABEL_73;
      default:
        switch ( (_DWORD)v5 )
        {
          case 0xF:
            LODWORD(v5) = *(_DWORD *)(v7 + 36);
            if ( (v5 & 1) != 0 )
            {
              v46 = *(_DWORD *)(a2 + 8) + (unsigned int)*(unsigned __int8 *)(*(unsigned int *)(a2 + 12) + v7 + 76);
              v47 = *(_QWORD **)(v7 + 616);
              if ( (unsigned int)v46 < *(_DWORD *)(v7 + 688) )
                v47 += v46;
              LODWORD(v5) = VidSchiProcessIsrSchedulingLogFull(*v47);
            }
            break;
          case 0x10:
            LODWORD(v5) = *(_DWORD *)(v7 + 36);
            if ( (v5 & 1) != 0 )
            {
              v48 = *(_DWORD *)(a2 + 8) + (unsigned int)*(unsigned __int8 *)(*(unsigned int *)(a2 + 12) + v7 + 76);
              v49 = *(_QWORD **)(v7 + 616);
              if ( (unsigned int)v48 < *(_DWORD *)(v7 + 688) )
                v49 += v48;
              LODWORD(v5) = VidSchiProcessIsrGpuEngineTimeout(*v49);
            }
            break;
          case 0x11:
            LODWORD(v5) = *(_DWORD *)(v7 + 36);
            if ( (v5 & 1) != 0 )
              LODWORD(v5) = VidSchiProcessIsrSuspendContextCompleted(v7);
            break;
          case 0xC:
            LODWORD(v5) = *(_DWORD *)(v7 + 36);
            if ( (v5 & 1) != 0 )
              LODWORD(v5) = VidSchiProcessIsrHwQueuePageFaulted(v7);
            break;
          case 0xE:
            v50 = ADAPTER_DISPLAY::MapVidPnTargetToVidPnSource(
                    *(ADAPTER_DISPLAY **)(*(_QWORD *)(v7 + 16) + 2520LL),
                    *(_DWORD *)(a2 + 8));
            v53 = v50;
            if ( v50 == -1
              || (v51 = *(union _SLIST_HEADER **)(v7 + 8LL * v50 + 2576), (unsigned __int8)*(_DWORD *)(a2 + 12) >= 8u) )
            {
              v60 = WdLogNewEntry5_WdAssertion(v52, v51);
              LODWORD(v5) = WdLogEvent5_WdAssertion(v60);
            }
            else
            {
              v54 = ExpInterlockedPopEntrySList(v51 + 4153);
              v57 = v54;
              if ( v54 )
              {
                HIDWORD(v54[2].Next) = *(_DWORD *)(a2 + 12);
                LODWORD(v54[2].Next) = v53;
                LODWORD(v54->Next) = 14;
                LODWORD(v5) = (unsigned int)ExpInterlockedPushEntrySList((PSLIST_HEADER)(v7 + 1696), v54 + 1);
                if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
                  LODWORD(v5) = McTemplateK0qq(
                                  (PMCGEN_TRACE_CONTEXT)(unsigned __int8)Microsoft_Windows_DxgKrnlEnableBits,
                                  v58,
                                  v59,
                                  (const unsigned int)v57[2].Next,
                                  HIDWORD(v57[2].Next));
              }
              else
              {
                v61 = WdLogNewEntry5_WdAssertion(v56, v55);
                *(_QWORD *)(v61 + 24) = *(unsigned int *)(a2 + 8);
                *(_QWORD *)(v61 + 32) = *(unsigned int *)(a2 + 12);
                LODWORD(v5) = WdLogEvent5_WdAssertion(v61);
              }
            }
            break;
        }
        return v5;
    }
    v32 = (_QWORD *)WdLogNewEntry5_WdCriticalError(a1, a2);
    v32[3] = 281LL;
    v32[4] = 13LL;
    v32[5] = *(unsigned int *)(a2 + 16);
    v32[6] = *(unsigned int *)(a2 + 20);
    v32[7] = *(unsigned int *)(a2 + 8);
    WdLogEvent5_WdCriticalError(v32);
    __debugbreak();
LABEL_73:
    LODWORD(v5) = *(_DWORD *)(v7 + 36);
    if ( (v5 & 4) != 0 )
    {
      v33 = *(unsigned int *)(a2 + 32);
      if ( (v33 & 0x10) != 0 )
      {
        v34 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v33, a2);
        v34[3] = 281LL;
        v34[4] = 12LL;
        v34[5] = *(int *)(a2 + 32);
        v34[6] = *(unsigned int *)(a2 + 8);
        v34[7] = *(_QWORD *)(a2 + 40);
        WdLogEvent5_WdCriticalError(v34);
        __debugbreak();
      }
      if ( (v33 & 0xC) == 0xC )
      {
        v35 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v33, a2);
        v35[3] = 281LL;
        v35[4] = 13LL;
        v35[5] = *(int *)(a2 + 32);
        v35[6] = *(_QWORD *)(a2 + 64);
        v35[7] = *(_QWORD *)(a2 + 40);
        WdLogEvent5_WdCriticalError(v35);
        __debugbreak();
      }
      if ( (unsigned int)v33 >= 0x40 )
      {
        v36 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v33, a2);
        v36[3] = 281LL;
        v36[4] = 13LL;
        v36[5] = *(int *)(a2 + 32);
        v36[6] = *(_QWORD *)(a2 + 64);
        v36[7] = *(_QWORD *)(a2 + 40);
        WdLogEvent5_WdCriticalError(v36);
        __debugbreak();
      }
      v37 = *(_DWORD *)(a2 + 48) + (unsigned int)*(unsigned __int8 *)(*(unsigned int *)(a2 + 52) + v7 + 76);
      v38 = v37;
      if ( v6 && _bittest64(*(const signed __int64 **)(v7 + 576), v37) )
      {
        LODWORD(v5) = LogPageFaultInformation(1LL, v9, a2);
      }
      else
      {
        v39 = *(__int64 **)(v7 + 616);
        if ( (unsigned int)v37 < *(_DWORD *)(v7 + 688) )
          v39 += v37;
        v40 = *v39;
        if ( *(_DWORD *)(v40 + 16) == 1 )
        {
          LODWORD(v5) = LogPageFaultInformation(2LL, v9, a2);
        }
        else
        {
          if ( v6 && *(_DWORD *)(v40 + 16) == 2 )
          {
            v41 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v37, v37);
            v41[3] = 281LL;
            v41[4] = 16LL;
            v41[5] = v7;
            v42 = *(unsigned __int16 *)(v40 + 4);
            v40 = 0LL;
            v41[6] = v42;
            v41[7] = 0LL;
            WdLogEvent5_WdCriticalError(v41);
            __debugbreak();
          }
          v43 = *(_DWORD *)(a2 + 32);
          if ( (v43 & 2) != 0 )
          {
            if ( (v43 & 0xC) == 0 )
            {
              v44 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v37, v38);
              v44[3] = 281LL;
              v44[4] = 13LL;
              v44[5] = *(int *)(a2 + 32);
              v44[6] = *(_QWORD *)(a2 + 64);
              v44[7] = *(_QWORD *)(a2 + 40);
              LOBYTE(v43) = WdLogEvent5_WdCriticalError(v44);
              __debugbreak();
            }
            if ( (v43 & 4) != 0 )
            {
              LODWORD(v5) = LogPageFaultInformation(3LL, v9, a2);
              *(_DWORD *)(v40 + 2016) = 1;
            }
            else
            {
              LODWORD(v5) = LogPageFaultInformation(4LL, v9, a2);
              *(_DWORD *)(v40 + 2012) = 1;
            }
          }
          else
          {
            LODWORD(v5) = VidSchiVerifyDriverReportedFenceId((struct _VIDSCH_NODE *)v40, *(_DWORD *)(a2 + 8), 0, &v63);
            if ( (_DWORD)v5 )
            {
              VidSchiProcessIsrCompletedPacket(v40, v63, v6, a2);
              VidSchiProcessIsrFaultedPacket(v40, v63, v6, a2);
              v45 = *(_DWORD *)(a2 + 32);
              if ( (v45 & 4) != 0 )
              {
                LODWORD(v5) = LogPageFaultInformation(3LL, v9, a2);
              }
              else if ( (v45 & 8) != 0 )
              {
                LODWORD(v5) = LogPageFaultInformation(4LL, v9, a2);
              }
              else
              {
                LODWORD(v5) = LogPageFaultInformation(5LL, v9, a2);
              }
            }
          }
        }
      }
    }
    return v5;
  }
  LODWORD(v5) = *(_DWORD *)(v7 + 36);
  if ( (v5 & 1) != 0 )
  {
    v10 = *(_DWORD *)(a2 + 12) + (unsigned int)*(unsigned __int8 *)(*(unsigned int *)(a2 + 16) + v7 + 76);
    v11 = v10;
    if ( !(_DWORD)a3 || (v5 = *(_QWORD *)(v7 + 576), !_bittest64((const signed __int64 *)v5, v10)) )
    {
      v12 = *(__int64 **)(v7 + 616);
      if ( (unsigned int)v10 < *(_DWORD *)(v7 + 688) )
        v12 += v10;
      v13 = *v12;
      LODWORD(v5) = *(_DWORD *)(v13 + 16);
      if ( (_DWORD)v5 != 1 )
      {
        if ( (_DWORD)a3 && *(_DWORD *)(v13 + 16) == 2 )
        {
          v24 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v10, v10);
          v24[3] = 281LL;
          v24[4] = 16LL;
          v24[5] = v7;
          v24[6] = *(unsigned __int16 *)(v13 + 4);
          v24[7] = 0LL;
          LODWORD(v5) = WdLogEvent5_WdCriticalError(v24);
          __debugbreak();
        }
        else
        {
          v7 = *(unsigned int *)(a2 + 8);
          v9 = *(unsigned int *)(v13 + 64);
          v64 = v4;
          v4 = *(_QWORD *)(v13 + 24);
          v63 = v7;
          if ( (_DWORD)v7 == (_DWORD)v9 || (_DWORD)v7 == *(_DWORD *)(v13 + 72) )
            goto LABEL_18;
          LODWORD(v5) = _InterlockedCompareExchange((volatile signed __int32 *)(v13 + 152), 0, 0);
          if ( (unsigned int)v5 >= (unsigned int)v9 )
          {
            if ( (unsigned int)v7 <= (unsigned int)v5 && (unsigned int)v7 >= (unsigned int)v9 )
            {
LABEL_18:
              LODWORD(v5) = VidSchiProcessIsrCompletedPacket(v13, (unsigned int)v7, a3, a2);
              return v5;
            }
            goto LABEL_58;
          }
        }
        if ( (unsigned int)v7 <= (unsigned int)v5 || (unsigned int)v7 >= (unsigned int)v9 )
          goto LABEL_18;
LABEL_58:
        if ( *(_BYTE *)(v4 + 53) )
        {
          *(_DWORD *)(v13 + 2016) = 1;
          *(_BYTE *)(v13 + 2009) = 1;
          return v5;
        }
        v25 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v10, v11);
        v25[3] = 281LL;
        v25[4] = 1LL;
        v25[5] = v7;
        v25[6] = v9;
        v25[7] = *(_QWORD *)(v4 + 16);
        WdLogEvent5_WdCriticalError(v25);
        __debugbreak();
        goto LABEL_61;
      }
    }
  }
  return v5;
}
