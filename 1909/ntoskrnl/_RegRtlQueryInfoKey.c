/*
 * XREFs of _RegRtlQueryInfoKey @ 0x14071CA28
 * Callers:
 *     _PnpCtxRegQueryInfoKey @ 0x1406FB170 (_PnpCtxRegQueryInfoKey.c)
 *     _RegRtlDeleteTreeInternal @ 0x14073C69C (_RegRtlDeleteTreeInternal.c)
 *     _RegRtlEnumKeyWithCallback @ 0x14076D848 (_RegRtlEnumKeyWithCallback.c)
 *     _RegRtlCopyTreeInternal @ 0x14093E36C (_RegRtlCopyTreeInternal.c)
 *     _RegRtlDeletePathInternal @ 0x14093E878 (_RegRtlDeletePathInternal.c)
 * Callees:
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     ZwQueryKey @ 0x1401C0F10 (ZwQueryKey.c)
 *     memset @ 0x1401D77C0 (memset.c)
 */

__int64 __fastcall RegRtlQueryInfoKey(HANDLE KeyHandle, _DWORD *a2, _DWORD *a3, _DWORD *a4, _DWORD *a5, _DWORD *a6)
{
  NTSTATUS v10; // edx
  ULONG ResultLength; // [rsp+30h] [rbp-78h] BYREF
  _DWORD KeyInformation[10]; // [rsp+38h] [rbp-70h] BYREF

  memset(KeyInformation, 0, sizeof(KeyInformation));
  v10 = ZwQueryKey(KeyHandle, KeyCachedInformation, KeyInformation, 0x28u, &ResultLength);
  if ( v10 >= 0 )
  {
    if ( a2 )
      *a2 = KeyInformation[3];
    if ( a3 )
      *a3 = KeyInformation[4] >> 1;
    if ( a4 )
      *a4 = KeyInformation[5];
    if ( a5 )
      *a5 = KeyInformation[6] >> 1;
    if ( a6 )
      *a6 = KeyInformation[7];
  }
  return (unsigned int)v10;
}
