/*
 * XREFs of RIMUpdateSecondaryRim @ 0x1C00FB5A4
 * Callers:
 *     RIMBroadcastToSecondaryRims @ 0x1C00FA084 (RIMBroadcastToSecondaryRims.c)
 *     ?RIMCallBack@CBaseInput@@AEAAXPEAURIMDevChangeStruct@@@Z @ 0x1C0123CA0 (-RIMCallBack@CBaseInput@@AEAAXPEAURIMDevChangeStruct@@@Z.c)
 * Callees:
 *     RawInputManagerObjectResolveHandle @ 0x1C000F350 (RawInputManagerObjectResolveHandle.c)
 *     W32GetThreadWin32Thread @ 0x1C0023134 (W32GetThreadWin32Thread.c)
 *     WPP_RECORDER_SF_ @ 0x1C003A778 (WPP_RECORDER_SF_.c)
 *     RIMLockExclusive @ 0x1C003B4E0 (RIMLockExclusive.c)
 *     rimIsSecondaryRimUsagesMatchingForDevice @ 0x1C00DEEB0 (rimIsSecondaryRimUsagesMatchingForDevice.c)
 *     RIMHandleAnySignalledReadsOnDestroyed @ 0x1C00FAF84 (RIMHandleAnySignalledReadsOnDestroyed.c)
 *     rimOnPnpArrived @ 0x1C00FCE28 (rimOnPnpArrived.c)
 *     ApiSetEditionClientRimDevCallback @ 0x1C013D820 (ApiSetEditionClientRimDevCallback.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMUpdateSecondaryRim(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rdi
  char *v5; // r15
  __int64 v6; // rbp
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 ThreadWin32Thread; // rax
  __int64 v10; // rcx
  _QWORD *v11; // rsi
  int v12; // ebx
  int v13; // eax
  __int16 v14; // r9
  __int16 v15; // r11
  unsigned __int8 v16; // dl
  __int64 v17; // rax
  __int64 v18; // r8
  int v19; // r10d
  int v20; // r12d
  __int64 v21; // r13
  int v22; // ecx
  int v23; // eax
  int v24; // eax
  void *v25; // rcx
  PVOID Object; // [rsp+90h] [rbp+8h] BYREF
  __int64 v28; // [rsp+98h] [rbp+10h]

  WPP_RECORDER_SF_(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    0x14u,
    0x3Du,
    (__int64)&WPP_d80feb762ea23db244f84e50bb903cde_Traceguids);
  v4 = *(_QWORD *)(a1 + 24);
  v5 = *(char **)(a1 + 32);
  Object = 0LL;
  v6 = *(_QWORD *)(v4 + 416);
  if ( !v5 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v3, v2);
  if ( *(_BYTE *)(v4 + 128) != 3 && (int)RawInputManagerObjectResolveHandle(v5, 3u, 1, &Object) >= 0 )
  {
    if ( Object == *(PVOID *)(v4 + 416) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v8, v7);
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    v11 = Object;
    if ( ThreadWin32Thread
      && gptiCurrent
      && v11[4] == PsGetCurrentProcess(v10)
      && v11[78]
      && (*((_DWORD *)gptiCurrent + 120) & 1) == 0
      && (unsigned int)rimIsSecondaryRimUsagesMatchingForDevice((__int64)v11, v4) )
    {
      RIMLockExclusive((__int64)(v11 + 12));
      RIMHandleAnySignalledReadsOnDestroyed(a1, (__int64)v11);
      v11[13] = 0LL;
      ExReleasePushLockExclusiveEx(v11 + 12, 0LL);
      KeLeaveCriticalRegion();
      v12 = 0;
      if ( *(_BYTE *)(v6 + 72) && !*(_BYTE *)(v6 + 73) || *(_BYTE *)(v6 + 74) || *((_DWORD *)v11 + 218) )
      {
        *(_QWORD *)(v6 + 560) = 0LL;
        ExReleasePushLockExclusiveEx(v6 + 552, 0LL);
        KeLeaveCriticalRegion();
        v12 = 1;
      }
      LODWORD(Object) = 2;
      if ( *(_DWORD *)a1 == 2 )
      {
        v13 = *(_DWORD *)(v4 + 264);
        if ( (v13 & 0x20) == 0 && !*(_QWORD *)(v4 + 304) )
        {
          *(_DWORD *)(v4 + 280) |= 0x40u;
          *(_DWORD *)(v4 + 264) = v13 | 0xC001;
          rimOnPnpArrived(v6, v4 + 80, -1LL);
          if ( *(_QWORD *)(v4 + 304) )
            *(_DWORD *)(v4 + 280) |= 0x20u;
        }
      }
      *(_QWORD *)(v6 + 104) = 0LL;
      ExReleasePushLockExclusiveEx(v6 + 96, 0LL);
      KeLeaveCriticalRegion();
      *((_BYTE *)v11 + 75) = 1;
      ObReferenceObjectByPointer((PVOID)v4, 3u, ExRawInputManagerObjectType, 0);
      v14 = 0;
      v15 = 0;
      *((_QWORD *)gptiCurrent + 165) = v4;
      *((_QWORD *)gptiCurrent + 166) = v6;
      *((_QWORD *)gptiCurrent + 167) = v11;
      v16 = *(_BYTE *)(v4 + 128);
      if ( v16 == 2 )
      {
        v17 = *(_QWORD *)(v4 + 544);
        if ( v17 )
        {
          v14 = *(_WORD *)(v17 + 40);
          v15 = *(_WORD *)(v17 + 42);
        }
      }
      v18 = *(_QWORD *)(v4 + 96);
      v19 = *(_DWORD *)a1;
      v20 = *(_DWORD *)(a1 + 8);
      v21 = *(_QWORD *)(a1 + 16);
      v28 = v11[78];
      v22 = *(_DWORD *)(v4 + 264);
      if ( (v22 & 0x1000) != 0 )
      {
        v23 = v19;
        if ( v19 == 1 )
          v23 = (int)Object;
        if ( v19 == 4 )
          v23 = 3;
        v19 = v23;
        if ( (v22 & 0x20000) != 0 || (v22 & 0x40000) != 0 )
          v18 = *(_QWORD *)(v4 + 424);
      }
      ApiSetEditionClientRimDevCallback(v19, v16, *(_DWORD *)(v4 + 64), v20, (__int64)v5, v18, v14, v15, v21, v28);
      *(_DWORD *)(v4 + 264) |= 0x8000u;
      *((_QWORD *)gptiCurrent + 165) = 0LL;
      *((_QWORD *)gptiCurrent + 166) = 0LL;
      *((_QWORD *)gptiCurrent + 167) = 0LL;
      *((_BYTE *)v11 + 75) = 0;
      ObfDereferenceObject(v11);
      RIMLockExclusive(v6 + 96);
      if ( v12 )
        RIMLockExclusive(v6 + 552);
      if ( (*(_DWORD *)(v4 + 280) & 0x80u) != 0 || (*(_DWORD *)(v4 + 264) & 0x1000) != 0 )
      {
        v24 = *(_DWORD *)a1;
        if ( *(_DWORD *)a1 == 2 )
        {
          *(_DWORD *)(v4 + 264) |= 0x400000u;
          v24 = *(_DWORD *)a1;
        }
        if ( v24 == 3 )
          *(_DWORD *)(v4 + 264) |= 0x800000u;
      }
      v25 = (void *)v4;
    }
    else
    {
      v25 = v11;
    }
    ObfDereferenceObject(v25);
  }
  return WPP_RECORDER_SF_(
           (__int64)WPP_GLOBAL_Control->DeviceExtension,
           3u,
           0x14u,
           0x3Eu,
           (__int64)&WPP_d80feb762ea23db244f84e50bb903cde_Traceguids);
}
