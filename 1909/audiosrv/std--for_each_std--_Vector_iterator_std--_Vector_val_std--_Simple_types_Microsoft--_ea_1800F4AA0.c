/*
 * XREFs of std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_IStreamGroupProxy_________lambda_123c1579370fdd5089886a20c78d5805___ @ 0x1800F4AA0
 * Callers:
 *     ?GetSaDeviceForSharedStream@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@AEAUSaDeviceResourceParams@@_N4PEAVCAudioSessionManager@@44PEAPEAUISaDeviceProxy@@@Z @ 0x180043994 (-GetSaDeviceForSharedStream@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUSaDevi.c)
 * Callees:
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18002D610 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18006C990 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_IStreamGroupProxy_________lambda_123c1579370fdd5089886a20c78d5805___(
        _QWORD *a1,
        _QWORD *a2,
        _QWORD *a3,
        _QWORD *a4)
{
  _QWORD *i; // rsi
  char v8; // al
  int v9; // eax
  _QWORD *result; // rax

  for ( i = a2; i != a3; ++i )
  {
    v8 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*i + 216LL))(*i);
    v9 = (*(__int64 (__fastcall **)(struct IDeviceGraphManager *, _QWORD, _QWORD, bool, _QWORD))(*(_QWORD *)g_DeviceGraphManager
                                                                                               + 32LL))(
           g_DeviceGraphManager,
           *i,
           *a4,
           v8 == 0,
           0LL);
    if ( v9 < 0 )
      AudSrvTraceLoggingErrorHelper(
        "CAudioResourceManager::GetSaDeviceForSharedStream::<lambda_123c1579370fdd5089886a20c78d5805>::operator ()",
        2047,
        v9);
  }
  result = a1;
  *a1 = a4;
  return result;
}
