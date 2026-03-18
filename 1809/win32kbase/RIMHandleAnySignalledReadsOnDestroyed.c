/*
 * XREFs of RIMHandleAnySignalledReadsOnDestroyed @ 0x1C004F03C
 * Callers:
 *     ?RIMCallBack@CBaseInput@@AEAAXPEAURIMDevChangeStruct@@@Z @ 0x1C004E0AC (-RIMCallBack@CBaseInput@@AEAAXPEAURIMDevChangeStruct@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0031118 (WPP_RECORDER_SF_.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMHandleAnySignalledReadsOnDestroyed(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rax
  __int64 v5; // rcx
  __int64 v6; // rbx
  __int64 v7; // r8
  _QWORD *v8; // rax
  _QWORD *v9; // rdx
  _QWORD *v10; // rdx

  WPP_RECORDER_SF_(gRimLog, 3u, 0x15u, 0x3Bu, (__int64)&WPP_e843b24bce37371af6d7cbb9fb8661d0_Traceguids);
  v3 = *(_QWORD *)(a1 + 24);
  if ( *(_DWORD *)a1 == 4 )
  {
    v5 = *(unsigned int *)(v3 + 272);
    if ( (v5 & 0x40000000) != 0 )
    {
      v6 = *(_QWORD *)(v3 + 424);
      if ( (v5 & 0x2000) != 0 )
      {
        v7 = *(_QWORD *)(v3 + 112);
      }
      else
      {
        v7 = *(_QWORD *)(v3 + 432);
        if ( !v7 )
          v7 = *(_QWORD *)(v3 + 104);
      }
      if ( *(_DWORD *)(v6 + 656) )
      {
        v9 = *(_QWORD **)(v6 + 672);
        if ( (unsigned __int64)v9 >= MmUserProbeAddress )
          v9 = (_QWORD *)MmUserProbeAddress;
        if ( *v9 != v7 )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(MmUserProbeAddress, v9, v7);
        v10 = *(_QWORD **)(v6 + 672);
        if ( (unsigned __int64)v10 >= MmUserProbeAddress )
          v10 = (_QWORD *)MmUserProbeAddress;
        *v10 = -1LL;
      }
      else
      {
        v8 = *(_QWORD **)(v6 + 672);
        if ( *v8 != v7 )
        {
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v5, v2, v7);
          v8 = *(_QWORD **)(v6 + 672);
        }
        *v8 = -1LL;
      }
    }
  }
  return WPP_RECORDER_SF_(gRimLog, 3u, 0x15u, 0x3Du, (__int64)&WPP_e843b24bce37371af6d7cbb9fb8661d0_Traceguids);
}
