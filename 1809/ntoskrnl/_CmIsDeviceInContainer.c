/*
 * XREFs of _CmIsDeviceInContainer @ 0x1406EBAA8
 * Callers:
 *     _CmGetDeviceContainerIdFromBase @ 0x1406EB90C (_CmGetDeviceContainerIdFromBase.c)
 * Callees:
 *     ZwClose @ 0x1401B84D0 (ZwClose.c)
 *     _RegRtlQueryValue @ 0x1405C89A8 (_RegRtlQueryValue.c)
 *     _SysCtxRegOpenKey @ 0x1405C8AFC (_SysCtxRegOpenKey.c)
 */

__int64 __fastcall CmIsDeviceInContainer(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        const WCHAR *a5,
        _BYTE *a6,
        _BYTE *a7)
{
  _BYTE *v7; // r14
  _BYTE *v9; // rsi
  __int64 v10; // rdi
  int Value; // ebx
  __int64 v12; // rcx
  __int64 v13; // rcx
  const WCHAR *v15; // rdx
  HANDLE v16; // rcx
  HANDLE Handle; // [rsp+30h] [rbp-10h] BYREF
  HANDLE v18; // [rsp+38h] [rbp-8h] BYREF
  HANDLE KeyHandle; // [rsp+60h] [rbp+20h] BYREF

  v7 = a6;
  v9 = a7;
  v10 = a1;
  v18 = 0LL;
  Handle = 0LL;
  KeyHandle = 0LL;
  *a6 = 0;
  *v9 = 0;
  if ( a1 )
    a1 = *(_QWORD *)(a1 + 224);
  Value = SysCtxRegOpenKey(a1, a2, a3, 0, 1u, (__int64)&v18);
  if ( Value >= 0 )
  {
    v12 = v10 ? *(_QWORD *)(v10 + 224) : 0LL;
    Value = SysCtxRegOpenKey(v12, (__int64)v18, (__int64)L"BaseContainers", 0, 1u, (__int64)&Handle);
    if ( Value >= 0 )
    {
      v13 = v10 ? *(_QWORD *)(v10 + 224) : 0LL;
      Value = SysCtxRegOpenKey(v13, (__int64)Handle, a4, 0, 1u, (__int64)&KeyHandle);
      if ( Value >= 0 )
      {
        v15 = a5;
        v16 = KeyHandle;
        *v7 = 1;
        Value = RegRtlQueryValue(v16, v15, 0LL, 0LL, (unsigned int *)&a6);
        if ( Value >= 0 )
          *v9 = 1;
      }
    }
  }
  if ( Value == -1073741772 || Value == -1073741444 )
    Value = 0;
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( Handle )
    ZwClose(Handle);
  if ( v18 )
    ZwClose(v18);
  return (unsigned int)Value;
}
