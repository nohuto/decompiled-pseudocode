/*
 * XREFs of ??1PrimaryAppProxyBase@@UEAA@XZ @ 0x180096DCC
 * Callers:
 *     _Win32PrimaryAppProxy::Win32PrimaryAppProxy_::_1_::dtor$0 @ 0x180096BBB (_Win32PrimaryAppProxy--Win32PrimaryAppProxy_--_1_--dtor$0.c)
 *     _KioskPositioner::LoadShellLauncherConfiguration_::_1_::dtor$10 @ 0x180098F7B (_KioskPositioner--LoadShellLauncherConfiguration_--_1_--dtor$10.c)
 * Callees:
 *     <none>
 */

void __fastcall PrimaryAppProxyBase::~PrimaryAppProxyBase(PrimaryAppProxyBase *this)
{
  *(_QWORD *)this = &PrimaryAppProxyBase::`vftable';
}
