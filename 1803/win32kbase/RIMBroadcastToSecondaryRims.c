/*
 * XREFs of RIMBroadcastToSecondaryRims @ 0x1C00FA084
 * Callers:
 *     ?RIMCallBack@CBaseInput@@AEAAXPEAURIMDevChangeStruct@@@Z @ 0x1C0123CA0 (-RIMCallBack@CBaseInput@@AEAAXPEAURIMDevChangeStruct@@@Z.c)
 * Callees:
 *     ?_CalledOnInputThread@CInputThread@@AEBA_NXZ @ 0x1C0039F28 (-_CalledOnInputThread@CInputThread@@AEBA_NXZ.c)
 *     WPP_RECORDER_SF_ @ 0x1C003A778 (WPP_RECORDER_SF_.c)
 *     RIMLockExclusive @ 0x1C003B4E0 (RIMLockExclusive.c)
 *     rimIsSecondaryRimUsagesMatchingForDevice @ 0x1C00DEEB0 (rimIsSecondaryRimUsagesMatchingForDevice.c)
 *     RIMUpdateSecondaryRim @ 0x1C00FB5A4 (RIMUpdateSecondaryRim.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMBroadcastToSecondaryRims(__int128 *a1)
{
  CInputThread *v2; // rdi
  bool v3; // bl
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdx
  _QWORD *v7; // rcx
  struct _LIST_ENTRY *Flink; // rdi
  struct _LIST_ENTRY *v9; // rbx
  struct _LIST_ENTRY ***v10; // rax
  struct _LIST_ENTRY **p_Blink; // rbx
  _QWORD *v12; // rbx
  __int64 v13; // rcx
  _QWORD *v14; // r8
  _QWORD *v15; // rax
  _QWORD *v16; // rdx
  __int64 v17; // rax
  __int128 v18; // xmm0
  _QWORD *v20; // [rsp+30h] [rbp-40h] BYREF
  struct _LIST_ENTRY *v21; // [rsp+38h] [rbp-38h]
  __int128 v22; // [rsp+40h] [rbp-30h] BYREF
  __int64 v23; // [rsp+50h] [rbp-20h]
  __int64 v24; // [rsp+58h] [rbp-18h]
  __int64 v25; // [rsp+60h] [rbp-10h]

  WPP_RECORDER_SF_(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    0x14u,
    0x3Fu,
    (__int64)&WPP_d80feb762ea23db244f84e50bb903cde_Traceguids);
  v2 = gpInputThread;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v2, 0LL);
  v3 = CInputThread::_CalledOnInputThread(v2);
  ExReleasePushLockSharedEx(v2, 0LL);
  KeLeaveCriticalRegion();
  if ( !v3 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v5, v4);
  RIMLockExclusive((__int64)&gObListLock);
  Flink = gObRimList.Flink;
  v21 = (struct _LIST_ENTRY *)&v20;
  v20 = &v20;
  while ( Flink != &gObRimList )
  {
    v9 = Flink - 1;
    if ( HIDWORD(Flink[52].Flink) )
    {
      if ( HIDWORD(v9[4].Blink) != 32 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v7, v6);
      if ( !BYTE1(v9[4].Blink)
        && !LOBYTE(v9[4].Blink)
        && (unsigned int)rimIsSecondaryRimUsagesMatchingForDevice((__int64)&Flink[-1], *((_QWORD *)a1 + 3))
        && ObReferenceObjectByPointer(v7, 3u, ExRawInputManagerObjectType, 1) >= 0 )
      {
        v10 = (struct _LIST_ENTRY ***)v21;
        p_Blink = &v9[53].Blink;
        if ( v21->Flink != (struct _LIST_ENTRY *)&v20 )
          __fastfail(3u);
        p_Blink[1] = v21;
        v7 = &v20;
        *p_Blink = (struct _LIST_ENTRY *)&v20;
        *v10 = p_Blink;
        v21 = (struct _LIST_ENTRY *)p_Blink;
      }
    }
    Flink = Flink->Flink;
  }
  qword_1C01A1640 = 0LL;
  ExReleasePushLockExclusiveEx(&gObListLock, 0LL);
  KeLeaveCriticalRegion();
  v12 = v20;
  while ( v12 != &v20 )
  {
    v13 = *v12;
    v14 = v12 - 107;
    v15 = v12;
    v12 = (_QWORD *)v13;
    if ( *(_QWORD **)(v13 + 8) != v15 || (v16 = (_QWORD *)v15[1], (_QWORD *)*v16 != v15) )
      __fastfail(3u);
    *v16 = v13;
    *(_QWORD *)(v13 + 8) = v16;
    v15[1] = v15;
    *v15 = v15;
    v17 = v14[48];
    v18 = *a1;
    v24 = *((_QWORD *)a1 + 3);
    v23 = v17;
    v25 = v14[8];
    v22 = v18;
    ObfDereferenceObject(v14);
    RIMUpdateSecondaryRim(&v22);
  }
  return WPP_RECORDER_SF_(
           (__int64)WPP_GLOBAL_Control->DeviceExtension,
           3u,
           0x14u,
           0x40u,
           (__int64)&WPP_d80feb762ea23db244f84e50bb903cde_Traceguids);
}
