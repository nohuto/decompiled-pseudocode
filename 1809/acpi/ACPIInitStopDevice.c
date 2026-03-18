/*
 * XREFs of ACPIInitStopDevice @ 0x1C008E718
 * Callers:
 *     ACPIFilterRemoveNonPresentDevices @ 0x1C001A524 (ACPIFilterRemoveNonPresentDevices.c)
 *     ACPIFilterIrpRemoveDevice @ 0x1C002DAE0 (ACPIFilterIrpRemoveDevice.c)
 *     ACPIBusIrpRemoveDevice @ 0x1C004B990 (ACPIBusIrpRemoveDevice.c)
 *     ACPIBusIrpSurpriseRemoval @ 0x1C004BFA0 (ACPIBusIrpSurpriseRemoval.c)
 *     ACPIFilterIrpStopDeviceCompletion @ 0x1C0053A60 (ACPIFilterIrpStopDeviceCompletion.c)
 *     ACPIBusIrpStopDevice @ 0x1C00AA300 (ACPIBusIrpStopDevice.c)
 * Callees:
 *     ACPIInternalClearFlags @ 0x1C000238C (ACPIInternalClearFlags.c)
 *     ACPIGet @ 0x1C0003980 (ACPIGet.c)
 *     AMLIDereferenceHandleEx @ 0x1C000B920 (AMLIDereferenceHandleEx.c)
 *     AMLIEvalNameSpaceObject @ 0x1C000B954 (AMLIEvalNameSpaceObject.c)
 *     ACPIDeviceInternalDeviceRequest @ 0x1C000DA34 (ACPIDeviceInternalDeviceRequest.c)
 *     WPP_RECORDER_SF_Lqss @ 0x1C0020560 (WPP_RECORDER_SF_Lqss.c)
 *     AMLIGetNamedChild @ 0x1C00207C0 (AMLIGetNamedChild.c)
 *     IsNsobjPciBus @ 0x1C009A45C (IsNsobjPciBus.c)
 */

__int64 __fastcall ACPIInitStopDevice(__int64 a1, char a2)
{
  __int64 *v2; // rsi
  char *v3; // rbx
  int v6; // eax
  __int64 *v7; // rax
  __int64 v8; // rsi
  void *v9; // rcx
  void *v10; // rcx
  __int64 *v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rax
  int v15; // ebx
  int v16; // r11d
  __int64 v17; // r9
  char *v18; // rcx
  char *v19; // r10
  __int64 v20; // r9
  char *v21; // rcx
  char *v22; // r10
  struct _KEVENT Event; // [rsp+50h] [rbp-28h] BYREF
  __int64 v24; // [rsp+80h] [rbp+8h] BYREF

  v2 = *(__int64 **)(a1 + 712);
  v3 = (char *)(a1 + 952);
  if ( (*(_DWORD *)(a1 + 952) & 0x40000LL) == 0 && !(unsigned __int8)IsNsobjPciBus(*(_QWORD *)(a1 + 712)) )
  {
    v6 = *(_DWORD *)(a1 + 336);
    if ( v6 )
    {
      if ( v6 != 4 || a2 && *v3 < 0 )
      {
        KeInitializeEvent(&Event, SynchronizationEvent, 0);
        if ( (unsigned int)ACPIDeviceInternalDeviceRequest(
                             (_QWORD *)a1,
                             4u,
                             (__int64)ACPIInitPowerRequestCompletion,
                             (__int64)&Event,
                             a2 != 0 ? 8 : 0) == 259 )
          KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
      }
    }
  }
  if ( (*(_QWORD *)(a1 + 8) & 0x2000000000LL) != 0 && *(_BYTE *)(a1 + 184) )
  {
    v12 = (__int64 *)(a1 + 192);
    v13 = 3LL;
    do
    {
      v14 = *v12++;
      *(_BYTE *)(v14 + 130) = 0;
      --v13;
    }
    while ( v13 );
  }
  ACPIInternalClearFlags(v3, 1LL);
  if ( v2 )
  {
    if ( (*(_DWORD *)v3 & 0x40100) == 0 )
    {
      v7 = AMLIGetNamedChild(v2, 1397310559);
      v8 = (__int64)v7;
      if ( v7 )
      {
        v15 = AMLIEvalNameSpaceObject((unsigned __int64 *)v7, 0LL, 0, 0LL);
        AMLIDereferenceHandleEx(v8);
        if ( v15 >= 0 )
        {
          v16 = ACPIGet((__int64 *)a1, 1096045407, -1878783998, 0LL, 0, 0LL, 0LL, (__int64)&v24, 0LL);
          if ( v16 >= 0 )
          {
            if ( (v24 & 2) != 0 )
            {
              v20 = *(_QWORD *)(a1 + 8);
              v21 = byte_1C006E28A;
              v22 = byte_1C006E28A;
              if ( (v20 & 0x200000000000LL) != 0 )
              {
                v21 = *(char **)(a1 + 560);
                if ( (v20 & 0x400000000000LL) != 0 )
                  v22 = *(char **)(a1 + 568);
              }
              WPP_RECORDER_SF_Lqss(
                (__int64)WPP_GLOBAL_Control->DeviceExtension,
                2u,
                1u,
                0x1Du,
                (__int64)&WPP_101522befb9b326c10c5678fcf1ebe5d_Traceguids,
                v24,
                a1,
                (__int64)v21,
                (__int64)v22);
            }
          }
          else
          {
            v17 = *(_QWORD *)(a1 + 8);
            v18 = byte_1C006E28A;
            v19 = byte_1C006E28A;
            if ( (v17 & 0x200000000000LL) != 0 )
            {
              v18 = *(char **)(a1 + 560);
              if ( (v17 & 0x400000000000LL) != 0 )
                v19 = *(char **)(a1 + 568);
            }
            WPP_RECORDER_SF_Lqss(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              4u,
              1u,
              0x1Cu,
              (__int64)&WPP_101522befb9b326c10c5678fcf1ebe5d_Traceguids,
              v16,
              a1,
              (__int64)v18,
              (__int64)v19);
          }
        }
      }
    }
  }
  v9 = *(void **)(a1 + 624);
  if ( v9 )
  {
    ExFreePoolWithTag(v9, 0);
    *(_QWORD *)(a1 + 624) = 0LL;
  }
  v10 = *(void **)(a1 + 632);
  if ( v10 )
  {
    ExFreePoolWithTag(v10, 0);
    *(_QWORD *)(a1 + 632) = 0LL;
  }
  return 0LL;
}
