/*
 * XREFs of NtQueryInformationThread @ 0x1405E5C60
 * Callers:
 *     <none>
 * Callees:
 *     PsGetWorkOnBehalfThread @ 0x14000D5BC (PsGetWorkOnBehalfThread.c)
 *     PsEncodeThreadWorkOnBehalfTicket @ 0x14000D668 (PsEncodeThreadWorkOnBehalfTicket.c)
 *     IoThreadToProcess @ 0x14000E470 (IoThreadToProcess.c)
 *     KeQueryTotalCycleTimeThread @ 0x140012DE0 (KeQueryTotalCycleTimeThread.c)
 *     KeQueryBasePriorityThread @ 0x140013AAC (KeQueryBasePriorityThread.c)
 *     ObfDereferenceObject @ 0x14003DFA0 (ObfDereferenceObject.c)
 *     ObfDereferenceObjectWithTag @ 0x14003F860 (ObfDereferenceObjectWithTag.c)
 *     ExReleaseRundownProtection_0 @ 0x140043C20 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x140043CA0 (ExAcquireRundownProtection_0.c)
 *     KeQueryValuesThread @ 0x1400837B0 (KeQueryValuesThread.c)
 *     PsQueryThreadStartAddress @ 0x14011CB30 (PsQueryThreadStartAddress.c)
 *     PsGetEffectiveContainerId @ 0x140122B60 (PsGetEffectiveContainerId.c)
 *     KeSetIdealProcessorThreadByNumber @ 0x140127554 (KeSetIdealProcessorThreadByNumber.c)
 *     KeQueryAffinityThread @ 0x14015C720 (KeQueryAffinityThread.c)
 *     xKdEnumerateDebuggingDevices @ 0x14019EDF0 (xKdEnumerateDebuggingDevices.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memmove @ 0x1401D7480 (memmove.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     KeQueryActualAffinityThread @ 0x1402A46C4 (KeQueryActualAffinityThread.c)
 *     KeQueryHeteroCpuPolicyThread @ 0x1402A4810 (KeQueryHeteroCpuPolicyThread.c)
 *     KeQueryCpuSetsThread @ 0x1402ACC00 (KeQueryCpuSetsThread.c)
 *     PspLockThreadSecurityShared @ 0x1403070EC (PspLockThreadSecurityShared.c)
 *     PspUnlockThreadSecurityShared @ 0x140307378 (PspUnlockThreadSecurityShared.c)
 *     ProbeForWrite @ 0x1405F10D0 (ProbeForWrite.c)
 *     ObReferenceObjectByHandleWithTag @ 0x1405F13C0 (ObReferenceObjectByHandleWithTag.c)
 *     ObReferenceObjectByHandle @ 0x1405FB4B0 (ObReferenceObjectByHandle.c)
 *     MmCopyVirtualMemory @ 0x1405FE630 (MmCopyVirtualMemory.c)
 *     PspWow64GetContextThread @ 0x1406C85B4 (PspWow64GetContextThread.c)
 *     PsGetThreadExitStatus @ 0x1406EB390 (PsGetThreadExitStatus.c)
 *     VslGetSecureTebAddress @ 0x140851CF4 (VslGetSecureTebAddress.c)
 *     PspQueryLastCallThread @ 0x1408C624C (PspQueryLastCallThread.c)
 *     ExRaiseDatatypeMisalignment @ 0x140913920 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __stdcall NtQueryInformationThread(
        HANDLE ThreadHandle,
        THREADINFOCLASS ThreadInformationClass,
        PVOID ThreadInformation,
        ULONG ThreadInformationLength,
        PULONG ReturnLength)
{
  __int64 v5; // rbx
  int v9; // r12d
  struct _KTHREAD *CurrentThread; // r13
  int v11; // eax
  __int64 v12; // rcx
  NTSTATUS result; // eax
  NTSTATUS v14; // ebx
  PVOID v15; // rcx
  int v16; // ebx
  char *v17; // rbx
  struct _KTHREAD *WorkOnBehalfThread; // rcx
  void *v19; // rcx
  BOOL v20; // ebx
  int ContextThread; // edi
  BOOL v22; // r12d
  PVOID v23; // rbx
  _KPROCESS *v24; // rsi
  unsigned __int64 v25; // rcx
  unsigned __int64 v26; // rax
  unsigned __int64 v27; // rax
  unsigned __int64 v28; // rdx
  struct _EX_RUNDOWN_REF *v29; // rdi
  int v30; // ebx
  PVOID v31; // rdi
  NTSTATUS v32; // eax
  __int64 v33; // rdi
  int v34; // ebx
  int v35; // ebx
  PVOID v36; // rcx
  int v37; // edi
  unsigned __int8 *v38; // rax
  int v39; // ecx
  PVOID v40; // r8
  unsigned int *v41; // rbx
  unsigned int v42; // r8d
  ULONG v43; // edi
  unsigned __int64 ThreadStartAddress; // rdx
  __int64 v45; // rcx
  char v46; // r13
  _QWORD *v47; // rsi
  char v48; // al
  unsigned __int16 *v49; // rcx
  const WCHAR *v50; // rdx
  ULONG v51; // r12d
  __int16 v52; // ax
  __int64 v53; // rcx
  unsigned __int8 v54; // [rsp+40h] [rbp-248h]
  PVOID Object; // [rsp+48h] [rbp-240h] BYREF
  char v56; // [rsp+50h] [rbp-238h]
  char v57; // [rsp+51h] [rbp-237h]
  NTSTATUS v58; // [rsp+54h] [rbp-234h]
  _PROCESSOR_NUMBER v59; // [rsp+5Ch] [rbp-22Ch] BYREF
  __int16 v60; // [rsp+60h] [rbp-228h]
  PVOID v61; // [rsp+68h] [rbp-220h]
  int v62; // [rsp+70h] [rbp-218h]
  __int64 v63; // [rsp+78h] [rbp-210h] BYREF
  int v64; // [rsp+80h] [rbp-208h]
  int v65; // [rsp+88h] [rbp-200h] BYREF
  __int64 v66; // [rsp+90h] [rbp-1F8h]
  __int128 v67; // [rsp+98h] [rbp-1F0h] BYREF
  __m128i v68; // [rsp+A8h] [rbp-1E0h] BYREF
  PULONG v69; // [rsp+B8h] [rbp-1D0h]
  PVOID v70[2]; // [rsp+C0h] [rbp-1C8h] BYREF
  __int128 v71; // [rsp+D0h] [rbp-1B8h] BYREF
  int v72; // [rsp+E0h] [rbp-1A8h]
  unsigned __int64 CycleTimeStamp[2]; // [rsp+F8h] [rbp-190h] BYREF
  ULONG v74; // [rsp+108h] [rbp-180h]
  ULONG v75; // [rsp+10Ch] [rbp-17Ch]
  const WCHAR *v76; // [rsp+118h] [rbp-170h]
  __int128 v77; // [rsp+120h] [rbp-168h] BYREF
  int v78; // [rsp+130h] [rbp-158h]
  _OWORD v79[5]; // [rsp+138h] [rbp-150h] BYREF
  __int64 v80; // [rsp+188h] [rbp-100h]
  __int64 v81; // [rsp+190h] [rbp-F8h] BYREF
  _QWORD Src[20]; // [rsp+1A0h] [rbp-E8h] BYREF

  v5 = ThreadInformationLength;
  CycleTimeStamp[1] = (unsigned __int64)ThreadHandle;
  v69 = ReturnLength;
  v77 = 0uLL;
  v78 = 0;
  v71 = 0uLL;
  v68 = 0uLL;
  v9 = 0;
  v66 = 0LL;
  v80 = 0LL;
  v59 = 0;
  memset(v79, 0, 0x20uLL);
  v63 = 0LL;
  v64 = 0;
  CurrentThread = KeGetCurrentThread();
  v61 = CurrentThread;
  v70[1] = CurrentThread;
  v54 = CurrentThread->$24A664F1AFBF48775CBEA2BECCC9B900::gap0[10];
  if ( v54 )
  {
    if ( ThreadInformationClass == ThreadNameInformation )
    {
      v11 = 8;
    }
    else if ( (unsigned int)v5 < 4 )
    {
      v11 = 1;
    }
    else
    {
      v11 = 4;
    }
    v62 = v11;
    if ( (_DWORD)v5 )
    {
      if ( ((v11 - 1) & (unsigned int)ThreadInformation) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( (unsigned __int64)ThreadInformation + v5 > 0x7FFFFFFF0000LL
        || (char *)ThreadInformation + v5 < ThreadInformation )
      {
        MEMORY[0x7FFFFFFF0000] = 0;
      }
    }
    if ( ReturnLength )
    {
      v12 = (__int64)ReturnLength;
      if ( (unsigned __int64)ReturnLength >= 0x7FFFFFFF0000LL )
        v12 = 0x7FFFFFFF0000LL;
      *(_DWORD *)v12 = *(_DWORD *)v12;
    }
  }
  memset(&v79[2], 0, 0x30uLL);
  if ( ThreadInformationClass != ThreadCycleTime )
  {
    if ( ThreadInformationClass == ThreadActualBasePriority )
    {
      if ( (_DWORD)v5 == 4 )
      {
        result = ObReferenceObjectByHandleWithTag(
                   ThreadHandle,
                   0x800u,
                   (POBJECT_TYPE)PsThreadType,
                   v54,
                   0x79517350u,
                   &Object,
                   0LL);
        if ( result < 0 )
          return result;
        v16 = *((char *)Object + 563);
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
        *(_DWORD *)ThreadInformation = v16;
        if ( ReturnLength )
          *ReturnLength = 4;
        return 0;
      }
    }
    else if ( ThreadInformationClass )
    {
      if ( ThreadInformationClass != ThreadTimes )
      {
        switch ( ThreadInformationClass )
        {
          case ThreadDescriptorTableEntry:
            result = ObReferenceObjectByHandleWithTag(
                       ThreadHandle,
                       0x40u,
                       (POBJECT_TYPE)PsThreadType,
                       v54,
                       0x79517350u,
                       &Object,
                       0LL);
            if ( result < 0 )
              return result;
            v32 = xKdEnumerateDebuggingDevices();
            goto LABEL_129;
          case ThreadQuerySetWin32StartAddress:
            if ( (_DWORD)v5 != 8 )
              return -1073741820;
            result = ObReferenceObjectByHandleWithTag(
                       ThreadHandle,
                       0x40u,
                       (POBJECT_TYPE)PsThreadType,
                       v54,
                       0x79517350u,
                       &Object,
                       0LL);
            v30 = result;
            if ( result < 0 )
              return result;
            v33 = *((_QWORD *)Object + 212);
            ObfDereferenceObjectWithTag(Object, 0x79517350u);
            *(_QWORD *)ThreadInformation = v33;
            if ( ReturnLength )
              *ReturnLength = 8;
            goto LABEL_118;
          case ThreadPerformanceCount:
            if ( (_DWORD)v5 != 8 )
              return -1073741820;
            result = ObReferenceObjectByHandleWithTag(
                       ThreadHandle,
                       0x40u,
                       (POBJECT_TYPE)PsThreadType,
                       v54,
                       0x79517350u,
                       &Object,
                       0LL);
            v30 = result;
            if ( result < 0 )
              return result;
            ObfDereferenceObjectWithTag(Object, 0x79517350u);
            *(_QWORD *)ThreadInformation = 0LL;
            if ( ReturnLength )
              *ReturnLength = 8;
            goto LABEL_118;
          case ThreadAmILastThread:
            if ( (_DWORD)v5 != 4 )
              return -1073741820;
            *(_DWORD *)ThreadInformation = *(_DWORD *)&CurrentThread->Process[1].0 == 1;
            if ( ReturnLength )
              *ReturnLength = 4;
            return 0;
          case ThreadPriorityBoost:
            if ( (_DWORD)v5 != 4 )
              return -1073741820;
            result = ObReferenceObjectByHandleWithTag(
                       ThreadHandle,
                       0x800u,
                       (POBJECT_TYPE)PsThreadType,
                       v54,
                       0x79517350u,
                       &Object,
                       0LL);
            ContextThread = result;
            if ( result < 0 )
              return result;
            v34 = (*((_DWORD *)Object + 30) >> 3) & 1;
            ObfDereferenceObjectWithTag(Object, 0x79517350u);
            *(_DWORD *)ThreadInformation = v34;
            if ( ReturnLength )
              *ReturnLength = 4;
            return ContextThread;
          case ThreadIsIoPending:
            if ( (_DWORD)v5 != 4 )
              return -1073741820;
            result = ObReferenceObjectByHandleWithTag(
                       ThreadHandle,
                       0x40u,
                       (POBJECT_TYPE)PsThreadType,
                       v54,
                       0x79517350u,
                       &Object,
                       0LL);
            if ( result < 0 )
              return result;
            v22 = *((_QWORD *)Object + 208) != (_QWORD)Object + 1664;
            ObfDereferenceObjectWithTag(Object, 0x79517350u);
            *(_DWORD *)ThreadInformation = v22;
            if ( ReturnLength )
              *ReturnLength = 4;
            return 0;
          case ThreadHideFromDebugger:
            if ( (_DWORD)v5 != 1 )
              return -1073741820;
            result = ObReferenceObjectByHandleWithTag(
                       ThreadHandle,
                       0x40u,
                       (POBJECT_TYPE)PsThreadType,
                       v54,
                       0x79517350u,
                       &Object,
                       0LL);
            v14 = result;
            if ( result < 0 )
              return result;
            v15 = Object;
            *(_BYTE *)ThreadInformation = (*((_DWORD *)Object + 440) & 4) != 0;
            if ( ReturnLength )
              *ReturnLength = 1;
            goto LABEL_27;
          case ThreadBreakOnTermination:
            if ( (_DWORD)v5 != 4 )
              return -1073741820;
            result = ObReferenceObjectByHandleWithTag(
                       ThreadHandle,
                       0x40u,
                       (POBJECT_TYPE)PsThreadType,
                       v54,
                       0x79517350u,
                       &Object,
                       0LL);
            if ( result < 0 )
              return result;
            v35 = (*((_DWORD *)Object + 440) >> 5) & 1;
            ObfDereferenceObjectWithTag(Object, 0x79517350u);
            *(_DWORD *)ThreadInformation = v35;
            if ( ReturnLength )
              *ReturnLength = 4;
            return 0;
          case ThreadIsTerminated:
            if ( (_DWORD)v5 != 4 )
              return -1073741820;
            result = ObReferenceObjectByHandleWithTag(
                       ThreadHandle,
                       0x800u,
                       (POBJECT_TYPE)PsThreadType,
                       v54,
                       0x79517350u,
                       &Object,
                       0LL);
            if ( result < 0 )
              return result;
            v20 = (*((_DWORD *)Object + 440) & 1) != 0;
            ObfDereferenceObjectWithTag(Object, 0x79517350u);
            *(_DWORD *)ThreadInformation = v20;
            if ( ReturnLength )
              *ReturnLength = 4;
            return 0;
          case ThreadLastSystemCall:
            result = ObReferenceObjectByHandleWithTag(
                       ThreadHandle,
                       8u,
                       (POBJECT_TYPE)PsThreadType,
                       v54,
                       0x79517350u,
                       &Object,
                       0LL);
            if ( result < 0 )
              return result;
            v32 = PspQueryLastCallThread(Object, ThreadInformation, (unsigned int)v5, ReturnLength);
LABEL_129:
            v14 = v32;
            goto LABEL_130;
          case ThreadIoPriority:
            if ( (_DWORD)v5 != 4 )
              return -1073741820;
            result = ObReferenceObjectByHandleWithTag(
                       ThreadHandle,
                       0x800u,
                       (POBJECT_TYPE)PsThreadType,
                       v54,
                       0x79517350u,
                       &Object,
                       0LL);
            v14 = result;
            v58 = result;
            if ( result < 0 )
              return result;
            v15 = Object;
            *(_DWORD *)ThreadInformation = (*((_DWORD *)Object + 440) >> 9) & 7;
            if ( ReturnLength )
              *ReturnLength = 4;
            goto LABEL_27;
          case ThreadPagePriority:
            if ( (_DWORD)v5 != 4 )
              return -1073741820;
            result = ObReferenceObjectByHandleWithTag(
                       ThreadHandle,
                       0x800u,
                       (POBJECT_TYPE)PsThreadType,
                       v54,
                       0x79517350u,
                       &Object,
                       0LL);
            v14 = result;
            if ( result < 0 )
              return result;
            v15 = Object;
            *(_DWORD *)ThreadInformation = (*((_DWORD *)Object + 440) >> 12) & 7;
            if ( ReturnLength )
              *ReturnLength = 4;
            goto LABEL_27;
          case ThreadTebInformation:
            if ( (_DWORD)v5 != 16 )
              return -1073741820;
            if ( v54 )
            {
              v68 = *(__m128i *)ThreadInformation;
              ProbeForWrite((volatile void *)v68.m128i_i64[0], HIDWORD(_mm_srli_si128(v68, 8).m128i_u64[0]), 1u);
              ThreadInformation = &v68;
            }
            v61 = ThreadInformation;
            result = ObReferenceObjectByHandleWithTag(
                       ThreadHandle,
                       0x18u,
                       (POBJECT_TYPE)PsThreadType,
                       v54,
                       0x79517350u,
                       &Object,
                       0LL);
            v58 = result;
            if ( result < 0 )
              return result;
            v23 = Object;
            if ( (*((_DWORD *)Object + 29) & 0x400) != 0 )
            {
              ObfDereferenceObjectWithTag(Object, 0x79517350u);
              result = -1073741816;
            }
            else
            {
              v24 = (_KPROCESS *)*((_QWORD *)Object + 68);
              v25 = 6200LL;
              v26 = v24[1].ActiveProcessors.Bitmap[6];
              if ( v26 )
              {
                if ( *(_WORD *)(v26 + 8) == 0x8664 )
                  v25 = 14392LL;
                else
                  v25 = 12288LL;
              }
              v27 = *((unsigned int *)ThreadInformation + 3);
              if ( (_DWORD)v27 && (v28 = *((unsigned int *)ThreadInformation + 2), v28 < v25) && v27 <= v25 - v28 )
              {
                if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)Object + 217) )
                {
                  v29 = (struct _EX_RUNDOWN_REF *)Object;
                  if ( v24 == KeGetCurrentThread()->ApcState.Process )
                  {
                    memmove(
                      *(void **)ThreadInformation,
                      (const void *)(*((_QWORD *)Object + 30) + *((unsigned int *)ThreadInformation + 2)),
                      *((unsigned int *)ThreadInformation + 3));
                    v30 = v58;
                  }
                  else
                  {
                    v30 = MmCopyVirtualMemory(
                            (ULONG_PTR)v24,
                            *((unsigned int *)ThreadInformation + 3),
                            v54,
                            (__int64)&v81);
                  }
                  ExReleaseRundownProtection_0(v29 + 217);
                  ObfDereferenceObjectWithTag(v29, 0x79517350u);
                  if ( v30 >= 0 )
                  {
                    if ( ReturnLength )
                      *ReturnLength = *((_DWORD *)ThreadInformation + 3);
                    v30 = 0;
                    v58 = 0;
                  }
LABEL_118:
                  result = v30;
                }
                else
                {
                  ObfDereferenceObjectWithTag(v23, 0x79517350u);
                  result = -1073741749;
                }
              }
              else
              {
                ObfDereferenceObjectWithTag(Object, 0x79517350u);
LABEL_161:
                result = -1073741811;
              }
            }
            break;
          case ThreadWow64Context:
            result = ObReferenceObjectByHandleWithTag(
                       ThreadHandle,
                       8u,
                       (POBJECT_TYPE)PsThreadType,
                       v54,
                       0x79517350u,
                       &Object,
                       0LL);
            if ( result < 0 )
              return result;
            ContextThread = PspWow64GetContextThread(Object, ThreadInformation, (unsigned int)v5, v54);
            ObfDereferenceObjectWithTag(Object, 0x79517350u);
            if ( ContextThread >= 0 && ReturnLength )
              *ReturnLength = 716;
            return ContextThread;
          case ThreadGroupInformation:
            if ( (_DWORD)v5 != 16 )
              return -1073741820;
            result = ObReferenceObjectByHandleWithTag(
                       ThreadHandle,
                       0x800u,
                       (POBJECT_TYPE)PsThreadType,
                       v54,
                       0x79517350u,
                       &Object,
                       0LL);
            v30 = result;
            if ( result < 0 )
              return result;
            v31 = Object;
            KeQueryAffinityThread((__int64)Object, (__int64)&v71);
            *(_OWORD *)ThreadInformation = v71;
            if ( ReturnLength )
              *ReturnLength = 16;
            goto LABEL_124;
          case ThreadUmsInformation:
            if ( (_DWORD)v5 != 24 )
              return -1073741820;
            v37 = *(_DWORD *)ThreadInformation;
            v72 = *(_DWORD *)ThreadInformation;
            result = ObReferenceObjectByHandle(ThreadHandle, 0x40u, (POBJECT_TYPE)PsThreadType, v54, v70, 0LL);
            v30 = result;
            if ( result < 0 )
              return result;
            if ( v37 == 3 )
            {
              *(_QWORD *)ThreadInformation = 0LL;
              *((_QWORD *)ThreadInformation + 1) = 0LL;
              *((_QWORD *)ThreadInformation + 2) = 0LL;
              v38 = (unsigned __int8 *)v70[0];
              v39 = *((unsigned __int8 *)v70[0] + 3) >> 7;
              *((_DWORD *)ThreadInformation + 2) = v39;
              *((_DWORD *)ThreadInformation + 2) = v39 | (v38[3] >> 5) & 2;
            }
            else
            {
              v30 = -1073741811;
            }
            ObfDereferenceObject(v70[0]);
            goto LABEL_118;
          case ThreadCounterProfiling:
            if ( (_DWORD)v5 != 1 )
              return -1073741820;
            result = ObReferenceObjectByHandleWithTag(
                       ThreadHandle,
                       0x40u,
                       (POBJECT_TYPE)PsThreadType,
                       v54,
                       0x79517350u,
                       &Object,
                       0LL);
            v30 = result;
            if ( result < 0 )
              return result;
            v36 = Object;
            *(_BYTE *)ThreadInformation = *((_QWORD *)Object + 45) != 0LL;
            ObfDereferenceObjectWithTag(v36, 0x79517350u);
            if ( ReturnLength )
              *ReturnLength = 1;
            goto LABEL_118;
          case ThreadIdealProcessorEx:
            if ( (_DWORD)v5 != 4 )
              return -1073741820;
            result = ObReferenceObjectByHandleWithTag(
                       ThreadHandle,
                       0x800u,
                       (POBJECT_TYPE)PsThreadType,
                       v54,
                       0x79517350u,
                       &Object,
                       0LL);
            if ( result < 0 )
              return result;
            *(_WORD *)&v59.Number = 64;
            KeSetIdealProcessorThreadByNumber((struct _KTHREAD *)Object, &v59, &v59);
            ObfDereferenceObjectWithTag(Object, 0x79517350u);
            *(_PROCESSOR_NUMBER *)ThreadInformation = v59;
            if ( ReturnLength )
              *ReturnLength = 4;
            return 0;
          case ThreadCpuAccountingInformation:
            if ( !(_DWORD)v5 )
              return -1073741820;
            result = ObReferenceObjectByHandleWithTag(
                       ThreadHandle,
                       0x40u,
                       (POBJECT_TYPE)PsThreadType,
                       v54,
                       0x79517350u,
                       &Object,
                       0LL);
            v58 = result;
            if ( result < 0 )
              return result;
            *(_BYTE *)ThreadInformation = *((_QWORD *)Object + 13) != 0LL;
            if ( ReturnLength )
              *ReturnLength = 1;
            v14 = v58;
            goto LABEL_130;
          case ThreadSuspendCount:
            if ( (_DWORD)v5 != 4 )
              return -1073741820;
            result = ObReferenceObjectByHandleWithTag(
                       ThreadHandle,
                       0x800u,
                       (POBJECT_TYPE)PsThreadType,
                       v54,
                       0x79517350u,
                       &Object,
                       0LL);
            v14 = result;
            if ( result < 0 )
              return result;
            v40 = Object;
            *(_DWORD *)ThreadInformation = *((char *)Object + 644) + ((*((_DWORD *)Object + 30) >> 14) & 1);
            if ( ReturnLength )
              *ReturnLength = 4;
            v15 = v40;
            goto LABEL_27;
          case ThreadHeterogeneousCpuPolicy:
            if ( (_DWORD)v5 != 4 )
              return -1073741820;
            ContextThread = ObReferenceObjectByHandleWithTag(
                              ThreadHandle,
                              0x800u,
                              (POBJECT_TYPE)PsThreadType,
                              v54,
                              0x79517350u,
                              &Object,
                              0LL);
            if ( ContextThread < 0 )
              return ContextThread;
            v41 = (unsigned int *)Object;
            *(_DWORD *)ThreadInformation = KeQueryHeteroCpuPolicyThread((__int64)Object, 1);
            if ( ReturnLength )
              *ReturnLength = 4;
            goto LABEL_192;
          case ThreadContainerId:
            if ( (_DWORD)v5 != 16 )
              return -1073741820;
            if ( ThreadHandle != (HANDLE)-2LL )
              goto LABEL_161;
            result = PsGetEffectiveContainerId(4, CurrentThread, (__int64)&v77);
            if ( result >= 0 )
            {
              *(_OWORD *)ThreadInformation = v77;
              if ( ReturnLength )
                *ReturnLength = 16;
            }
            return result;
          case ThreadNameInformation:
            v46 = 0;
            v57 = 0;
            Object = 0LL;
            v56 = 0;
            ContextThread = ObReferenceObjectByHandleWithTag(
                              ThreadHandle,
                              0x800u,
                              (POBJECT_TYPE)PsThreadType,
                              v54,
                              0x79517350u,
                              &Object,
                              0LL);
            v58 = ContextThread;
            if ( ContextThread < 0 )
            {
              v47 = Object;
              v48 = v56;
              v53 = (__int64)v61;
            }
            else
            {
              v46 = 1;
              v57 = 1;
              v47 = Object;
              PspLockThreadSecurityShared((__int64)Object, (__int64)v61);
              v48 = 1;
              v56 = 1;
              v49 = (unsigned __int16 *)v47[252];
              if ( v49 )
              {
                v50 = (const WCHAR *)*((_QWORD *)v49 + 1);
                LOWORD(v9) = *v49;
                v66 = *v49;
              }
              else
              {
                v50 = &word_14078F2B0;
              }
              v60 = v9;
              v76 = v50;
              v51 = (unsigned __int16)v9 + 16;
              v74 = v51;
              if ( v51 <= (unsigned int)v5 )
              {
                memmove((char *)ThreadInformation + 16, v50, (unsigned __int16)v66);
                v52 = v66;
                *(_WORD *)ThreadInformation = v66;
                *((_WORD *)ThreadInformation + 1) = v52;
                *((_QWORD *)ThreadInformation + 1) = (char *)ThreadInformation + 16;
                v48 = v56;
              }
              else
              {
                ContextThread = -1073741789;
                v58 = -1073741789;
              }
              if ( ReturnLength )
                *ReturnLength = v51;
              v53 = (__int64)v61;
            }
            if ( v48 )
              PspUnlockThreadSecurityShared((__int64)v47, v53);
            if ( !v46 )
              return ContextThread;
            ObfDereferenceObjectWithTag(v47, 0x79517350u);
            return ContextThread;
          case ThreadSelectedCpuSets:
            if ( (v5 & 7) != 0 || (unsigned int)v5 > 0xA0 )
              return -1073741820;
            v9 = ObReferenceObjectByHandleWithTag(
                   ThreadHandle,
                   0x800u,
                   (POBJECT_TYPE)PsThreadType,
                   v54,
                   0x79517350u,
                   &Object,
                   0LL);
            v58 = v9;
            if ( v9 >= 0 )
            {
              v43 = 8 * KeQueryCpuSetsThread((__int64)Object, Src, v42);
              ObfDereferenceObjectWithTag(Object, 0x79517350u);
              v75 = v43;
              if ( ReturnLength )
                *ReturnLength = v43;
              if ( v43 >= (unsigned int)v5 )
                v43 = v5;
              memmove(ThreadInformation, Src, v43);
            }
            return v9;
          case ThreadSystemThreadInformation:
            if ( (_DWORD)v5 != 80 )
              return -1073741820;
            result = ObReferenceObjectByHandleWithTag(
                       ThreadHandle,
                       0x800u,
                       (POBJECT_TYPE)PsThreadType,
                       v54,
                       0x79517350u,
                       &Object,
                       0LL);
            ContextThread = result;
            if ( result < 0 )
              return result;
            v41 = (unsigned int *)Object;
            KeQueryValuesThread((__int64)Object, (__int64)&v63);
            ThreadStartAddress = PsQueryThreadStartAddress((__int64)v41, 1);
            if ( ThreadStartAddress > 0x7FFFFFFEFFFFLL )
              ThreadStartAddress = 0LL;
            *((_DWORD *)ThreadInformation + 17) = (unsigned __int8)v64;
            *((_DWORD *)ThreadInformation + 18) = BYTE1(v64);
            *((_DWORD *)ThreadInformation + 15) = SHIBYTE(v64);
            *((_DWORD *)ThreadInformation + 14) = SBYTE2(v64);
            *((_DWORD *)ThreadInformation + 6) = v63;
            v45 = KeMaximumIncrement;
            *(_QWORD *)ThreadInformation = KeMaximumIncrement * (unsigned __int64)v41[163];
            *((_QWORD *)ThreadInformation + 1) = v45 * v41[183];
            *((_QWORD *)ThreadInformation + 2) = *((_QWORD *)v41 + 192);
            *((_DWORD *)ThreadInformation + 16) = v41[85];
            *(_OWORD *)((char *)ThreadInformation + 40) = *(_OWORD *)(v41 + 402);
            *((_QWORD *)ThreadInformation + 4) = ThreadStartAddress;
            if ( ReturnLength )
              *ReturnLength = 80;
LABEL_192:
            ObfDereferenceObjectWithTag(v41, 0x79517350u);
            return ContextThread;
          case ThreadActualGroupAffinity:
            if ( (_DWORD)v5 != 16 )
              return -1073741820;
            result = ObReferenceObjectByHandleWithTag(
                       ThreadHandle,
                       0x800u,
                       (POBJECT_TYPE)PsThreadType,
                       v54,
                       0x79517350u,
                       &Object,
                       0LL);
            v30 = result;
            if ( result < 0 )
              return result;
            v31 = Object;
            KeQueryActualAffinityThread((__int64)Object, (__int64)&v71);
            *(_OWORD *)ThreadInformation = v71;
            if ( ReturnLength )
              *ReturnLength = 16;
LABEL_124:
            ObfDereferenceObjectWithTag(v31, 0x79517350u);
            goto LABEL_118;
          case ThreadDynamicCodePolicyInfo:
            if ( (_DWORD)v5 != 4 )
              return -1073741820;
            result = ObReferenceObjectByHandleWithTag(
                       ThreadHandle,
                       0x800u,
                       (POBJECT_TYPE)PsThreadType,
                       v54,
                       0x79517350u,
                       &Object,
                       0LL);
            v14 = result;
            if ( result < 0 )
              return result;
            v15 = Object;
            *(_DWORD *)ThreadInformation = (*((_DWORD *)Object + 440) & 0x40000) != 0;
            if ( ReturnLength )
              *ReturnLength = 4;
            goto LABEL_27;
          case ThreadExplicitCaseSensitivity:
            if ( (_DWORD)v5 != 4 )
              return -1073741820;
            result = ObReferenceObjectByHandleWithTag(
                       ThreadHandle,
                       0x800u,
                       (POBJECT_TYPE)PsThreadType,
                       v54,
                       0x79517350u,
                       &Object,
                       0LL);
            v58 = result;
            if ( result < 0 )
              return result;
            *(_DWORD *)ThreadInformation = (*((_DWORD *)Object + 440) >> 19) & 1;
            if ( ReturnLength )
              *ReturnLength = 4;
            v14 = v58;
LABEL_130:
            v15 = Object;
            goto LABEL_27;
          case ThreadWorkOnBehalfTicket:
            if ( (_DWORD)v5 != 16 )
              return -1073741820;
            if ( ThreadHandle != (HANDLE)-2LL )
              goto LABEL_161;
            v67 = 0uLL;
            WorkOnBehalfThread = PsGetWorkOnBehalfThread(CurrentThread, &v65);
            if ( WorkOnBehalfThread )
            {
              PsEncodeThreadWorkOnBehalfTicket((__int64)WorkOnBehalfThread, &v67);
              if ( v65 )
                ObfDereferenceObject(v19);
            }
            else
            {
              PsEncodeThreadWorkOnBehalfTicket((__int64)CurrentThread, &v67);
              DWORD2(v67) |= 1u;
            }
            *(_OWORD *)ThreadInformation = v67;
            if ( ReturnLength )
              *ReturnLength = 16;
            return 0;
          case ThreadSubsystemInformation:
            if ( (_DWORD)v5 != 4 )
              return -1073741820;
            result = ObReferenceObjectByHandleWithTag(
                       ThreadHandle,
                       0x800u,
                       (POBJECT_TYPE)PsThreadType,
                       v54,
                       0x79517350u,
                       &Object,
                       0LL);
            v14 = result;
            if ( result < 0 )
              return result;
            v15 = Object;
            if ( *((_QWORD *)Object + 245) )
              v9 = qword_1404369D0;
            *(_DWORD *)ThreadInformation = v9;
            if ( ReturnLength )
              *ReturnLength = 4;
LABEL_27:
            ObfDereferenceObjectWithTag(v15, 0x79517350u);
            result = v14;
            break;
          default:
            return -1073741821;
        }
        return result;
      }
      if ( (_DWORD)v5 == 32 )
      {
        result = ObReferenceObjectByHandleWithTag(
                   ThreadHandle,
                   0x800u,
                   (POBJECT_TYPE)PsThreadType,
                   v54,
                   0x79517350u,
                   &Object,
                   0LL);
        if ( result < 0 )
          return result;
        *(_QWORD *)&v79[1] = KeMaximumIncrement * (unsigned __int64)*((unsigned int *)Object + 163);
        *((_QWORD *)&v79[1] + 1) = KeMaximumIncrement * (unsigned __int64)*((unsigned int *)Object + 183);
        *(_QWORD *)&v79[0] = *((_QWORD *)Object + 192);
        if ( *((_BYTE *)Object + 4) )
          *((_QWORD *)&v79[0] + 1) = *((_QWORD *)Object + 193);
        else
          *((_QWORD *)&v79[0] + 1) = 0LL;
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
        *(_OWORD *)ThreadInformation = v79[0];
        *((_OWORD *)ThreadInformation + 1) = v79[1];
        if ( ReturnLength )
          *ReturnLength = 32;
        return 0;
      }
    }
    else if ( (_DWORD)v5 == 48 )
    {
      result = ObReferenceObjectByHandleWithTag(
                 ThreadHandle,
                 0x800u,
                 (POBJECT_TYPE)PsThreadType,
                 v54,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result < 0 )
        return result;
      v17 = (char *)Object;
      if ( *((_BYTE *)Object + 4) )
        LODWORD(v79[2]) = PsGetThreadExitStatus((PETHREAD)Object);
      else
        LODWORD(v79[2]) = 259;
      *((_QWORD *)&v79[2] + 1) = *((_QWORD *)v17 + 30);
      if ( (IoThreadToProcess((PETHREAD)v17)->SecureState.SecureHandle & 1) != 0 )
        VslGetSecureTebAddress(v17, (char *)&v79[2] + 8);
      v68 = *(__m128i *)(v17 + 1608);
      *(_QWORD *)&v79[4] = *((_QWORD *)v17 + 69);
      DWORD2(v79[4]) = v17[195];
      HIDWORD(v79[4]) = KeQueryBasePriorityThread((__int64)v17);
      ObfDereferenceObjectWithTag(v17, 0x79517350u);
      *(_OWORD *)ThreadInformation = v79[2];
      *((__m128i *)ThreadInformation + 1) = v68;
      *((_OWORD *)ThreadInformation + 2) = v79[4];
      if ( ReturnLength )
        *ReturnLength = 48;
      return 0;
    }
    return -1073741820;
  }
  if ( (_DWORD)v5 != 16 )
    return -1073741820;
  if ( ThreadHandle == (HANDLE)-2LL )
  {
    Object = CurrentThread;
  }
  else
  {
    result = ObReferenceObjectByHandleWithTag(
               ThreadHandle,
               0x800u,
               (POBJECT_TYPE)PsThreadType,
               v54,
               0x79517350u,
               &Object,
               0LL);
    v9 = result;
    if ( result < 0 )
      return result;
    CurrentThread = (struct _KTHREAD *)Object;
  }
  *(_QWORD *)ThreadInformation = KeQueryTotalCycleTimeThread(CurrentThread, CycleTimeStamp);
  *((_QWORD *)ThreadInformation + 1) = CycleTimeStamp[0];
  if ( ReturnLength )
    *ReturnLength = 16;
  if ( ThreadHandle != (HANDLE)-2LL )
    ObfDereferenceObjectWithTag(CurrentThread, 0x79517350u);
  return v9;
}
