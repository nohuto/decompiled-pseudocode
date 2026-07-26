/*
 * XREFs of ndisEnsureBindingInfoLoaded @ 0x1C01260F8
 * Callers:
 *     ?ndisBindBuilderInitialize@@YAJXZ @ 0x1C01463F4 (-ndisBindBuilderInitialize@@YAJXZ.c)
 * Callees:
 *     ??$netsetupEnumerateObjectIds@P6AJAEBU_GUID@@@Z@@YAJW4_NETSETUP_OBJECT_TYPE@@W4NetSetupStoreType@@P6AJAEBU_GUID@@@Z@Z @ 0x1C0124D20 (--$netsetupEnumerateObjectIds@P6AJAEBU_GUID@@@Z@@YAJW4_NETSETUP_OBJECT_TYPE@@W4NetSetupStoreType.c)
 *     ndisLoadNamedFilterAltitudes @ 0x1C01265CC (ndisLoadNamedFilterAltitudes.c)
 */

__int64 ndisEnsureBindingInfoLoaded()
{
  __int64 result; // rax
  __int64 v1; // rdx
  __int64 v2; // rdx

  result = ndisLoadNamedFilterAltitudes();
  if ( !(_DWORD)result )
  {
    result = netsetupEnumerateObjectIds<long (*)(_GUID const &)>(
               4LL,
               v1,
               (__int64 (__fastcall *)(GUID *))ndisReadProtocolById);
    if ( !(_DWORD)result )
      return netsetupEnumerateObjectIds<long (*)(_GUID const &)>(
               3LL,
               v2,
               (__int64 (__fastcall *)(GUID *))ndisReadLwfById);
  }
  return result;
}
