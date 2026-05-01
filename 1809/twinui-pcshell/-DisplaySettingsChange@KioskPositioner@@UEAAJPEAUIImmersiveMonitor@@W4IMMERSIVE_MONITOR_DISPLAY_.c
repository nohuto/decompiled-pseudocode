/*
 * XREFs of ?DisplaySettingsChange@KioskPositioner@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_MONITOR_DISPLAY_CHANGE_FLAGS@@@Z @ 0x1800979B0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall KioskPositioner::DisplaySettingsChange(__int64 a1, __int64 a2, char a3, const char *a4)
{
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 result; // rax
  _QWORD v8[10]; // [rsp+28h] [rbp-50h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  try
  {
    if ( (a3 & 0x38) != 0 )
    {
      v5 = a1 - 120;
      v6 = *(_QWORD *)(a1 + 496);
      v8[0] = off_1803CC7F8;
      v8[1] = v5;
      v8[7] = v8;
      (*(void (__fastcall **)(__int64, _QWORD, _QWORD *))(*(_QWORD *)v6 + 32LL))(v6, *(_QWORD *)(a1 + 88), v8);
    }
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x36B,
                           (__int64)"pcshell\\twinui\\shellpositioners\\lib\\kioskpositioner.cpp",
                           a4);
  }
  return result;
}
