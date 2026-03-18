/*
 * XREFs of NestAsyncEvalObject @ 0x1C0065EDC
 * Callers:
 *     SyncEvalObject @ 0x1C0003F70 (SyncEvalObject.c)
 * Callees:
 *     DupObjData @ 0x1C000A090 (DupObjData.c)
 *     ReadObject @ 0x1C000B1A0 (ReadObject.c)
 *     PushCall @ 0x1C0021414 (PushCall.c)
 *     PushFrame @ 0x1C00227C0 (PushFrame.c)
 *     GetObjectPath @ 0x1C0023478 (GetObjectPath.c)
 *     GetThreadCurrentContext @ 0x1C0023988 (GetThreadCurrentContext.c)
 *     LogError @ 0x1C0029B44 (LogError.c)
 *     AcpiDiagTraceAmlError @ 0x1C002AE60 (AcpiDiagTraceAmlError.c)
 *     PrintDebugMessage @ 0x1C002BB94 (PrintDebugMessage.c)
 *     ConPrintf @ 0x1C0063840 (ConPrintf.c)
 *     LogSchedEvent @ 0x1C0064328 (LogSchedEvent.c)
 *     PrintObject @ 0x1C0064440 (PrintObject.c)
 *     PushPost @ 0x1C0065D54 (PushPost.c)
 */

__int64 __fastcall NestAsyncEvalObject(__int64 a1, __int64 a2, unsigned int a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v7; // rbp
  __int64 ThreadCurrentContext; // rdi
  KIRQL v11; // r10
  unsigned int v12; // ebx
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // r9
  __int64 v16; // rbx
  _QWORD *ObjectPath; // rax
  char *v18; // rdx
  void *v19; // rsi
  __int64 v20; // rax
  __int64 v21; // rbx

  v7 = a3;
  byte_1C0080710 = KeAcquireSpinLockRaiseToDpc(&SpinLock);
  ThreadCurrentContext = GetThreadCurrentContext();
  KeReleaseSpinLock(&SpinLock, v11);
  LogSchedEvent(1312904025, ThreadCurrentContext, a1, (__int64)EvalMethodComplete, ThreadCurrentContext);
  if ( ThreadCurrentContext )
  {
    v12 = PushFrame((struct _SLIST_ENTRY *)ThreadCurrentContext, 1481917262, 0x80u, (__int64)ParseNestedContext, &a5);
    if ( !v12 )
    {
      v13 = a5;
      *(_QWORD *)(a5 + 32) = a1;
      if ( (gdwfAMLI & 4) != 0 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(a1 + 112));
        v13 = a5;
      }
      *(_QWORD *)(v13 + 40) = a1;
      if ( (gdwfAMLI & 4) != 0 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(a1 + 112));
        v13 = a5;
      }
      *(_QWORD *)(v13 + 88) = EvalMethodComplete;
      v14 = a6;
      *(_QWORD *)(v13 + 96) = a2;
      *(_QWORD *)(v13 + 104) = v14;
      *(_QWORD *)(v13 + 120) = *(_QWORD *)(ThreadCurrentContext + 104);
      *(_DWORD *)(v13 + 112) = *(_DWORD *)(ThreadCurrentContext + 64);
      LODWORD(v14) = *(_DWORD *)(ThreadCurrentContext + 64);
      *(_QWORD *)(ThreadCurrentContext + 104) = v13;
      *(_DWORD *)(ThreadCurrentContext + 64) = v14 & 0xFFFFFE7F | 0x80;
      if ( *(_WORD *)(a1 + 66) == 8 )
      {
        if ( !(unsigned int)PushCall((struct _SLIST_ENTRY *)ThreadCurrentContext, a1, v13 + 48) )
        {
          v16 = *(_QWORD *)(ThreadCurrentContext + 416);
          if ( (_DWORD)v7 == *(_DWORD *)(v16 + 60) )
          {
            if ( (gDebugger & 0xD0) != 0 )
            {
              ObjectPath = GetObjectPath(a1);
              v18 = byte_1C006E28A;
              v19 = ObjectPath;
              if ( ObjectPath )
                v18 = (char *)ObjectPath;
              ConPrintf("\nAMLI: %s(", v18);
              if ( v19 )
                ExFreePoolWithTag(v19, 0);
            }
            *(_DWORD *)(v16 + 56) = 0;
            if ( (_DWORD)v7 )
            {
              v20 = 0LL;
              while ( !(unsigned int)DupObjData(
                                       *(struct _SLIST_ENTRY **)(ThreadCurrentContext + 320),
                                       *(_QWORD *)(v16 + 64) + 40 * v20,
                                       a4 + 40 * v20,
                                       v15) )
              {
                if ( (gDebugger & 0xD0) != 0 )
                {
                  PrintObject(a4 + 40LL * *(unsigned int *)(v16 + 56));
                  if ( *(_DWORD *)(v16 + 56) + 1 < (unsigned int)v7 )
                    ConPrintf(",");
                }
                v20 = (unsigned int)(*(_DWORD *)(v16 + 56) + 1);
                *(_DWORD *)(v16 + 56) = v20;
                if ( (unsigned int)v20 >= (unsigned int)v7 )
                  goto LABEL_23;
              }
            }
            else
            {
LABEL_23:
              if ( (gDebugger & 0xD0) != 0 )
                ConPrintf(")\n");
              *(_DWORD *)(v16 + 16) = *(_DWORD *)(v16 + 16) & 0xFFFF0000 | 2;
            }
          }
          else
          {
            LogError(-1072431093);
            AcpiDiagTraceAmlError(ThreadCurrentContext, -1072431093);
            PrintDebugMessage(108, (const void *)v7, (const void *)*(unsigned int *)(v16 + 60), 0LL, 0LL);
          }
        }
      }
      else
      {
        v21 = v13 + 48;
        if ( !(unsigned int)PushPost(
                              (struct _SLIST_ENTRY *)ThreadCurrentContext,
                              (__int64)ProcessEvalObj,
                              a1,
                              0LL,
                              v13 + 48) )
          ReadObject(ThreadCurrentContext, a1 + 64, v21);
      }
      return 32772;
    }
  }
  else
  {
    v12 = -1072431098;
    LogError(-1072431098);
    AcpiDiagTraceAmlError(0LL, -1072431098);
    PrintDebugMessage(109, (const void *)a1, 0LL, 0LL, 0LL);
  }
  return v12;
}
