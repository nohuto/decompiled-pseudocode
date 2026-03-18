/*
 * XREFs of rimObsDeliverInputToObserver @ 0x1C0157A68
 * Callers:
 *     rimObsRouteInputAndCheckForExclusiveObservers @ 0x1C01581D8 (rimObsRouteInputAndCheckForExclusiveObservers.c)
 * Callees:
 *     Win32AllocPoolZInit @ 0x1C0012FC0 (Win32AllocPoolZInit.c)
 *     WPP_RECORDER_SF_ @ 0x1C002D584 (WPP_RECORDER_SF_.c)
 *     RIMLockExclusive @ 0x1C0031380 (RIMLockExclusive.c)
 *     memset @ 0x1C00BF640 (memset.c)
 *     rimObsCheckForExistingDeviceHandle @ 0x1C0157654 (rimObsCheckForExistingDeviceHandle.c)
 *     rimObsCopyMessage @ 0x1C0157900 (rimObsCopyMessage.c)
 *     rimObsPushInputMessage @ 0x1C0157FD0 (rimObsPushInputMessage.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01C8BF4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall rimObsDeliverInputToObserver(__int64 a1, __int64 a2)
{
  __int64 v2; // r14
  int v5; // ebx
  _QWORD *v6; // rcx
  __int64 v7; // r8
  HANDLE v8; // rdx
  _QWORD *v9; // rax
  int v10; // edx
  _QWORD *v11; // rdx
  __int64 v12; // r8
  int v13; // r15d
  unsigned __int64 v14; // rax
  int v15; // ecx
  __int64 v16; // rcx
  __int64 v17; // rax
  void **v18; // rsi
  unsigned int v19; // r9d
  __int64 v20; // rdx
  void *v21; // rcx
  _DWORD v23[2]; // [rsp+48h] [rbp-29h] BYREF
  HANDLE v24; // [rsp+50h] [rbp-21h]
  int v25; // [rsp+58h] [rbp-19h]
  int v26; // [rsp+5Ch] [rbp-15h]
  __int64 v27; // [rsp+60h] [rbp-11h]
  int v28; // [rsp+68h] [rbp-9h]
  int v29; // [rsp+6Ch] [rbp-5h]
  __int64 v30; // [rsp+70h] [rbp-1h]
  _DWORD v31[12]; // [rsp+78h] [rbp+7h] BYREF
  HANDLE Handle; // [rsp+D8h] [rbp+67h] BYREF

  v2 = a2 + 176;
  v5 = 0;
  RIMLockExclusive(a2 + 176);
  Handle = rimObsCheckForExistingDeviceHandle(a2, *(PVOID *)(a1 + 32));
  v8 = Handle;
  if ( Handle == (HANDLE)-1LL )
  {
    v5 = ObOpenObjectByPointer(*(PVOID *)(a1 + 32), 0, 0LL, 3u, ExRawInputManagerObjectType, 0, &Handle);
    if ( v5 < 0 )
      goto LABEL_35;
    v9 = Win32AllocPoolZInit(0x18uLL, 1701334866LL);
    v6 = v9;
    if ( !v9 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v10) = 3;
        WPP_RECORDER_SF_((_DWORD)gRimLog, v10, 1, 11, (__int64)&WPP_96b8d168e8993da494f8231fea9fe50b_Traceguids);
      }
      v5 = -1073741670;
      ObCloseHandle(Handle, *(_BYTE *)(a2 + 72));
      goto LABEL_35;
    }
    v9[2] = Handle;
    v11 = *(_QWORD **)(a2 + 136);
    if ( *v11 != a2 + 128 )
      __fastfail(3u);
    *v9 = a2 + 128;
    v9[1] = v11;
    *v11 = v9;
    v8 = Handle;
    *(_QWORD *)(a2 + 136) = v9;
  }
  v23[1] = 0;
  v26 = 0;
  v29 = 0;
  if ( *(_DWORD *)(a2 + 104) < 0x30u )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v6, v8, v7);
    v8 = Handle;
  }
  v12 = *(unsigned int *)(a1 + 256);
  v13 = 48;
  if ( (int)v12 < 0 )
  {
    v5 = *(_DWORD *)(a1 + 256);
  }
  else
  {
    v14 = *(_QWORD *)(a1 + 264);
    if ( v14 > 0xFFFFFFCF )
      v5 = -1073741675;
    v13 = v14 + 48;
    if ( v5 < 0 )
      v13 = 48;
  }
  if ( v5 >= 0 )
  {
    v15 = *(unsigned __int8 *)(a1 + 48);
    v27 = *(_QWORD *)(a1 + 264);
    v28 = v15;
    v23[0] = 0;
    v25 = v12;
    v24 = v8;
    v30 = 0LL;
    if ( (int)v12 < 0 )
      goto LABEL_29;
    if ( v15 )
    {
      v16 = (unsigned int)(v15 - 1);
      if ( (_DWORD)v16 )
      {
        if ( (_DWORD)v16 == 1 )
          v30 = *(_QWORD *)(*(_QWORD *)(a1 + 464) + 24LL);
        else
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v16, v8, v12);
LABEL_29:
        if ( *(_DWORD *)(a2 + 88) == 1 )
        {
          v18 = *(void ***)(a2 + 96);
          v5 = rimObsCopyMessage((__int64)v23, *(unsigned int *)(a2 + 72), v18, *(_DWORD *)(a2 + 104));
          if ( v5 == -1073741789 )
          {
            memset(v31, 0, sizeof(v31));
            v19 = *(_DWORD *)(a2 + 104);
            v20 = *(unsigned int *)(a2 + 72);
            v31[0] = 1;
            v31[2] = 0;
            v31[3] = v13;
            rimObsCopyMessage((__int64)v31, v20, v18, v19);
            v5 = rimObsPushInputMessage(a2, v23);
          }
          v21 = *(void **)(a2 + 80);
          *(_DWORD *)(a2 + 88) = 0;
          ZwSetEvent(v21, 0LL);
        }
        else
        {
          v5 = rimObsPushInputMessage(a2, v23);
          if ( v5 == -1073741756 )
            v5 = 0;
        }
        goto LABEL_35;
      }
      v17 = a1 + 504;
    }
    else
    {
      v17 = a1 + 476;
    }
    v30 = v17;
    goto LABEL_29;
  }
LABEL_35:
  *(_QWORD *)(v2 + 8) = 0LL;
  ExReleasePushLockExclusiveEx(v2, 0LL);
  KeLeaveCriticalRegion();
  return (unsigned int)v5;
}
