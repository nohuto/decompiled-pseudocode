/*
 * XREFs of VslLoadEnclaveModule @ 0x140819C74
 * Callers:
 *     MiLoadSectionIntoVsmEnclave @ 0x14085B5DC (MiLoadSectionIntoVsmEnclave.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x140129D80 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     VslpLockMdlForTransfer @ 0x14027C678 (VslpLockMdlForTransfer.c)
 *     VslpUnlockPagesForTransfer @ 0x14027C8E0 (VslpUnlockPagesForTransfer.c)
 */

__int64 __fastcall VslLoadEnclaveModule(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        _BYTE *a6,
        _DWORD *a7,
        _DWORD *a8)
{
  __int64 result; // rax
  NTSTATUS v12; // r14d
  _BYTE v14[56]; // [rsp+38h] [rbp-B9h] BYREF
  __int64 v15; // [rsp+70h] [rbp-81h]
  _BYTE v16[8]; // [rsp+88h] [rbp-69h] BYREF
  __int64 v17; // [rsp+90h] [rbp-61h]
  __int64 v18; // [rsp+98h] [rbp-59h]
  __int64 v19; // [rsp+A0h] [rbp-51h]
  __int64 v20; // [rsp+A8h] [rbp-49h]
  __int64 v21; // [rsp+B0h] [rbp-41h]
  __int64 v22; // [rsp+B8h] [rbp-39h]

  result = VslpLockMdlForTransfer((__int64)v14, a5, 0);
  if ( (int)result >= 0 )
  {
    v17 = a1;
    v22 = v15;
    v18 = a2;
    v19 = a4;
    v20 = a3;
    v21 = a5;
    v12 = VslpEnterIumSecureMode(2u, 42LL, 0, (__int64)v16);
    VslpUnlockPagesForTransfer((__int64)v14);
    if ( v12 >= 0 )
    {
      if ( a6 )
        *a6 = v18;
      if ( a7 )
        *a7 = v19;
      if ( a8 )
        *a8 = v20;
    }
    return (unsigned int)v12;
  }
  return result;
}
