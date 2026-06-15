/*
 * XREFs of ?PowerResumed@CAudioSrv@@UEAAK_J@Z @ 0x18004EA30
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18006B930 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAudioSrv::PowerResumed(CAudioSrv *this)
{
  if ( g_PolicyManager )
    (*(void (__fastcall **)(struct IAudioPolicyManager *, _QWORD))(*(_QWORD *)g_PolicyManager + 328LL))(
      g_PolicyManager,
      0LL);
  return 0LL;
}
