/*
 * XREFs of DbgkpInitializePhase0 @ 0x140A0274C
 * Callers:
 *     DbgkInitialize @ 0x140A026CC (DbgkInitialize.c)
 * Callees:
 *     memset @ 0x1401D77C0 (memset.c)
 *     RtlRunOnceInitialize @ 0x14071B300 (RtlRunOnceInitialize.c)
 *     DbgkpGetServerSiloState @ 0x14075D89C (DbgkpGetServerSiloState.c)
 *     DbgkpInitializePhase0SiloState @ 0x14075D8B8 (DbgkpInitializePhase0SiloState.c)
 *     ObCreateObjectType @ 0x14075E2F0 (ObCreateObjectType.c)
 */

void DbgkpInitializePhase0()
{
  char *ServerSiloState; // rax
  int v1; // edx
  __int64 v2; // rbx
  _RTL_RUN_ONCE *v3; // rcx
  _RTL_RUN_ONCE *v4; // rcx
  __int128 v5; // [rsp+20h] [rbp-49h]
  UNICODE_STRING v6; // [rsp+30h] [rbp-39h] BYREF
  _QWORD v7[16]; // [rsp+40h] [rbp-29h] BYREF

  *(_QWORD *)&v6.Length = 1572886LL;
  v6.Buffer = L"DebugObject";
  memset(v7, 0, 0x78uLL);
  DbgkpProcessDebugPortMutex.Owner = 0LL;
  DbgkpProcessDebugPortMutex.Contention = 0;
  DbgkpProcessDebugPortMutex.Event.Header.SignalState = 0;
  DbgkpProcessDebugPortMutex.Event.Header.WaitListHead.Blink = &DbgkpProcessDebugPortMutex.Event.Header.WaitListHead;
  DbgkpProcessDebugPortMutex.Event.Header.WaitListHead.Flink = &DbgkpProcessDebugPortMutex.Event.Header.WaitListHead;
  *(_QWORD *)&v5 = 0x2000200020001LL;
  *((_QWORD *)&v5 + 1) = 0x1F000F00120000LL;
  DbgkpProcessDebugPortMutex.Count = 1;
  LOWORD(DbgkpProcessDebugPortMutex.Event.Header.Lock) = 1;
  DbgkpProcessDebugPortMutex.Event.Header.Size = 6;
  ServerSiloState = DbgkpGetServerSiloState(0LL);
  if ( (int)DbgkpInitializePhase0SiloState(ServerSiloState) >= 0 )
  {
    LODWORD(v7[1]) = 0;
    v7[5] = 0LL;
    v7[9] = AlpcMessageDeleteProcedure;
    LOWORD(v7[0]) = 120;
    HIDWORD(v7[3]) = v1;
    v2 = 8LL;
    BYTE2(v7[0]) |= 8u;
    v7[8] = DbgkpCloseObject;
    HIDWORD(v7[4]) = 512;
    *(_OWORD *)((char *)&v7[1] + 4) = v5;
    if ( (int)ObCreateObjectType(&v6, (__int64)v7, 0LL, (__int64)&DbgkDebugObjectType) >= 0 )
    {
      if ( !DbgkpMaxModuleMsgs )
        DbgkpMaxModuleMsgs = 500;
      v3 = &RunOnce;
      do
      {
        RtlRunOnceInitialize(v3);
        v3 = v4 + 2;
        --v2;
      }
      while ( v2 );
    }
  }
}
