/*
 * XREFs of rimProcessAnyQueuedCompleteFrames @ 0x1C0151038
 * Callers:
 *     RIMOnPnpNotification @ 0x1C00572F0 (RIMOnPnpNotification.c)
 *     rimCompleteReads @ 0x1C00580E8 (rimCompleteReads.c)
 *     rimDispatchAutoRepeatCompleteFrame @ 0x1C0150818 (rimDispatchAutoRepeatCompleteFrame.c)
 * Callees:
 *     Win32FreePool @ 0x1C0012E40 (Win32FreePool.c)
 *     WPP_RECORDER_SF_ @ 0x1C002D584 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_q @ 0x1C00378D4 (WPP_RECORDER_SF_q.c)
 *     RimDeviceTypeToRimInputType @ 0x1C0058A18 (RimDeviceTypeToRimInputType.c)
 *     RawInputManagerDeviceObjectResolveHandle @ 0x1C0059370 (RawInputManagerDeviceObjectResolveHandle.c)
 *     rimFreeAutoRepeatCompleteFrame @ 0x1C00B7CB0 (rimFreeAutoRepeatCompleteFrame.c)
 *     WPP_RECORDER_SF_qi @ 0x1C0150744 (WPP_RECORDER_SF_qi.c)
 *     rimDispatchCompleteFrame @ 0x1C01509D4 (rimDispatchCompleteFrame.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01C8BF4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall rimProcessAnyQueuedCompleteFrames(struct RawInputManagerObject *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r15
  __int64 *v5; // r14
  __int64 *v6; // rbx
  char *v7; // rsi
  LARGE_INTEGER *v8; // rbp
  __int64 *v9; // rax
  int v10; // eax
  int v11; // r12d
  int v12; // eax
  int v13; // eax
  __int64 *v14; // rax
  __int64 **v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  PVOID Object; // [rsp+70h] [rbp+8h] BYREF

  v3 = a2;
  if ( (*(_DWORD *)(a2 + 200) & 0x80u) == 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  if ( (*(_DWORD *)(v3 + 184) & 0x200) != 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  v5 = (__int64 *)((char *)a1 + 552);
  v6 = (__int64 *)*((_QWORD *)a1 + 69);
  if ( v6 == (__int64 *)((char *)a1 + 552) || !*((_BYTE *)a1 + 584) )
    return;
  v7 = 0LL;
  v8 = 0LL;
  Object = 0LL;
  if ( !*((_QWORD *)a1 + 80) && !*((_DWORD *)a1 + 216) )
  {
    if ( (__int64 *)v6[1] == v5 )
    {
      v9 = (__int64 *)*v6;
      if ( *(__int64 **)(*v6 + 8) == v6 )
      {
        *v5 = (__int64)v9;
        v8 = (LARGE_INTEGER *)(v6 - 1);
        v9[1] = (__int64)v5;
        v6[1] = (__int64)v6;
        *v6 = (__int64)v6;
        v10 = RawInputManagerDeviceObjectResolveHandle((char *)v6[3], 3u, *((_DWORD *)v6 + 16) == 0, &Object);
        v7 = (char *)Object;
        v11 = v10;
        goto LABEL_12;
      }
    }
LABEL_28:
    __fastfail(3u);
  }
  if ( v6 == v5 )
    goto LABEL_31;
  while ( 1 )
  {
    v8 = (LARGE_INTEGER *)(v6 - 1);
    v12 = RawInputManagerDeviceObjectResolveHandle((char *)v6[3], 3u, *((_DWORD *)v6 + 16) == 0, &Object);
    v7 = (char *)Object;
    v11 = v12;
    if ( v12 >= 0 )
      break;
LABEL_23:
    v6 = (__int64 *)*v6;
    if ( v6 == v5 )
      goto LABEL_12;
  }
  v13 = *((_DWORD *)Object + 68);
  if ( (v13 & 0x2000) != 0 && (v13 & 0x400000) == 0 )
  {
    v11 = -1073741823;
    ObfDereferenceObject(Object);
    goto LABEL_23;
  }
  v14 = (__int64 *)*v6;
  if ( *(__int64 **)(*v6 + 8) != v6 )
    goto LABEL_28;
  v15 = (__int64 **)v6[1];
  if ( *v15 != v6 )
    goto LABEL_28;
  *v15 = v14;
  v14[1] = (__int64)v15;
  v6[1] = (__int64)v6;
  *v6 = (__int64)v6;
LABEL_12:
  if ( v11 < 0 )
  {
    if ( *((_QWORD *)a1 + 80) || *((_DWORD *)a1 + 216) )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(a2) = 4;
        WPP_RECORDER_SF_((_DWORD)gRimLog, a2, 1, 21, (__int64)&WPP_6a3f03fa80603be62a3ce402d33a948d_Traceguids);
      }
    }
    else
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(a2) = 4;
        WPP_RECORDER_SF_q(
          (_DWORD)gRimLog,
          a2,
          1,
          22,
          (__int64)&WPP_6a3f03fa80603be62a3ce402d33a948d_Traceguids,
          v8[4].QuadPart);
      }
      Win32FreePool((__int64)v8);
    }
    return;
  }
LABEL_31:
  --*((_QWORD *)v7 + 35);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qi(*((_QWORD *)v7 + 35), a2, a3, 20);
  if ( ((unsigned int)RimDeviceTypeToRimInputType((__int64)(v7 + 88), 2) & *((_DWORD *)a1 + 21)) == 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v17, v16, v18);
  rimFreeAutoRepeatCompleteFrame((__int64)(v7 + 88));
  *((_BYTE *)a1 + 584) = 0;
  rimDispatchCompleteFrame(a1, (struct RIMDEV *)(v7 + 88), v8);
  ObfDereferenceObject(v7);
}
