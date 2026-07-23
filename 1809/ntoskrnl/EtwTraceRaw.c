/*
 * XREFs of EtwTraceRaw @ 0x14030EE00
 * Callers:
 *     NtTraceEvent @ 0x1400CB590 (NtTraceEvent.c)
 * Callees:
 *     EtwpReserveTraceBuffer @ 0x1400C7540 (EtwpReserveTraceBuffer.c)
 *     PsGetCurrentServerSiloGlobals @ 0x140109DC0 (PsGetCurrentServerSiloGlobals.c)
 *     EtwpOpenLogger @ 0x140113820 (EtwpOpenLogger.c)
 *     EtwpCloseLogger @ 0x1401138CC (EtwpCloseLogger.c)
 *     EtwpReleaseTraceBuffer @ 0x140113908 (EtwpReleaseTraceBuffer.c)
 *     EtwpGetReserveTraceBufferStatus @ 0x14013F790 (EtwpGetReserveTraceBufferStatus.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     EtwpSendTraceEvent @ 0x14031344C (EtwpSendTraceEvent.c)
 *     EtwpInvokeEventCallback @ 0x140313F44 (EtwpInvokeEventCallback.c)
 *     EtwpCheckLoggerControlAccess @ 0x1405C2E98 (EtwpCheckLoggerControlAccess.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408D7880 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall EtwTraceRaw(unsigned __int16 a1, char *a2, __int64 a3, char a4)
{
  size_t v5; // r13
  int ReserveTraceBufferStatus; // ebx
  unsigned int v7; // r12d
  __int64 v8; // r14
  __int64 v9; // rax
  __int64 v10; // rsi
  void *v11; // rax
  __int64 v13; // [rsp+40h] [rbp-48h] BYREF
  signed __int64 v14[8]; // [rsp+48h] [rbp-40h] BYREF
  char v16; // [rsp+A8h] [rbp+20h] BYREF

  v5 = (unsigned int)a3;
  ReserveTraceBufferStatus = 0;
  v7 = a1;
  if ( a4 )
    v8 = *((_QWORD *)PsGetCurrentServerSiloGlobals() + 108);
  else
    v8 = EtwpHostSiloState;
  if ( v7 < *(_DWORD *)(v8 + 16) )
  {
    LOBYTE(a3) = a4;
    v9 = EtwpOpenLogger(v7, v8, a3, &v16);
    v10 = v9;
    if ( v9 )
    {
      if ( (*(_DWORD *)(v9 + 12) & 0x80u) != 0 )
      {
        ReserveTraceBufferStatus = -1073741790;
LABEL_31:
        EtwpCloseLogger(v7, v8, v16);
        return (unsigned int)ReserveTraceBufferStatus;
      }
      if ( a4 )
      {
        ReserveTraceBufferStatus = EtwpCheckLoggerControlAccess(0x200u);
        if ( ReserveTraceBufferStatus < 0 )
          goto LABEL_31;
        if ( (_DWORD)v5 )
        {
          if ( ((unsigned __int8)a2 & 3) != 0 )
            ExRaiseDatatypeMisalignment();
          if ( (unsigned __int64)&a2[v5] > 0x7FFFFFFF0000LL || &a2[v5] < a2 )
            MEMORY[0x7FFFFFFF0000] = 0;
        }
      }
      else if ( (*(_DWORD *)(v9 + 12) & 0x1000000) != 0 )
      {
        ReserveTraceBufferStatus = -1073741637;
        goto LABEL_31;
      }
      v11 = (void *)EtwpReserveTraceBuffer((unsigned int *)v10, v5, (__int64)v14, &v13, 0);
      if ( v11 )
      {
        memmove(v11, a2, v5);
        if ( (*(_DWORD *)(v10 + 12) & 0x80000) != 0
          && (!(_BYTE)KdDebuggerNotPresent && !KdPitchDebugger || KdEventLoggingPresent) )
        {
          EtwpSendTraceEvent(v10, v14);
        }
        if ( *(_QWORD *)(v10 + 1272) )
          EtwpInvokeEventCallback(v10, v14);
        EtwpReleaseTraceBuffer(v14);
      }
      else
      {
        ReserveTraceBufferStatus = EtwpGetReserveTraceBufferStatus(v10, v5);
      }
      goto LABEL_31;
    }
  }
  return (unsigned int)-1073741816;
}
