/*
 * XREFs of EtwTraceRaw @ 0x14032C2D8
 * Callers:
 *     NtTraceEvent @ 0x1400C8CF0 (NtTraceEvent.c)
 * Callees:
 *     EtwpReserveTraceBuffer @ 0x1400A3060 (EtwpReserveTraceBuffer.c)
 *     EtwpOpenLogger @ 0x1400C8C44 (EtwpOpenLogger.c)
 *     EtwpReleaseTraceBuffer @ 0x1400C9A50 (EtwpReleaseTraceBuffer.c)
 *     PsGetCurrentServerSiloGlobals @ 0x1400EBE80 (PsGetCurrentServerSiloGlobals.c)
 *     EtwpCloseLogger @ 0x140147E3C (EtwpCloseLogger.c)
 *     memmove @ 0x1401D7480 (memmove.c)
 *     EtwpSendTraceEvent @ 0x140330F08 (EtwpSendTraceEvent.c)
 *     EtwpInvokeEventCallback @ 0x140331A84 (EtwpInvokeEventCallback.c)
 *     EtwpGetReserveTraceBufferStatus @ 0x140331B9C (EtwpGetReserveTraceBufferStatus.c)
 *     EtwpCheckLoggerControlAccess @ 0x1405C43B0 (EtwpCheckLoggerControlAccess.c)
 *     ExRaiseDatatypeMisalignment @ 0x140913920 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall EtwTraceRaw(unsigned __int16 a1, void *a2, unsigned int a3, char a4)
{
  size_t v5; // r13
  int ReserveTraceBufferStatus; // ebx
  unsigned int v7; // r12d
  __int64 v8; // r14
  __int64 v9; // rax
  __int64 v10; // rsi
  void *v11; // rax
  __int64 v12; // r9
  __int64 v14[2]; // [rsp+40h] [rbp-58h] BYREF
  signed __int64 v15[9]; // [rsp+50h] [rbp-48h] BYREF
  char v16; // [rsp+A0h] [rbp+8h] BYREF
  void *Src; // [rsp+A8h] [rbp+10h]
  char v18; // [rsp+B8h] [rbp+20h]

  v18 = a4;
  Src = a2;
  v5 = a3;
  memset(v15, 0, 24);
  v16 = 0;
  ReserveTraceBufferStatus = 0;
  v14[0] = 0LL;
  v7 = a1;
  if ( a4 )
    v8 = *((_QWORD *)PsGetCurrentServerSiloGlobals() + 108);
  else
    v8 = EtwpHostSiloState;
  if ( v7 < *(_DWORD *)(v8 + 16) )
  {
    v9 = EtwpOpenLogger(v7, v8, a4, &v16);
    v10 = v9;
    v14[1] = v9;
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
          if ( ((unsigned __int8)Src & 3) != 0 )
            ExRaiseDatatypeMisalignment();
          if ( (unsigned __int64)Src + v5 > 0x7FFFFFFF0000LL || (char *)Src + v5 < Src )
            MEMORY[0x7FFFFFFF0000] = 0;
        }
      }
      else if ( (*(_DWORD *)(v9 + 12) & 0x1000000) != 0 )
      {
        ReserveTraceBufferStatus = -1073741637;
        goto LABEL_31;
      }
      v11 = (void *)EtwpReserveTraceBuffer((unsigned int *)v10, v5, (__int64)v15, v14, 0);
      if ( v11 )
      {
        memmove(v11, Src, v5);
        if ( (*(_DWORD *)(v10 + 12) & 0x80000) != 0
          && (!(_BYTE)KdDebuggerNotPresent && !KdPitchDebugger || KdEventLoggingPresent) )
        {
          EtwpSendTraceEvent(v10, v15);
        }
        if ( *(_QWORD *)(v10 + 1272) )
        {
          LOBYTE(v12) = a4;
          EtwpInvokeEventCallback(v10, v15, 0LL, v12);
        }
        EtwpReleaseTraceBuffer(v15);
      }
      else
      {
        ReserveTraceBufferStatus = EtwpGetReserveTraceBufferStatus(v10, (unsigned int)v5);
      }
      goto LABEL_31;
    }
  }
  return (unsigned int)-1073741816;
}
