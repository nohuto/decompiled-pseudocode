/*
 * XREFs of VslLoadEnclaveData @ 0x14085203C
 * Callers:
 *     PsLoadVsmEnclaveData @ 0x140309C48 (PsLoadVsmEnclaveData.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x14012B19C (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     VslpLockMdlForTransfer @ 0x140290A60 (VslpLockMdlForTransfer.c)
 *     VslpUnlockPagesForTransfer @ 0x140290CC8 (VslpUnlockPagesForTransfer.c)
 */

__int64 __fastcall VslLoadEnclaveData(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4, __int64 a5, _DWORD *a6)
{
  __int64 v7; // r14
  __int64 v9; // rbx
  __int64 result; // rax
  NTSTATUS v11; // ebx
  _QWORD v12[10]; // [rsp+28h] [rbp-99h] BYREF
  _QWORD v13[14]; // [rsp+78h] [rbp-49h] BYREF

  v7 = a3;
  v9 = a4;
  memset(v13, 0, 0x68uLL);
  memset(v12, 0, 0x48uLL);
  if ( !a5 || (result = VslpLockMdlForTransfer((__int64)v12, a5, 0), (int)result >= 0) )
  {
    v13[6] = v12[7];
    v13[1] = a1;
    v13[2] = a2;
    v13[3] = v7;
    v13[4] = v9;
    v13[5] = a5;
    v11 = VslpEnterIumSecureMode(2, 45LL, 0LL, (__int64)v13);
    if ( a5 )
      VslpUnlockPagesForTransfer((__int64)v12);
    if ( v11 >= 0 )
      *a6 = v13[2];
    return (unsigned int)v11;
  }
  return result;
}
