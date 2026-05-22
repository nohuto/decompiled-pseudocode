/*
 * XREFs of ?Remove@InjectionDevice@@QEAAJXZ @ 0x180076F90
 * Callers:
 *     ??1ControllerProcessor@@MEAA@XZ @ 0x180074C20 (--1ControllerProcessor@@MEAA@XZ.c)
 *     ??1InjectionDevice@@QEAA@XZ @ 0x180074E14 (--1InjectionDevice@@QEAA@XZ.c)
 *     ??1KeyboardInjectionDevice@@QEAA@XZ @ 0x180074E3C (--1KeyboardInjectionDevice@@QEAA@XZ.c)
 *     ?TurnNavigationOff@ControllerProcessor@@AEAAJXZ @ 0x180078344 (-TurnNavigationOff@ControllerProcessor@@AEAAJXZ.c)
 *     ??1MouseProcessor@@MEAA@XZ @ 0x18012B35C (--1MouseProcessor@@MEAA@XZ.c)
 *     ?UpdateMouseAsTouchMode@MouseProcessor@@AEAAXPEAUHKEY__@@@Z @ 0x18012BA48 (-UpdateMouseAsTouchMode@MouseProcessor@@AEAAXPEAUHKEY__@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall InjectionDevice::Remove(InjectionDevice *this)
{
  __int64 result; // rax

  if ( !*((_BYTE *)this + 1576) )
    return 0LL;
  result = (*(__int64 (__fastcall **)(_QWORD, char *))(**(_QWORD **)this + 56LL))(*(_QWORD *)this, (char *)this + 8);
  *((_BYTE *)this + 1576) = (int)result < 0;
  return result;
}
