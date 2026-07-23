/*
 * XREFs of KiExecuteAllDpcs @ 0x1400C6C80
 * Callers:
 *     KiRetireDpcList @ 0x1400C6400 (KiRetireDpcList.c)
 *     KiExecuteDpc @ 0x140181630 (KiExecuteDpc.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x1400630D0 (KxReleaseSpinLock.c)
 *     RtlGetSystemTimePrecise @ 0x14008A500 (RtlGetSystemTimePrecise.c)
 *     KxWaitForSpinLockAndAcquire @ 0x14008CF10 (KxWaitForSpinLockAndAcquire.c)
 *     EtwpLogKernelEvent @ 0x1400C7110 (EtwpLogKernelEvent.c)
 *     EtwTraceKernelEvent @ 0x1400F3790 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     KiAcquireSpinLockInstrumented @ 0x140291018 (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x140291128 (KiReleaseSpinLockInstrumented.c)
 */

__int64 __fastcall KiExecuteAllDpcs(__int64 a1, __int64 a2, _DWORD *a3, unsigned int a4)
{
  __int64 v4; // r13
  _DWORD *v5; // r11
  __int64 v7; // rdx
  __int64 v8; // rbx
  __int64 result; // rax
  volatile signed __int32 *v10; // rbx
  __int16 v11; // ax
  __int16 *v12; // r12
  volatile signed __int32 *v13; // r14
  __int64 v14; // r8
  struct _KPRCB *CurrentPrcb; // rsi
  _DWORD *SchedulerAssist; // rcx
  __int64 **v17; // rcx
  __int64 *v18; // rax
  unsigned __int64 v19; // rsi
  __int64 *v20; // r15
  __int64 *v21; // r10
  __int64 *v22; // r8
  __int64 *v23; // r9
  struct _KPRCB *v24; // rcx
  unsigned __int64 v25; // rdx
  __int64 v26; // r8
  int v27; // r14d
  bool v28; // zf
  __int64 v29; // rcx
  __int64 v30; // r9
  unsigned __int64 v31; // rax
  __int64 v32; // r14
  _DWORD *v33; // r14
  void *v34; // rcx
  ULONG_PTR v35; // r12
  unsigned __int64 v36; // rax
  int v37; // r14d
  __int16 v38; // r15
  unsigned int v39; // esi
  unsigned int v40; // ecx
  __int64 v41; // r8
  __int64 v42; // rcx
  __int64 v43; // rax
  int v44; // r8d
  _DWORD *v45; // rcx
  int v46; // eax
  int v47; // eax
  int v48; // eax
  LARGE_INTEGER PerformanceCounter; // rax
  LARGE_INTEGER SystemTimePrecise; // rax
  size_t v51; // r8
  __int64 *v53; // [rsp+38h] [rbp-C8h]
  __int64 *v54; // [rsp+40h] [rbp-C0h]
  __int64 *v55; // [rsp+48h] [rbp-B8h]
  ULONG_PTR BugCheckParameter2; // [rsp+50h] [rbp-B0h] BYREF
  __int16 v57; // [rsp+58h] [rbp-A8h] BYREF
  int v58; // [rsp+5Ch] [rbp-A4h]
  int v59; // [rsp+60h] [rbp-A0h]
  unsigned int v60; // [rsp+64h] [rbp-9Ch]
  __int64 v61; // [rsp+68h] [rbp-98h] BYREF
  __int64 v62; // [rsp+70h] [rbp-90h]
  __int16 *v63; // [rsp+78h] [rbp-88h]
  __int64 v64; // [rsp+80h] [rbp-80h]
  ULONG_PTR v65; // [rsp+88h] [rbp-78h] BYREF
  __int64 v66; // [rsp+90h] [rbp-70h] BYREF
  LARGE_INTEGER v67; // [rsp+98h] [rbp-68h]
  LARGE_INTEGER v68; // [rsp+A0h] [rbp-60h]
  unsigned __int64 v69; // [rsp+A8h] [rbp-58h]
  __int64 v70; // [rsp+B0h] [rbp-50h]
  _QWORD v71[2]; // [rsp+B8h] [rbp-48h] BYREF
  _QWORD v72[4]; // [rsp+C8h] [rbp-38h] BYREF
  void *retaddr; // [rsp+138h] [rbp+38h]

  v4 = a4;
  v5 = a3;
  v62 = a2;
  v7 = a4;
  v8 = a4 + 4LL * a4 + 1472;
  result = *(unsigned int *)(a1 + 8 * v8 + 24);
  v10 = (volatile signed __int32 *)(a1 + 8 * v8);
  if ( !(_DWORD)result )
    return result;
  if ( (SBYTE4(PerfGlobalGroupMask) & 0x80u) == 0 )
  {
    v12 = 0LL;
  }
  else
  {
    if ( a4 )
    {
      v11 = 3906;
      v58 = 4200450;
    }
    else
    {
      v11 = 3908;
      v58 = 4196866;
    }
    v57 = v11;
    v12 = &v57;
  }
  v64 = *(_QWORD *)(a1 + 11664);
  v63 = v12;
  while ( 1 )
  {
    v13 = v10 + 4;
    v14 = 4294967277LL;
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      KiAcquireSpinLockInstrumented(v10 + 4);
LABEL_64:
      v5 = a3;
      v7 = v4;
      goto LABEL_10;
    }
    CurrentPrcb = KeGetCurrentPrcb();
    SchedulerAssist = CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v46 = SchedulerAssist[5];
        SchedulerAssist[5] = v46 + 1;
        if ( v46 == -1 )
        {
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          v5 = a3;
          v7 = v4;
          v14 = 4294967277LL;
        }
      }
    }
    if ( _interlockedbittestandset64(v13, 0LL) )
    {
      v45 = CurrentPrcb->SchedulerAssist;
      if ( v45 )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v47 = v45[5] - 1;
          v45[5] = v47;
          if ( !v47 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      KxWaitForSpinLockAndAcquire(v10 + 4, v7, v14);
      goto LABEL_64;
    }
LABEL_10:
    if ( *((int *)v10 + 6) <= 1 )
    {
      _InterlockedAnd16((volatile signed __int16 *)(a1 + 2 * v7 + 11884), 0xFFEDu);
      if ( !*((_DWORD *)v10 + 6) )
        break;
    }
    v17 = *(__int64 ***)v10;
    v18 = **(__int64 ***)v10;
    *(_QWORD *)v10 = v18;
    if ( !v18 )
      *((_QWORD *)v10 + 1) = v10;
    v19 = (unsigned __int64)(v17 - 1);
    BugCheckParameter2 = (ULONG_PTR)v17[2];
    v20 = v17[6];
    v21 = v17[3];
    v22 = v17[4];
    v23 = v17[5];
    v17[6] = 0LL;
    v53 = v21;
    --*((_DWORD *)v10 + 6);
    *((_QWORD *)v10 + 4) = v17 - 1;
    v55 = v22;
    v54 = v23;
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    {
      KiReleaseSpinLockInstrumented(v10 + 4, retaddr);
      v21 = v53;
      v22 = v55;
      v23 = v54;
      v5 = a3;
    }
    else
    {
      _InterlockedAnd64((volatile signed __int64 *)v13, 0LL);
    }
    v24 = KeGetCurrentPrcb();
    v25 = (unsigned __int64)v24->SchedulerAssist;
    if ( v25 )
    {
      if ( v24->NestingLevel <= 1u )
      {
        v48 = *(_DWORD *)(v25 + 20) - 1;
        *(_DWORD *)(v25 + 20) = v48;
        if ( !v48 )
        {
          KiRemoveSystemWorkPriorityKick(v24);
          v21 = v53;
          v22 = v55;
          v23 = v54;
          v5 = a3;
        }
      }
    }
    _enable();
    if ( (DWORD1(PerfGlobalGroupMask) & 0x40000) != 0 )
    {
      v65 = BugCheckParameter2;
      v71[1] = 16LL;
      v66 = 0x7E35C6C7F3DD7277LL
          * (KiWaitNever ^ __ROR8__(BugCheckParameter2 ^ _byteswap_uint64(v19 ^ KiWaitAlways), KiWaitNever));
      v71[0] = &v65;
      EtwTraceKernelEvent((unsigned int)v71, 1, 537133056, 3941, 4196866);
      v21 = v53;
      v22 = v55;
      v23 = v54;
      v5 = a3;
    }
    if ( v12 )
    {
      v26 = qword_14055C8A0;
      v27 = 0;
      if ( qword_14055C8A0 )
      {
        v25 = *(unsigned int *)(qword_14055C8A0 + 4224);
        v28 = !_BitScanForward((unsigned int *)&v29, v25);
        v59 = v29;
        if ( !v28 )
        {
          do
          {
            v25 = ((_DWORD)v25 - 1) & (unsigned int)v25;
            v30 = 32LL * (unsigned int)v29 + qword_14055C8A0 + 4260;
            if ( v30 && (*(_DWORD *)(v30 + 4) & 0x80u) != 0 )
              v27 |= 1 << *(_BYTE *)(qword_14055C8A0 + 2 * v29 + 4209);
            v28 = !_BitScanForward((unsigned int *)&v29, v25);
          }
          while ( !v28 );
          v21 = v53;
          v23 = v54;
          v59 = v29;
        }
      }
      else
      {
        LOBYTE(v27) = 30;
      }
      if ( (v27 & 2) != 0 )
      {
        PerformanceCounter = KeQueryPerformanceCounter(0LL);
        v21 = v53;
        v23 = v54;
        v5 = a3;
        v67 = PerformanceCounter;
      }
      else
      {
        v67.QuadPart = 0LL;
      }
      if ( (v27 & 4) != 0 )
      {
        SystemTimePrecise = RtlGetSystemTimePrecise();
        v21 = v53;
        v23 = v54;
        v5 = a3;
        v68 = SystemTimePrecise;
      }
      else
      {
        v68.QuadPart = 0LL;
      }
      if ( (v27 & 8) != 0 )
      {
        v31 = __rdtsc();
        v25 = (unsigned __int64)HIDWORD(v31) << 32;
        v69 = v31;
      }
      else
      {
        v69 = 0LL;
      }
      if ( (v27 & 0x10) != 0 )
      {
        v61 = 0LL;
        ((void (__fastcall *)(__int64 *, unsigned __int64, __int64, __int64 *))off_1403FF720[0])(&v61, v25, v26, v23);
        v21 = v53;
        v5 = a3;
        v70 = v61;
      }
      else
      {
        v70 = 0LL;
      }
      v22 = v55;
    }
    v32 = ((*v5)++ & 0xF) + 1LL;
    v33 = &v5[4 * v32];
    *(_QWORD *)v33 = BugCheckParameter2;
    v33[2] = MEMORY[0xFFFFF78000000320];
    v34 = *(void **)(a1 + 25000);
    v35 = *(unsigned int *)(v62 + 484);
    *(_DWORD *)(a1 + 23452) = 0;
    if ( v34 && *(void **)(a1 + 25008) != v34 && *(_DWORD *)(a1 + 22764) < *(_DWORD *)(a1 + 22772) )
    {
      v51 = 8LL * (unsigned int)KiDpcWatchdogProfileArrayLength;
      *(_QWORD *)(a1 + 25008) = v34;
      memset(v34, 0, v51);
      v21 = v53;
      v22 = v55;
    }
    *(_QWORD *)(a1 + 11664) = v20;
    if ( v20 != (__int64 *)1 )
      v20[4] = __rdtsc();
    if ( !(_DWORD)v4 )
      *(_BYTE *)(a1 + 11882) = 1;
    ((void (__fastcall *)(unsigned __int64, __int64 *, __int64 *))BugCheckParameter2)(v19, v21, v22);
    if ( !(_DWORD)v4 )
      *(_BYTE *)(a1 + 11882) = 0;
    if ( v20 != (__int64 *)1 )
    {
      v36 = __rdtsc();
      v20[3] += (((unsigned __int64)HIDWORD(v36) << 32) | (unsigned int)v36) - v20[4];
      ++v20[5];
    }
    v33[3] = MEMORY[0xFFFFF78000000320];
    if ( (_DWORD)v35 != *(_DWORD *)(v62 + 484) )
      KeBugCheckEx(0xC7u, 4uLL, BugCheckParameter2, v35, *(unsigned int *)(v62 + 484));
    v12 = v63;
    if ( v63 )
    {
      v37 = *((_DWORD *)v63 + 1);
      v38 = *v63;
      v72[2] = &BugCheckParameter2;
      v72[3] = 8LL;
      v39 = *(_DWORD *)(EtwpHostSiloState + 4224);
      v28 = !_BitScanForward(&v40, v39);
      v60 = v40;
      if ( !v28 )
      {
        do
        {
          v39 &= v39 - 1;
          v41 = v40;
          v42 = 32LL * v40 + EtwpHostSiloState + 4260;
          if ( v42 )
          {
            if ( (*(_DWORD *)(v42 + 4) & 0x80u) != 0 )
            {
              v43 = *(unsigned __int8 *)(EtwpHostSiloState + 2 * v41 + 4209);
              v44 = *(unsigned __int8 *)(EtwpHostSiloState + 2 * v41 + 4208);
              v72[1] = 8LL;
              v72[0] = &v66 + v43;
              EtwpLogKernelEvent((unsigned int)v72, EtwpHostSiloState, v44, 2, v38, v37);
            }
          }
          v28 = !_BitScanForward(&v40, v39);
        }
        while ( !v28 );
        v60 = v40;
      }
    }
    _disable();
    if ( !*((_DWORD *)v10 + 6) )
      goto LABEL_55;
    v5 = a3;
    v7 = v4;
  }
  KxReleaseSpinLock((PKSPIN_LOCK)v10 + 2);
LABEL_55:
  result = v64;
  *(_QWORD *)(a1 + 11664) = v64;
  return result;
}
