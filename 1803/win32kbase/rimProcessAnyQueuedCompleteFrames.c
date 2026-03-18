/*
 * XREFs of rimProcessAnyQueuedCompleteFrames @ 0x1C00FEACC
 * Callers:
 *     RIMOnPnpNotification @ 0x1C00E34B0 (RIMOnPnpNotification.c)
 *     rimCompleteReads @ 0x1C00FDEF4 (rimCompleteReads.c)
 *     rimDispatchAutoRepeatCompleteFrame @ 0x1C00FE314 (rimDispatchAutoRepeatCompleteFrame.c)
 * Callees:
 *     RimDeviceTypeToRimInputType @ 0x1C000F238 (RimDeviceTypeToRimInputType.c)
 *     Win32FreePool @ 0x1C001CC50 (Win32FreePool.c)
 *     WPP_RECORDER_SF_ @ 0x1C003A778 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_q @ 0x1C00739CC (WPP_RECORDER_SF_q.c)
 *     RawInputManagerDeviceObjectResolveHandle @ 0x1C00F1E10 (RawInputManagerDeviceObjectResolveHandle.c)
 *     WPP_RECORDER_SF_qi @ 0x1C00FE248 (WPP_RECORDER_SF_qi.c)
 *     rimDispatchCompleteFrame @ 0x1C00FE4B0 (rimDispatchCompleteFrame.c)
 *     rimFreeAutoRepeatCompleteFrame @ 0x1C00FE678 (rimFreeAutoRepeatCompleteFrame.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

LONG_PTR __fastcall rimProcessAnyQueuedCompleteFrames(__int64 a1, __int64 a2, __int64 a3)
{
  LONG_PTR result; // rax
  _QWORD *v6; // rsi
  _QWORD *v7; // rbx
  _QWORD *v8; // rbp
  LARGE_INTEGER *v9; // r14
  __int64 v10; // rax
  int v11; // eax
  int v12; // r12d
  int v13; // eax
  int v14; // eax
  __int64 v15; // rax
  _QWORD *v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rcx
  int v19; // [rsp+20h] [rbp-48h]
  PVOID Object; // [rsp+70h] [rbp+8h] BYREF

  result = *(unsigned int *)(a2 + 200);
  if ( (result & 0x80u) == 0LL )
    result = MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2);
  if ( (*(_DWORD *)(a2 + 184) & 0x100) != 0 )
    result = MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2);
  v6 = (_QWORD *)(a1 + 536);
  v7 = *(_QWORD **)(a1 + 536);
  if ( v7 == (_QWORD *)(a1 + 536) || !*(_BYTE *)(a1 + 568) )
    return result;
  v8 = 0LL;
  v9 = 0LL;
  Object = 0LL;
  if ( !*(_QWORD *)(a1 + 624) && !*(_DWORD *)(a1 + 848) )
  {
    if ( (_QWORD *)v7[1] != v6 || (v10 = *v7, *(_QWORD **)(*v7 + 8LL) != v7) )
      __fastfail(3u);
    *v6 = v10;
    v9 = (LARGE_INTEGER *)(v7 - 1);
    *(_QWORD *)(v10 + 8) = v6;
    v7[1] = v7;
    *v7 = v7;
    v11 = RawInputManagerDeviceObjectResolveHandle((char *)v7[3], 3u, *((_DWORD *)v7 + 10) == 0, &Object);
    v8 = Object;
    v12 = v11;
    goto LABEL_12;
  }
  if ( v7 == v6 )
    goto LABEL_29;
  while ( 1 )
  {
    v9 = (LARGE_INTEGER *)(v7 - 1);
    v13 = RawInputManagerDeviceObjectResolveHandle((char *)v7[3], 3u, *((_DWORD *)v7 + 10) == 0, &Object);
    v8 = Object;
    v12 = v13;
    if ( v13 >= 0 )
      break;
LABEL_22:
    v7 = (_QWORD *)*v7;
    if ( v7 == v6 )
      goto LABEL_12;
  }
  v14 = *((_DWORD *)Object + 66);
  if ( (v14 & 0x1000) != 0 && (v14 & 0x400000) == 0 )
  {
    v12 = -1073741823;
    ObfDereferenceObject(Object);
    goto LABEL_22;
  }
  v15 = *v7;
  if ( *(_QWORD **)(*v7 + 8LL) != v7 || (v16 = (_QWORD *)v7[1], (_QWORD *)*v16 != v7) )
    __fastfail(3u);
  *v16 = v15;
  *(_QWORD *)(v15 + 8) = v16;
  v7[1] = v7;
  *v7 = v7;
LABEL_12:
  if ( v12 < 0 )
  {
    if ( *(_QWORD *)(a1 + 624) || *(_DWORD *)(a1 + 848) )
      return WPP_RECORDER_SF_(
               (__int64)WPP_GLOBAL_Control->DeviceExtension,
               3u,
               0x15u,
               0x16u,
               (__int64)&WPP_2600131a8aea3ae2d8b15cd813fbdef3_Traceguids);
    WPP_RECORDER_SF_q(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      3u,
      0x15u,
      0x17u,
      (__int64)&WPP_2600131a8aea3ae2d8b15cd813fbdef3_Traceguids,
      v9[4].QuadPart);
    return Win32FreePool((__int64)v9);
  }
LABEL_29:
  --v8[34];
  WPP_RECORDER_SF_qi((__int64)WPP_GLOBAL_Control->DeviceExtension, a2, a3, 0x15u, v19);
  if ( ((unsigned int)RimDeviceTypeToRimInputType((__int64)(v8 + 10), 2) & *(_DWORD *)(a1 + 76)) == 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v18, v17);
  rimFreeAutoRepeatCompleteFrame((__int64)(v8 + 10));
  *(_BYTE *)(a1 + 568) = 0;
  rimDispatchCompleteFrame(a1, (__int64)(v8 + 10), v9);
  return ObfDereferenceObject(v8);
}
