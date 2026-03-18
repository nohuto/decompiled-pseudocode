/*
 * XREFs of rimFindPausedDeviceAndCompleteRead @ 0x1C0051EF8
 * Callers:
 *     rimCompleteReads @ 0x1C00504E0 (rimCompleteReads.c)
 * Callees:
 *     RimDeviceTypeToRimInputType @ 0x1C0051550 (RimDeviceTypeToRimInputType.c)
 *     WPP_RECORDER_SF_qq @ 0x1C0089540 (WPP_RECORDER_SF_qq.c)
 *     rimProcessDeviceBufferAndStartRead @ 0x1C0126BEC (rimProcessDeviceBufferAndStartRead.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall rimFindPausedDeviceAndCompleteRead(struct RawInputManagerObject *a1, __int64 a2, __int64 a3)
{
  _QWORD **v4; // r14
  unsigned int v5; // ebp
  _QWORD *v6; // rbx
  _QWORD *v8; // rdi
  char v9; // al
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rax
  _QWORD *v14; // rcx

  v4 = (_QWORD **)((char *)a1 + 592);
  v5 = -1073741823;
  while ( 1 )
  {
    v6 = *v4;
    if ( *v4 == v4 )
      break;
    v8 = v6 - 24;
    v9 = *((_BYTE *)v6 - 56);
    if ( v9 == 3 )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
      v9 = *((_BYTE *)v8 + 136);
    }
    if ( v9 == 2 && (*((_DWORD *)v8 + 72) & 0x80u) != 0 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
    if ( (struct RawInputManagerObject *)v8[53] != a1 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
    if ( ((unsigned int)RimDeviceTypeToRimInputType((__int64)(v8 + 11), *((unsigned __int8 *)v8 + 136)) & *((_DWORD *)a1 + 21)) == 0 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v11, v10, v12);
    v13 = *v6;
    if ( *(_QWORD **)(*v6 + 8LL) != v6 || (v14 = (_QWORD *)v6[1], (_QWORD *)*v14 != v6) )
      __fastfail(3u);
    *v14 = v13;
    *(_QWORD *)(v13 + 8) = v14;
    v6[1] = v6;
    *v6 = v6;
    if ( (v8[34] & 0x400) == 0 )
    {
      rimProcessDeviceBufferAndStartRead(a1, (struct RIMDEV *)(v8 + 11));
      if ( !*((_BYTE *)a1 + 584) )
        return 0;
    }
    LOBYTE(v10) = 3;
    WPP_RECORDER_SF_qq(
      gRimLog,
      v10,
      20,
      12,
      (__int64)&WPP_901ff501b44439c8b7ae29517e564609_Traceguids,
      (_BYTE)v6 + 64,
      (char)a1);
  }
  return v5;
}
