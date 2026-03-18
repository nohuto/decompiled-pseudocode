/*
 * XREFs of VslLoadEnclaveModule @ 0x140852A38
 * Callers:
 *     MiLoadSectionIntoVsmEnclave @ 0x140894788 (MiLoadSectionIntoVsmEnclave.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x14012A77C (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     VslpLockMdlForTransfer @ 0x140290D00 (VslpLockMdlForTransfer.c)
 *     VslpUnlockPagesForTransfer @ 0x140290F68 (VslpUnlockPagesForTransfer.c)
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
  _QWORD v14[10]; // [rsp+38h] [rbp-B9h] BYREF
  _QWORD v15[14]; // [rsp+88h] [rbp-69h] BYREF

  memset(v15, 0, 0x68uLL);
  memset(v14, 0, 0x48uLL);
  result = VslpLockMdlForTransfer((__int64)v14, a5, 0);
  if ( (int)result >= 0 )
  {
    v15[1] = a1;
    v15[6] = v14[7];
    v15[2] = a2;
    v15[3] = a4;
    v15[4] = a3;
    v15[5] = a5;
    v12 = VslpEnterIumSecureMode(2, 46LL, 0LL, (__int64)v15);
    VslpUnlockPagesForTransfer((__int64)v14);
    if ( v12 >= 0 )
    {
      if ( a6 )
        *a6 = v15[2];
      if ( a7 )
        *a7 = v15[3];
      if ( a8 )
        *a8 = v15[4];
    }
    return (unsigned int)v12;
  }
  return result;
}
