/*
 * XREFs of ?ndisLoadNetworkInterfaceFromPersistedState@@YAJAEBU_GUID@@AEAVKRegKey@@1@Z @ 0x1C00B3EDC
 * Callers:
 *     ndisIfCreateOrUpdateInterface @ 0x1C0042394 (ndisIfCreateOrUpdateInterface.c)
 *     _lambda_07fad1521ccbf9dcf92f4e848ce013d0_::operator() @ 0x1C00B32B4 (_lambda_07fad1521ccbf9dcf92f4e848ce013d0_--operator().c)
 * Callees:
 *     ?ndisCompareGuid@@YAJPEBU_GUID@@0@Z @ 0x1C000988C (-ndisCompareGuid@@YAJPEBU_GUID@@0@Z.c)
 *     ??0NdisNetworkInterfacePersistedState@@QEAA@XZ @ 0x1C000990C (--0NdisNetworkInterfacePersistedState@@QEAA@XZ.c)
 *     ?ndisIfGetDefaultNetworkGuid@@YA?AU_GUID@@XZ @ 0x1C001FA10 (-ndisIfGetDefaultNetworkGuid@@YA-AU_GUID@@XZ.c)
 *     ?ndisIfCreateInterfaceFromPersistentStore@@YAHAEBU_GUID@@AEAUNdisNetworkInterfacePersistedState@@W4NdisIfBlockSource@@@Z @ 0x1C0023FDC (-ndisIfCreateInterfaceFromPersistentStore@@YAHAEBU_GUID@@AEAUNdisNetworkInterfacePersistedState@.c)
 *     __security_check_cookie @ 0x1C0026050 (__security_check_cookie.c)
 *     ?ReadNetworkInterfaceV2@BindRegistry@Ndis@@YAJAEAVKRegKey@@0AEAUNdisNetworkInterfacePersistedState@@@Z @ 0x1C00C5470 (-ReadNetworkInterfaceV2@BindRegistry@Ndis@@YAJAEAVKRegKey@@0AEAUNdisNetworkInterfacePersistedSta.c)
 */

__int64 __fastcall ndisLoadNetworkInterfaceFromPersistedState(
        const struct _GUID *a1,
        struct KRegKey *this,
        struct KRegKey *a3)
{
  struct NdisNetworkInterfacePersistedState *v6; // r9
  int NetworkInterfaceV2; // ebx
  unsigned int v8; // r8d
  struct _GUID v10; // [rsp+20h] [rbp-D8h] BYREF
  PVOID v11; // [rsp+30h] [rbp-C8h] BYREF
  PVOID P; // [rsp+38h] [rbp-C0h]
  struct _GUID v13; // [rsp+54h] [rbp-A4h] BYREF

  NdisNetworkInterfacePersistedState::NdisNetworkInterfacePersistedState((NdisNetworkInterfacePersistedState *)&v11);
  NetworkInterfaceV2 = Ndis::BindRegistry::ReadNetworkInterfaceV2(this, a3, (struct KRegKey *)&v11, v6);
  if ( NetworkInterfaceV2 >= 0 )
  {
    if ( !(unsigned int)ndisCompareGuid(&v13, &ndisDefaultNetworkGuid) )
      v13 = *ndisIfGetDefaultNetworkGuid(&v10);
    if ( (unsigned int)ndisIfCreateInterfaceFromPersistentStore(
                         a1,
                         (struct NdisNetworkInterfacePersistedState *)&v11,
                         v8) )
      NetworkInterfaceV2 = -1073741823;
    else
      NetworkInterfaceV2 = 0;
  }
  if ( P )
    ExFreePoolWithTag(P, 0x7274534Bu);
  if ( v11 )
    ExFreePoolWithTag(v11, 0x7274534Bu);
  return (unsigned int)NetworkInterfaceV2;
}
