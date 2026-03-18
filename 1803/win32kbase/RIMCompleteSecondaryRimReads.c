/*
 * XREFs of RIMCompleteSecondaryRimReads @ 0x1C00E0B30
 * Callers:
 *     ?ProcessInput@CHidInput@@EEAAJPEAXKK0@Z @ 0x1C0127A70 (-ProcessInput@CHidInput@@EEAAJPEAXKK0@Z.c)
 * Callees:
 *     RimDeviceTypeToRimInputType @ 0x1C000F238 (RimDeviceTypeToRimInputType.c)
 *     WPP_RECORDER_SF_ @ 0x1C003A778 (WPP_RECORDER_SF_.c)
 *     RIMLockExclusive @ 0x1C003B4E0 (RIMLockExclusive.c)
 *     WPP_RECORDER_SF_qq @ 0x1C00BCB94 (WPP_RECORDER_SF_qq.c)
 *     rimIsSecondaryRimUsagesMatchingForDevice @ 0x1C00DEEB0 (rimIsSecondaryRimUsagesMatchingForDevice.c)
 *     RawInputManagerDeviceObjectResolveHandle @ 0x1C00F1E10 (RawInputManagerDeviceObjectResolveHandle.c)
 *     rimProcessInput @ 0x1C00FF314 (rimProcessInput.c)
 *     rimSignalReadComplete @ 0x1C00FF81C (rimSignalReadComplete.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMCompleteSecondaryRimReads(__int64 a1, __int64 a2, int a3)
{
  char *v6; // rsi
  char *v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rcx
  struct _LIST_ENTRY *Flink; // r14
  __int64 v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // rcx
  int v14; // eax
  _QWORD *v15; // rdi
  _QWORD *v16; // rax
  _QWORD *v17; // rdi
  __int64 v18; // rcx
  _QWORD *v19; // rbx
  _QWORD *v20; // rax
  _QWORD *v21; // rdx
  _QWORD *v23; // [rsp+40h] [rbp-10h] BYREF
  _QWORD **v24; // [rsp+48h] [rbp-8h]
  PVOID Object; // [rsp+98h] [rbp+48h] BYREF

  WPP_RECORDER_SF_(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    0x14u,
    0x59u,
    (__int64)&WPP_6b2f809fb36834de968d7798a4905e6c_Traceguids);
  if ( (int)RawInputManagerDeviceObjectResolveHandle(a1, 3LL, 1LL, &Object) >= 0 )
  {
    v6 = (char *)Object;
    if ( Object )
      v7 = (char *)Object + 80;
    else
      v7 = 0LL;
    if ( (unsigned int)RimDeviceTypeToRimInputType((__int64)v7, *((unsigned __int8 *)Object + 128)) != 32 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v9, v8);
    RIMLockExclusive((__int64)&gObListLock);
    Flink = gObRimList.Flink;
    v24 = &v23;
    v23 = &v23;
    while ( Flink != &gObRimList )
    {
      v11 = (__int64)&Flink[-1];
      Flink = Flink->Flink;
      if ( *(_DWORD *)(v11 + 852) && (unsigned int)rimIsSecondaryRimUsagesMatchingForDevice(v11, (__int64)v6) )
      {
        v14 = *(_DWORD *)(v11 + 76);
        if ( v14 != 32 )
        {
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v13, v12);
          v14 = *(_DWORD *)(v11 + 76);
        }
        if ( v14 != a3 )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v13, v12);
        if ( !*(_BYTE *)(v11 + 73) && !*(_BYTE *)(v11 + 72) )
        {
          v15 = (_QWORD *)(v11 + 856);
          if ( (_QWORD *)*v15 != v15 )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v13, v12);
          if ( ObReferenceObjectByPointer((PVOID)v11, 3u, ExRawInputManagerObjectType, 1) >= 0 )
          {
            v16 = v24;
            if ( *v24 != &v23 )
              __fastfail(3u);
            *(_QWORD *)(v11 + 864) = v24;
            *v15 = &v23;
            *v16 = v15;
            v24 = (_QWORD **)(v11 + 856);
          }
        }
      }
    }
    qword_1C01A1640 = 0LL;
    ExReleasePushLockExclusiveEx(&gObListLock, 0LL);
    KeLeaveCriticalRegion();
    v17 = v23;
    while ( v17 != &v23 )
    {
      v18 = *v17;
      v19 = v17 - 107;
      v20 = v17;
      v17 = (_QWORD *)v18;
      if ( *(_QWORD **)(v18 + 8) != v20 || (v21 = (_QWORD *)v20[1], (_QWORD *)*v21 != v20) )
        __fastfail(3u);
      *v21 = v18;
      *(_QWORD *)(v18 + 8) = v21;
      v20[1] = v20;
      *v20 = v20;
      if ( !*((_BYTE *)v19 + 73) && !*((_BYTE *)v19 + 72) )
      {
        RIMLockExclusive((__int64)(v19 + 69));
        if ( *((_BYTE *)v19 + 568) )
        {
          *((_BYTE *)v19 + 568) = 0;
          rimProcessInput(v19, v6 + 80, a2, v6 + 336, 0);
          rimSignalReadComplete(v19, v6 + 80);
        }
        else
        {
          WPP_RECORDER_SF_qq(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            3u,
            0x15u,
            0x5Au,
            (__int64)&WPP_6b2f809fb36834de968d7798a4905e6c_Traceguids,
            v19,
            v6 + 80);
        }
        v19[70] = 0LL;
        ExReleasePushLockExclusiveEx(v19 + 69, 0LL);
        KeLeaveCriticalRegion();
      }
      ObfDereferenceObject(v19);
    }
    ObfDereferenceObject(v6);
  }
  return WPP_RECORDER_SF_(
           (__int64)WPP_GLOBAL_Control->DeviceExtension,
           3u,
           0x14u,
           0x5Bu,
           (__int64)&WPP_6b2f809fb36834de968d7798a4905e6c_Traceguids);
}
