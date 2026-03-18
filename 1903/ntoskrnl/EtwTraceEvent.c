/*
 * XREFs of EtwTraceEvent @ 0x14032C3F0
 * Callers:
 *     NtTraceEvent @ 0x14008C650 (NtTraceEvent.c)
 *     IoWMIWriteEvent @ 0x14015B430 (IoWMIWriteEvent.c)
 * Callees:
 *     EtwpOpenLogger @ 0x14008C5A4 (EtwpOpenLogger.c)
 *     EtwpReleaseTraceBuffer @ 0x14008D3B0 (EtwpReleaseTraceBuffer.c)
 *     EtwpReserveTraceBuffer @ 0x1400C31E0 (EtwpReserveTraceBuffer.c)
 *     PsGetCurrentServerSiloGlobals @ 0x1400E6EE0 (PsGetCurrentServerSiloGlobals.c)
 *     EtwpCloseLogger @ 0x14014779C (EtwpCloseLogger.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memmove @ 0x1401D6880 (memmove.c)
 *     EtwpSendTraceEvent @ 0x1403314A8 (EtwpSendTraceEvent.c)
 *     EtwpInvokeEventCallback @ 0x140332024 (EtwpInvokeEventCallback.c)
 *     EtwpGetReserveTraceBufferStatus @ 0x14033213C (EtwpGetReserveTraceBufferStatus.c)
 *     ExRaiseDatatypeMisalignment @ 0x140913EC0 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall EtwTraceEvent(unsigned __int16 a1, unsigned __int16 *a2, unsigned int a3, int a4, char a5)
{
  __int64 v5; // r14
  unsigned int v7; // esi
  __int64 v8; // rbx
  unsigned int ReserveTraceBufferStatus; // ebx
  __int64 v10; // rax
  __int64 v11; // r13
  int v12; // eax
  __int64 v13; // rsi
  int v14; // ebx
  unsigned int v15; // esi
  char *v16; // rdx
  unsigned int v17; // ecx
  unsigned __int64 v18; // r8
  unsigned __int64 v19; // rbx
  int i; // edx
  unsigned int v21; // ecx
  char *v22; // rax
  __int64 v23; // r8
  char *v24; // r14
  __int64 v25; // r9
  int j; // esi
  char *v27; // rdx
  size_t v28; // rcx
  size_t v29; // rbx
  unsigned __int64 v30; // rcx
  _OWORD *v31; // rcx
  struct _KTHREAD *CurrentThread; // rcx
  char v34[16]; // [rsp+30h] [rbp-1C8h] BYREF
  int v35; // [rsp+40h] [rbp-1B8h]
  _DWORD v36[3]; // [rsp+44h] [rbp-1B4h]
  int v37; // [rsp+50h] [rbp-1A8h]
  int v38; // [rsp+54h] [rbp-1A4h]
  int v39; // [rsp+58h] [rbp-1A0h]
  int v40; // [rsp+5Ch] [rbp-19Ch]
  unsigned int Size; // [rsp+60h] [rbp-198h]
  int Size_4; // [rsp+64h] [rbp-194h]
  unsigned int v43; // [rsp+68h] [rbp-190h]
  void *v44; // [rsp+70h] [rbp-188h]
  __int64 v45; // [rsp+78h] [rbp-180h]
  __int64 v46; // [rsp+80h] [rbp-178h] BYREF
  signed __int64 v47[5]; // [rsp+88h] [rbp-170h] BYREF
  void *Src[32]; // [rsp+B0h] [rbp-148h] BYREF

  v5 = a3;
  Size = a3;
  v34[8] = a5;
  memset(v47, 0, 24);
  v34[0] = 0;
  v37 = 0;
  v35 = 0;
  v46 = 0LL;
  v7 = a1;
  v43 = a1;
  if ( a5 )
    v8 = *((_QWORD *)PsGetCurrentServerSiloGlobals() + 108);
  else
    v8 = EtwpHostSiloState;
  v45 = v8;
  *(_QWORD *)&v36[1] = v8;
  if ( v7 < *(_DWORD *)(v8 + 16) )
  {
    v10 = EtwpOpenLogger(v7, v8, a5, v34);
    v11 = v10;
    v47[3] = v10;
    if ( v10 )
    {
      v12 = *(_DWORD *)(v10 + 12);
      if ( (v12 & 0x80u) == 0 )
      {
        if ( a5 || (v12 & 0x1000000) == 0 )
        {
          if ( a5 )
          {
            if ( ((unsigned __int8)a2 & 3) != 0 )
              ExRaiseDatatypeMisalignment();
            if ( (unsigned __int64)a2 + v5 > 0x7FFFFFFF0000LL || (unsigned __int16 *)((char *)a2 + v5) < a2 )
              MEMORY[0x7FFFFFFF0000] = 0;
          }
          v36[0] = *a2;
          if ( v36[0] < (unsigned int)v5 )
          {
            ReserveTraceBufferStatus = -1073741811;
            v35 = -1073741811;
            v13 = *(_QWORD *)&v36[1];
            goto LABEL_72;
          }
          v39 = *((_DWORD *)a2 + 11);
          v14 = v39;
          v38 = v39;
          v15 = v36[0];
          if ( (v39 & 0x100000) != 0 )
          {
            v16 = (char *)a2 + v5;
            v17 = v36[0] - v5;
            if ( (unsigned int)(v36[0] - v5) > 0x100 )
            {
              ReserveTraceBufferStatus = -1073741684;
              v35 = -1073741684;
              v13 = *(_QWORD *)&v36[1];
              goto LABEL_72;
            }
            if ( v17 )
            {
              if ( a5 )
              {
                if ( ((unsigned __int8)v16 & 3) != 0 )
                  ExRaiseDatatypeMisalignment();
                v18 = (unsigned __int64)&v16[v17];
                if ( v18 > 0x7FFFFFFF0000LL || v18 < (unsigned __int64)v16 )
                  MEMORY[0x7FFFFFFF0000] = 0;
              }
              v19 = v17;
              memmove(Src, v16, v17);
              v15 = v5;
              v36[0] = v5;
              v37 = v19 >> 4;
              for ( i = 0; ; ++i )
              {
                v40 = i;
                if ( i >= v37 )
                  break;
                v21 = (unsigned int)Src[2 * i + 1];
                v15 += v21;
                v36[0] = v15;
                if ( v15 < v21 )
                {
                  ReserveTraceBufferStatus = -2147483643;
                  v35 = -2147483643;
                  v13 = *(_QWORD *)&v36[1];
                  goto LABEL_72;
                }
              }
              v14 = v38;
            }
          }
          v22 = (char *)EtwpReserveTraceBuffer((unsigned int *)v11, v15, (__int64)v47, &v46, 0);
          v24 = v22;
          v47[4] = (signed __int64)v22;
          if ( v22 )
          {
            if ( (v14 & 0x100000) != 0 )
            {
              v44 = &v22[Size];
              memmove(v22, a2, Size);
              for ( j = 0; ; ++j )
              {
                Size_4 = j;
                if ( j >= v37 )
                  break;
                v27 = (char *)Src[2 * j];
                v28 = LODWORD(Src[2 * j + 1]);
                if ( v27 && (_DWORD)v28 )
                {
                  if ( a5 && ((unsigned __int64)&v27[v28] > 0x7FFFFFFF0000LL || &v27[v28] < v27) )
                    MEMORY[0x7FFFFFFF0000] = 0;
                  v29 = v28;
                  memmove(v44, v27, v28);
                  v44 = (char *)v44 + v29;
                }
              }
              v14 = v38;
            }
            else
            {
              if ( a5 && v15 )
              {
                if ( ((unsigned __int8)a2 & 3) != 0 )
                  ExRaiseDatatypeMisalignment();
                v30 = (unsigned __int64)a2 + v15;
                if ( v30 > 0x7FFFFFFF0000LL || v30 < (unsigned __int64)a2 )
                  MEMORY[0x7FFFFFFF0000] = 0;
              }
              memmove(v22, a2, v15);
            }
            if ( (v14 & 0x80000) != 0 )
            {
              v31 = (_OWORD *)*((_QWORD *)a2 + 3);
              if ( a5 && ((unsigned __int8)v31 & 3) != 0 )
                ExRaiseDatatypeMisalignment();
              *(_OWORD *)(v24 + 24) = *v31;
            }
            v13 = *(_QWORD *)&v36[1];
            CurrentThread = KeGetCurrentThread();
            *(_DWORD *)v24 = a4 | v36[0];
            *((_QWORD *)v24 + 2) = v46;
            *((_DWORD *)v24 + 10) = CurrentThread->SchedulerApc.SpareLong0;
            *((_DWORD *)v24 + 11) = CurrentThread->UserTime;
            *((_DWORD *)v24 + 2) = CurrentThread[1].CurrentRunTime;
            *((_DWORD *)v24 + 3) = CurrentThread[1].CycleTime;
            if ( (*(_DWORD *)(v11 + 12) & 0x80000) != 0
              && (!(_BYTE)KdDebuggerNotPresent && !KdPitchDebugger || KdEventLoggingPresent) )
            {
              EtwpSendTraceEvent(v11, v47);
            }
            if ( *(_QWORD *)(v11 + 1304) )
            {
              LOBYTE(v25) = a5;
              EtwpInvokeEventCallback(v11, v47, v24 + 24, v25);
            }
            EtwpReleaseTraceBuffer(v47);
            ReserveTraceBufferStatus = v35;
            goto LABEL_72;
          }
          ReserveTraceBufferStatus = EtwpGetReserveTraceBufferStatus(v11, v15, v23);
        }
        else
        {
          ReserveTraceBufferStatus = -1073741637;
        }
      }
      else
      {
        ReserveTraceBufferStatus = -1073741790;
      }
      v13 = *(_QWORD *)&v36[1];
LABEL_72:
      EtwpCloseLogger(v43, v13, v34[0]);
      return ReserveTraceBufferStatus;
    }
  }
  return (unsigned int)-1073741816;
}
