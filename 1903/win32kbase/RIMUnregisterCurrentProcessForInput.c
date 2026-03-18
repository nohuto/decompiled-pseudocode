/*
 * XREFs of RIMUnregisterCurrentProcessForInput @ 0x1C0037EE4
 * Callers:
 *     RIMOnProcessDestroy @ 0x1C0037E70 (RIMOnProcessDestroy.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C002E6D4 (WPP_RECORDER_SF_.c)
 *     RIMLockExclusive @ 0x1C00320D0 (RIMLockExclusive.c)
 *     WPP_RECORDER_SF_D @ 0x1C00380CC (WPP_RECORDER_SF_D.c)
 *     RIMUnregisterForInput @ 0x1C006A630 (RIMUnregisterForInput.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01CAB94 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMUnregisterCurrentProcessForInput(__int64 a1, __int64 a2)
{
  NTSTATUS v2; // ebx
  int v3; // edx
  struct _LIST_ENTRY *v4; // rbp
  __int64 v5; // rdx
  _QWORD *v6; // rcx
  __int64 v7; // r8
  struct _LIST_ENTRY *i; // r14
  int v9; // edx
  _QWORD *v10; // rdi
  struct _LIST_ENTRY **p_Blink; // rdi
  __int64 v13; // rcx
  struct _LIST_ENTRY *v14; // rax
  _QWORD *v15; // rsi
  int v16; // eax
  int v17; // edx
  _QWORD *v18; // [rsp+30h] [rbp-28h] BYREF
  struct _LIST_ENTRY *v19; // [rsp+38h] [rbp-20h]

  v2 = 0;
  v4 = *(struct _LIST_ENTRY **)PsGetCurrentProcessWin32Process(a1, a2);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v3) = 4;
    WPP_RECORDER_SF_((_DWORD)gRimLog, v3, 1, 18, (__int64)&WPP_574de6f92de73fd98cf46f4140a2b0ba_Traceguids);
  }
  v19 = (struct _LIST_ENTRY *)&v18;
  v18 = &v18;
  RIMLockExclusive((__int64)&gObListLock);
  for ( i = gObRimList.Flink; i != &gObRimList; i = i->Flink )
  {
    if ( !LOBYTE(i[4].Flink) && !BYTE1(i[4].Flink) && i[1].Flink == v4 )
    {
      p_Blink = &i[37].Blink;
      if ( i[38].Flink != (struct _LIST_ENTRY *)&i[37].Blink )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v6, v5, v7);
      if ( *p_Blink != (struct _LIST_ENTRY *)p_Blink )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v6, v5, v7);
      v2 = ObReferenceObjectByPointer(&i[-1], 3u, ExRawInputManagerObjectType, 0);
      if ( v2 < 0 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v13, v5, v7);
      v14 = v19;
      if ( v19->Flink != (struct _LIST_ENTRY *)&v18 )
        __fastfail(3u);
      i[38].Flink = v19;
      v6 = &v18;
      *p_Blink = (struct _LIST_ENTRY *)&v18;
      v14->Flink = (struct _LIST_ENTRY *)p_Blink;
      v19 = (struct _LIST_ENTRY *)((char *)i + 600);
    }
  }
  qword_1C0218788 = 0LL;
  ExReleasePushLockExclusiveEx(&gObListLock, 0LL);
  KeLeaveCriticalRegion();
  v10 = v18;
  while ( v10 != &v18 )
  {
    v15 = v10 - 77;
    v16 = RIMUnregisterForInput(*(v10 - 68));
    v2 = v16;
    if ( v16 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v17) = 3;
        WPP_RECORDER_SF_D((_DWORD)gRimLog, v17, 1, 19, (__int64)&WPP_574de6f92de73fd98cf46f4140a2b0ba_Traceguids, v16);
      }
      v2 = 0;
    }
    v10 = (_QWORD *)*v10;
    ObfDereferenceObject(v15);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v9) = 4;
    WPP_RECORDER_SF_D((_DWORD)gRimLog, v9, 1, 20, (__int64)&WPP_574de6f92de73fd98cf46f4140a2b0ba_Traceguids, v2);
  }
  return (unsigned int)v2;
}
