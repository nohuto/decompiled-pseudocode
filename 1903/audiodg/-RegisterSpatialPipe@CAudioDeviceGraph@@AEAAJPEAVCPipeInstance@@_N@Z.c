/*
 * XREFs of ?RegisterSpatialPipe@CAudioDeviceGraph@@AEAAJPEAVCPipeInstance@@_N@Z @ 0x14000B7FC
 * Callers:
 *     ?AddPipe@CAudioDeviceGraph@@UEAAJPEAVCPipeInstance@@@Z @ 0x14000B8C0 (-AddPipe@CAudioDeviceGraph@@UEAAJPEAVCPipeInstance@@@Z.c)
 *     ?RemovePipe@CAudioDeviceGraph@@UEAAJPEAVCPipeInstance@@@Z @ 0x140038770 (-RemovePipe@CAudioDeviceGraph@@UEAAJPEAVCPipeInstance@@@Z.c)
 * Callees:
 *     ?GetSpatialAudioStreamProcessor@CPipeInstance@@QEBAJPEAPEAUISpatialAudioStreamProcessor@@@Z @ 0x14000B290 (-GetSpatialAudioStreamProcessor@CPipeInstance@@QEBAJPEAPEAUISpatialAudioStreamProcessor@@@Z.c)
 *     ?GetVirtualSurroundAPO@CPipeInstance@@QEBAJPEAPEAUIVirtualSurround@@@Z @ 0x14000B308 (-GetVirtualSurroundAPO@CPipeInstance@@QEBAJPEAPEAUIVirtualSurround@@@Z.c)
 *     ?GetAdaptiveSpatialAudioRenderer@CPipeInstance@@QEBAJPEAPEAUIAdaptiveSpatialAudioRenderer@@@Z @ 0x14000B744 (-GetAdaptiveSpatialAudioRenderer@CPipeInstance@@QEBAJPEAPEAUIAdaptiveSpatialAudioRenderer@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x140017DA0 (_guard_dispatch_icall_nop.c)
 *     ?DoSpatialAudioProcessBlockRegistration@CAudioDeviceGraph@@AEAAJPEAUISpatialAudioProcessBlockRT@@PEAUIAdaptiveSpatialAudioRenderer@@_N@Z @ 0x1400377F8 (-DoSpatialAudioProcessBlockRegistration@CAudioDeviceGraph@@AEAAJPEAUISpatialAudioProcessBlockRT@.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x14003CB48 (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CAudioDeviceGraph::RegisterSpatialPipe(CPipeInstance **this, struct CPipeInstance *a2, bool a3)
{
  int v5; // ebx
  CAudioDeviceGraph *v7; // rcx
  CAudioDeviceGraph *v8; // rcx
  struct IVirtualSurround *v9; // [rsp+20h] [rbp-20h] BYREF
  struct ISpatialAudioStreamProcessor *v10[3]; // [rsp+28h] [rbp-18h] BYREF
  struct IAdaptiveSpatialAudioRenderer *v11; // [rsp+60h] [rbp+20h] BYREF
  struct ISpatialAudioProcessBlockRT *v12; // [rsp+78h] [rbp+38h] BYREF

  v10[1] = (struct ISpatialAudioStreamProcessor *)-2LL;
  v5 = 0;
  v11 = 0LL;
  if ( (int)CPipeInstance::GetAdaptiveSpatialAudioRenderer(this[20], &v11) >= 0 )
  {
    v10[0] = 0LL;
    if ( (int)CPipeInstance::GetSpatialAudioStreamProcessor(a2, v10) < 0 )
      goto LABEL_3;
    v12 = 0LL;
    v5 = (*(__int64 (__fastcall **)(struct ISpatialAudioStreamProcessor *, struct ISpatialAudioProcessBlockRT **))(*(_QWORD *)v10[0] + 24LL))(
           v10[0],
           &v12);
    if ( v5 >= 0 )
      v5 = CAudioDeviceGraph::DoSpatialAudioProcessBlockRegistration(v7, v12, v11, a3);
    if ( v12 )
      (*(void (__fastcall **)(struct ISpatialAudioProcessBlockRT *))(*(_QWORD *)v12 + 16LL))(v12);
    if ( v5 >= 0 )
    {
LABEL_3:
      v9 = 0LL;
      if ( (int)CPipeInstance::GetVirtualSurroundAPO(a2, &v9) >= 0 )
      {
        v12 = 0LL;
        v5 = (*(__int64 (__fastcall **)(struct IVirtualSurround *, struct ISpatialAudioProcessBlockRT **))(*(_QWORD *)v9 + 24LL))(
               v9,
               &v12);
        if ( v5 >= 0 )
          v5 = CAudioDeviceGraph::DoSpatialAudioProcessBlockRegistration(v8, v12, v11, a3);
        if ( v12 )
          (*(void (__fastcall **)(struct ISpatialAudioProcessBlockRT *))(*(_QWORD *)v12 + 16LL))(v12);
      }
      if ( v9 )
        (*(void (__fastcall **)(struct IVirtualSurround *))(*(_QWORD *)v9 + 16LL))(v9);
    }
    if ( v10[0] )
      (*(void (__fastcall **)(struct ISpatialAudioStreamProcessor *))(*(_QWORD *)v10[0] + 16LL))(v10[0]);
    if ( v5 < 0 )
      AudDGTraceLoggingErrorHelper("CAudioDeviceGraph::RegisterSpatialPipe", 0x71Bu, v5);
  }
  if ( v11 )
    (*(void (__fastcall **)(struct IAdaptiveSpatialAudioRenderer *))(*(_QWORD *)v11 + 16LL))(v11);
  return (unsigned int)v5;
}
