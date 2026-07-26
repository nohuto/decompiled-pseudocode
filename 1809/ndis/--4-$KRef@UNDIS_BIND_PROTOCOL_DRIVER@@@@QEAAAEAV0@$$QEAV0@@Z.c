/*
 * XREFs of ??4?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@QEAAAEAV0@$$QEAV0@@Z @ 0x1C00CE204
 * Callers:
 *     NdisRegisterProtocolDriver @ 0x1C00CDAF0 (NdisRegisterProtocolDriver.c)
 *     NdisRegisterProtocol @ 0x1C00EDB50 (NdisRegisterProtocol.c)
 * Callees:
 *     ??_GKRefHolder@?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@QEAAPEAXI@Z @ 0x1C00ED8F0 (--_GKRefHolder@-$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@QEAAPEAXI@Z.c)
 */

volatile signed __int32 **__fastcall KRef<NDIS_BIND_PROTOCOL_DRIVER>::operator=(
        volatile signed __int32 **a1,
        volatile signed __int32 **a2)
{
  volatile signed __int32 *v3; // rdi
  volatile signed __int32 *v4; // rcx

  if ( a1 != a2 )
  {
    v3 = *a2;
    *a2 = 0LL;
    v4 = *a1;
    if ( v4 && _InterlockedExchangeAdd(v4 + 12, 0xFFFFFFFF) == 1 )
      KRef<NDIS_BIND_PROTOCOL_DRIVER>::KRefHolder::`scalar deleting destructor'((PVOID)v4);
    *a1 = v3;
  }
  return a1;
}
