/*
 * XREFs of ?ndisLoadNetworkInterfaceFromPersistedState@@YAJAEBU_GUID@@AEAVKRegKey@@1@Z @ 0x1C00FC168
 * Callers:
 *     ndisIfCreateOrUpdateInterface @ 0x1C0067A40 (ndisIfCreateOrUpdateInterface.c)
 *     _lambda_74aaa7089007ee3601df5827111bc2b5_::operator() @ 0x1C00F912C (_lambda_74aaa7089007ee3601df5827111bc2b5_--operator().c)
 * Callees:
 *     ??1NdisNetworkInterfacePersistedState@@QEAA@XZ @ 0x1C0011DAC (--1NdisNetworkInterfacePersistedState@@QEAA@XZ.c)
 *     ?ndisCompareGuid@@YAJPEBU_GUID@@0@Z @ 0x1C0011F54 (-ndisCompareGuid@@YAJPEBU_GUID@@0@Z.c)
 *     ??0NdisNetworkInterfacePersistedState@@QEAA@XZ @ 0x1C0011FD4 (--0NdisNetworkInterfacePersistedState@@QEAA@XZ.c)
 *     ?ndisIfGetDefaultNetworkGuid@@YA?AU_GUID@@XZ @ 0x1C0036738 (-ndisIfGetDefaultNetworkGuid@@YA-AU_GUID@@XZ.c)
 *     ?ndisIfCreateInterfaceFromPersistentStore@@YAHAEBU_GUID@@AEAUNdisNetworkInterfacePersistedState@@W4NdisIfBlockSource@@@Z @ 0x1C0039BE0 (-ndisIfCreateInterfaceFromPersistentStore@@YAHAEBU_GUID@@AEAUNdisNetworkInterfacePersistedState@.c)
 *     __security_check_cookie @ 0x1C0040760 (__security_check_cookie.c)
 *     ?ReadNetworkInterfaceV2@BindRegistry@Ndis@@YAJAEAVKRegKey@@0AEAUNdisNetworkInterfacePersistedState@@@Z @ 0x1C0101424 (-ReadNetworkInterfaceV2@BindRegistry@Ndis@@YAJAEAVKRegKey@@0AEAUNdisNetworkInterfacePersistedSta.c)
 */

__int64 __fastcall ndisLoadNetworkInterfaceFromPersistedState(
        const struct _GUID *a1,
        struct KRegKey *this,
        struct KRegKey *a3)
{
  struct NdisNetworkInterfacePersistedState *v6; // r9
  int v7; // ebx
  unsigned int v8; // r8d
  struct _GUID v10; // [rsp+20h] [rbp-C8h] BYREF
  struct KRegKey v11; // [rsp+30h] [rbp-B8h] BYREF
  struct _GUID v12; // [rsp+54h] [rbp-94h] BYREF

  NdisNetworkInterfacePersistedState::NdisNetworkInterfacePersistedState((NdisNetworkInterfacePersistedState *)&v11);
  v7 = Ndis::BindRegistry::ReadNetworkInterfaceV2(this, a3, &v11, v6);
  if ( v7 >= 0 )
  {
    if ( !(unsigned int)ndisCompareGuid(&v12, &ndisDefaultNetworkGuid) )
      v12 = *ndisIfGetDefaultNetworkGuid(&v10);
    if ( (unsigned int)ndisIfCreateInterfaceFromPersistentStore(
                         a1,
                         (struct NdisNetworkInterfacePersistedState *)&v11,
                         v8) )
      v7 = -1073741823;
    else
      v7 = 0;
  }
  NdisNetworkInterfacePersistedState::~NdisNetworkInterfacePersistedState((NdisNetworkInterfacePersistedState *)&v11);
  return (unsigned int)v7;
}
