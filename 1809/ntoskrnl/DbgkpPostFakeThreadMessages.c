/*
 * XREFs of DbgkpPostFakeThreadMessages @ 0x14080FFB8
 * Callers:
 *     DbgkpPostFakeProcessCreateMessages @ 0x14080FF08 (DbgkpPostFakeProcessCreateMessages.c)
 *     DbgkpSetProcessDebugObject @ 0x1408108EC (DbgkpSetProcessDebugObject.c)
 * Callees:
 *     KiStackAttachProcess @ 0x140016DB0 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x140017190 (KiUnstackDetachProcess.c)
 *     ExReleaseRundownProtection_0 @ 0x14004D2F0 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x14004D320 (ExAcquireRundownProtection_0.c)
 *     ObfDereferenceObjectWithTag @ 0x140051510 (ObfDereferenceObjectWithTag.c)
 *     RtlImageNtHeader @ 0x14009DA20 (RtlImageNtHeader.c)
 *     ObfReferenceObjectWithTag @ 0x1400ACD30 (ObfReferenceObjectWithTag.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ObCloseHandle @ 0x1405F6700 (ObCloseHandle.c)
 *     PsGetNextProcessThread @ 0x140676AA0 (PsGetNextProcessThread.c)
 *     PsResumeThread @ 0x1406779A0 (PsResumeThread.c)
 *     PsSuspendThread @ 0x1406C3420 (PsSuspendThread.c)
 *     DbgkSendSystemDllMessages @ 0x14080F68C (DbgkSendSystemDllMessages.c)
 *     DbgkpQueueMessage @ 0x140810604 (DbgkpQueueMessage.c)
 *     DbgkpSectionToFileHandle @ 0x1408127A8 (DbgkpSectionToFileHandle.c)
 *     PsSynchronizeWithThreadInsertion @ 0x140889878 (PsSynchronizeWithThreadInsertion.c)
 */

__int64 __fastcall DbgkpPostFakeThreadMessages(
        __int64 a1,
        struct _KEVENT *a2,
        struct _EX_RUNDOWN_REF *a3,
        struct _EX_RUNDOWN_REF **a4,
        struct _EX_RUNDOWN_REF **a5)
{
  struct _EX_RUNDOWN_REF *NextProcessThread; // rbx
  struct _EX_RUNDOWN_REF *v7; // r14
  struct _EX_RUNDOWN_REF *v8; // rdi
  int v9; // r12d
  bool v10; // r13
  char v11; // si
  char v12; // r13
  __int64 v13; // rcx
  PIMAGE_NT_HEADERS v14; // rax
  bool v16; // [rsp+30h] [rbp-1E8h]
  struct _KTHREAD *CurrentThread; // [rsp+68h] [rbp-1B0h]
  HANDLE v21[34]; // [rsp+90h] [rbp-188h] BYREF
  _BYTE v22[48]; // [rsp+1A0h] [rbp-78h] BYREF

  NextProcessThread = a3;
  v7 = 0LL;
  v8 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v9 = -1073741823;
  if ( a3 )
  {
    v7 = a3;
    ObfReferenceObjectWithTag(a3, 0x4F676244u);
  }
  else
  {
    NextProcessThread = (struct _EX_RUNDOWN_REF *)PsGetNextProcessThread(a1, 0LL);
  }
  v10 = a3 == 0LL;
  v16 = a3 == 0LL;
  while ( NextProcessThread )
  {
    if ( v8 )
      ObfDereferenceObjectWithTag(v8, 0x4F676244u);
    v8 = NextProcessThread;
    ObfReferenceObjectWithTag(NextProcessThread, 0x4F676244u);
    if ( (HIDWORD(NextProcessThread[14].Ptr) & 0x400) == 0 )
    {
      if ( (NextProcessThread[218].Count & 2) != 0
        || (PsSynchronizeWithThreadInsertion(NextProcessThread, CurrentThread), (NextProcessThread[218].Count & 2) != 0) )
      {
        if ( ExAcquireRundownProtection_0(NextProcessThread + 215) )
        {
          v11 = 10;
          if ( (int)PsSuspendThread((__int64)NextProcessThread, 0LL) >= 0 )
            v11 = 42;
        }
        else
        {
          v11 = 18;
        }
        memset(v21, 0, sizeof(v21));
        if ( !v10 || (v11 & 0x10) != 0 )
        {
          v12 = 0;
          LODWORD(v21[5]) = 1;
          v21[7] = NextProcessThread[210].Ptr;
        }
        else
        {
          v12 = 1;
          LODWORD(v21[5]) = 2;
          v13 = *(_QWORD *)(a1 + 952);
          if ( v13 )
            v21[7] = (HANDLE)DbgkpSectionToFileHandle(v13);
          else
            v21[7] = 0LL;
          v21[8] = *(HANDLE *)(a1 + 960);
          KiStackAttachProcess((_KPROCESS *)a1, 0LL, (__int64)v22);
          v14 = RtlImageNtHeader(*(PVOID *)(a1 + 960));
          if ( v14 )
          {
            v21[11] = 0LL;
            v21[9] = *(HANDLE *)&v14->FileHeader.PointerToSymbolTable;
          }
          KiUnstackDetachProcess((__int64)v22, 0LL);
        }
        v9 = DbgkpQueueMessage((PVOID)a1, NextProcessThread, a2);
        if ( v9 < 0 )
        {
          if ( (v11 & 0x20) != 0 )
            PsResumeThread((__int64)NextProcessThread, 0LL);
          if ( (v11 & 8) != 0 )
            ExReleaseRundownProtection_0(NextProcessThread + 215);
          if ( LODWORD(v21[5]) == 2 && v21[7] )
            ObCloseHandle(v21[7], 0);
          ObfDereferenceObjectWithTag(NextProcessThread, 0x6E457350u);
          break;
        }
        if ( v12 )
        {
          v10 = 0;
          v16 = 0;
          ObfReferenceObjectWithTag(NextProcessThread, 0x4F676244u);
          v7 = NextProcessThread;
          DbgkSendSystemDllMessages(NextProcessThread, a2, (__int64)v21);
        }
        else
        {
          v10 = v16;
        }
      }
    }
    NextProcessThread = (struct _EX_RUNDOWN_REF *)PsGetNextProcessThread(a1, NextProcessThread);
  }
  if ( v9 >= 0 )
  {
    if ( v7 )
    {
      *a4 = v7;
      *a5 = v8;
    }
    else
    {
      if ( v8 )
        ObfDereferenceObjectWithTag(v8, 0x4F676244u);
      return (unsigned int)-1073741823;
    }
  }
  else
  {
    if ( v7 )
      ObfDereferenceObjectWithTag(v7, 0x4F676244u);
    if ( v8 )
      ObfDereferenceObjectWithTag(v8, 0x4F676244u);
  }
  return (unsigned int)v9;
}
