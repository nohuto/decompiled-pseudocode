/*
 * XREFs of ExShutdownSystem @ 0x14057E4C0
 * Callers:
 *     PopGracefulShutdown @ 0x14057C9C0 (PopGracefulShutdown.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x14004F160 (ExReleasePushLockEx.c)
 *     ObfDereferenceObjectWithTag @ 0x140051510 (ObfDereferenceObjectWithTag.c)
 *     PsGetServerSiloGlobals @ 0x14009238C (PsGetServerSiloGlobals.c)
 *     ExpRecordShutdownTime @ 0x140319928 (ExpRecordShutdownTime.c)
 *     ObCloseHandle @ 0x1405F5700 (ObCloseHandle.c)
 *     ExSwapinWorkerThreads @ 0x1406E031C (ExSwapinWorkerThreads.c)
 */

__int64 ExShutdownSystem()
{
  __int64 result; // rax
  int v1; // edx
  __int64 v2; // rcx
  __int64 v3; // rbx
  void *v4; // rcx
  void *v5; // rcx

  result = (__int64)PsGetServerSiloGlobals(0LL);
  v3 = result;
  if ( v1 )
  {
    if ( v1 == 1 )
    {
      result = (unsigned int)PopShutdownCleanly;
      if ( (PopShutdownCleanly & 2) != 0 )
        return ExSwapinWorkerThreads(v2);
    }
  }
  else
  {
    ExpRecordShutdownTime();
    v4 = *(void **)(v3 + 888);
    ExpTooLateForErrors = 1;
    ExpShuttingDown = 1;
    if ( v4 )
    {
      ObfDereferenceObject(v4);
      *(_QWORD *)(v3 + 888) = 0LL;
    }
    v5 = *(void **)(v3 + 880);
    if ( v5 )
    {
      ObfDereferenceObjectWithTag(v5, 0x65487845u);
      *(_QWORD *)(v3 + 880) = 0LL;
    }
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&ExpKeyManipLock, 0LL);
    if ( ExpControlKey )
    {
      ObfDereferenceObject(ExpControlKey);
      ExpControlKey = 0LL;
    }
    if ( qword_140409A48 )
    {
      ObfDereferenceObject(qword_140409A48);
      qword_140409A48 = 0LL;
    }
    if ( ExpProductTypeKey )
    {
      ObCloseHandle(ExpProductTypeKey, 0);
      ExpProductTypeKey = 0LL;
    }
    if ( ExpSetupKey )
    {
      ObCloseHandle(ExpSetupKey, 0);
      ExpSetupKey = 0LL;
    }
    return ExReleasePushLockEx((ULONG_PTR)&ExpKeyManipLock, 0LL);
  }
  return result;
}
