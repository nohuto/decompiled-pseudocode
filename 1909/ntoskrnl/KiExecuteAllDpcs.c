/*
 * XREFs of KiExecuteAllDpcs @ 0x1400A24E0
 * Callers:
 *     KiRetireDpcList @ 0x1400A1C50 (KiRetireDpcList.c)
 *     KiExecuteDpc @ 0x14018B540 (KiExecuteDpc.c)
 * Callees:
 *     KxWaitForSpinLockAndAcquire @ 0x140008A00 (KxWaitForSpinLockAndAcquire.c)
 *     EtwpGetSystemTime @ 0x140082460 (EtwpGetSystemTime.c)
 *     KxReleaseSpinLock @ 0x1400916D0 (KxReleaseSpinLock.c)
 *     EtwpLogKernelEvent @ 0x1400A2990 (EtwpLogKernelEvent.c)
 *     EtwTraceKernelEvent @ 0x140121B90 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401C46A0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     KiAcquireSpinLockInstrumented @ 0x1402A75D8 (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402A76E8 (KiReleaseSpinLockInstrumented.c)
 */

__int64 __fastcall KiExecuteAllDpcs(__int64 a1, __int64 a2, _DWORD *a3, unsigned int a4)
{
  __int64 v4; // r13
  _DWORD *v5; // r11
  volatile signed __int32 *v7; // rbx
  __int64 result; // rax
  __int64 v9; // rdx
  __int16 v10; // ax
  __int64 *v11; // r12
  volatile signed __int32 *v12; // r14
  struct _KPRCB *CurrentPrcb; // rsi
  _DWORD *SchedulerAssist; // rcx
  __int64 **v15; // rcx
  __int64 *v16; // rax
  unsigned __int64 v17; // rsi
  __int64 *v18; // r15
  __int64 *v19; // r10
  __int64 *v20; // r8
  __int64 *v21; // r9
  struct _KPRCB *v22; // rcx
  unsigned __int64 v23; // rdx
  __int64 v24; // r8
  int v25; // r14d
  bool v26; // zf
  __int64 v27; // rcx
  __int64 v28; // r9
  unsigned __int64 v29; // rax
  __int64 v30; // r14
  _DWORD *v31; // r14
  void *v32; // rcx
  ULONG_PTR v33; // r12
  unsigned __int64 v34; // rax
  int v35; // r14d
  __int16 v36; // r15
  unsigned int v37; // esi
  unsigned int v38; // ecx
  __int64 v39; // r8
  __int64 v40; // rcx
  __int64 v41; // rax
  int v42; // r8d
  _DWORD *v43; // rcx
  int v44; // eax
  int v45; // eax
  int v46; // eax
  LARGE_INTEGER PerformanceCounter; // rax
  __int64 SystemTime; // rax
  size_t v49; // r8
  __int64 *v51; // [rsp+38h] [rbp-C8h]
  __int64 *v52; // [rsp+40h] [rbp-C0h]
  __int64 *v53; // [rsp+48h] [rbp-B8h]
  __int64 v54; // [rsp+50h] [rbp-B0h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+58h] [rbp-A8h] BYREF
  int v56; // [rsp+60h] [rbp-A0h]
  unsigned int v57; // [rsp+64h] [rbp-9Ch]
  __int64 v58; // [rsp+68h] [rbp-98h] BYREF
  __int64 v59; // [rsp+70h] [rbp-90h]
  __int64 *v60; // [rsp+78h] [rbp-88h]
  ULONG_PTR v61; // [rsp+80h] [rbp-80h] BYREF
  __int64 v62; // [rsp+88h] [rbp-78h]
  __int64 v63; // [rsp+90h] [rbp-70h] BYREF
  LARGE_INTEGER v64; // [rsp+98h] [rbp-68h]
  __int64 v65; // [rsp+A0h] [rbp-60h]
  unsigned __int64 v66; // [rsp+A8h] [rbp-58h]
  __int64 v67; // [rsp+B0h] [rbp-50h]
  _QWORD v68[2]; // [rsp+B8h] [rbp-48h] BYREF
  _QWORD v69[4]; // [rsp+C8h] [rbp-38h] BYREF
  void *retaddr; // [rsp+138h] [rbp+38h]

  v4 = a4;
  v61 = 0LL;
  v5 = a3;
  v62 = 0LL;
  v54 = 0LL;
  v64.QuadPart = 0LL;
  v65 = 0LL;
  v7 = (volatile signed __int32 *)(a1 + 8 * (a4 + 4LL * a4 + 1472));
  v66 = 0LL;
  v67 = 0LL;
  result = *((unsigned int *)v7 + 6);
  v59 = a2;
  v9 = a4;
  if ( !(_DWORD)result )
    return result;
  if ( (SBYTE4(PerfGlobalGroupMask) & 0x80u) == 0 )
  {
    v11 = 0LL;
  }
  else
  {
    if ( a4 )
    {
      v10 = 3906;
      HIDWORD(v54) = 4200450;
    }
    else
    {
      v10 = 3908;
      HIDWORD(v54) = 4196866;
    }
    LOWORD(v54) = v10;
    v11 = &v54;
  }
  v63 = *(_QWORD *)(a1 + 11664);
  v60 = v11;
  while ( 1 )
  {
    v12 = v7 + 4;
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      KiAcquireSpinLockInstrumented(v7 + 4);
LABEL_63:
      v5 = a3;
      v9 = v4;
      goto LABEL_10;
    }
    CurrentPrcb = KeGetCurrentPrcb();
    SchedulerAssist = CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v44 = SchedulerAssist[5];
        SchedulerAssist[5] = v44 + 1;
        if ( v44 == -1 )
        {
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          v5 = a3;
          v9 = v4;
        }
      }
    }
    if ( _interlockedbittestandset64(v12, 0LL) )
    {
      v43 = CurrentPrcb->SchedulerAssist;
      if ( v43 )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v45 = v43[5] - 1;
          v43[5] = v45;
          if ( !v45 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      KxWaitForSpinLockAndAcquire(v7 + 4, v9);
      goto LABEL_63;
    }
LABEL_10:
    if ( *((int *)v7 + 6) <= 1 )
    {
      _InterlockedAnd16((volatile signed __int16 *)(a1 + 2 * v9 + 11884), 0xFFEDu);
      if ( !*((_DWORD *)v7 + 6) )
        break;
    }
    v15 = *(__int64 ***)v7;
    v16 = **(__int64 ***)v7;
    *(_QWORD *)v7 = v16;
    if ( !v16 )
      *((_QWORD *)v7 + 1) = v7;
    v17 = (unsigned __int64)(v15 - 1);
    BugCheckParameter2 = (ULONG_PTR)v15[2];
    v18 = v15[6];
    v19 = v15[3];
    v20 = v15[4];
    v21 = v15[5];
    v15[6] = 0LL;
    v51 = v19;
    --*((_DWORD *)v7 + 6);
    *((_QWORD *)v7 + 4) = v15 - 1;
    v53 = v20;
    v52 = v21;
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    {
      KiReleaseSpinLockInstrumented(v7 + 4, retaddr);
      v19 = v51;
      v20 = v53;
      v21 = v52;
      v5 = a3;
    }
    else
    {
      _InterlockedAnd64((volatile signed __int64 *)v12, 0LL);
    }
    v22 = KeGetCurrentPrcb();
    v23 = (unsigned __int64)v22->SchedulerAssist;
    if ( v23 )
    {
      if ( v22->NestingLevel <= 1u )
      {
        v46 = *(_DWORD *)(v23 + 20) - 1;
        *(_DWORD *)(v23 + 20) = v46;
        if ( !v46 )
        {
          KiRemoveSystemWorkPriorityKick(v22);
          v19 = v51;
          v20 = v53;
          v21 = v52;
          v5 = a3;
        }
      }
    }
    _enable();
    if ( (DWORD1(PerfGlobalGroupMask) & 0x40000) != 0 )
    {
      v61 = BugCheckParameter2;
      v68[1] = 16LL;
      v62 = 0x7E35C6C7F3DD7277LL
          * (KiWaitNever ^ __ROR8__(BugCheckParameter2 ^ _byteswap_uint64(v17 ^ KiWaitAlways), KiWaitNever));
      v68[0] = &v61;
      EtwTraceKernelEvent((unsigned int)v68, 1, 537133056, 3941, 4196866);
      v19 = v51;
      v20 = v53;
      v21 = v52;
      v5 = a3;
    }
    if ( v11 )
    {
      v24 = qword_14058C8A0;
      v25 = 0;
      if ( qword_14058C8A0 )
      {
        v23 = *(unsigned int *)(qword_14058C8A0 + 4224);
        v26 = !_BitScanForward((unsigned int *)&v27, v23);
        v56 = v27;
        if ( !v26 )
        {
          do
          {
            v23 = ((_DWORD)v23 - 1) & (unsigned int)v23;
            v28 = 32LL * (unsigned int)v27 + qword_14058C8A0 + 4260;
            if ( v28 && (*(_DWORD *)(v28 + 4) & 0x80u) != 0 )
              v25 |= 1 << *(_BYTE *)(qword_14058C8A0 + 2 * v27 + 4209);
            v26 = !_BitScanForward((unsigned int *)&v27, v23);
          }
          while ( !v26 );
          v19 = v51;
          v21 = v52;
          v56 = v27;
        }
      }
      else
      {
        LOBYTE(v25) = 30;
      }
      if ( (v25 & 2) != 0 )
      {
        PerformanceCounter = KeQueryPerformanceCounter(0LL);
        v19 = v51;
        v21 = v52;
        v5 = a3;
        v64 = PerformanceCounter;
      }
      else
      {
        v64.QuadPart = 0LL;
      }
      if ( (v25 & 4) != 0 )
      {
        SystemTime = EtwpGetSystemTime();
        v19 = v51;
        v21 = v52;
        v5 = a3;
        v65 = SystemTime;
      }
      else
      {
        v65 = 0LL;
      }
      if ( (v25 & 8) != 0 )
      {
        v29 = __rdtsc();
        v23 = (unsigned __int64)HIDWORD(v29) << 32;
        v66 = v29;
      }
      else
      {
        v66 = 0LL;
      }
      if ( (v25 & 0x10) != 0 )
      {
        v58 = 0LL;
        ((void (__fastcall *)(__int64 *, unsigned __int64, __int64, __int64 *))off_140424720[0])(&v58, v23, v24, v21);
        v19 = v51;
        v5 = a3;
        v67 = v58;
      }
      else
      {
        v67 = 0LL;
      }
      v20 = v53;
    }
    v30 = ((*v5)++ & 0xF) + 1LL;
    v31 = &v5[4 * v30];
    *(_QWORD *)v31 = BugCheckParameter2;
    v31[2] = MEMORY[0xFFFFF78000000320];
    v32 = *(void **)(a1 + 25000);
    v33 = *(unsigned int *)(v59 + 484);
    *(_DWORD *)(a1 + 23452) = 0;
    if ( v32 && *(void **)(a1 + 25008) != v32 && *(_DWORD *)(a1 + 22764) < *(_DWORD *)(a1 + 22772) )
    {
      v49 = 8LL * (unsigned int)KiDpcWatchdogProfileArrayLength;
      *(_QWORD *)(a1 + 25008) = v32;
      memset(v32, 0, v49);
      v19 = v51;
      v20 = v53;
    }
    *(_QWORD *)(a1 + 11664) = v18;
    if ( v18 != (__int64 *)1 )
      v18[4] = __rdtsc();
    if ( !(_DWORD)v4 )
      *(_BYTE *)(a1 + 11882) = 1;
    ((void (__fastcall *)(unsigned __int64, __int64 *, __int64 *))BugCheckParameter2)(v17, v19, v20);
    if ( !(_DWORD)v4 )
      *(_BYTE *)(a1 + 11882) = 0;
    if ( v18 != (__int64 *)1 )
    {
      v34 = __rdtsc();
      v18[3] += (((unsigned __int64)HIDWORD(v34) << 32) | (unsigned int)v34) - v18[4];
      ++v18[5];
    }
    v31[3] = MEMORY[0xFFFFF78000000320];
    if ( (_DWORD)v33 != *(_DWORD *)(v59 + 484) )
      KeBugCheckEx(0xC7u, 4uLL, BugCheckParameter2, v33, *(unsigned int *)(v59 + 484));
    v11 = v60;
    if ( v60 )
    {
      v35 = *((_DWORD *)v60 + 1);
      v36 = *(_WORD *)v60;
      v69[2] = &BugCheckParameter2;
      v69[3] = 8LL;
      v37 = *(_DWORD *)(EtwpHostSiloState + 4224);
      v26 = !_BitScanForward(&v38, v37);
      v57 = v38;
      if ( !v26 )
      {
        do
        {
          v37 &= v37 - 1;
          v39 = v38;
          v40 = 32LL * v38 + EtwpHostSiloState + 4260;
          if ( v40 )
          {
            if ( (*(_DWORD *)(v40 + 4) & 0x80u) != 0 )
            {
              v41 = *(unsigned __int8 *)(EtwpHostSiloState + 2 * v39 + 4209);
              v42 = *(unsigned __int8 *)(EtwpHostSiloState + 2 * v39 + 4208);
              v69[1] = 8LL;
              v69[0] = &v63 + v41;
              EtwpLogKernelEvent((unsigned int)v69, EtwpHostSiloState, v42, 2, v36, v35);
            }
          }
          v26 = !_BitScanForward(&v38, v37);
        }
        while ( !v26 );
        v57 = v38;
      }
    }
    _disable();
    if ( !*((_DWORD *)v7 + 6) )
      goto LABEL_55;
    v5 = a3;
    v9 = v4;
  }
  KxReleaseSpinLock((PKSPIN_LOCK)v7 + 2);
LABEL_55:
  result = v63;
  *(_QWORD *)(a1 + 11664) = v63;
  return result;
}
