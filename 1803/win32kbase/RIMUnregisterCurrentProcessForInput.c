/*
 * XREFs of RIMUnregisterCurrentProcessForInput @ 0x1C003B1F4
 * Callers:
 *     RIMOnProcessDestroy @ 0x1C003B520 (RIMOnProcessDestroy.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C003A778 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_D @ 0x1C003B310 (WPP_RECORDER_SF_D.c)
 *     RIMLockExclusive @ 0x1C003B4E0 (RIMLockExclusive.c)
 *     RIMUnregisterForInput @ 0x1C00E5A50 (RIMUnregisterForInput.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMUnregisterCurrentProcessForInput(__int64 a1, __int64 a2)
{
  NTSTATUS v2; // esi
  struct _LIST_ENTRY *v3; // rbp
  __int64 v4; // rdx
  _QWORD *v5; // rcx
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

  v2 = 0;
  v3 = *(struct _LIST_ENTRY **)PsGetCurrentProcessWin32Process(a1, a2);
  WPP_RECORDER_SF_(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    0x14u,
    0x13u,
    (__int64)&WPP_73c89cb64ddf3806f3867933bb81b2ce_Traceguids);
  v17 = (struct _LIST_ENTRY *)&v16;
  v16 = &v16;
  RIMLockExclusive(&gObListLock);
  for ( i = gObRimList.Flink; i != &gObRimList; i = i->Flink )
  {
    if ( !LOBYTE(i[3].Blink) && !BYTE1(i[3].Blink) && i[1].Flink == v3 )
    {
      p_Blink = &i[36].Blink;
      if ( i[37].Flink != (struct _LIST_ENTRY *)&i[36].Blink )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v5, v4);
      if ( *p_Blink != (struct _LIST_ENTRY *)p_Blink )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v5, v4);
      v2 = ObReferenceObjectByPointer(&i[-1], 3u, ExRawInputManagerObjectType, 0);
      if ( v2 < 0 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v11, v4);
      v12 = v17;
      if ( v17->Flink != (struct _LIST_ENTRY *)&v16 )
        __fastfail(3u);
      i[37].Flink = v17;
      v5 = &v16;
      *p_Blink = (struct _LIST_ENTRY *)&v16;
      v12->Flink = (struct _LIST_ENTRY *)p_Blink;
      v17 = (struct _LIST_ENTRY *)((char *)i + 584);
    }
  }
  qword_1C01A1640 = 0LL;
  ExReleasePushLockExclusiveEx(&gObListLock, 0LL);
  KeLeaveCriticalRegion();
  v8 = v16;
  while ( v8 != &v16 )
  {
    v13 = v8 - 75;
    v14 = RIMUnregisterForInput(*(v8 - 67));
    v2 = v14;
    if ( v14 < 0 )
    {
      LOBYTE(v15) = 3;
      WPP_RECORDER_SF_D(
        WPP_GLOBAL_Control->DeviceExtension,
        v15,
        19,
        20,
        (__int64)&WPP_73c89cb64ddf3806f3867933bb81b2ce_Traceguids,
        v14);
      v2 = 0;
    }
    v8 = (_QWORD *)*v8;
    ObfDereferenceObject(v13);
  }
  LOBYTE(v7) = 3;
  WPP_RECORDER_SF_D(
    WPP_GLOBAL_Control->DeviceExtension,
    v7,
    20,
    21,
    (__int64)&WPP_73c89cb64ddf3806f3867933bb81b2ce_Traceguids,
    v2);
  return (unsigned int)v2;
}
