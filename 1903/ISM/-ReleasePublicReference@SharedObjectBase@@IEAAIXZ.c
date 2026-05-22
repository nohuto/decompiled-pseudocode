/*
 * XREFs of ?ReleasePublicReference@SharedObjectBase@@IEAAIXZ @ 0x1800D6AA0
 * Callers:
 *     ?Create@SipcServer@@SAJAEBU_GUID@@W4SIPC_SERVICE_BOUNDARY@@P6AXPEAXPEAUISIPCServer@@KK@Z22PEAPEAU4@@Z @ 0x1800164BC (-Create@SipcServer@@SAJAEBU_GUID@@W4SIPC_SERVICE_BOUNDARY@@P6AXPEAXPEAUISIPCServer@@KK@Z22PEAPEA.c)
 *     ?Release@?$SharedUnknownBase@UISIPCServer@@UIUnknown@@U2@U2@U2@U2@U2@U2@U2@U2@@@UEAAKXZ @ 0x1800D6A00 (-Release@-$SharedUnknownBase@UISIPCServer@@UIUnknown@@U2@U2@U2@U2@U2@U2@U2@U2@@@UEAAKXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall SharedObjectBase::ReleasePublicReference(SharedObjectBase *this)
{
  unsigned int v2; // eax
  unsigned int v3; // esi

  v2 = _InterlockedExchangeAdd64((volatile signed __int64 *)this + 1, 0xFFFFFFFFFFFFFFFFuLL);
  if ( v2 <= 1 )
    __fastfail(0xEu);
  v3 = v2 - 2;
  if ( v2 == 2 )
  {
    (*(void (__fastcall **)(SharedObjectBase *))(*(_QWORD *)this + 16LL))(this);
    if ( !((unsigned __int64)_InterlockedExchangeAdd64((volatile signed __int64 *)this + 1, 0xFFFFFFFFFFFFFFFFuLL) >> 32) )
      (*(void (__fastcall **)(SharedObjectBase *))(*(_QWORD *)this + 8LL))(this);
  }
  return v3;
}
