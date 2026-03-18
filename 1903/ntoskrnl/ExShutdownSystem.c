/*
 * XREFs of ExShutdownSystem @ 0x1405AE3C8
 * Callers:
 *     PopGracefulShutdown @ 0x1405AC870 (PopGracefulShutdown.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14003E260 (ObfDereferenceObject.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14003ED70 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x14003F240 (ExReleasePushLockEx.c)
 *     ObfDereferenceObjectWithTag @ 0x14003FB20 (ObfDereferenceObjectWithTag.c)
 *     PsGetServerSiloGlobals @ 0x14008D470 (PsGetServerSiloGlobals.c)
 *     ExpRecordShutdownTime @ 0x140338680 (ExpRecordShutdownTime.c)
 *     ObCloseHandle @ 0x14060F280 (ObCloseHandle.c)
 *     ExSwapinWorkerThreads @ 0x140727638 (ExSwapinWorkerThreads.c)
 */

char ExShutdownSystem()
{
  _QWORD *ServerSiloGlobals; // rax
  int v1; // edx
  __int64 v2; // rcx
  _QWORD *v3; // rbx
  void *v4; // rcx
  void *v5; // rcx

  ServerSiloGlobals = PsGetServerSiloGlobals(0LL);
  v3 = ServerSiloGlobals;
  if ( v1 )
  {
    if ( v1 == 1 )
    {
      LOBYTE(ServerSiloGlobals) = PopShutdownCleanly;
      if ( (PopShutdownCleanly & 2) != 0 )
        LOBYTE(ServerSiloGlobals) = ExSwapinWorkerThreads(v2);
    }
  }
  else
  {
    ExpRecordShutdownTime();
    v4 = (void *)v3[111];
    ExpTooLateForErrors = 1;
    ExpShuttingDown = 1;
    if ( v4 )
    {
      ObfDereferenceObject(v4);
      v3[111] = 0LL;
    }
    v5 = (void *)v3[110];
    if ( v5 )
    {
      ObfDereferenceObjectWithTag(v5, 0x65487845u);
      v3[110] = 0LL;
    }
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&ExpKeyManipLock, 0LL);
    if ( ExpControlKey )
    {
      ObfDereferenceObject(ExpControlKey);
      ExpControlKey = 0LL;
    }
    if ( qword_140431FB8 )
    {
      ObfDereferenceObject(qword_140431FB8);
      qword_140431FB8 = 0LL;
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
    LOBYTE(ServerSiloGlobals) = ExReleasePushLockEx((ULONG_PTR)&ExpKeyManipLock, 0LL);
  }
  return (char)ServerSiloGlobals;
}
