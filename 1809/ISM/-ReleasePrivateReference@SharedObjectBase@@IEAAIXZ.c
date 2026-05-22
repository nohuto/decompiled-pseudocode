/*
 * XREFs of ?ReleasePrivateReference@SharedObjectBase@@IEAAIXZ @ 0x18009FC0C
 * Callers:
 *     ?Disconnect@SipcClient@@QEAAXXZ @ 0x1800A1430 (-Disconnect@SipcClient@@QEAAXXZ.c)
 *     ?Disconnect@SipcEndpoint@@QEAAXXZ @ 0x1800A1664 (-Disconnect@SipcEndpoint@@QEAAXXZ.c)
 *     ?Create@SipcServer@@SAJAEBU_GUID@@W4SIPC_SERVICE_BOUNDARY@@_NP6AXPEAXPEAUISIPCServer@@KK@Z33PEAPEAU4@@Z @ 0x1800A1B14 (-Create@SipcServer@@SAJAEBU_GUID@@W4SIPC_SERVICE_BOUNDARY@@_NP6AXPEAXPEAUISIPCServer@@KK@Z33PEAP.c)
 *     ?Disconnect@SipcServer@@QEAAXPEAVSipcEndpoint@@@Z @ 0x1800A1CC8 (-Disconnect@SipcServer@@QEAAXPEAVSipcEndpoint@@@Z.c)
 *     ?AcceptClientConnection@SipcServer@@UEAAJP6AXPEAXPEAUISIPCEndpoint@@W4SIPC_ENDPOINT_STATUS@@@ZP6AX010_K@Z0PEAPEAU2@@Z @ 0x1800A1D70 (-AcceptClientConnection@SipcServer@@UEAAJP6AXPEAXPEAUISIPCEndpoint@@W4SIPC_ENDPOINT_STATUS@@@ZP6.c)
 *     ?OnDisposePublic@SipcServer@@MEAAXXZ @ 0x1800A2210 (-OnDisposePublic@SipcServer@@MEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall SharedObjectBase::ReleasePrivateReference(SharedObjectBase *this)
{
  unsigned __int64 v2; // rax
  unsigned int v3; // edi

  v2 = (unsigned __int64)_InterlockedExchangeAdd64((volatile signed __int64 *)this + 1, 0xFFFFFFFF00000000uLL) >> 32;
  if ( (unsigned int)v2 <= 1 )
    __fastfail(0xEu);
  v3 = v2 - 2;
  if ( (_DWORD)v2 == 2 )
  {
    (*(void (__fastcall **)(SharedObjectBase *))(*(_QWORD *)this + 24LL))(this);
    if ( !(unsigned int)_InterlockedExchangeAdd64((volatile signed __int64 *)this + 1, 0xFFFFFFFF00000000uLL) )
      (*(void (__fastcall **)(SharedObjectBase *))(*(_QWORD *)this + 8LL))(this);
  }
  return v3;
}
