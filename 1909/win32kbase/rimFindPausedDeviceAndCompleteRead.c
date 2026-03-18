/*
 * XREFs of rimFindPausedDeviceAndCompleteRead @ 0x1C0058C78
 * Callers:
 *     rimCompleteReads @ 0x1C00580E8 (rimCompleteReads.c)
 * Callees:
 *     RimDeviceTypeToRimInputType @ 0x1C0058A18 (RimDeviceTypeToRimInputType.c)
 *     WPP_RECORDER_SF_qq @ 0x1C005C218 (WPP_RECORDER_SF_qq.c)
 *     rimProcessDeviceBufferAndStartRead @ 0x1C01513BC (rimProcessDeviceBufferAndStartRead.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01C8BF4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall rimFindPausedDeviceAndCompleteRead(struct RawInputManagerObject *a1, __int64 a2, __int64 a3)
{
  struct RawInputManagerObject *v3; // rsi
  _QWORD **v4; // r14
  unsigned int v5; // ebp
  _QWORD *v6; // rbx
  _QWORD *v8; // rdi
  char v9; // al
  __int64 v10; // rcx
  __int64 v11; // rax

  v3 = a1;
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
    if ( (struct RawInputManagerObject *)v8[53] != v3 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
    if ( ((unsigned int)RimDeviceTypeToRimInputType((__int64)(v8 + 11), *((unsigned __int8 *)v8 + 136)) & *((_DWORD *)v3 + 21)) == 0 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v10, a2, a3);
    v11 = *v6;
    if ( *(_QWORD **)(*v6 + 8LL) != v6 || (a1 = (struct RawInputManagerObject *)v6[1], *(_QWORD **)a1 != v6) )
      __fastfail(3u);
    *(_QWORD *)a1 = v11;
    *(_QWORD *)(v11 + 8) = a1;
    v6[1] = v6;
    *v6 = v6;
    if ( (v8[34] & 0x400) == 0 )
    {
      rimProcessDeviceBufferAndStartRead(v3, (struct RIMDEV *)(v8 + 11));
      if ( !*((_BYTE *)v3 + 584) )
        return 0;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(a2) = 3;
      WPP_RECORDER_SF_qq(
        (_DWORD)gRimLog,
        a2,
        1,
        12,
        (__int64)&WPP_6d2edae1f7af377a8d6306946426cb53_Traceguids,
        (_BYTE)v6 + 64,
        (char)v3);
    }
  }
  return v5;
}
