/*
 * XREFs of ?Release@?$SharedUnknownBase@UISIPCServer@@UIUnknown@@U2@U2@U2@U2@U2@U2@U2@U2@@@UEAAKXZ @ 0x1800A22E0
 * Callers:
 *     ?Create@SipcServer@@SAJAEBU_GUID@@W4SIPC_SERVICE_BOUNDARY@@_NP6AXPEAXPEAUISIPCServer@@KK@Z33PEAPEAU4@@Z @ 0x1800A1B14 (-Create@SipcServer@@SAJAEBU_GUID@@W4SIPC_SERVICE_BOUNDARY@@_NP6AXPEAXPEAUISIPCServer@@KK@Z33PEAP.c)
 *     ?AcceptClientConnection@SipcServer@@UEAAJP6AXPEAXPEAUISIPCEndpoint@@W4SIPC_ENDPOINT_STATUS@@@ZP6AX010_K@Z0PEAPEAU2@@Z @ 0x1800A1D70 (-AcceptClientConnection@SipcServer@@UEAAJP6AXPEAXPEAUISIPCEndpoint@@W4SIPC_ENDPOINT_STATUS@@@ZP6.c)
 *     ?Release@?$SharedUnknownBase@UISIPCServer@@UIUnknown@@U2@U2@U2@U2@U2@U2@U2@U2@@@WEI@EAAKXZ @ 0x1800A2500 (-Release@-$SharedUnknownBase@UISIPCServer@@UIUnknown@@U2@U2@U2@U2@U2@U2@U2@U2@@@WEI@EAAKXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall SharedUnknownBase<ISIPCServer,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown>::Release(
        __int64 a1)
{
  volatile signed __int64 *v1; // rbx
  unsigned int v2; // eax
  unsigned int v3; // esi

  v1 = (volatile signed __int64 *)(a1 - 16);
  v2 = _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 - 16 + 8), 0xFFFFFFFFFFFFFFFFuLL);
  if ( v2 <= 1 )
    __fastfail(0xEu);
  v3 = v2 - 2;
  if ( v2 == 2 )
  {
    (*(void (__fastcall **)(__int64))(*v1 + 16))(a1 - 16);
    if ( !((unsigned __int64)_InterlockedExchangeAdd64(v1 + 1, 0xFFFFFFFFFFFFFFFFuLL) >> 32) )
      (*(void (__fastcall **)(volatile signed __int64 *))(*v1 + 8))(v1);
  }
  return v3;
}
