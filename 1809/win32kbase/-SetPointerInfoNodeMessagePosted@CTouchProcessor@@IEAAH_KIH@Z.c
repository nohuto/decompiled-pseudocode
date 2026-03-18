/*
 * XREFs of ?SetPointerInfoNodeMessagePosted@CTouchProcessor@@IEAAH_KIH@Z @ 0x1C0144F1C
 * Callers:
 *     ?MarkPointerMessageGenerated@CTouchProcessor@@QEAAXI_JHPEAX@Z @ 0x1C013F6E0 (-MarkPointerMessageGenerated@CTouchProcessor@@QEAAXI_JHPEAX@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0031118 (WPP_RECORDER_SF_.c)
 *     ?FindFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@KW4CPointerInputFramePhase@@@Z @ 0x1C00AD348 (-FindFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@KW4CPointerInputFramePhase@@@Z.c)
 *     ?LookupNode@CTouchProcessor@@AEAAPEAUCPointerInfoNode@@PEBUCPointerInputFrame@@K@Z @ 0x1C013F684 (-LookupNode@CTouchProcessor@@AEAAPEAUCPointerInfoNode@@PEBUCPointerInputFrame@@K@Z.c)
 *     IsPointerInputMessageWithState @ 0x1C0147CDC (IsPointerInputMessageWithState.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CTouchProcessor::SetPointerInfoNodeMessagePosted(
        CTouchProcessor *this,
        __int64 a2,
        unsigned int a3,
        int a4)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  PDEVICE_OBJECT v11; // rcx
  unsigned __int16 v12; // r9
  const struct CPointerInputFrame *FrameById; // rax
  CTouchProcessor *v14; // rcx
  const struct CPointerInputFrame *v15; // rbp
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

  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xBu,
      0xE5u,
      (__int64)&WPP_34edb07bf13d308a4f9f363aca43f10b_Traceguids);
  if ( !(unsigned int)IsPointerInputMessageWithState(a3) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v9, v8, v10);
  if ( !a2 )
  {
    v11 = WPP_GLOBAL_Control;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      v12 = 230;
LABEL_11:
      WPP_RECORDER_SF_(
        (__int64)v11->DeviceExtension,
        5u,
        0xBu,
        v12,
        (__int64)&WPP_34edb07bf13d308a4f9f363aca43f10b_Traceguids);
      return 0LL;
    }
    return 0LL;
  }
  FrameById = (const struct CPointerInputFrame *)CTouchProcessor::FindFrameById(this, *(_DWORD *)(a2 + 28));
  v15 = FrameById;
  if ( !FrameById )
  {
    v11 = WPP_GLOBAL_Control;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      v12 = 231;
      goto LABEL_11;
    }
    return 0LL;
  }
  v17 = CTouchProcessor::LookupNode(v14, FrameById, *(unsigned int *)(a2 + 32));
  v20 = *(unsigned __int16 *)(a2 + 16);
  v21 = (int *)v17;
  if ( *((_WORD *)v17 + 118) != (_WORD)v20 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v20, v18, v19);
  v22 = *((unsigned int *)v15 + 12);
  if ( v21[2] >= (unsigned int)v22 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v22, v18, v19);
  switch ( a3 )
  {
    case 0x249u:
      v23 = (unsigned int)*v21;
      if ( (*v21 & 8) == 0 && (*v21 & 0x40) == 0 && (v21[61] & 1) == 0 )
      {
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v23, v18, v19);
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
LABEL_28:
      v27 = v24 | v23 ^ v25 & (v23 ^ v26);
LABEL_58:
      *v21 = v27;
      goto LABEL_59;
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
      goto LABEL_28;
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
      v29 = v22 ^ (a4 ^ v22) & 1;
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
      goto LABEL_58;
  }
  v21[1] = v29;
LABEL_59:
  if ( a4 )
    *(_DWORD *)(224LL * (unsigned int)v21[2] + *((_QWORD *)v15 + 14) + 204) |= 8u;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xBu,
      0xE8u,
      (__int64)&WPP_34edb07bf13d308a4f9f363aca43f10b_Traceguids);
  return 1LL;
}
