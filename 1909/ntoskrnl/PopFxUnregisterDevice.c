/*
 * XREFs of PopFxUnregisterDevice @ 0x14077189C
 * Callers:
 *     PopFxUnregisterDeviceOrWait @ 0x140732EB8 (PopFxUnregisterDeviceOrWait.c)
 *     PoFxUnregisterDevice @ 0x14078CC80 (PoFxUnregisterDevice.c)
 * Callees:
 *     EtwWrite @ 0x140036670 (EtwWrite.c)
 *     KeWaitForSingleObject @ 0x14003FB10 (KeWaitForSingleObject.c)
 *     EtwEventEnabled @ 0x1400476B0 (EtwEventEnabled.c)
 *     KeSetEvent @ 0x140067990 (KeSetEvent.c)
 *     _TlgWrite @ 0x14008BA00 (_TlgWrite.c)
 *     PoFxActivateComponent @ 0x1400E0A20 (PoFxActivateComponent.c)
 *     PopFxAddLogEntry @ 0x1400E1184 (PopFxAddLogEntry.c)
 *     IoReleaseRemoveLockAndWaitEx @ 0x140177D90 (IoReleaseRemoveLockAndWaitEx.c)
 *     PopFxAssignDeviceToDevNode @ 0x140191D54 (PopFxAssignDeviceToDevNode.c)
 *     PopFxRemoveDevice @ 0x140192838 (PopFxRemoveDevice.c)
 *     PopFxDestroyDeviceDpm @ 0x14019CF54 (PopFxDestroyDeviceDpm.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     PopFxReleaseDevice @ 0x1402F4628 (PopFxReleaseDevice.c)
 *     PopPluginUnregisterDevice @ 0x1402F6254 (PopPluginUnregisterDevice.c)
 *     PopPlCalculateDevicePowerDraw @ 0x140304A14 (PopPlCalculateDevicePowerDraw.c)
 *     PopPlLockPowerPlane @ 0x140304B60 (PopPlLockPowerPlane.c)
 *     PopPlPublishSystemPowerChange @ 0x140304E08 (PopPlPublishSystemPowerChange.c)
 *     PopPlUnlockPowerPlane @ 0x1403055A4 (PopPlUnlockPowerPlane.c)
 *     PopPepUnregisterDevice @ 0x140771A68 (PopPepUnregisterDevice.c)
 *     PopPlUnregisterComponent @ 0x1408B98F4 (PopPlUnregisterComponent.c)
 */

LONG __fastcall PopFxUnregisterDevice(ULONG_PTR BugCheckParameter2)
{
  unsigned int v2; // eax
  unsigned int i; // ebx
  unsigned int v4; // ebx
  struct _KEVENT *v5; // rsi
  REGHANDLE v6; // rbx
  unsigned int j; // r8d
  ULONG_PTR v8; // rcx
  __int64 v9; // r14
  LONG result; // eax
  unsigned __int16 *v11; // r12
  int v12; // ebx
  int v13; // eax
  ULONG64 v14; // r8
  ULONG v15; // r9d
  int v16; // r15d
  __int64 v17; // rax
  int v18; // ecx
  unsigned __int64 k; // rbx
  int v20; // [rsp+38h] [rbp-D0h] BYREF
  unsigned int v21; // [rsp+3Ch] [rbp-CCh] BYREF
  int v22; // [rsp+40h] [rbp-C8h] BYREF
  int v23; // [rsp+44h] [rbp-C4h] BYREF
  int v24; // [rsp+48h] [rbp-C0h] BYREF
  int v25; // [rsp+4Ch] [rbp-BCh] BYREF
  __int64 v26; // [rsp+50h] [rbp-B8h] BYREF
  struct _KEVENT *v27; // [rsp+58h] [rbp-B0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+60h] [rbp-A8h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+78h] [rbp-90h] BYREF
  int *v30; // [rsp+98h] [rbp-70h]
  __int64 v31; // [rsp+A0h] [rbp-68h]
  _DWORD *v32; // [rsp+A8h] [rbp-60h]
  __int64 v33; // [rsp+B0h] [rbp-58h]
  __int64 v34; // [rsp+B8h] [rbp-50h]
  _DWORD v35[2]; // [rsp+C0h] [rbp-48h] BYREF
  int *v36; // [rsp+C8h] [rbp-40h]
  __int64 v37; // [rsp+D0h] [rbp-38h]
  int *v38; // [rsp+D8h] [rbp-30h]
  __int64 v39; // [rsp+E0h] [rbp-28h]
  int *v40; // [rsp+E8h] [rbp-20h]
  __int64 v41; // [rsp+F0h] [rbp-18h]
  __int64 *v42; // [rsp+F8h] [rbp-10h]
  __int64 v43; // [rsp+100h] [rbp-8h]

  if ( (*(_DWORD *)(BugCheckParameter2 + 816) & 1) == 0 )
  {
    v2 = *(_DWORD *)(BugCheckParameter2 + 820);
    for ( i = 0; i < v2; ++i )
    {
      PoFxActivateComponent(BugCheckParameter2, i, 2LL);
      v2 = *(_DWORD *)(BugCheckParameter2 + 820);
    }
    v4 = 0;
    if ( v2 )
    {
      do
        KeWaitForSingleObject(
          (PVOID)(*(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 824) + 8LL * v4++) + 104LL),
          Executive,
          0,
          0,
          0LL);
      while ( v4 < *(_DWORD *)(BugCheckParameter2 + 820) );
    }
  }
  v5 = *(struct _KEVENT **)(BugCheckParameter2 + 48);
  if ( v5 )
  {
    PopFxRemoveDevice(BugCheckParameter2, (_QWORD *)BugCheckParameter2);
    v27 = v5;
    PopFxAddLogEntry((__int64)v5, 0, 2, 0LL);
    if ( PopDiagHandleRegistered )
    {
      v6 = PopDiagHandle;
      if ( EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_DEVICE_UNREGISTRATION) )
      {
        *(_QWORD *)&UserData.Size = 8LL;
        UserData.Ptr = (ULONGLONG)&v27;
        EtwWrite(v6, &POP_ETW_EVENT_DEVICE_UNREGISTRATION, 0LL, 1u, &UserData);
      }
    }
    PopFxAssignDeviceToDevNode((__int64)v5, 0LL);
  }
  for ( j = 0; j < *(_DWORD *)(BugCheckParameter2 + 820); ++j )
  {
    if ( *(int *)(*(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 824) + 8LL * j) + 96LL) > 0 )
      _InterlockedDecrement(&PopFxResidentComponentCount);
  }
  if ( (*(_DWORD *)(BugCheckParameter2 + 816) & 4) != 0 )
    PopFxReleaseDevice(BugCheckParameter2);
  else
    IoReleaseRemoveLockAndWaitEx((PIO_REMOVE_LOCK)(BugCheckParameter2 + 232), 0LL, 0x20u);
  PopPepUnregisterDevice(*(PVOID *)(BugCheckParameter2 + 56));
  v8 = *(_QWORD *)(BugCheckParameter2 + 64);
  if ( v8 )
    PopPluginUnregisterDevice(v8, *(_QWORD *)(BugCheckParameter2 + 72));
  v9 = *(_QWORD *)(BugCheckParameter2 + 1176);
  if ( v9 )
  {
    v11 = *(unsigned __int16 **)(v9 + 16);
    PopPlLockPowerPlane((__int64)v11);
    v12 = *(_DWORD *)(v9 + 32);
    v21 = 0;
    v22 = 1;
    v13 = PopPlCalculateDevicePowerDraw(BugCheckParameter2, &v22, &v21, 0LL);
    *(_DWORD *)(v9 + 32) = v13;
    v16 = v13 - v12;
    if ( pCallbackContext.LevelPlus1 > 5 )
    {
      v24 = v13;
      v17 = *(_QWORD *)(v9 + 16);
      LOWORD(v20) = 1;
      v23 = v16;
      v25 = v16;
      v18 = *(_DWORD *)(v17 + 28);
      v30 = &v20;
      LODWORD(v26) = v16 + v18;
      v32 = v35;
      v34 = *(_QWORD *)(BugCheckParameter2 + 224);
      v35[0] = *(unsigned __int16 *)(BugCheckParameter2 + 216);
      v36 = &v23;
      v38 = &v24;
      v40 = &v25;
      v42 = &v26;
      v31 = 2LL;
      v33 = 2LL;
      v35[1] = 0;
      v37 = 4LL;
      v39 = 4LL;
      v41 = 4LL;
      v43 = 4LL;
      TlgWrite(&pCallbackContext, &unk_1403918DB, 0LL, 0LL, 9u, &pData);
    }
    PopPlPublishSystemPowerChange(v11, v16, v14, v15);
    for ( k = 0LL;
          k < *(unsigned int *)(BugCheckParameter2 + 820);
          PopPlUnregisterComponent(*(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 824) + 8 * k++)) )
    {
      ;
    }
    *(_QWORD *)(v9 + 24) = 0LL;
    *(_QWORD *)(BugCheckParameter2 + 1176) = 0LL;
    PopPlUnlockPowerPlane((__int64)v11);
  }
  if ( v5 )
    KeSetEvent(v5 + 4, 0, 0);
  result = *(_DWORD *)(BugCheckParameter2 + 816);
  if ( (result & 1) != 0 )
    return PopFxDestroyDeviceDpm((__int64)v5, BugCheckParameter2);
  return result;
}
