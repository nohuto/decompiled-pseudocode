/*
 * XREFs of ?SetPointerInfoNodeMessagePosted@CTouchProcessor@@IEAAH_KIH@Z @ 0x1C0173E30
 * Callers:
 *     ?MarkPointerMessageGenerated@CTouchProcessor@@QEAAXI_JHPEAX@Z @ 0x1C016E1C0 (-MarkPointerMessageGenerated@CTouchProcessor@@QEAAXI_JHPEAX@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C002E6D4 (WPP_RECORDER_SF_.c)
 *     ?FindFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@K@Z @ 0x1C0166760 (-FindFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@K@Z.c)
 *     ?LookupNode@CTouchProcessor@@AEAAPEAUCPointerInfoNode@@PEBUCPointerInputFrame@@K@Z @ 0x1C016E15C (-LookupNode@CTouchProcessor@@AEAAPEAUCPointerInfoNode@@PEBUCPointerInputFrame@@K@Z.c)
 *     IsPointerInputMessageWithState @ 0x1C0176CDC (IsPointerInputMessageWithState.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01CAB94 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CTouchProcessor::SetPointerInfoNodeMessagePosted(
        CTouchProcessor *this,
        __int64 a2,
        unsigned int a3,
        int a4)
{
  __int64 v6; // rsi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  PDEVICE_OBJECT v11; // rcx
  int v12; // r9d
  struct CPointerInputFrame *FrameById; // rax
  CTouchProcessor *v14; // rcx
  struct CPointerInputFrame *v15; // rbp
  struct CPointerInfoNode *v17; // rax
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // rcx
  int *v21; // rbx
  __int64 v22; // rcx
  __int64 v23; // rcx
  int v24; // esi
  int v25; // edi
  int v26; // eax
  int v27; // eax
  int v28; // eax
  unsigned int v29; // eax
  __int64 v30; // rcx
  __int64 v31; // rcx

  v6 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      a2,
      7,
      233,
      (__int64)&WPP_06d7dff703a03015e007562f188a8383_Traceguids);
  }
  if ( !(unsigned int)IsPointerInputMessageWithState(a3) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v9, v8, v10);
  if ( !v6 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return 0LL;
    v11 = WPP_GLOBAL_Control;
    if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      return 0LL;
    v12 = 234;
LABEL_14:
    LOBYTE(v8) = 5;
    WPP_RECORDER_SF_(v11->DeviceExtension, v8, 7, v12, (__int64)&WPP_06d7dff703a03015e007562f188a8383_Traceguids);
    return 0LL;
  }
  FrameById = CTouchProcessor::FindFrameById(this, *(_DWORD *)(v6 + 28));
  v15 = FrameById;
  if ( !FrameById )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return 0LL;
    v11 = WPP_GLOBAL_Control;
    if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      return 0LL;
    v12 = 235;
    goto LABEL_14;
  }
  v17 = CTouchProcessor::LookupNode(v14, FrameById, *(unsigned int *)(v6 + 32));
  v20 = *(unsigned __int16 *)(v6 + 16);
  v21 = (int *)v17;
  if ( *((_WORD *)v17 + 90) != (_WORD)v20 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v20, v18, v19);
  v22 = *((unsigned int *)v15 + 12);
  if ( v21[2] >= (unsigned int)v22 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v22, v18, v19);
  switch ( a3 )
  {
    case 0x249u:
      v18 = (unsigned int)*v21;
      v23 = (unsigned int)v18;
      if ( (v18 & 8) == 0 && (v18 & 0x40) == 0 && (v21[47] & 1) == 0 )
      {
        MicrosoftTelemetryAssertTriggeredNoArgsKM((unsigned int)v18, v18, v19);
        v23 = (unsigned int)*v21;
      }
      v24 = 0x800000;
      v25 = 0x1000000;
      if ( (v23 & 0x800000) != 0 || (v23 & 0x1000000) != 0 || (v23 & 0x4000000) != 0 || (v23 & 0x2000000) != 0 )
      {
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v23, v18, v19);
        LODWORD(v23) = *v21;
      }
      v26 = a4 << 24;
LABEL_31:
      v27 = v24 | v23 ^ v25 & (v23 ^ v26);
LABEL_61:
      *v21 = v27;
      goto LABEL_62;
    case 0x24Au:
      v23 = (unsigned int)*v21;
      v24 = 0x8000000;
      v25 = 0x10000000;
      if ( (v23 & 0x8000000) != 0 || (v23 & 0x10000000) != 0 || (v23 & 0x40000000) != 0 || (v23 & 0x20000000) != 0 )
      {
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v23, v18, v19);
        LODWORD(v23) = *v21;
      }
      v26 = a4 << 28;
      goto LABEL_31;
    case 0x251u:
      v28 = *v21;
      if ( (*v21 & 0x40) == 0 )
      {
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v22, v18, v19);
        v28 = *v21;
      }
      if ( v28 < 0 || (v22 = (unsigned int)v21[1], (v22 & 1) != 0) || (v22 & 4) != 0 || (v22 & 2) != 0 )
      {
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v22, v18, v19);
        v28 = *v21;
        LODWORD(v22) = v21[1];
      }
      *v21 = v28 | 0x80000000;
      v29 = v22 ^ ((unsigned __int8)a4 ^ (unsigned __int8)v22) & 1;
      break;
    case 0x252u:
      v30 = (unsigned int)v21[1];
      if ( (v30 & 8) != 0 || (v30 & 0x10) != 0 || (v30 & 0x40) != 0 || (v30 & 0x20) != 0 )
      {
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v30, v18, v19);
        LODWORD(v30) = v21[1];
      }
      v29 = v30 ^ ((unsigned __int8)v30 ^ (unsigned __int8)(16 * a4)) & 0x10 | 8;
      break;
    default:
      v31 = (unsigned int)*v21;
      if ( (v31 & 0x80000) != 0 || (v31 & 0x400000) != 0 || (v31 & 0x200000) != 0 )
      {
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v31, v18, v19);
        LODWORD(v31) = *v21;
      }
      v27 = v31 ^ (v31 ^ (a4 << 20)) & 0x100000 | 0x80000;
      goto LABEL_61;
  }
  v21[1] = v29;
LABEL_62:
  if ( a4 )
    *(_DWORD *)(168LL * (unsigned int)v21[2] + *((_QWORD *)v15 + 17) + 148) |= 8u;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v18) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v18,
      7,
      236,
      (__int64)&WPP_06d7dff703a03015e007562f188a8383_Traceguids);
  }
  return 1LL;
}
