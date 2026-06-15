/*
 * XREFs of _lambda_4bb5ea0411f8e4a5ce5464c87650feff_::operator() @ 0x1800F5C00
 * Callers:
 *     std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_IStreamGroupProxy_________lambda_4bb5ea0411f8e4a5ce5464c87650feff___ @ 0x1800F4FF8 (std--for_each_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_Microsoft--_ea_1800F4FF8.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18006B930 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_d @ 0x1800C2644 (WPP_SF_d.c)
 */

__int64 __fastcall lambda_4bb5ea0411f8e4a5ce5464c87650feff_::operator()(_QWORD *a1, _QWORD *a2)
{
  char v4; // al
  __int64 result; // rax

  v4 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 216LL))(*a2);
  result = (*(__int64 (__fastcall **)(struct IDeviceGraphManager *, _QWORD, _QWORD, bool, _QWORD))(*(_QWORD *)g_DeviceGraphManager
                                                                                                 + 32LL))(
             g_DeviceGraphManager,
             *a2,
             *a1,
             v4 == 0,
             0LL);
  if ( (int)result < 0
    && WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    return WPP_SF_d(
             *((_QWORD *)WPP_GLOBAL_Control + 2),
             0x28u,
             (__int64)&WPP_79ddef80328333c3349c04c3a3e53ca6_Traceguids,
             result);
  }
  return result;
}
