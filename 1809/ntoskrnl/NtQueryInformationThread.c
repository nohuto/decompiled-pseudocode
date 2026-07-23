/*
 * XREFs of NtQueryInformationThread @ 0x14064B720
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14004D2F0 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x14004D320 (ExAcquireRundownProtection_0.c)
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     ExAcquirePushLockSharedEx @ 0x14004EE20 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ObfDereferenceObjectWithTag @ 0x140051510 (ObfDereferenceObjectWithTag.c)
 *     KeLeaveCriticalRegionThread @ 0x140051600 (KeLeaveCriticalRegionThread.c)
 *     KeQueryValuesThread @ 0x14008EE70 (KeQueryValuesThread.c)
 *     ExfReleasePushLockShared @ 0x1400913F0 (ExfReleasePushLockShared.c)
 *     PsQueryThreadStartAddress @ 0x1400A38B0 (PsQueryThreadStartAddress.c)
 *     PsGetWorkOnBehalfThread @ 0x1400ACC54 (PsGetWorkOnBehalfThread.c)
 *     PsEncodeThreadWorkOnBehalfTicket @ 0x1400ACD00 (PsEncodeThreadWorkOnBehalfTicket.c)
 *     IoThreadToProcess @ 0x1400ACE60 (IoThreadToProcess.c)
 *     KeQueryTotalCycleTimeThread @ 0x1400D1E00 (KeQueryTotalCycleTimeThread.c)
 *     KeQueryBasePriorityThread @ 0x1400D22F0 (KeQueryBasePriorityThread.c)
 *     PsGetEffectiveContainerId @ 0x140125570 (PsGetEffectiveContainerId.c)
 *     KeQueryAffinityThread @ 0x14013B1E0 (KeQueryAffinityThread.c)
 *     KeSetIdealProcessorThreadByNumber @ 0x14015CED0 (KeSetIdealProcessorThreadByNumber.c)
 *     xKdEnumerateDebuggingDevices @ 0x140194120 (xKdEnumerateDebuggingDevices.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     KeQueryActualAffinityThread @ 0x14028DFC0 (KeQueryActualAffinityThread.c)
 *     KeQueryHeteroCpuPolicyThread @ 0x14028E110 (KeQueryHeteroCpuPolicyThread.c)
 *     KeQueryCpuSetsThread @ 0x1402968B8 (KeQueryCpuSetsThread.c)
 *     ObReferenceObjectByHandle @ 0x1405E9350 (ObReferenceObjectByHandle.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1405E9390 (ObpReferenceObjectByHandleWithTag.c)
 *     ProbeForWrite @ 0x14062AA80 (ProbeForWrite.c)
 *     MmCopyVirtualMemory @ 0x1406457B0 (MmCopyVirtualMemory.c)
 *     PspWow64GetContextThread @ 0x1406A9558 (PspWow64GetContextThread.c)
 *     PsGetThreadExitStatus @ 0x1406CC280 (PsGetThreadExitStatus.c)
 *     VslGetSecureTebAddress @ 0x140819A5C (VslGetSecureTebAddress.c)
 *     PspQueryLastCallThread @ 0x140889CC4 (PspQueryLastCallThread.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408D7880 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __stdcall NtQueryInformationThread(
        HANDLE ThreadHandle,
        THREADINFOCLASS ThreadInformationClass,
        PVOID ThreadInformation,
        ULONG ThreadInformationLength,
        PULONG ReturnLength)
{
  __m128i *v6; // r14
  struct _KTHREAD *CurrentThread; // r12
  int v10; // esi
  int v11; // eax
  __int64 v12; // rcx
  NTSTATUS result; // eax
  NTSTATUS v14; // ebx
  PVOID v15; // rcx
  NTSTATUS ContextThread; // edi
  __int32 v17; // ebx
  char *v18; // rbx
  struct _KTHREAD *WorkOnBehalfThread; // rcx
  void *v20; // rcx
  __int64 v21; // r8
  NTSTATUS v22; // ebx
  PVOID v23; // rdi
  NTSTATUS v24; // eax
  __int64 v25; // rdi
  int v26; // ebx
  int v27; // ebx
  PVOID v28; // rbx
  _KPROCESS *v29; // r13
  unsigned __int64 v30; // rcx
  unsigned __int64 v31; // rax
  unsigned __int64 v32; // rax
  unsigned __int64 v33; // rdx
  _KPROCESS *Process; // r8
  struct _EX_RUNDOWN_REF *v35; // rsi
  PVOID v36; // rcx
  __int32 v37; // esi
  unsigned __int8 *v38; // rax
  int v39; // ecx
  PVOID v40; // r8
  struct _KTHREAD *v41; // rbx
  struct _KTHREAD *v42; // rcx
  unsigned int v43; // r8d
  NTSTATUS v44; // r12d
  ULONG v45; // edi
  __int64 v46; // r8
  NTSTATUS v47; // esi
  unsigned int *v48; // rbx
  unsigned __int64 ThreadStartAddress; // rdx
  __int64 v50; // rcx
  __int64 v51; // r8
  NTSTATUS v52; // esi
  signed __int64 *v53; // r13
  char v54; // cl
  signed __int64 v55; // rax
  const WCHAR *v56; // rdx
  unsigned __int16 v57; // r12
  unsigned int v58; // eax
  __int32 v59; // edi
  unsigned __int8 v60; // [rsp+40h] [rbp-218h]
  PVOID Object; // [rsp+48h] [rbp-210h] BYREF
  char v62; // [rsp+50h] [rbp-208h]
  char v63; // [rsp+51h] [rbp-207h]
  NTSTATUS v64; // [rsp+54h] [rbp-204h]
  _PROCESSOR_NUMBER v65; // [rsp+5Ch] [rbp-1FCh] BYREF
  unsigned __int16 v66; // [rsp+60h] [rbp-1F8h]
  HANDLE v67; // [rsp+68h] [rbp-1F0h]
  int v68; // [rsp+70h] [rbp-1E8h]
  int v69; // [rsp+74h] [rbp-1E4h] BYREF
  __int32 v70; // [rsp+78h] [rbp-1E0h] BYREF
  unsigned __int8 v71; // [rsp+80h] [rbp-1D8h]
  unsigned __int8 v72; // [rsp+81h] [rbp-1D7h]
  char v73; // [rsp+82h] [rbp-1D6h]
  char v74; // [rsp+83h] [rbp-1D5h]
  __m128i v75; // [rsp+88h] [rbp-1D0h] BYREF
  struct _KTHREAD *v76; // [rsp+98h] [rbp-1C0h]
  __int64 v77[2]; // [rsp+A0h] [rbp-1B8h] BYREF
  PVOID v78; // [rsp+B0h] [rbp-1A8h] BYREF
  __m128i v79; // [rsp+B8h] [rbp-1A0h] BYREF
  __m128i v80; // [rsp+C8h] [rbp-190h]
  __int32 v81; // [rsp+D8h] [rbp-180h]
  ULONG v82; // [rsp+DCh] [rbp-17Ch]
  const WCHAR *v83; // [rsp+E0h] [rbp-178h]
  struct _KTHREAD *v84; // [rsp+E8h] [rbp-170h]
  unsigned __int64 CycleTimeStamp; // [rsp+100h] [rbp-158h] BYREF
  unsigned int v86; // [rsp+114h] [rbp-144h]
  __m128i v87; // [rsp+118h] [rbp-140h] BYREF
  __m128i v88[4]; // [rsp+128h] [rbp-130h] BYREF
  _QWORD Src[20]; // [rsp+170h] [rbp-E8h] BYREF

  v6 = (__m128i *)ThreadInformation;
  v67 = ThreadHandle;
  v77[1] = (__int64)ReturnLength;
  CurrentThread = KeGetCurrentThread();
  v84 = CurrentThread;
  v76 = CurrentThread;
  v60 = CurrentThread->$86A1A36C0FEBA810544B2F2B35F40C82::gap0[10];
  if ( v60 )
  {
    v10 = 1;
    if ( ThreadInformationClass == ThreadNameInformation )
    {
      v11 = 8;
    }
    else if ( ThreadInformationLength < 4 )
    {
      v11 = 1;
    }
    else
    {
      v11 = 4;
    }
    v68 = v11;
    if ( ThreadInformationLength )
    {
      if ( ((v11 - 1) & (unsigned int)ThreadInformation) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( (unsigned __int64)ThreadInformation + ThreadInformationLength > 0x7FFFFFFF0000LL
        || (char *)ThreadInformation + ThreadInformationLength < ThreadInformation )
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
  else
  {
    v10 = 1;
  }
  memset(&v88[1], 0, 0x30uLL);
  if ( ThreadInformationClass != ThreadCycleTime )
  {
    if ( ThreadInformationClass == ThreadActualBasePriority )
    {
      if ( ThreadInformationLength == 4 )
      {
        result = ObpReferenceObjectByHandleWithTag(
                   (ULONG_PTR)ThreadHandle,
                   2048,
                   (__int64)PsThreadType,
                   v60,
                   0x79517350u,
                   &Object,
                   0LL,
                   0LL);
        if ( result < 0 )
          return result;
        v17 = *((char *)Object + 563);
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
        v6->m128i_i32[0] = v17;
        if ( ReturnLength )
          *ReturnLength = 4;
        return 0;
      }
    }
    else if ( ThreadInformationClass == ThreadTimes )
    {
      if ( ThreadInformationLength == 32 )
      {
        result = ObpReferenceObjectByHandleWithTag(
                   (ULONG_PTR)ThreadHandle,
                   2048,
                   (__int64)PsThreadType,
                   v60,
                   0x79517350u,
                   &Object,
                   0LL,
                   0LL);
        if ( result < 0 )
          return result;
        v80.m128i_i64[0] = KeMaximumIncrement * (unsigned __int64)*((unsigned int *)Object + 163);
        v80.m128i_i64[1] = KeMaximumIncrement * (unsigned __int64)*((unsigned int *)Object + 183);
        v79.m128i_i64[0] = *((_QWORD *)Object + 190);
        if ( *((_BYTE *)Object + 4) )
          v79.m128i_i64[1] = *((_QWORD *)Object + 191);
        else
          v79.m128i_i64[1] = 0LL;
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
        *v6 = v79;
        v6[1] = v80;
        if ( ReturnLength )
          *ReturnLength = 32;
        return 0;
      }
    }
    else
    {
      if ( ThreadInformationClass )
      {
        switch ( ThreadInformationClass )
        {
          case ThreadDescriptorTableEntry:
            result = ObpReferenceObjectByHandleWithTag(
                       (ULONG_PTR)ThreadHandle,
                       64,
                       (__int64)PsThreadType,
                       v60,
                       0x79517350u,
                       &Object,
                       0LL,
                       0LL);
            if ( result < 0 )
              return result;
            v24 = xKdEnumerateDebuggingDevices();
            goto LABEL_115;
          case ThreadQuerySetWin32StartAddress:
            if ( ThreadInformationLength != 8 )
              return -1073741820;
            v22 = ObpReferenceObjectByHandleWithTag(
                    (ULONG_PTR)ThreadHandle,
                    64,
                    (__int64)PsThreadType,
                    v60,
                    0x79517350u,
                    &Object,
                    0LL,
                    0LL);
            if ( v22 >= 0 )
            {
              v25 = *((_QWORD *)Object + 210);
              ObfDereferenceObjectWithTag(Object, 0x79517350u);
              v6->m128i_i64[0] = v25;
              if ( ReturnLength )
                *ReturnLength = 8;
            }
            goto LABEL_112;
          case ThreadPerformanceCount:
            if ( ThreadInformationLength != 8 )
              return -1073741820;
            v22 = ObpReferenceObjectByHandleWithTag(
                    (ULONG_PTR)ThreadHandle,
                    64,
                    (__int64)PsThreadType,
                    v60,
                    0x79517350u,
                    &Object,
                    0LL,
                    0LL);
            if ( v22 >= 0 )
            {
              ObfDereferenceObjectWithTag(Object, 0x79517350u);
              v6->m128i_i64[0] = 0LL;
              if ( ReturnLength )
                *ReturnLength = 8;
            }
            goto LABEL_112;
          case ThreadAmILastThread:
            if ( ThreadInformationLength != 4 )
              return -1073741820;
            if ( CurrentThread->Process[1].ThreadSeed[0] != 1 )
              v10 = 0;
            v6->m128i_i32[0] = v10;
            if ( ReturnLength )
              *ReturnLength = 4;
            return 0;
          case ThreadPriorityBoost:
            if ( ThreadInformationLength != 4 )
              return -1073741820;
            ContextThread = ObpReferenceObjectByHandleWithTag(
                              (ULONG_PTR)ThreadHandle,
                              2048,
                              (__int64)PsThreadType,
                              v60,
                              0x79517350u,
                              &Object,
                              0LL,
                              0LL);
            if ( ContextThread >= 0 )
            {
              v26 = (*((_DWORD *)Object + 30) >> 3) & 1;
              ObfDereferenceObjectWithTag(Object, 0x79517350u);
              v6->m128i_i32[0] = v26;
              if ( ReturnLength )
                *ReturnLength = 4;
            }
            return ContextThread;
          case ThreadIsIoPending:
            if ( ThreadInformationLength != 4 )
              return -1073741820;
            result = ObpReferenceObjectByHandleWithTag(
                       (ULONG_PTR)ThreadHandle,
                       64,
                       (__int64)PsThreadType,
                       v60,
                       0x79517350u,
                       &Object,
                       0LL,
                       0LL);
            if ( result < 0 )
              return result;
            if ( *((PVOID *)Object + 206) == (char *)Object + 1648 )
              v10 = 0;
            ObfDereferenceObjectWithTag(Object, 0x79517350u);
            v6->m128i_i32[0] = v10;
            if ( ReturnLength )
              *ReturnLength = 4;
            return 0;
          case ThreadHideFromDebugger:
            if ( ThreadInformationLength != 1 )
              return -1073741820;
            result = ObpReferenceObjectByHandleWithTag(
                       (ULONG_PTR)ThreadHandle,
                       64,
                       (__int64)PsThreadType,
                       v60,
                       0x79517350u,
                       &Object,
                       0LL,
                       0LL);
            v14 = result;
            if ( result < 0 )
              return result;
            v15 = Object;
            v6->m128i_i8[0] = (*((_DWORD *)Object + 436) & 4) != 0;
            if ( ReturnLength )
              *ReturnLength = 1;
            goto LABEL_27;
          case ThreadBreakOnTermination:
            if ( ThreadInformationLength != 4 )
              return -1073741820;
            result = ObpReferenceObjectByHandleWithTag(
                       (ULONG_PTR)ThreadHandle,
                       64,
                       (__int64)PsThreadType,
                       v60,
                       0x79517350u,
                       &Object,
                       0LL,
                       0LL);
            if ( result < 0 )
              return result;
            v27 = (*((_DWORD *)Object + 436) >> 5) & 1;
            ObfDereferenceObjectWithTag(Object, 0x79517350u);
            v6->m128i_i32[0] = v27;
            if ( ReturnLength )
              *ReturnLength = 4;
            return 0;
          case ThreadIsTerminated:
            if ( ThreadInformationLength != 4 )
              return -1073741820;
            result = ObpReferenceObjectByHandleWithTag(
                       (ULONG_PTR)ThreadHandle,
                       2048,
                       (__int64)PsThreadType,
                       v60,
                       0x79517350u,
                       &Object,
                       0LL,
                       0LL);
            if ( result < 0 )
              return result;
            if ( (*((_DWORD *)Object + 436) & 1) == 0 )
              v10 = 0;
            ObfDereferenceObjectWithTag(Object, 0x79517350u);
            v6->m128i_i32[0] = v10;
            if ( ReturnLength )
              *ReturnLength = 4;
            return 0;
          case ThreadLastSystemCall:
            result = ObpReferenceObjectByHandleWithTag(
                       (ULONG_PTR)ThreadHandle,
                       8,
                       (__int64)PsThreadType,
                       v60,
                       0x79517350u,
                       &Object,
                       0LL,
                       0LL);
            if ( result < 0 )
              return result;
            v24 = PspQueryLastCallThread(Object, v6, ThreadInformationLength, ReturnLength);
LABEL_115:
            v14 = v24;
            goto LABEL_116;
          case ThreadIoPriority:
            if ( ThreadInformationLength != 4 )
              return -1073741820;
            result = ObpReferenceObjectByHandleWithTag(
                       (ULONG_PTR)ThreadHandle,
                       2048,
                       (__int64)PsThreadType,
                       v60,
                       0x79517350u,
                       &Object,
                       0LL,
                       0LL);
            v14 = result;
            v64 = result;
            if ( result < 0 )
              return result;
            v15 = Object;
            v6->m128i_i32[0] = (*((_DWORD *)Object + 436) >> 9) & 7;
            if ( ReturnLength )
              *ReturnLength = 4;
            goto LABEL_27;
          case ThreadPagePriority:
            if ( ThreadInformationLength != 4 )
              return -1073741820;
            result = ObpReferenceObjectByHandleWithTag(
                       (ULONG_PTR)ThreadHandle,
                       2048,
                       (__int64)PsThreadType,
                       v60,
                       0x79517350u,
                       &Object,
                       0LL,
                       0LL);
            v14 = result;
            if ( result < 0 )
              return result;
            v15 = Object;
            v6->m128i_i32[0] = (*((_DWORD *)Object + 436) >> 12) & 7;
            if ( ReturnLength )
              *ReturnLength = 4;
            goto LABEL_27;
          case ThreadTebInformation:
            if ( ThreadInformationLength != 16 )
              return -1073741820;
            if ( v60 )
            {
              v88[0] = *v6;
              ProbeForWrite((volatile void *)v88[0].m128i_i64[0], HIDWORD(_mm_srli_si128(v88[0], 8).m128i_u64[0]), 1u);
              v6 = v88;
            }
            v67 = v6;
            result = ObpReferenceObjectByHandleWithTag(
                       (ULONG_PTR)ThreadHandle,
                       24,
                       (__int64)PsThreadType,
                       v60,
                       0x79517350u,
                       &Object,
                       0LL,
                       0LL);
            v64 = result;
            if ( result < 0 )
              return result;
            v28 = Object;
            if ( (*((_DWORD *)Object + 29) & 0x400) != 0 )
            {
              ObfDereferenceObjectWithTag(Object, 0x79517350u);
              result = -1073741816;
            }
            else
            {
              v29 = (_KPROCESS *)*((_QWORD *)Object + 68);
              v30 = 6200LL;
              v31 = v29[1].ActiveProcessors.Bitmap[7];
              if ( v31 )
              {
                v30 = 12288LL;
                if ( *(_WORD *)(v31 + 8) == 0x8664 )
                  v30 = 14392LL;
              }
              v32 = v6->m128i_u32[3];
              if ( (_DWORD)v32 && (v33 = v6->m128i_u32[2], v33 < v30) && v32 <= v30 - v33 )
              {
                if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)Object + 215) )
                {
                  Process = KeGetCurrentThread()->ApcState.Process;
                  v35 = (struct _EX_RUNDOWN_REF *)Object;
                  if ( v29 == Process )
                  {
                    memmove(
                      (void *)v6->m128i_i64[0],
                      (const void *)(*((_QWORD *)Object + 30) + v6->m128i_u32[2]),
                      v6->m128i_u32[3]);
                    v22 = v64;
                  }
                  else
                  {
                    v22 = MmCopyVirtualMemory(
                            v29,
                            (char *)(*((_QWORD *)Object + 30) + v6->m128i_u32[2]),
                            Process,
                            v6->m128i_i64[0],
                            v6->m128i_u32[3],
                            v60,
                            (unsigned __int64 *)v77);
                  }
                  ExReleaseRundownProtection_0(v35 + 215);
                  ObfDereferenceObjectWithTag(v35, 0x79517350u);
                  if ( v22 >= 0 )
                  {
                    if ( ReturnLength )
                      *ReturnLength = v6->m128i_u32[3];
                    v22 = 0;
                    v64 = 0;
                  }
LABEL_112:
                  result = v22;
                }
                else
                {
                  ObfDereferenceObjectWithTag(v28, 0x79517350u);
                  result = -1073741749;
                }
              }
              else
              {
                ObfDereferenceObjectWithTag(Object, 0x79517350u);
LABEL_166:
                result = -1073741811;
              }
            }
            break;
          case ThreadWow64Context:
            result = ObpReferenceObjectByHandleWithTag(
                       (ULONG_PTR)ThreadHandle,
                       8,
                       (__int64)PsThreadType,
                       v60,
                       0x79517350u,
                       &Object,
                       0LL,
                       0LL);
            if ( result < 0 )
              return result;
            ContextThread = PspWow64GetContextThread(Object, v6, ThreadInformationLength, v60);
            ObfDereferenceObjectWithTag(Object, 0x79517350u);
            if ( ContextThread >= 0 && ReturnLength )
              *ReturnLength = 716;
            return ContextThread;
          case ThreadGroupInformation:
            if ( ThreadInformationLength != 16 )
              return -1073741820;
            result = ObpReferenceObjectByHandleWithTag(
                       (ULONG_PTR)ThreadHandle,
                       2048,
                       (__int64)PsThreadType,
                       v60,
                       0x79517350u,
                       &Object,
                       0LL,
                       0LL);
            v22 = result;
            if ( result < 0 )
              return result;
            v23 = Object;
            KeQueryAffinityThread((__int64)Object, (__int64)&v87, v21);
            *v6 = v87;
            if ( ReturnLength )
              *ReturnLength = 16;
            goto LABEL_111;
          case ThreadUmsInformation:
            if ( ThreadInformationLength != 24 )
              return -1073741820;
            v37 = v6->m128i_i32[0];
            v81 = v6->m128i_i32[0];
            result = ObReferenceObjectByHandle(ThreadHandle, 0x40u, (POBJECT_TYPE)PsThreadType, v60, &v78, 0LL);
            v22 = result;
            if ( result < 0 )
              return result;
            if ( v37 == 3 )
            {
              v6->m128i_i64[0] = 0LL;
              v6->m128i_i64[1] = 0LL;
              v6[1].m128i_i64[0] = 0LL;
              v38 = (unsigned __int8 *)v78;
              v39 = *((unsigned __int8 *)v78 + 3) >> 7;
              v6->m128i_i32[2] = v39;
              v6->m128i_i32[2] = v39 | (v38[3] >> 5) & 2;
            }
            else
            {
              v22 = -1073741811;
            }
            ObfDereferenceObject(v78);
            goto LABEL_112;
          case ThreadCounterProfiling:
            if ( ThreadInformationLength != 1 )
              return -1073741820;
            result = ObpReferenceObjectByHandleWithTag(
                       (ULONG_PTR)ThreadHandle,
                       64,
                       (__int64)PsThreadType,
                       v60,
                       0x79517350u,
                       &Object,
                       0LL,
                       0LL);
            v22 = result;
            if ( result < 0 )
              return result;
            v36 = Object;
            v6->m128i_i8[0] = *((_QWORD *)Object + 45) != 0LL;
            ObfDereferenceObjectWithTag(v36, 0x79517350u);
            if ( ReturnLength )
              *ReturnLength = 1;
            goto LABEL_112;
          case ThreadIdealProcessorEx:
            if ( ThreadInformationLength != 4 )
              return -1073741820;
            result = ObpReferenceObjectByHandleWithTag(
                       (ULONG_PTR)ThreadHandle,
                       2048,
                       (__int64)PsThreadType,
                       v60,
                       0x79517350u,
                       &Object,
                       0LL,
                       0LL);
            if ( result < 0 )
              return result;
            v65 = (_PROCESSOR_NUMBER)0x400000;
            KeSetIdealProcessorThreadByNumber((struct _KTHREAD *)Object, &v65, &v65);
            ObfDereferenceObjectWithTag(Object, 0x79517350u);
            *(_PROCESSOR_NUMBER *)v6->m128i_i8 = v65;
            if ( ReturnLength )
              *ReturnLength = 4;
            return 0;
          case ThreadCpuAccountingInformation:
            if ( !ThreadInformationLength )
              return -1073741820;
            result = ObpReferenceObjectByHandleWithTag(
                       (ULONG_PTR)ThreadHandle,
                       64,
                       (__int64)PsThreadType,
                       v60,
                       0x79517350u,
                       &Object,
                       0LL,
                       0LL);
            v64 = result;
            if ( result < 0 )
              return result;
            v6->m128i_i8[0] = *((_QWORD *)Object + 13) != 0LL;
            if ( ReturnLength )
              *ReturnLength = 1;
            v14 = v64;
            goto LABEL_116;
          case ThreadSuspendCount:
            if ( ThreadInformationLength != 4 )
              return -1073741820;
            result = ObpReferenceObjectByHandleWithTag(
                       (ULONG_PTR)ThreadHandle,
                       2048,
                       (__int64)PsThreadType,
                       v60,
                       0x79517350u,
                       &Object,
                       0LL,
                       0LL);
            v14 = result;
            if ( result < 0 )
              return result;
            v40 = Object;
            v6->m128i_i32[0] = *((char *)Object + 644) + ((*((_DWORD *)Object + 30) >> 14) & 1);
            if ( ReturnLength )
              *ReturnLength = 4;
            v15 = v40;
            goto LABEL_27;
          case ThreadHeterogeneousCpuPolicy:
            if ( ThreadInformationLength != 4 )
              return -1073741820;
            ContextThread = ObpReferenceObjectByHandleWithTag(
                              (ULONG_PTR)ThreadHandle,
                              2048,
                              (__int64)PsThreadType,
                              v60,
                              0x79517350u,
                              &Object,
                              0LL,
                              0LL);
            if ( ContextThread < 0 )
              return ContextThread;
            v41 = (struct _KTHREAD *)Object;
            v6->m128i_i32[0] = KeQueryHeteroCpuPolicyThread((__int64)Object, 1);
            if ( ReturnLength )
              *ReturnLength = 4;
            v42 = v41;
            goto LABEL_260;
          case ThreadContainerId:
            if ( ThreadInformationLength != 16 )
              return -1073741820;
            if ( ThreadHandle != (HANDLE)-2LL )
              goto LABEL_166;
            result = PsGetEffectiveContainerId(4, CurrentThread, (__int64)&v79);
            if ( result >= 0 )
            {
              *v6 = v79;
              if ( ReturnLength )
                *ReturnLength = 16;
            }
            return result;
          case ThreadNameInformation:
            v63 = 0;
            Object = 0LL;
            v62 = 0;
            v52 = ObpReferenceObjectByHandleWithTag(
                    (ULONG_PTR)ThreadHandle,
                    2048,
                    (__int64)PsThreadType,
                    v60,
                    0x79517350u,
                    &Object,
                    0LL,
                    0LL);
            v64 = v52;
            if ( v52 < 0 )
            {
              v53 = (signed __int64 *)Object;
              v54 = v62;
            }
            else
            {
              v63 = 1;
              --CurrentThread->KernelApcDisable;
              v53 = (signed __int64 *)Object;
              ExAcquirePushLockSharedEx((ULONG_PTR)Object + 1728, 0LL);
              v54 = 1;
              v62 = 1;
              v55 = v53[250];
              if ( v55 )
              {
                v56 = *(const WCHAR **)(v55 + 8);
                v57 = *(_WORD *)v55;
                v66 = *(_WORD *)v55;
              }
              else
              {
                v56 = &word_140767740;
                v57 = 0;
                v66 = 0;
              }
              v83 = v56;
              v58 = v57 + 16;
              LODWORD(v67) = v58;
              v86 = v58;
              if ( v58 <= ThreadInformationLength )
              {
                memmove(&v6[1], v56, v57);
                v6->m128i_i16[0] = v57;
                v6->m128i_i16[1] = v57;
                v6->m128i_i64[1] = (__int64)v6[1].m128i_i64;
                v58 = (unsigned int)v67;
                v54 = v62;
              }
              else
              {
                v52 = -1073741789;
                v64 = -1073741789;
              }
              if ( ReturnLength )
                *ReturnLength = v58;
              CurrentThread = v84;
            }
            if ( v54 )
            {
              if ( _InterlockedCompareExchange64(v53 + 216, 0LL, 17LL) != 17 )
                ExfReleasePushLockShared(v53 + 216);
              KeAbPostRelease((ULONG_PTR)(v53 + 216));
              KeLeaveCriticalRegionThread((__int64)CurrentThread);
              v52 = v64;
              v53 = (signed __int64 *)Object;
            }
            if ( v63 )
              ObfDereferenceObjectWithTag(v53, 0x79517350u);
            return v52;
          case ThreadSelectedCpuSets:
            if ( (ThreadInformationLength & 7) != 0 || ThreadInformationLength > 0xA0 )
              return -1073741820;
            v44 = ObpReferenceObjectByHandleWithTag(
                    (ULONG_PTR)ThreadHandle,
                    2048,
                    (__int64)PsThreadType,
                    v60,
                    0x79517350u,
                    &Object,
                    0LL,
                    0LL);
            v64 = v44;
            if ( v44 >= 0 )
            {
              v45 = 8 * KeQueryCpuSetsThread((__int64)Object, Src, v43);
              ObfDereferenceObjectWithTag(Object, 0x79517350u);
              v82 = v45;
              if ( ReturnLength )
                *ReturnLength = v45;
              if ( v45 >= ThreadInformationLength )
                v45 = ThreadInformationLength;
              memmove(v6, Src, v45);
            }
            return v44;
          case ThreadSystemThreadInformation:
            if ( ThreadInformationLength != 80 )
              return -1073741820;
            result = ObpReferenceObjectByHandleWithTag(
                       (ULONG_PTR)ThreadHandle,
                       2048,
                       (__int64)PsThreadType,
                       v60,
                       0x79517350u,
                       &Object,
                       0LL,
                       0LL);
            v47 = result;
            if ( result >= 0 )
            {
              v48 = (unsigned int *)Object;
              KeQueryValuesThread((__int64)Object, (__int64)&v70, v46);
              ThreadStartAddress = PsQueryThreadStartAddress((__int64)v48, 1);
              if ( ThreadStartAddress > 0x7FFFFFFEFFFFLL )
                ThreadStartAddress = 0LL;
              v6[4].m128i_i32[1] = v71;
              v6[4].m128i_i32[2] = v72;
              v6[3].m128i_i32[3] = v74;
              v6[3].m128i_i32[2] = v73;
              v6[1].m128i_i32[2] = v70;
              v50 = KeMaximumIncrement;
              v6->m128i_i64[0] = KeMaximumIncrement * (unsigned __int64)v48[163];
              v6->m128i_i64[1] = v50 * v48[183];
              v6[1].m128i_i64[0] = *((_QWORD *)v48 + 190);
              v6[4].m128i_i32[0] = v48[85];
              *(__m128i *)((char *)v6 + 40) = *(__m128i *)(v48 + 398);
              v6[2].m128i_i64[0] = ThreadStartAddress;
              if ( ReturnLength )
                *ReturnLength = 80;
              ObfDereferenceObjectWithTag(v48, 0x79517350u);
              return v47;
            }
            return result;
          case ThreadActualGroupAffinity:
            if ( ThreadInformationLength != 16 )
              return -1073741820;
            result = ObpReferenceObjectByHandleWithTag(
                       (ULONG_PTR)ThreadHandle,
                       2048,
                       (__int64)PsThreadType,
                       v60,
                       0x79517350u,
                       &Object,
                       0LL,
                       0LL);
            v22 = result;
            if ( result < 0 )
              return result;
            v23 = Object;
            KeQueryActualAffinityThread((__int64)Object, (__int64)&v87, v51);
            *v6 = v87;
            if ( ReturnLength )
              *ReturnLength = 16;
LABEL_111:
            ObfDereferenceObjectWithTag(v23, 0x79517350u);
            goto LABEL_112;
          case ThreadDynamicCodePolicyInfo:
            if ( ThreadInformationLength != 4 )
              return -1073741820;
            result = ObpReferenceObjectByHandleWithTag(
                       (ULONG_PTR)ThreadHandle,
                       2048,
                       (__int64)PsThreadType,
                       v60,
                       0x79517350u,
                       &Object,
                       0LL,
                       0LL);
            v14 = result;
            if ( result < 0 )
              return result;
            v15 = Object;
            v6->m128i_i32[0] = (*((_DWORD *)Object + 436) & 0x40000) != 0;
            if ( ReturnLength )
              *ReturnLength = 4;
            goto LABEL_27;
          case ThreadExplicitCaseSensitivity:
            if ( ThreadInformationLength != 4 )
              return -1073741820;
            result = ObpReferenceObjectByHandleWithTag(
                       (ULONG_PTR)ThreadHandle,
                       2048,
                       (__int64)PsThreadType,
                       v60,
                       0x79517350u,
                       &Object,
                       0LL,
                       0LL);
            v64 = result;
            if ( result < 0 )
              return result;
            v6->m128i_i32[0] = (*((_DWORD *)Object + 436) >> 19) & 1;
            if ( ReturnLength )
              *ReturnLength = 4;
            v14 = v64;
LABEL_116:
            v15 = Object;
            goto LABEL_27;
          case ThreadWorkOnBehalfTicket:
            if ( ThreadInformationLength != 16 )
              return -1073741820;
            if ( ThreadHandle != (HANDLE)-2LL )
              goto LABEL_166;
            v75 = 0uLL;
            WorkOnBehalfThread = PsGetWorkOnBehalfThread(CurrentThread, &v69);
            if ( WorkOnBehalfThread )
            {
              PsEncodeThreadWorkOnBehalfTicket((__int64)WorkOnBehalfThread, &v75);
              if ( v69 )
                ObfDereferenceObject(v20);
            }
            else
            {
              PsEncodeThreadWorkOnBehalfTicket((__int64)CurrentThread, &v75);
              v75.m128i_i32[2] |= 1u;
            }
            *v6 = v75;
            if ( ReturnLength )
              *ReturnLength = 16;
            return 0;
          case ThreadSubsystemInformation:
            if ( ThreadInformationLength != 4 )
              return -1073741820;
            v59 = 0;
            result = ObpReferenceObjectByHandleWithTag(
                       (ULONG_PTR)ThreadHandle,
                       2048,
                       (__int64)PsThreadType,
                       v60,
                       0x79517350u,
                       &Object,
                       0LL,
                       0LL);
            v14 = result;
            if ( result < 0 )
              return result;
            v15 = Object;
            if ( *((_QWORD *)Object + 243) )
              v59 = qword_14040F370;
            v6->m128i_i32[0] = v59;
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
      if ( ThreadInformationLength == 48 )
      {
        result = ObpReferenceObjectByHandleWithTag(
                   (ULONG_PTR)ThreadHandle,
                   2048,
                   (__int64)PsThreadType,
                   v60,
                   0x79517350u,
                   &Object,
                   0LL,
                   0LL);
        if ( result < 0 )
          return result;
        v18 = (char *)Object;
        if ( *((_BYTE *)Object + 4) )
          v88[1].m128i_i32[0] = PsGetThreadExitStatus((PETHREAD)Object);
        else
          v88[1].m128i_i32[0] = 259;
        v88[1].m128i_i64[1] = *((_QWORD *)v18 + 30);
        if ( (IoThreadToProcess((PETHREAD)v18)->SecureState.SecureHandle & 1) != 0 )
          VslGetSecureTebAddress(v18, &v88[1].m128i_u64[1]);
        v88[0] = *(__m128i *)(v18 + 1592);
        v88[3].m128i_i64[0] = *((_QWORD *)v18 + 69);
        v88[3].m128i_i32[2] = v18[195];
        v88[3].m128i_i32[3] = KeQueryBasePriorityThread((__int64)v18);
        ObfDereferenceObjectWithTag(v18, 0x79517350u);
        *v6 = v88[1];
        v6[1] = v88[0];
        v6[2] = v88[3];
        if ( ReturnLength )
          *ReturnLength = 48;
        return 0;
      }
    }
    return -1073741820;
  }
  if ( ThreadInformationLength != 16 )
    return -1073741820;
  ContextThread = 0;
  if ( ThreadHandle == (HANDLE)-2LL )
  {
    Object = CurrentThread;
  }
  else
  {
    result = ObpReferenceObjectByHandleWithTag(
               (ULONG_PTR)ThreadHandle,
               2048,
               (__int64)PsThreadType,
               v60,
               0x79517350u,
               &Object,
               0LL,
               0LL);
    ContextThread = result;
    if ( result < 0 )
      return result;
    CurrentThread = (struct _KTHREAD *)Object;
  }
  v6->m128i_i64[0] = KeQueryTotalCycleTimeThread(CurrentThread, &CycleTimeStamp);
  v6->m128i_i64[1] = CycleTimeStamp;
  if ( ReturnLength )
    *ReturnLength = 16;
  if ( ThreadHandle != (HANDLE)-2LL )
  {
    v42 = CurrentThread;
LABEL_260:
    ObfDereferenceObjectWithTag(v42, 0x79517350u);
  }
  return ContextThread;
}
