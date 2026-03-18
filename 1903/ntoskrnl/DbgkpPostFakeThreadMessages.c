/*
 * XREFs of DbgkpPostFakeThreadMessages @ 0x140848684
 * Callers:
 *     DbgkpPostFakeProcessCreateMessages @ 0x1408485C0 (DbgkpPostFakeProcessCreateMessages.c)
 *     DbgkpSetProcessDebugObject @ 0x140848FC0 (DbgkpSetProcessDebugObject.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x14000D6B0 (ObfReferenceObjectWithTag.c)
 *     KeStackAttachProcess @ 0x140013AD0 (KeStackAttachProcess.c)
 *     KeUnstackDetachProcess @ 0x14003A6B0 (KeUnstackDetachProcess.c)
 *     ObfDereferenceObjectWithTag @ 0x14003FB20 (ObfDereferenceObjectWithTag.c)
 *     ExReleaseRundownProtection_0 @ 0x140043820 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1400438A0 (ExAcquireRundownProtection_0.c)
 *     RtlImageNtHeader @ 0x14005EDB0 (RtlImageNtHeader.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     ObCloseHandle @ 0x14060F280 (ObCloseHandle.c)
 *     PsGetNextProcessThread @ 0x1406772C0 (PsGetNextProcessThread.c)
 *     PsResumeThread @ 0x1406CDD30 (PsResumeThread.c)
 *     PsSuspendThread @ 0x1406E4430 (PsSuspendThread.c)
 *     PsQuitNextProcessThread @ 0x14071EDA0 (PsQuitNextProcessThread.c)
 *     DbgkSendSystemDllMessages @ 0x140847CE4 (DbgkSendSystemDllMessages.c)
 *     DbgkpQueueMessage @ 0x140848CC8 (DbgkpQueueMessage.c)
 *     DbgkpSectionToFileHandle @ 0x14084AFC8 (DbgkpSectionToFileHandle.c)
 *     PsSynchronizeWithThreadInsertion @ 0x1408C6578 (PsSynchronizeWithThreadInsertion.c)
 */

__int64 __fastcall DbgkpPostFakeThreadMessages(
        __int64 Object,
        struct _KEVENT *a2,
        struct _EX_RUNDOWN_REF *a3,
        struct _EX_RUNDOWN_REF **a4,
        struct _EX_RUNDOWN_REF **a5)
{
  struct _EX_RUNDOWN_REF *NextProcessThread; // rbx
  struct _EX_RUNDOWN_REF *v8; // r15
  struct _EX_RUNDOWN_REF *v9; // rsi
  int v10; // r12d
  char v11; // di
  __int64 v12; // rcx
  PIMAGE_NT_HEADERS v13; // rax
  char v15; // [rsp+30h] [rbp-1E8h]
  bool v16; // [rsp+31h] [rbp-1E7h]
  struct _KTHREAD *CurrentThread; // [rsp+60h] [rbp-1B8h]
  HANDLE v20[34]; // [rsp+90h] [rbp-188h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+1A0h] [rbp-78h] BYREF

  NextProcessThread = a3;
  memset(&ApcState, 0, sizeof(ApcState));
  memset(v20, 0, sizeof(v20));
  v8 = 0LL;
  v9 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v10 = -1073741823;
  if ( NextProcessThread )
  {
    v8 = NextProcessThread;
    ObfReferenceObjectWithTag(NextProcessThread, 0x4F676244u);
  }
  else
  {
    NextProcessThread = (struct _EX_RUNDOWN_REF *)PsGetNextProcessThread(Object, 0LL);
  }
  v16 = a3 == 0LL;
  while ( NextProcessThread )
  {
    if ( v9 )
      ObfDereferenceObjectWithTag(v9, 0x4F676244u);
    v9 = NextProcessThread;
    ObfReferenceObjectWithTag(NextProcessThread, 0x4F676244u);
    if ( (HIDWORD(NextProcessThread[14].Ptr) & 0x400) == 0 )
    {
      if ( (NextProcessThread[220].Count & 2) != 0
        || (PsSynchronizeWithThreadInsertion(NextProcessThread, CurrentThread), (NextProcessThread[220].Count & 2) != 0) )
      {
        if ( ExAcquireRundownProtection_0(NextProcessThread + 217) )
        {
          v11 = 10;
          if ( (int)PsSuspendThread((__int64)NextProcessThread, 0LL) >= 0 )
            v11 = 42;
        }
        else
        {
          v11 = 18;
        }
        memset(v20, 0, sizeof(v20));
        if ( !v16 || (v11 & 0x10) != 0 )
        {
          v15 = 0;
          LODWORD(v20[5]) = 1;
          v20[7] = NextProcessThread[212].Ptr;
        }
        else
        {
          v15 = 1;
          LODWORD(v20[5]) = 2;
          v12 = *(_QWORD *)(Object + 960);
          if ( v12 )
            v20[7] = (HANDLE)DbgkpSectionToFileHandle(v12);
          else
            v20[7] = 0LL;
          v20[8] = *(HANDLE *)(Object + 968);
          KeStackAttachProcess((PRKPROCESS)Object, &ApcState);
          v13 = RtlImageNtHeader(*(PVOID *)(Object + 968));
          if ( v13 )
          {
            v20[11] = 0LL;
            v20[9] = *(HANDLE *)&v13->FileHeader.PointerToSymbolTable;
          }
          KeUnstackDetachProcess(&ApcState);
        }
        v10 = DbgkpQueueMessage((PVOID)Object, NextProcessThread, a2);
        if ( v10 < 0 )
        {
          if ( (v11 & 0x20) != 0 )
            PsResumeThread((__int64)NextProcessThread, 0LL);
          if ( (v11 & 8) != 0 )
            ExReleaseRundownProtection_0(NextProcessThread + 217);
          if ( LODWORD(v20[5]) == 2 && v20[7] )
            ObCloseHandle(v20[7], 0);
          PsQuitNextProcessThread(NextProcessThread);
          break;
        }
        if ( v15 )
        {
          v16 = 0;
          ObfReferenceObjectWithTag(NextProcessThread, 0x4F676244u);
          v8 = NextProcessThread;
          DbgkSendSystemDllMessages(NextProcessThread, a2, (__int64)v20);
        }
      }
    }
    NextProcessThread = (struct _EX_RUNDOWN_REF *)PsGetNextProcessThread(Object, NextProcessThread);
  }
  if ( v10 >= 0 )
  {
    if ( v8 )
    {
      *a4 = v8;
      *a5 = v9;
    }
    else
    {
      if ( v9 )
        ObfDereferenceObjectWithTag(v9, 0x4F676244u);
      return (unsigned int)-1073741823;
    }
  }
  else
  {
    if ( v8 )
      ObfDereferenceObjectWithTag(v8, 0x4F676244u);
    if ( v9 )
      ObfDereferenceObjectWithTag(v9, 0x4F676244u);
  }
  return (unsigned int)v10;
}
