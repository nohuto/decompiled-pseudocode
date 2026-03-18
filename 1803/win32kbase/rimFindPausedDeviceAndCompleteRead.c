/*
 * XREFs of rimFindPausedDeviceAndCompleteRead @ 0x1C00FE008
 * Callers:
 *     rimCompleteReads @ 0x1C00FDEF4 (rimCompleteReads.c)
 * Callees:
 *     RimDeviceTypeToRimInputType @ 0x1C000F238 (RimDeviceTypeToRimInputType.c)
 *     WPP_RECORDER_SF_qq @ 0x1C00BCB94 (WPP_RECORDER_SF_qq.c)
 *     rimProcessDeviceBufferAndStartRead @ 0x1C00FEE14 (rimProcessDeviceBufferAndStartRead.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall rimFindPausedDeviceAndCompleteRead(__int64 a1, __int64 a2)
{
  _QWORD **v3; // r14
  unsigned int v4; // ebp
  _QWORD *v5; // rdi
  char v6; // al
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rax
  _QWORD *v10; // rcx
  _QWORD *v11; // rbx

  v3 = (_QWORD **)(a1 + 576);
  v4 = -1073741823;
  while ( 1 )
  {
    v11 = *v3;
    if ( *v3 == v3 )
      break;
    v5 = v11 - 23;
    v6 = *((_BYTE *)v11 - 56);
    if ( v6 == 3 )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2);
      v6 = *((_BYTE *)v5 + 128);
    }
    if ( v6 == 2 && (*((_DWORD *)v5 + 70) & 0x80u) != 0 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2);
    if ( v5[52] != a1 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2);
    if ( ((unsigned int)RimDeviceTypeToRimInputType((__int64)(v5 + 10), *((unsigned __int8 *)v5 + 128)) & *(_DWORD *)(a1 + 76)) == 0 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v8, v7);
    v9 = *v11;
    if ( *(_QWORD **)(*v11 + 8LL) != v11 || (v10 = (_QWORD *)v11[1], (_QWORD *)*v10 != v11) )
      __fastfail(3u);
    *v10 = v9;
    *(_QWORD *)(v9 + 8) = v10;
    v11[1] = v11;
    *v11 = v11;
    if ( (v5[33] & 0x200) == 0 )
    {
      rimProcessDeviceBufferAndStartRead(a1, v5 + 10);
      if ( !*(_BYTE *)(a1 + 568) )
        return 0;
    }
    WPP_RECORDER_SF_qq(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      3u,
      0x13u,
      0xCu,
      (__int64)&WPP_b8ab63d3fdc53277a0bf045626d34b8d_Traceguids,
      v11 - 23,
      a1);
  }
  return v4;
}
