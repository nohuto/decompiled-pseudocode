/*
 * XREFs of EtwTraceEvent @ 0x14030E9CC
 * Callers:
 *     NtTraceEvent @ 0x1400CB590 (NtTraceEvent.c)
 *     IoWMIWriteEvent @ 0x14010BE40 (IoWMIWriteEvent.c)
 * Callees:
 *     EtwpReserveTraceBuffer @ 0x1400C7540 (EtwpReserveTraceBuffer.c)
 *     PsGetCurrentServerSiloGlobals @ 0x140109DC0 (PsGetCurrentServerSiloGlobals.c)
 *     EtwpOpenLogger @ 0x140113820 (EtwpOpenLogger.c)
 *     EtwpCloseLogger @ 0x1401138CC (EtwpCloseLogger.c)
 *     EtwpReleaseTraceBuffer @ 0x140113908 (EtwpReleaseTraceBuffer.c)
 *     EtwpGetReserveTraceBufferStatus @ 0x14013F790 (EtwpGetReserveTraceBufferStatus.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     EtwpSendTraceEvent @ 0x14031344C (EtwpSendTraceEvent.c)
 *     EtwpInvokeEventCallback @ 0x140313F44 (EtwpInvokeEventCallback.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408D7880 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall EtwTraceEvent(unsigned __int16 a1, unsigned __int16 *a2, __int64 a3, int a4, char a5)
{
  __int64 v5; // rbx
  unsigned int v7; // r15d
  __int64 v8; // r12
  unsigned int ReserveTraceBufferStatus; // ebx
  __int64 v10; // rax
  __int64 v11; // r15
  int v12; // eax
  unsigned int v13; // edi
  char *v14; // rdx
  unsigned int v15; // ecx
  unsigned __int64 v16; // r8
  unsigned __int64 v17; // rbx
  int i; // edx
  unsigned int v19; // ecx
  char *v20; // rax
  char *v21; // rsi
  int j; // edi
  char *v23; // rdx
  size_t v24; // rcx
  size_t v25; // rbx
  unsigned __int64 v26; // rcx
  _OWORD *v27; // rcx
  struct _KTHREAD *CurrentThread; // rcx
  char v30[4]; // [rsp+30h] [rbp-1B8h] BYREF
  int v31; // [rsp+34h] [rbp-1B4h]
  unsigned int v32; // [rsp+38h] [rbp-1B0h]
  int v33; // [rsp+3Ch] [rbp-1ACh]
  int v34; // [rsp+40h] [rbp-1A8h]
  char *v35; // [rsp+48h] [rbp-1A0h]
  int v36; // [rsp+50h] [rbp-198h]
  int v37; // [rsp+54h] [rbp-194h]
  int v38; // [rsp+58h] [rbp-190h]
  unsigned int v39; // [rsp+5Ch] [rbp-18Ch]
  void *v40; // [rsp+60h] [rbp-188h]
  __int64 v41; // [rsp+68h] [rbp-180h]
  __int64 v42; // [rsp+70h] [rbp-178h]
  __int64 v43; // [rsp+78h] [rbp-170h] BYREF
  signed __int64 v44[4]; // [rsp+80h] [rbp-168h] BYREF
  void *Src[32]; // [rsp+A0h] [rbp-148h] BYREF

  v5 = (unsigned int)a3;
  LODWORD(v35) = a3;
  v33 = 0;
  v31 = 0;
  v7 = a1;
  v39 = a1;
  if ( a5 )
    v8 = *((_QWORD *)PsGetCurrentServerSiloGlobals() + 108);
  else
    v8 = EtwpHostSiloState;
  v41 = v8;
  if ( v7 < *(_DWORD *)(v8 + 16) )
  {
    LOBYTE(a3) = a5;
    v10 = EtwpOpenLogger(v7, v8, a3, v30);
    v11 = v10;
    v42 = v10;
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
          v32 = *a2;
          if ( v32 >= (unsigned int)v5 )
          {
            v36 = *((_DWORD *)a2 + 11);
            v34 = v36;
            v13 = v32;
            if ( (v36 & 0x100000) != 0 )
            {
              v14 = (char *)a2 + v5;
              v15 = v32 - v5;
              if ( v32 - (unsigned int)v5 > 0x100 )
              {
                ReserveTraceBufferStatus = -1073741684;
                v31 = -1073741684;
                goto LABEL_70;
              }
              if ( v15 )
              {
                if ( a5 )
                {
                  if ( ((unsigned __int8)v14 & 3) != 0 )
                    ExRaiseDatatypeMisalignment();
                  v16 = (unsigned __int64)&v14[v15];
                  if ( v16 > 0x7FFFFFFF0000LL || v16 < (unsigned __int64)v14 )
                    MEMORY[0x7FFFFFFF0000] = 0;
                }
                v17 = v15;
                memmove(Src, v14, v15);
                v13 = (unsigned int)v35;
                v32 = (unsigned int)v35;
                v33 = v17 >> 4;
                for ( i = 0; ; ++i )
                {
                  v37 = i;
                  if ( i >= v33 )
                    break;
                  v19 = (unsigned int)Src[2 * i + 1];
                  v13 += v19;
                  v32 = v13;
                  if ( v13 < v19 )
                  {
                    ReserveTraceBufferStatus = -2147483643;
                    v31 = -2147483643;
                    goto LABEL_70;
                  }
                }
                LODWORD(v5) = (_DWORD)v35;
              }
            }
            v20 = (char *)EtwpReserveTraceBuffer((unsigned int *)v11, v13, (__int64)v44, &v43, 0);
            v21 = v20;
            v35 = v20;
            if ( v20 )
            {
              if ( (v34 & 0x100000) != 0 )
              {
                v40 = &v20[(unsigned int)v5];
                memmove(v20, a2, (unsigned int)v5);
                for ( j = 0; ; ++j )
                {
                  v38 = j;
                  if ( j >= v33 )
                    break;
                  v23 = (char *)Src[2 * j];
                  v24 = LODWORD(Src[2 * j + 1]);
                  if ( v23 && (_DWORD)v24 )
                  {
                    if ( a5 && ((unsigned __int64)&v23[v24] > 0x7FFFFFFF0000LL || &v23[v24] < v23) )
                      MEMORY[0x7FFFFFFF0000] = 0;
                    v25 = v24;
                    memmove(v40, v23, v24);
                    v40 = (char *)v40 + v25;
                  }
                }
              }
              else
              {
                if ( a5 && v13 )
                {
                  if ( ((unsigned __int8)a2 & 3) != 0 )
                    ExRaiseDatatypeMisalignment();
                  v26 = (unsigned __int64)a2 + v13;
                  if ( v26 > 0x7FFFFFFF0000LL || v26 < (unsigned __int64)a2 )
                    MEMORY[0x7FFFFFFF0000] = 0;
                }
                memmove(v20, a2, v13);
              }
              if ( (v34 & 0x80000) != 0 )
              {
                v27 = (_OWORD *)*((_QWORD *)a2 + 3);
                if ( a5 && ((unsigned __int8)v27 & 3) != 0 )
                  ExRaiseDatatypeMisalignment();
                *(_OWORD *)(v21 + 24) = *v27;
              }
              CurrentThread = KeGetCurrentThread();
              *(_DWORD *)v21 = a4 | v32;
              *((_QWORD *)v21 + 2) = v43;
              *((_DWORD *)v21 + 10) = CurrentThread->SchedulerApc.SpareLong0;
              *((_DWORD *)v21 + 11) = CurrentThread->UserTime;
              *((_DWORD *)v21 + 2) = CurrentThread[1].CurrentRunTime;
              *((_DWORD *)v21 + 3) = CurrentThread[1].CycleTime;
              if ( (*(_DWORD *)(v11 + 12) & 0x80000) != 0
                && (!(_BYTE)KdDebuggerNotPresent && !KdPitchDebugger || KdEventLoggingPresent) )
              {
                EtwpSendTraceEvent(v11, v44);
              }
              if ( *(_QWORD *)(v11 + 1272) )
                EtwpInvokeEventCallback(v11, v44);
              EtwpReleaseTraceBuffer(v44);
              ReserveTraceBufferStatus = v31;
            }
            else
            {
              ReserveTraceBufferStatus = EtwpGetReserveTraceBufferStatus(v11, v13);
            }
            goto LABEL_70;
          }
          ReserveTraceBufferStatus = -1073741811;
          v31 = -1073741811;
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
LABEL_70:
      EtwpCloseLogger(v39, v8, v30[0]);
      return ReserveTraceBufferStatus;
    }
  }
  return (unsigned int)-1073741816;
}
