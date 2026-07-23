/*
 * XREFs of _CmGetContainerBooleanProperty @ 0x1408FA4F8
 * Callers:
 *     _CmGetDeviceContainerMappedProperty @ 0x1406EB444 (_CmGetDeviceContainerMappedProperty.c)
 * Callees:
 *     _CmEnumDevicesInContainerWithCallback @ 0x1408FA13C (_CmEnumDevicesInContainerWithCallback.c)
 */

__int64 __fastcall CmGetContainerBooleanProperty(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _DWORD *a5,
        _BYTE *a6,
        int a7,
        _DWORD *a8)
{
  __int64 result; // rax
  __int64 v9; // [rsp+30h] [rbp-18h] BYREF
  __int64 v10; // [rsp+38h] [rbp-10h]

  v9 = 0LL;
  v10 = 0LL;
  *a8 = 1;
  *a5 = 17;
  if ( !a7 )
    return 3221225507LL;
  v9 = a4;
  LOBYTE(v10) = 0;
  result = CmEnumDevicesInContainerWithCallback(
             a1,
             a2,
             a3,
             (__int64)CmGetContainerBooleanPropertyCallback,
             (__int64)&v9);
  *a6 = v10;
  return result;
}
