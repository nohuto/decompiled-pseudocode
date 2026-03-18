/*
 * XREFs of RIMDiscoverDevicesOfInputType @ 0x1C00F9D88
 * Callers:
 *     RIMAddInputOfType @ 0x1C00E01B0 (RIMAddInputOfType.c)
 *     RIMDirectStartDeviceClassNotifications @ 0x1C00E1330 (RIMDirectStartDeviceClassNotifications.c)
 *     RIMRegisterForInputWithCallbacks @ 0x1C00E4800 (RIMRegisterForInputWithCallbacks.c)
 * Callees:
 *     ApiSetIsRemoteConnection @ 0x1C000F32C (ApiSetIsRemoteConnection.c)
 *     ?_CalledOnInputThread@CInputThread@@AEBA_NXZ @ 0x1C0039F28 (-_CalledOnInputThread@CInputThread@@AEBA_NXZ.c)
 *     WPP_RECORDER_SF_ @ 0x1C003A778 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_q @ 0x1C00739CC (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qq @ 0x1C00BCB94 (WPP_RECORDER_SF_qq.c)
 *     rimFindReferencedPrimaryRimObj @ 0x1C00DEAF0 (rimFindReferencedPrimaryRimObj.c)
 *     DeviceTypeToRimInputType @ 0x1C00DF1B0 (DeviceTypeToRimInputType.c)
 *     RIMRegisterForDeviceClassNotifications @ 0x1C00FB16C (RIMRegisterForDeviceClassNotifications.c)
 *     rimPassivateSecondaryRims @ 0x1C00FD684 (rimPassivateSecondaryRims.c)
 *     rimScheduleSecondaryRimPnpNotifications @ 0x1C00FDA44 (rimScheduleSecondaryRimPnpNotifications.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMDiscoverDevicesOfInputType(_QWORD *Object)
{
  int ReferencedPrimaryRimObj; // ebp
  CInputThread *v3; // rdi
  bool v4; // bl
  int v5; // ecx
  PVOID v6; // rbx
  __int64 v7; // rbx
  _QWORD *v8; // r15
  _QWORD *v9; // rdi
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rdx
  PVOID Objecta; // [rsp+68h] [rbp+10h] BYREF

  ReferencedPrimaryRimObj = -1073741811;
  if ( (unsigned int)ApiSetIsRemoteConnection() || !Object[14] )
    return 0;
  v3 = gpInputThread;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v3, 0LL);
  v4 = CInputThread::_CalledOnInputThread(v3);
  ExReleasePushLockSharedEx(v3, 0LL);
  KeLeaveCriticalRegion();
  if ( v4 )
  {
    if ( *((_DWORD *)Object + 213) )
    {
      WPP_RECORDER_SF_q(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        3u,
        0x14u,
        0xAu,
        (__int64)&WPP_c626071b4c2b3ecdfead228ecb57b59b_Traceguids,
        Object);
      v5 = *((_DWORD *)Object + 19);
      Objecta = 0LL;
      ReferencedPrimaryRimObj = rimFindReferencedPrimaryRimObj(v5, (struct _LIST_ENTRY **)&Objecta);
      if ( ReferencedPrimaryRimObj < 0 )
      {
        WPP_RECORDER_SF_q(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          3u,
          0x14u,
          0xCu,
          (__int64)&WPP_c626071b4c2b3ecdfead228ecb57b59b_Traceguids,
          Object);
      }
      else
      {
        v6 = Objecta;
        WPP_RECORDER_SF_qq(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          3u,
          0x14u,
          0xBu,
          (__int64)&WPP_c626071b4c2b3ecdfead228ecb57b59b_Traceguids,
          Object,
          Objecta);
        *((_DWORD *)Object + 218) = 1;
        rimScheduleSecondaryRimPnpNotifications(v6, Object);
        ObfDereferenceObject(v6);
      }
      return (unsigned int)ReferencedPrimaryRimObj;
    }
    if ( *((_DWORD *)Object + 212) && (*((_DWORD *)Object + 19) & 0x20) != 0 )
    {
      WPP_RECORDER_SF_q(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        3u,
        0x14u,
        0xDu,
        (__int64)&WPP_c626071b4c2b3ecdfead228ecb57b59b_Traceguids,
        Object);
      rimPassivateSecondaryRims(Object);
    }
  }
  v7 = 0LL;
  v8 = Object + 15;
  v9 = Object + 38;
  do
  {
    if ( ((unsigned int)DeviceTypeToRimInputType(v7) & *((_DWORD *)Object + 19)) != 0 )
    {
      if ( *(v9 - 11) )
      {
        WPP_RECORDER_SF_(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          3u,
          0x13u,
          0xEu,
          (__int64)&WPP_c626071b4c2b3ecdfead228ecb57b59b_Traceguids);
      }
      else
      {
        if ( !*v9 )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v11, v10);
        ReferencedPrimaryRimObj = ObReferenceObjectByPointer(Object, 3u, ExRawInputManagerObjectType, 0);
        if ( ReferencedPrimaryRimObj >= 0 )
        {
          ReferencedPrimaryRimObj = RIMRegisterForDeviceClassNotifications(&Object[v7 + 27], v12, *v8, Object[14]);
          if ( ReferencedPrimaryRimObj < 0 )
            ObfDereferenceObject(Object);
        }
      }
    }
    v7 = (unsigned int)(v7 + 1);
    ++v9;
    v8 += 4;
  }
  while ( (unsigned int)v7 <= 2 );
  return (unsigned int)ReferencedPrimaryRimObj;
}
