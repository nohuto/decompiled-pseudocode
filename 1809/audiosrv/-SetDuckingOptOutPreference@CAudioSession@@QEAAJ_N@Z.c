/*
 * XREFs of ?SetDuckingOptOutPreference@CAudioSession@@QEAAJ_N@Z @ 0x1800C49AC
 * Callers:
 *     AudioSessionManagerGetSessionForStreamSwitch @ 0x1800C9E80 (AudioSessionManagerGetSessionForStreamSwitch.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAudioSession::SetDuckingOptOutPreference(CAudioSession *this, char a2)
{
  if ( (*(unsigned int (__fastcall **)(CAudioSession *))(*(_QWORD *)this + 56LL))(this) )
    return 2290679811LL;
  *((_BYTE *)this + 484) = a2;
  return 0LL;
}
