/*
 * XREFs of ?QueueWorkItem@CSerialWorkQueue@@QEAAJV?$function@$$A6AXXZ@std@@@Z @ 0x1800E0064
 * Callers:
 *     ?PruneInactiveProcessSubmixes@CBaseStreamGroupProxy@@UEAAXXZ @ 0x18004AFA0 (-PruneInactiveProcessSubmixes@CBaseStreamGroupProxy@@UEAAXXZ.c)
 *     ??1CSaDeviceProxy@@MEAA@XZ @ 0x18004B590 (--1CSaDeviceProxy@@MEAA@XZ.c)
 *     ?ReportSpatialLicenseChanged@CPolicyConfig@@UEAAJPEBG@Z @ 0x1800E0460 (-ReportSpatialLicenseChanged@CPolicyConfig@@UEAAJPEBG@Z.c)
 *     ?UpdateRenderingEndpointsSpatialSettingsAsync@CPolicyConfig@@SAXXZ @ 0x1800E17F0 (-UpdateRenderingEndpointsSpatialSettingsAsync@CPolicyConfig@@SAXXZ.c)
 *     ?ValidateSpatialAudioSettings@CPolicyConfig@@UEAAJXZ @ 0x1800E1870 (-ValidateSpatialAudioSettings@CPolicyConfig@@UEAAJXZ.c)
 *     ?OnFormatCapsChange@CKsSoftwareNotificationsMonitor@@AEAAJXZ @ 0x1800EBA6C (-OnFormatCapsChange@CKsSoftwareNotificationsMonitor@@AEAAJXZ.c)
 *     ?OnDefaultDeviceChanged@CMMNotificationDelegator@@UEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0002@@PEBG@Z @ 0x1800EFC10 (-OnDefaultDeviceChanged@CMMNotificationDelegator@@UEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000.c)
 *     ?OnEndpointAvailableForUse@CSharedStreamGroupProxy@@UEAAXPEBG@Z @ 0x1800EFE30 (-OnEndpointAvailableForUse@CSharedStreamGroupProxy@@UEAAXPEBG@Z.c)
 *     ?OnEndpointUnavailableForUse@CSharedStreamGroupProxy@@UEAAXPEBG@Z @ 0x1800F00D0 (-OnEndpointUnavailableForUse@CSharedStreamGroupProxy@@UEAAXPEBG@Z.c)
 * Callees:
 *     ?_Tidy@?$_Func_class@X$$V@std@@IEAAXXZ @ 0x18003F1BC (-_Tidy@-$_Func_class@X$$V@std@@IEAAXXZ.c)
 *     ?Initialize@CSerialWorkQueue@@AEAAJXZ @ 0x18004ED8C (-Initialize@CSerialWorkQueue@@AEAAJXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18006430C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0?$function@$$A6AXXZ@std@@QEAA@AEBV01@@Z @ 0x1800DCBE0 (--0-$function@$$A6AXXZ@std@@QEAA@AEBV01@@Z.c)
 *     ??_G_WorkTask@@QEAAPEAXI@Z @ 0x1800DD5AC (--_G_WorkTask@@QEAAPEAXI@Z.c)
 *     ?Initialize@_WorkTask@@QEAAJV?$function@$$A6AXXZ@std@@PEAVCSerialWorkQueue@@@Z @ 0x1800DFB64 (-Initialize@_WorkTask@@QEAAJV-$function@$$A6AXXZ@std@@PEAVCSerialWorkQueue@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CSerialWorkQueue::QueueWorkItem(__int64 a1, __int64 a2)
{
  int v4; // edi
  _QWORD *v5; // rax
  _QWORD *v6; // rbx
  __int64 v7; // rax
  struct _TP_WORK *ThreadpoolWork; // rsi
  signed int LastError; // eax
  _BYTE v11[96]; // [rsp+28h] [rbp-60h] BYREF

  v4 = 0;
  if ( !*(_BYTE *)(a1 + 80) )
  {
    v4 = CSerialWorkQueue::Initialize((PTP_POOL *)a1);
    if ( v4 >= 0 )
    {
      v5 = operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
      v6 = v5;
      if ( v5 )
      {
        *v5 = 0LL;
        v5[1] = 0LL;
        v5[2] = 0LL;
      }
      else
      {
        v6 = 0LL;
      }
      if ( v6 )
      {
        v7 = std::function<void (void)>::function<void (void)>((__int64)v11, a2);
        v4 = _WorkTask::Initialize(v6, v7, a1);
        if ( v4 >= 0 )
        {
          ThreadpoolWork = CreateThreadpoolWork(
                             (PTP_WORK_CALLBACK)CSerialWorkQueue::WorkCallback,
                             v6,
                             (PTP_CALLBACK_ENVIRON)(a1 + 8));
          if ( ThreadpoolWork )
          {
            v4 = 0;
          }
          else
          {
            LastError = GetLastError();
            v4 = LastError;
            if ( LastError > 0 )
              v4 = (unsigned __int16)LastError | 0x80070000;
          }
          if ( v4 >= 0 )
          {
            SubmitThreadpoolWork(ThreadpoolWork);
            v6 = 0LL;
          }
        }
      }
      else
      {
        v4 = -2147024882;
      }
      if ( v6 )
        _WorkTask::`scalar deleting destructor'((_WorkTask *)v6);
    }
  }
  std::_Func_class<void,>::_Tidy(a2, a2);
  return (unsigned int)v4;
}
