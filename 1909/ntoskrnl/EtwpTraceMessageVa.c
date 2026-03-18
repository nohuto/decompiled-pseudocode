/*
 * XREFs of EtwpTraceMessageVa @ 0x1400C8690
 * Callers:
 *     NtTraceEvent @ 0x1400C8CF0 (NtTraceEvent.c)
 *     WmiTraceMessage @ 0x140139E20 (WmiTraceMessage.c)
 *     WmiTraceMessageVa @ 0x14032C560 (WmiTraceMessageVa.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14003F9B0 (KeLeaveCriticalRegionThread.c)
 *     EtwpReserveTraceBuffer @ 0x1400A3060 (EtwpReserveTraceBuffer.c)
 *     EtwpOpenLogger @ 0x1400C8C44 (EtwpOpenLogger.c)
 *     EtwpReleaseTraceBuffer @ 0x1400C9A50 (EtwpReleaseTraceBuffer.c)
 *     PsGetCurrentServerSiloGlobals @ 0x1400EBE80 (PsGetCurrentServerSiloGlobals.c)
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x1400F2760 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     memmove @ 0x1401D7480 (memmove.c)
 *     EtwpSendTraceEvent @ 0x140330F08 (EtwpSendTraceEvent.c)
 *     EtwpInvokeEventCallback @ 0x140331A84 (EtwpInvokeEventCallback.c)
 *     EtwpGetReserveTraceBufferStatus @ 0x140331B9C (EtwpGetReserveTraceBufferStatus.c)
 */

__int64 __fastcall EtwpTraceMessageVa(
        __int64 a1,
        char a2,
        signed __int32 *a3,
        __int16 a4,
        __int64 a5,
        unsigned __int8 a6)
{
  unsigned __int16 v7; // bx
  int ReserveTraceBufferStatus; // r12d
  unsigned __int64 v9; // r13
  __int64 v10; // rsi
  unsigned int v11; // edi
  __int64 v12; // rax
  __int64 v13; // rbx
  int v14; // eax
  char v15; // si
  char v16; // r14
  __int64 v17; // rdi
  unsigned __int64 v18; // rdx
  __int64 v19; // rax
  unsigned __int64 v20; // rax
  __int64 v21; // rcx
  unsigned __int64 v22; // rcx
  int v23; // ecx
  int v24; // r11d
  int v25; // r10d
  int v26; // eax
  int v27; // r8d
  unsigned int v28; // ecx
  __int64 v29; // rbx
  signed __int32 v30; // edx
  __int64 v31; // r10
  volatile signed __int32 *v32; // rax
  size_t v33; // r8
  __int16 v34; // cx
  signed __int32 *v35; // rbx
  struct _KTHREAD *CurrentThread; // rcx
  _DWORD *v37; // rbx
  unsigned __int64 v38; // rdi
  char *v39; // rdx
  size_t v40; // r15
  __int64 v41; // r10
  unsigned int v43; // [rsp+30h] [rbp-D8h]
  char v44; // [rsp+34h] [rbp-D4h]
  char v45; // [rsp+35h] [rbp-D3h]
  char v46[2]; // [rsp+36h] [rbp-D2h] BYREF
  unsigned int v47; // [rsp+38h] [rbp-D0h]
  _DWORD *v48; // [rsp+40h] [rbp-C8h]
  __int64 v49; // [rsp+48h] [rbp-C0h]
  unsigned __int64 v50; // [rsp+50h] [rbp-B8h]
  __int64 v51; // [rsp+58h] [rbp-B0h]
  __int64 v52; // [rsp+60h] [rbp-A8h]
  int v53; // [rsp+68h] [rbp-A0h]
  int v54; // [rsp+6Ch] [rbp-9Ch]
  int v55; // [rsp+70h] [rbp-98h]
  int v56; // [rsp+74h] [rbp-94h]
  __int64 v57; // [rsp+78h] [rbp-90h] BYREF
  unsigned __int64 v58; // [rsp+80h] [rbp-88h]
  __int64 v59; // [rsp+88h] [rbp-80h]
  unsigned __int64 v60; // [rsp+90h] [rbp-78h]
  __int64 v61; // [rsp+98h] [rbp-70h]
  _BYTE v62[24]; // [rsp+A0h] [rbp-68h] BYREF
  unsigned int CurrentRunTime; // [rsp+B8h] [rbp-50h]
  int CycleTime; // [rsp+BCh] [rbp-4Ch]
  size_t v65; // [rsp+C0h] [rbp-48h]
  struct _KTHREAD *v66; // [rsp+C8h] [rbp-40h]
  unsigned int v67; // [rsp+110h] [rbp+8h]
  unsigned int v68; // [rsp+114h] [rbp+Ch]

  v68 = HIDWORD(a1);
  v7 = a1;
  memset(v62, 0, sizeof(v62));
  v46[0] = 0;
  ReserveTraceBufferStatus = 0;
  v43 = 0;
  v57 = 0LL;
  v9 = 0LL;
  v58 = 0LL;
  if ( a6 )
    v10 = *(_QWORD *)(PsGetCurrentServerSiloGlobals() + 864);
  else
    v10 = EtwpHostSiloState;
  v61 = v10;
  v49 = v10;
  v11 = v7;
  v47 = v7;
  if ( (unsigned int)v7 >= *(_DWORD *)(v10 + 16) )
    return (unsigned int)-1073741816;
  v12 = EtwpOpenLogger(v7, v10, a6, v46);
  v13 = v12;
  if ( (v59 = v12) == 0 )
    return (unsigned int)-1073741816;
  v14 = *(_DWORD *)(v12 + 12);
  if ( (v14 & 0x80u) != 0 )
  {
    ReserveTraceBufferStatus = -1073741790;
    goto LABEL_93;
  }
  if ( !a6 && (v14 & 0x1000000) != 0 )
  {
    ReserveTraceBufferStatus = -1073741637;
LABEL_93:
    v43 = ReserveTraceBufferStatus;
    goto LABEL_84;
  }
  v15 = a2 & 0x40;
  v44 = a2 & 0x40;
  v16 = a2 & 0x80;
  v45 = a2 & 0x80;
  v17 = a5;
  if ( (a2 & 0x40) != 0 )
  {
    v9 = a5 + v68;
    v58 = v9;
  }
  v18 = 0LL;
  v50 = 0LL;
  v60 = 0LL;
  v19 = a5;
  v51 = a5;
  while ( 1 )
  {
    if ( !v15 )
    {
      v20 = v19 + 8;
LABEL_13:
      v21 = *(_QWORD *)(v20 - 8);
      goto LABEL_14;
    }
    if ( !v16 )
    {
      v20 = v19 + 8;
      if ( v20 > v9 )
      {
        ReserveTraceBufferStatus = -1073741306;
        v43 = -1073741306;
        v11 = v47;
        v10 = v49;
        goto LABEL_84;
      }
      goto LABEL_13;
    }
    v20 = v19 + 4;
    if ( v20 > v9 )
    {
      ReserveTraceBufferStatus = -1073741306;
      v43 = -1073741306;
      v11 = v47;
      v10 = v49;
      goto LABEL_84;
    }
    v21 = *(unsigned int *)(v20 - 4);
LABEL_14:
    v51 = v20;
    if ( !v21 )
      break;
    if ( v15 && v16 )
    {
      v19 = v20 + 4;
      v22 = *(unsigned int *)(v19 - 4);
    }
    else
    {
      v19 = v20 + 8;
      v22 = *(_QWORD *)(v19 - 8);
    }
    v51 = v19;
    if ( v22 )
    {
      v18 += v22;
      v50 = v18;
      v60 = v18;
      if ( v18 < v22 )
      {
        ReserveTraceBufferStatus = -1073741675;
        v43 = -1073741675;
        v11 = v47;
        v10 = v49;
        goto LABEL_84;
      }
    }
  }
  if ( !*(_QWORD *)(v13 + 280) )
    a2 &= ~1u;
  v53 = a2 & 1;
  v23 = 4;
  if ( (a2 & 1) != 0 )
    v24 = 4;
  else
    v24 = 0;
  v55 = a2 & 2;
  if ( (a2 & 2) != 0 )
    v25 = 16;
  else
    v25 = 0;
  v54 = a2 & 4;
  if ( (a2 & 4) == 0 )
    v23 = 0;
  v26 = 8;
  if ( (a2 & 0x18) != 0 )
    v27 = 8;
  else
    v27 = 0;
  v56 = a2 & 0x20;
  if ( (a2 & 0x20) == 0 )
    v26 = 0;
  v28 = v18 + v24 + v25 + v27 + v26 + 8 + v23;
  v67 = v28;
  if ( v18 > v28 )
  {
    ReserveTraceBufferStatus = -1073741306;
    v11 = v47;
    v10 = v49;
    goto LABEL_93;
  }
  v29 = EtwpReserveTraceBuffer((unsigned int *)v13, v28, (__int64)v62, &v57, 0);
  v30 = 0;
  v31 = v59;
  v32 = *(volatile signed __int32 **)(v59 + 280);
  if ( v32 )
  {
    v30 = _InterlockedIncrement(v32);
    ReserveTraceBufferStatus = 0;
    v9 = v58;
    v15 = v44;
    v16 = v45;
    v33 = v60;
    v50 = v60;
  }
  else
  {
    v33 = v50;
  }
  if ( v29 )
  {
    *(_DWORD *)v29 = -1879048192;
    *(_WORD *)v29 = v67;
    *(_WORD *)(v29 + 4) = a4;
    if ( v16 )
      v34 = 64;
    else
      v34 = 128;
    *(_WORD *)(v29 + 6) = v34 | a2 & 0x3F;
    v35 = (signed __int32 *)(v29 + 8);
    v48 = v35;
    if ( v53 )
    {
      *v35++ = v30;
      v48 = v35;
    }
    if ( v54 )
    {
      *v35++ = *a3;
LABEL_53:
      v48 = v35;
    }
    else if ( v55 )
    {
      *(_OWORD *)v35 = *(_OWORD *)a3;
      v35 += 4;
      goto LABEL_53;
    }
    if ( (a2 & 8) != 0 )
    {
      *(_QWORD *)v35 = v57;
      v35 += 2;
      v48 = v35;
    }
    if ( v56 )
    {
      CurrentThread = KeGetCurrentThread();
      v66 = CurrentThread;
      CurrentRunTime = CurrentThread[1].CurrentRunTime;
      v37 = v48;
      *v48 = CurrentRunTime;
      v48 = ++v37;
      CycleTime = CurrentThread[1].CycleTime;
      *v37 = CycleTime;
      v35 = v37 + 1;
      v48 = v35;
      ReserveTraceBufferStatus = 0;
      v9 = v58;
      v15 = v44;
      v16 = v45;
      v33 = v60;
      v50 = v60;
    }
    v65 = v33;
    v52 = a5;
    while ( 1 )
    {
      if ( v15 && v16 )
      {
        v38 = v17 + 4;
        v39 = (char *)*(unsigned int *)(v38 - 4);
      }
      else
      {
        v38 = v17 + 8;
        v39 = *(char **)(v38 - 8);
      }
      v52 = v38;
      if ( !v39 )
        break;
      if ( !v15 )
        goto LABEL_66;
      if ( v38 >= v9 )
        goto LABEL_78;
      if ( v16 )
      {
        v17 = v38 + 4;
        v40 = *(unsigned int *)(v17 - 4);
      }
      else
      {
LABEL_66:
        v17 = v38 + 8;
        v40 = *(_QWORD *)(v17 - 8);
      }
      v52 = v17;
      if ( v40 )
      {
        if ( v40 > v33 )
        {
LABEL_78:
          ReserveTraceBufferStatus = -1073741306;
          v43 = -1073741306;
          break;
        }
        if ( v15 && ((unsigned __int64)&v39[v40] > 0x7FFFFFFF0000LL || &v39[v40] < v39) )
          MEMORY[0x7FFFFFFF0000] = 0;
        memmove(v35, v39, v40);
        v33 = v50 - v40;
        v50 = v33;
        v65 = v33;
        v35 = (signed __int32 *)((char *)v35 + v40);
        v48 = v35;
      }
    }
    v10 = v49;
    if ( ReserveTraceBufferStatus >= 0 )
    {
      v41 = v59;
      if ( (*(_DWORD *)(v59 + 12) & 0x80000) != 0
        && (!(_BYTE)KdDebuggerNotPresent && !KdPitchDebugger || KdEventLoggingPresent) )
      {
        EtwpSendTraceEvent(v59, v62);
        v41 = v59;
      }
      if ( *(_QWORD *)(v41 + 1272) )
        EtwpInvokeEventCallback(v41, v62, a3, a6);
    }
    EtwpReleaseTraceBuffer(v62);
    v11 = v47;
  }
  else
  {
    ReserveTraceBufferStatus = EtwpGetReserveTraceBufferStatus(v31, v67);
    v43 = ReserveTraceBufferStatus;
    v11 = v47;
    v10 = v49;
  }
LABEL_84:
  if ( v46[0] )
  {
    ExReleaseRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(v10 + 448) + 8LL * v11), 1u);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    return v43;
  }
  return (unsigned int)ReserveTraceBufferStatus;
}
