/*
 * XREFs of rimDoScheduledSecondaryRimPnpWorkPending @ 0x1C00FC720
 * Callers:
 *     RIMOnPnpNotification @ 0x1C00E34B0 (RIMOnPnpNotification.c)
 * Callees:
 *     RimDeviceTypeToRimInputType @ 0x1C000F238 (RimDeviceTypeToRimInputType.c)
 *     WPP_RECORDER_SF_ @ 0x1C003A778 (WPP_RECORDER_SF_.c)
 *     RIMLockExclusive @ 0x1C003B4E0 (RIMLockExclusive.c)
 *     rimDoSecondaryRimDevChangeCallback @ 0x1C00FC980 (rimDoSecondaryRimDevChangeCallback.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall rimDoScheduledSecondaryRimPnpWorkPending(__int64 a1)
{
  __int64 v2; // rdx
  _QWORD *v3; // rcx
  struct _LIST_ENTRY *Flink; // rsi
  struct _LIST_ENTRY *v5; // rbx
  struct _LIST_ENTRY **p_Blink; // rdi
  struct _LIST_ENTRY *v7; // rax
  _QWORD *v8; // rdi
  __int64 v9; // rcx
  _QWORD *v10; // rsi
  _QWORD *v11; // rax
  _QWORD *v12; // rdx
  __int64 v13; // r14
  __int64 v14; // r15
  int v15; // r12d
  int v16; // ebp
  __int64 i; // rbx
  int v18; // r8d
  __int64 v19; // rdx
  __int64 v20; // rcx
  _QWORD *v22; // [rsp+30h] [rbp-38h] BYREF
  struct _LIST_ENTRY *v23; // [rsp+38h] [rbp-30h]

  WPP_RECORDER_SF_(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    0x14u,
    0x3Bu,
    (__int64)&WPP_d80feb762ea23db244f84e50bb903cde_Traceguids);
  RIMLockExclusive((__int64)&gObListLock);
  Flink = gObRimList.Flink;
  v23 = (struct _LIST_ENTRY *)&v22;
  v22 = &v22;
  while ( Flink != &gObRimList )
  {
    v5 = Flink - 1;
    if ( HIDWORD(Flink[52].Flink) )
    {
      if ( HIDWORD(v5[4].Blink) != 32 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v3, v2);
      if ( !BYTE1(v5[4].Blink) && !LOBYTE(v5[4].Blink) )
      {
        if ( (struct _LIST_ENTRY *)a1 == v5 )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v3, v2);
        p_Blink = &v5[53].Blink;
        if ( *p_Blink != (struct _LIST_ENTRY *)p_Blink )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v3, v2);
        if ( ObReferenceObjectByPointer(&Flink[-1], 3u, ExRawInputManagerObjectType, 1) >= 0 )
        {
          v7 = v23;
          if ( v23->Flink != (struct _LIST_ENTRY *)&v22 )
            __fastfail(3u);
          v5[54].Flink = v23;
          v3 = &v22;
          *p_Blink = (struct _LIST_ENTRY *)&v22;
          v7->Flink = (struct _LIST_ENTRY *)p_Blink;
          v23 = (struct _LIST_ENTRY *)((char *)v5 + 856);
        }
      }
    }
    Flink = Flink->Flink;
  }
  qword_1C01A1640 = 0LL;
  ExReleasePushLockExclusiveEx(&gObListLock, 0LL);
  KeLeaveCriticalRegion();
  v8 = v22;
  while ( v8 != &v22 )
  {
    v9 = *v8;
    v10 = v8 - 107;
    v11 = v8;
    v8 = (_QWORD *)v9;
    if ( *(_QWORD **)(v9 + 8) != v11 || (v12 = (_QWORD *)v11[1], (_QWORD *)*v12 != v11) )
      __fastfail(3u);
    *v12 = v9;
    *(_QWORD *)(v9 + 8) = v12;
    v11[1] = v11;
    *v11 = v11;
    v13 = v10[8];
    v14 = v10[48];
    v15 = *((_DWORD *)v10 + 19);
    v16 = *((_DWORD *)v10 + 218);
    ObfDereferenceObject(v10);
    for ( i = *(_QWORD *)(a1 + 408); i; i = *(_QWORD *)(i + 40) )
    {
      if ( (unsigned int)RimDeviceTypeToRimInputType(i, *(unsigned __int8 *)(i + 48)) == v15 )
      {
        if ( (unsigned int)RimDeviceTypeToRimInputType(i, v18) != 32 )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v20, v19);
        if ( v16 )
        {
          rimDoSecondaryRimDevChangeCallback(a1, v13, v14, i, 1);
          rimDoSecondaryRimDevChangeCallback(a1, v13, v14, i, 2);
        }
      }
    }
    *((_DWORD *)v10 + 218) = 0;
  }
  return WPP_RECORDER_SF_(
           (__int64)WPP_GLOBAL_Control->DeviceExtension,
           3u,
           0x14u,
           0x3Cu,
           (__int64)&WPP_d80feb762ea23db244f84e50bb903cde_Traceguids);
}
