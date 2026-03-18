/*
 * XREFs of rimProcessAnyQueuedCompleteFrames @ 0x1C012689C
 * Callers:
 *     RIMOnPnpNotification @ 0x1C004FE90 (RIMOnPnpNotification.c)
 *     rimCompleteReads @ 0x1C00504E0 (rimCompleteReads.c)
 *     rimDispatchAutoRepeatCompleteFrame @ 0x1C0126518 (rimDispatchAutoRepeatCompleteFrame.c)
 * Callees:
 *     Win32FreePool @ 0x1C001D8F0 (Win32FreePool.c)
 *     WPP_RECORDER_SF_ @ 0x1C0031118 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_q @ 0x1C004F724 (WPP_RECORDER_SF_q.c)
 *     RawInputManagerDeviceObjectResolveHandle @ 0x1C00510B0 (RawInputManagerDeviceObjectResolveHandle.c)
 *     RimDeviceTypeToRimInputType @ 0x1C0051550 (RimDeviceTypeToRimInputType.c)
 *     rimFreeAutoRepeatCompleteFrame @ 0x1C0095490 (rimFreeAutoRepeatCompleteFrame.c)
 *     WPP_RECORDER_SF_qi @ 0x1C0126440 (WPP_RECORDER_SF_qi.c)
 *     rimDispatchCompleteFrame @ 0x1C01266D8 (rimDispatchCompleteFrame.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall rimProcessAnyQueuedCompleteFrames(struct RawInputManagerObject *a1, __int64 a2, __int64 a3)
{
  struct RawInputManagerObject *v4; // rdi
  _QWORD *v5; // r14
  _QWORD *v6; // rbx
  char *v7; // rsi
  LARGE_INTEGER *v8; // rbp
  __int64 v9; // rax
  int v10; // eax
  int v11; // r12d
  int v12; // eax
  int v13; // eax
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  int v18; // [rsp+20h] [rbp-48h]
  PVOID Object; // [rsp+70h] [rbp+8h] BYREF

  v4 = a1;
  if ( (*(_DWORD *)(a2 + 200) & 0x80u) == 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  if ( (*(_DWORD *)(a2 + 184) & 0x200) != 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  v5 = (_QWORD *)((char *)v4 + 552);
  v6 = (_QWORD *)*((_QWORD *)v4 + 69);
  if ( v6 == (_QWORD *)((char *)v4 + 552) || !*((_BYTE *)v4 + 584) )
    return;
  v7 = 0LL;
  v8 = 0LL;
  Object = 0LL;
  if ( !*((_QWORD *)v4 + 80) && !*((_DWORD *)v4 + 216) )
  {
    if ( (_QWORD *)v6[1] == v5 )
    {
      v9 = *v6;
      if ( *(_QWORD **)(*v6 + 8LL) == v6 )
      {
        *v5 = v9;
        v8 = (LARGE_INTEGER *)(v6 - 1);
        *(_QWORD *)(v9 + 8) = v5;
        v6[1] = v6;
        *v6 = v6;
        v10 = RawInputManagerDeviceObjectResolveHandle((char *)v6[3], 3u, *((_DWORD *)v6 + 10) == 0, &Object);
        v7 = (char *)Object;
        v11 = v10;
        goto LABEL_12;
      }
    }
LABEL_26:
    __fastfail(3u);
  }
  if ( v6 == v5 )
    goto LABEL_28;
  while ( 1 )
  {
    v8 = (LARGE_INTEGER *)(v6 - 1);
    v12 = RawInputManagerDeviceObjectResolveHandle((char *)v6[3], 3u, *((_DWORD *)v6 + 10) == 0, &Object);
    v7 = (char *)Object;
    v11 = v12;
    if ( v12 >= 0 )
      break;
LABEL_21:
    v6 = (_QWORD *)*v6;
    if ( v6 == v5 )
      goto LABEL_12;
  }
  v13 = *((_DWORD *)Object + 68);
  if ( (v13 & 0x2000) != 0 && (v13 & 0x400000) == 0 )
  {
    v11 = -1073741823;
    ObfDereferenceObject(Object);
    goto LABEL_21;
  }
  v14 = *v6;
  if ( *(_QWORD **)(*v6 + 8LL) != v6 )
    goto LABEL_26;
  a1 = (struct RawInputManagerObject *)v6[1];
  if ( *(_QWORD **)a1 != v6 )
    goto LABEL_26;
  *(_QWORD *)a1 = v14;
  *(_QWORD *)(v14 + 8) = a1;
  v6[1] = v6;
  *v6 = v6;
LABEL_12:
  if ( v11 < 0 )
  {
    if ( *((_QWORD *)v4 + 80) || *((_DWORD *)v4 + 216) )
    {
      WPP_RECORDER_SF_(gRimLog, 3u, 0x16u, 0x16u, (__int64)&WPP_243f09eea8733bd127c895b855ed4efc_Traceguids);
    }
    else
    {
      WPP_RECORDER_SF_q(
        gRimLog,
        3u,
        0x16u,
        0x17u,
        (__int64)&WPP_243f09eea8733bd127c895b855ed4efc_Traceguids,
        v8[4].QuadPart);
      Win32FreePool((__int64)v8);
    }
    return;
  }
LABEL_28:
  --*((_QWORD *)v7 + 35);
  WPP_RECORDER_SF_qi((__int64)a1, a2, a3, 0x15u, v18);
  if ( ((unsigned int)RimDeviceTypeToRimInputType((__int64)(v7 + 88), 2) & *((_DWORD *)v4 + 21)) == 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v16, v15, v17);
  rimFreeAutoRepeatCompleteFrame((__int64)(v7 + 88));
  *((_BYTE *)v4 + 584) = 0;
  rimDispatchCompleteFrame(v4, (struct RIMDEV *)(v7 + 88), v8);
  ObfDereferenceObject(v7);
}
