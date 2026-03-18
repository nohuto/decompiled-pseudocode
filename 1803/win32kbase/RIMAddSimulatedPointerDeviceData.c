/*
 * XREFs of RIMAddSimulatedPointerDeviceData @ 0x1C00EA068
 * Callers:
 *     RIMInsertSimulatedContactEndStateInFrame @ 0x1C00FFD24 (RIMInsertSimulatedContactEndStateInFrame.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C003B310 (WPP_RECORDER_SF_D.c)
 *     Win32AllocPoolZInit @ 0x1C004DA00 (Win32AllocPoolZInit.c)
 *     RIMSetContactBoundary @ 0x1C00E9480 (RIMSetContactBoundary.c)
 *     rimHidP_SetUsageValue @ 0x1C00F0EE8 (rimHidP_SetUsageValue.c)
 *     RIMQuirkSetContactBoundary @ 0x1C01070EC (RIMQuirkSetContactBoundary.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMAddSimulatedPointerDeviceData(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 *a5,
        _DWORD *a6)
{
  __int64 v6; // rdi
  __int64 v10; // rax
  __int64 v11; // r14
  int v12; // esi
  _DWORD *v13; // rdx
  __int64 v14; // r8
  int v15; // ebx
  void *v16; // rax
  __int64 v17; // rdi
  int v18; // eax
  unsigned __int16 v19; // r9
  __int64 v21; // [rsp+28h] [rbp-30h]

  v6 = *(_QWORD *)(a2 + 16);
  if ( !v6 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2);
  if ( a2 != *(_QWORD *)(v6 + 480) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2);
  v10 = *(_QWORD *)(v6 + 464);
  v11 = *(_QWORD *)(v10 + 16);
  v12 = *(unsigned __int16 *)(v10 + 44);
  if ( (unsigned int)(*(_DWORD *)(a2 + 24) - 1) > 3 )
    goto LABEL_9;
  v13 = (_DWORD *)(a4 + 128);
  v14 = *(_QWORD *)(a3 + 2556);
  if ( (*(_DWORD *)(*(_QWORD *)(a2 + 16) + 184LL) & 0x2000000) != 0 )
  {
    RIMQuirkSetContactBoundary(a1, (_DWORD)v13, v14, 0, 0);
    goto LABEL_9;
  }
  v15 = RIMSetContactBoundary(a2, v13, v14, 0, 0);
  if ( v15 >= 0 )
  {
LABEL_9:
    v16 = Win32AllocPoolZInit(*(unsigned __int16 *)(*(_QWORD *)(v6 + 464) + 44LL), 0x63707352u);
    v17 = (__int64)v16;
    if ( !v16 )
      return (unsigned int)-1073741801;
    v18 = rimHidP_SetUsageValue(0, 1, 0, 48, *(_DWORD *)(a3 + 2556), v11, (__int64)v16, v12);
    v15 = v18;
    if ( v18 < 0 )
    {
      v19 = 41;
    }
    else
    {
      v18 = rimHidP_SetUsageValue(0, 1, 0, 49, *(_DWORD *)(a3 + 2560), v11, v17, v12);
      v15 = v18;
      if ( v18 >= 0 )
      {
        *a5 = v17;
        *a6 = v12;
        return (unsigned int)v15;
      }
      v19 = 40;
    }
    LODWORD(v21) = v18;
    WPP_RECORDER_SF_D(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      3u,
      0x13u,
      v19,
      (__int64)&WPP_d24afaddbe1632fa9c89c4aae49a04f3_Traceguids,
      v21);
  }
  return (unsigned int)v15;
}
