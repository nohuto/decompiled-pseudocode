/*
 * XREFs of EtwTraceRaw @ 0x14032C888
 * Callers:
 *     NtTraceEvent @ 0x14008C650 (NtTraceEvent.c)
 * Callees:
 *     EtwpOpenLogger @ 0x14008C5A4 (EtwpOpenLogger.c)
 *     EtwpReleaseTraceBuffer @ 0x14008D3B0 (EtwpReleaseTraceBuffer.c)
 *     EtwpReserveTraceBuffer @ 0x1400C31E0 (EtwpReserveTraceBuffer.c)
 *     PsGetCurrentServerSiloGlobals @ 0x1400E6EE0 (PsGetCurrentServerSiloGlobals.c)
 *     EtwpCloseLogger @ 0x14014779C (EtwpCloseLogger.c)
 *     memmove @ 0x1401D6880 (memmove.c)
 *     EtwpSendTraceEvent @ 0x1403314A8 (EtwpSendTraceEvent.c)
 *     EtwpInvokeEventCallback @ 0x140332024 (EtwpInvokeEventCallback.c)
 *     EtwpGetReserveTraceBufferStatus @ 0x14033213C (EtwpGetReserveTraceBufferStatus.c)
 *     EtwpCheckLoggerControlAccess @ 0x1405C3EE0 (EtwpCheckLoggerControlAccess.c)
 *     ExRaiseDatatypeMisalignment @ 0x140913EC0 (ExRaiseDatatypeMisalignment.c)
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
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v15[2]; // [rsp+40h] [rbp-58h] BYREF
  signed __int64 v16[9]; // [rsp+50h] [rbp-48h] BYREF
  char v17; // [rsp+A0h] [rbp+8h] BYREF
  void *Src; // [rsp+A8h] [rbp+10h]
  char v19; // [rsp+B8h] [rbp+20h]

  v19 = a4;
  Src = a2;
  v5 = a3;
  memset(v16, 0, 24);
  v17 = 0;
  ReserveTraceBufferStatus = 0;
  v15[0] = 0LL;
  v7 = a1;
  if ( a4 )
    v8 = *((_QWORD *)PsGetCurrentServerSiloGlobals() + 108);
  else
    v8 = EtwpHostSiloState;
  if ( v7 < *(_DWORD *)(v8 + 16) )
  {
    v9 = EtwpOpenLogger(v7, v8, a4, &v17);
    v10 = v9;
    v15[1] = v9;
    if ( v9 )
    {
      if ( (*(_DWORD *)(v9 + 12) & 0x80u) != 0 )
      {
        ReserveTraceBufferStatus = -1073741790;
LABEL_31:
        EtwpCloseLogger(v7, v8, v17);
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
      v11 = (void *)EtwpReserveTraceBuffer((unsigned int *)v10, v5, (__int64)v16, v15, 0);
      if ( v11 )
      {
        memmove(v11, Src, v5);
        if ( (*(_DWORD *)(v10 + 12) & 0x80000) != 0
          && (!(_BYTE)KdDebuggerNotPresent && !KdPitchDebugger || KdEventLoggingPresent) )
        {
          EtwpSendTraceEvent(v10, v16);
        }
        if ( *(_QWORD *)(v10 + 1304) )
        {
          LOBYTE(v13) = a4;
          EtwpInvokeEventCallback(v10, v16, 0LL, v13);
        }
        EtwpReleaseTraceBuffer(v16);
      }
      else
      {
        ReserveTraceBufferStatus = EtwpGetReserveTraceBufferStatus(v10, (unsigned int)v5, v12);
      }
      goto LABEL_31;
    }
  }
  return (unsigned int)-1073741816;
}
