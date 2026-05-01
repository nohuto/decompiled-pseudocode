/*
 * XREFs of ?HandleVisibilityOverrideImmunityChange@CImmersiveApp@@UEAAXW4SESSION_IDLE_STATE@@W4OVERRIDE_IMMUNITY_CHANGE@@@Z @ 0x180145A70
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_Sd @ 0x18014C0F8 (WPP_SF_Sd.c)
 */

__int64 __fastcall CImmersiveApp::HandleVisibilityOverrideImmunityChange(__int64 a1, int a2, int a3)
{
  __int64 result; // rax

  if ( a2 == 1 && a3 == 2 )
  {
    if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      WPP_SF_Sd(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        12,
        (unsigned int)&WPP_3ae9f5eed530322b8a0a3a3f404820d9_Traceguids,
        *(_QWORD *)(a1 + 480),
        *(_DWORD *)(a1 + 488));
    return (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 104LL))(a1, 1LL);
  }
  return result;
}
