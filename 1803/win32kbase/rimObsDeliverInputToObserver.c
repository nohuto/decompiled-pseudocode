/*
 * XREFs of rimObsDeliverInputToObserver @ 0x1C01050B4
 * Callers:
 *     rimObsRouteInputAndCheckForExclusiveObservers @ 0x1C0105778 (rimObsRouteInputAndCheckForExclusiveObservers.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C003A778 (WPP_RECORDER_SF_.c)
 *     RIMLockExclusive @ 0x1C003B4E0 (RIMLockExclusive.c)
 *     Win32AllocPoolZInit @ 0x1C004DA00 (Win32AllocPoolZInit.c)
 *     memset @ 0x1C0079EC0 (memset.c)
 *     rimObsCheckForExistingDeviceHandle @ 0x1C0104CC4 (rimObsCheckForExistingDeviceHandle.c)
 *     rimObsCopyMessage @ 0x1C0104F50 (rimObsCopyMessage.c)
 *     rimObsPushInputMessage @ 0x1C01055D0 (rimObsPushInputMessage.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall rimObsDeliverInputToObserver(__int64 a1, __int64 a2)
{
  __int64 v2; // r15
  int v5; // ebx
  void *v6; // rdx
  HANDLE v7; // r14
  _QWORD *v8; // rax
  _QWORD *v9; // rdx
  int v10; // r12d
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rdx
  unsigned __int64 v14; // rax
  int v15; // ecx
  __int64 v16; // rcx
  __int64 v17; // rax
  void **v18; // rsi
  unsigned int v19; // r9d
  __int64 v20; // rdx
  void *v21; // rcx
  _QWORD v23[6]; // [rsp+48h] [rbp-29h] BYREF
  _DWORD v24[12]; // [rsp+78h] [rbp+7h] BYREF
  HANDLE Handle; // [rsp+D8h] [rbp+67h] BYREF

  v2 = a2 + 168;
  v5 = 0;
  RIMLockExclusive(a2 + 168);
  v6 = *(void **)(a1 + 32);
  Handle = (HANDLE)-1LL;
  Handle = rimObsCheckForExistingDeviceHandle(a2, v6);
  v7 = Handle;
  if ( Handle == (HANDLE)-1LL )
  {
    v5 = ObOpenObjectByPointer(*(PVOID *)(a1 + 32), 0, 0LL, 3u, ExRawInputManagerObjectType, 0, &Handle);
    if ( v5 < 0 )
      goto LABEL_32;
    v8 = Win32AllocPoolZInit(0x18uLL, 0x65684F52u);
    if ( !v8 )
    {
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        3u,
        0x13u,
        0xBu,
        (__int64)&WPP_1670ca8aa8063ace32855d68d9fa11a1_Traceguids);
      v5 = -1073741670;
      ObCloseHandle(Handle, *(_BYTE *)(a2 + 64));
      goto LABEL_32;
    }
    v8[2] = Handle;
    v9 = *(_QWORD **)(a2 + 128);
    if ( *v9 != a2 + 120 )
      __fastfail(3u);
    *v8 = a2 + 120;
    v8[1] = v9;
    *v9 = v8;
    v7 = Handle;
    *(_QWORD *)(a2 + 128) = v8;
  }
  v10 = 48;
  memset(v23, 0, sizeof(v23));
  if ( *(_DWORD *)(a2 + 96) < 0x30u )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v12, v11);
    v7 = Handle;
  }
  v13 = *(unsigned int *)(a1 + 256);
  if ( (int)v13 < 0 )
  {
    v5 = *(_DWORD *)(a1 + 256);
LABEL_16:
    if ( v5 < 0 )
      goto LABEL_32;
    v15 = *(unsigned __int8 *)(a1 + 48);
    v23[3] = *(_QWORD *)(a1 + 264);
    LODWORD(v23[4]) = v15;
    LODWORD(v23[0]) = 0;
    LODWORD(v23[2]) = v13;
    v23[1] = v7;
    v23[5] = 0LL;
    if ( (int)v13 < 0 )
      goto LABEL_26;
    if ( v15 )
    {
      v16 = (unsigned int)(v15 - 1);
      if ( (_DWORD)v16 )
      {
        if ( (_DWORD)v16 == 1 )
          v23[5] = *(_QWORD *)(*(_QWORD *)(a1 + 464) + 24LL);
        else
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v16, v13);
LABEL_26:
        if ( *(_DWORD *)(a2 + 80) == 1 )
        {
          v18 = *(void ***)(a2 + 88);
          v5 = rimObsCopyMessage((__int64)v23, *(unsigned int *)(a2 + 64), v18, *(_DWORD *)(a2 + 96));
          if ( v5 == -1073741789 )
          {
            memset(v24, 0, sizeof(v24));
            v19 = *(_DWORD *)(a2 + 96);
            v20 = *(unsigned int *)(a2 + 64);
            v24[0] = 1;
            v24[2] = 0;
            v24[3] = v10;
            rimObsCopyMessage((__int64)v24, v20, v18, v19);
            v5 = rimObsPushInputMessage(a2, v23);
          }
          v21 = *(void **)(a2 + 72);
          *(_DWORD *)(a2 + 80) = 0;
          ZwSetEvent(v21, 0LL);
        }
        else
        {
          v5 = rimObsPushInputMessage(a2, v23);
          if ( v5 == -1073741756 )
            v5 = 0;
        }
        goto LABEL_32;
      }
      v17 = a1 + 500;
    }
    else
    {
      v17 = a1 + 476;
    }
    v23[5] = v17;
    goto LABEL_26;
  }
  v14 = *(_QWORD *)(a1 + 264);
  if ( v14 > 0xFFFFFFCF )
    v5 = -1073741675;
  if ( v5 >= 0 )
  {
    v10 = v14 + 48;
    goto LABEL_16;
  }
LABEL_32:
  *(_QWORD *)(v2 + 8) = 0LL;
  ExReleasePushLockExclusiveEx(v2, 0LL);
  KeLeaveCriticalRegion();
  return (unsigned int)v5;
}
