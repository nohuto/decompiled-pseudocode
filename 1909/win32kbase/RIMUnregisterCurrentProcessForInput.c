/*
 * XREFs of RIMUnregisterCurrentProcessForInput @ 0x1C0036E74
 * Callers:
 *     RIMOnProcessDestroy @ 0x1C0036E00 (RIMOnProcessDestroy.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C002D584 (WPP_RECORDER_SF_.c)
 *     RIMLockExclusive @ 0x1C0031380 (RIMLockExclusive.c)
 *     WPP_RECORDER_SF_D @ 0x1C003705C (WPP_RECORDER_SF_D.c)
 *     RIMUnregisterForInput @ 0x1C00566D0 (RIMUnregisterForInput.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01C8BF4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMUnregisterCurrentProcessForInput(__int64 a1)
{
  NTSTATUS v1; // ebx
  int v2; // edx
  struct _LIST_ENTRY *v3; // rbp
  __int64 v4; // rdx
  _QWORD *v5; // rcx
  __int64 v6; // r8
  struct _LIST_ENTRY *i; // r14
  int v8; // edx
  _QWORD *v9; // rdi
  struct _LIST_ENTRY **p_Blink; // rdi
  __int64 v12; // rcx
  struct _LIST_ENTRY *v13; // rax
  _QWORD *v14; // rsi
  int v15; // eax
  int v16; // edx
  _QWORD *v17; // [rsp+30h] [rbp-28h] BYREF
  struct _LIST_ENTRY *v18; // [rsp+38h] [rbp-20h]

  v1 = 0;
  v3 = *(struct _LIST_ENTRY **)PsGetCurrentProcessWin32Process(a1);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v2) = 4;
    WPP_RECORDER_SF_((_DWORD)gRimLog, v2, 1, 18, (__int64)&WPP_574de6f92de73fd98cf46f4140a2b0ba_Traceguids);
  }
  v18 = (struct _LIST_ENTRY *)&v17;
  v17 = &v17;
  RIMLockExclusive((__int64)&gObListLock);
  for ( i = gObRimList.Flink; i != &gObRimList; i = i->Flink )
  {
    if ( !LOBYTE(i[4].Flink) && !BYTE1(i[4].Flink) && i[1].Flink == v3 )
    {
      p_Blink = &i[37].Blink;
      if ( i[38].Flink != (struct _LIST_ENTRY *)&i[37].Blink )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v5, v4, v6);
      if ( *p_Blink != (struct _LIST_ENTRY *)p_Blink )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v5, v4, v6);
      v1 = ObReferenceObjectByPointer(&i[-1], 3u, ExRawInputManagerObjectType, 0);
      if ( v1 < 0 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v12, v4, v6);
      v13 = v18;
      if ( v18->Flink != (struct _LIST_ENTRY *)&v17 )
        __fastfail(3u);
      i[38].Flink = v18;
      v5 = &v17;
      *p_Blink = (struct _LIST_ENTRY *)&v17;
      v13->Flink = (struct _LIST_ENTRY *)p_Blink;
      v18 = (struct _LIST_ENTRY *)((char *)i + 600);
    }
  }
  qword_1C0215788 = 0LL;
  ExReleasePushLockExclusiveEx(&gObListLock, 0LL);
  KeLeaveCriticalRegion();
  v9 = v17;
  while ( v9 != &v17 )
  {
    v14 = v9 - 77;
    v15 = RIMUnregisterForInput(*(v9 - 68));
    v1 = v15;
    if ( v15 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v16) = 3;
        WPP_RECORDER_SF_D((_DWORD)gRimLog, v16, 1, 19, (__int64)&WPP_574de6f92de73fd98cf46f4140a2b0ba_Traceguids, v15);
      }
      v1 = 0;
    }
    v9 = (_QWORD *)*v9;
    ObfDereferenceObject(v14);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v8) = 4;
    WPP_RECORDER_SF_D((_DWORD)gRimLog, v8, 1, 20, (__int64)&WPP_574de6f92de73fd98cf46f4140a2b0ba_Traceguids, v1);
  }
  return (unsigned int)v1;
}
