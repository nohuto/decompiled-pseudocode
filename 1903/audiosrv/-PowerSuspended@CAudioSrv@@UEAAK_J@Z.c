/*
 * XREFs of ?PowerSuspended@CAudioSrv@@UEAAK_J@Z @ 0x18004E9F0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18006B930 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAudioSrv::PowerSuspended(CAudioSrv *this)
{
  if ( g_PolicyManager )
    (*(void (__fastcall **)(struct IAudioPolicyManager *, __int64))(*(_QWORD *)g_PolicyManager + 328LL))(
      g_PolicyManager,
      1LL);
  return 0LL;
}
