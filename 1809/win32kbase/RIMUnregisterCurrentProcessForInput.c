/*
 * XREFs of RIMUnregisterCurrentProcessForInput @ 0x1C003284C
 * Callers:
 *     RIMOnProcessDestroy @ 0x1C0032C00 (RIMOnProcessDestroy.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0031118 (WPP_RECORDER_SF_.c)
 *     RIMLockExclusive @ 0x1C0031320 (RIMLockExclusive.c)
 *     WPP_RECORDER_SF_d @ 0x1C0032A20 (WPP_RECORDER_SF_d.c)
 *     RIMUnregisterForInput @ 0x1C0087040 (RIMUnregisterForInput.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMUnregisterCurrentProcessForInput(__int64 a1)
{
  NTSTATUS v1; // esi
  struct _LIST_ENTRY *v2; // rbp
  __int64 v3; // rdx
  _QWORD *v4; // rcx
  __int64 v5; // r8
  struct _LIST_ENTRY *i; // r14
  int v7; // edx
  _QWORD *v8; // rbx
  struct _LIST_ENTRY **p_Blink; // rbx
  __int64 v11; // rcx
  struct _LIST_ENTRY *v12; // rax
  _QWORD *v13; // rdi
  int v14; // eax
  int v15; // edx
  _QWORD *v16; // [rsp+30h] [rbp-18h] BYREF
  struct _LIST_ENTRY *v17; // [rsp+38h] [rbp-10h]

  v1 = 0;
  v2 = *(struct _LIST_ENTRY **)PsGetCurrentProcessWin32Process(a1);
  WPP_RECORDER_SF_(gRimLog, 3u, 0x15u, 0x14u, (__int64)&WPP_d998f4a8bf553c0e5a398c70dcc56ce3_Traceguids);
  v17 = (struct _LIST_ENTRY *)&v16;
  v16 = &v16;
  RIMLockExclusive((__int64)&gObListLock);
  for ( i = gObRimList.Flink; i != &gObRimList; i = i->Flink )
  {
    if ( !LOBYTE(i[4].Flink) && !BYTE1(i[4].Flink) && i[1].Flink == v2 )
    {
      p_Blink = &i[37].Blink;
      if ( i[38].Flink != (struct _LIST_ENTRY *)&i[37].Blink )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v4, v3, v5);
      if ( *p_Blink != (struct _LIST_ENTRY *)p_Blink )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v4, v3, v5);
      v1 = ObReferenceObjectByPointer(&i[-1], 3u, ExRawInputManagerObjectType, 0);
      if ( v1 < 0 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v11, v3, v5);
      v12 = v17;
      if ( v17->Flink != (struct _LIST_ENTRY *)&v16 )
        __fastfail(3u);
      i[38].Flink = v17;
      v4 = &v16;
      *p_Blink = (struct _LIST_ENTRY *)&v16;
      v12->Flink = (struct _LIST_ENTRY *)p_Blink;
      v17 = (struct _LIST_ENTRY *)((char *)i + 600);
    }
  }
  qword_1C01D0F90 = 0LL;
  ExReleasePushLockExclusiveEx(&gObListLock, 0LL);
  KeLeaveCriticalRegion();
  v8 = v16;
  while ( v8 != &v16 )
  {
    v13 = v8 - 77;
    v14 = RIMUnregisterForInput(*(v8 - 68));
    v1 = v14;
    if ( v14 < 0 )
    {
      LOBYTE(v15) = 3;
      WPP_RECORDER_SF_d(gRimLog, v15, 20, 21, (__int64)&WPP_d998f4a8bf553c0e5a398c70dcc56ce3_Traceguids, v14);
      v1 = 0;
    }
    v8 = (_QWORD *)*v8;
    ObfDereferenceObject(v13);
  }
  LOBYTE(v7) = 3;
  WPP_RECORDER_SF_d(gRimLog, v7, 21, 22, (__int64)&WPP_d998f4a8bf553c0e5a398c70dcc56ce3_Traceguids, v1);
  return (unsigned int)v1;
}
