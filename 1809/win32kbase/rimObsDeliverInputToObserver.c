/*
 * XREFs of rimObsDeliverInputToObserver @ 0x1C012CCD8
 * Callers:
 *     rimObsRouteInputAndCheckForExclusiveObservers @ 0x1C012D428 (rimObsRouteInputAndCheckForExclusiveObservers.c)
 * Callees:
 *     Win32AllocPoolZInit @ 0x1C002EB70 (Win32AllocPoolZInit.c)
 *     WPP_RECORDER_SF_ @ 0x1C0031118 (WPP_RECORDER_SF_.c)
 *     RIMLockExclusive @ 0x1C0031320 (RIMLockExclusive.c)
 *     memset @ 0x1C00AF780 (memset.c)
 *     rimObsCheckForExistingDeviceHandle @ 0x1C012C8CC (rimObsCheckForExistingDeviceHandle.c)
 *     rimObsCopyMessage @ 0x1C012CB70 (rimObsCopyMessage.c)
 *     rimObsPushInputMessage @ 0x1C012D234 (rimObsPushInputMessage.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
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
  __int64 v13; // r8
  __int64 v14; // rdx
  unsigned __int64 v15; // rax
  int v16; // ecx
  __int64 v17; // rcx
  __int64 v18; // rax
  void **v19; // rsi
  unsigned int v20; // r9d
  __int64 v21; // rdx
  void *v22; // rcx
  _QWORD v24[6]; // [rsp+48h] [rbp-29h] BYREF
  _DWORD v25[12]; // [rsp+78h] [rbp+7h] BYREF
  HANDLE Handle; // [rsp+D8h] [rbp+67h] BYREF

  v2 = a2 + 176;
  v5 = 0;
  RIMLockExclusive(a2 + 176);
  v6 = *(void **)(a1 + 32);
  Handle = (HANDLE)-1LL;
  Handle = rimObsCheckForExistingDeviceHandle(a2, v6);
  v7 = Handle;
  if ( Handle == (HANDLE)-1LL )
  {
    v5 = ObOpenObjectByPointer(*(PVOID *)(a1 + 32), 0, 0LL, 3u, ExRawInputManagerObjectType, 0, &Handle);
    if ( v5 < 0 )
      goto LABEL_33;
    v8 = Win32AllocPoolZInit(0x18uLL, 0x65684F52u);
    if ( !v8 )
    {
      WPP_RECORDER_SF_(gRimLog, 3u, 0x14u, 0xBu, (__int64)&WPP_45cc41b0333434924b60e5f2a9a53a17_Traceguids);
      v5 = -1073741670;
      ObCloseHandle(Handle, *(_BYTE *)(a2 + 72));
      goto LABEL_33;
    }
    v8[2] = Handle;
    v9 = *(_QWORD **)(a2 + 136);
    if ( *v9 != a2 + 128 )
      __fastfail(3u);
    *v8 = a2 + 128;
    v8[1] = v9;
    *v9 = v8;
    v7 = Handle;
    *(_QWORD *)(a2 + 136) = v8;
  }
  v10 = 48;
  memset(v24, 0, sizeof(v24));
  if ( *(_DWORD *)(a2 + 104) < 0x30u )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v12, v11, v13);
    v7 = Handle;
  }
  v14 = *(unsigned int *)(a1 + 256);
  if ( (int)v14 < 0 )
  {
    v5 = *(_DWORD *)(a1 + 256);
  }
  else
  {
    v15 = *(_QWORD *)(a1 + 264);
    v13 = 3221225621LL;
    if ( v15 > 0xFFFFFFCF )
      v5 = -1073741675;
    v10 = v15 + 48;
    if ( v5 < 0 )
      v10 = 48;
  }
  if ( v5 >= 0 )
  {
    v16 = *(unsigned __int8 *)(a1 + 48);
    v24[3] = *(_QWORD *)(a1 + 264);
    LODWORD(v24[4]) = v16;
    LODWORD(v24[0]) = 0;
    LODWORD(v24[2]) = v14;
    v24[1] = v7;
    v24[5] = 0LL;
    if ( (int)v14 < 0 )
      goto LABEL_27;
    if ( v16 )
    {
      v17 = (unsigned int)(v16 - 1);
      if ( (_DWORD)v17 )
      {
        if ( (_DWORD)v17 == 1 )
          v24[5] = *(_QWORD *)(*(_QWORD *)(a1 + 464) + 24LL);
        else
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v17, v14, v13);
LABEL_27:
        if ( *(_DWORD *)(a2 + 88) == 1 )
        {
          v19 = *(void ***)(a2 + 96);
          v5 = rimObsCopyMessage((__int64)v24, *(unsigned int *)(a2 + 72), v19, *(_DWORD *)(a2 + 104));
          if ( v5 == -1073741789 )
          {
            memset(v25, 0, sizeof(v25));
            v20 = *(_DWORD *)(a2 + 104);
            v21 = *(unsigned int *)(a2 + 72);
            v25[0] = 1;
            v25[2] = 0;
            v25[3] = v10;
            rimObsCopyMessage((__int64)v25, v21, v19, v20);
            v5 = rimObsPushInputMessage(a2, v24);
          }
          v22 = *(void **)(a2 + 80);
          *(_DWORD *)(a2 + 88) = 0;
          ZwSetEvent(v22, 0LL);
        }
        else
        {
          v5 = rimObsPushInputMessage(a2, v24);
          if ( v5 == -1073741756 )
            v5 = 0;
        }
        goto LABEL_33;
      }
      v18 = a1 + 500;
    }
    else
    {
      v18 = a1 + 476;
    }
    v24[5] = v18;
    goto LABEL_27;
  }
LABEL_33:
  *(_QWORD *)(v2 + 8) = 0LL;
  ExReleasePushLockExclusiveEx(v2, 0LL);
  KeLeaveCriticalRegion();
  return (unsigned int)v5;
}
