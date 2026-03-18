/*
 * XREFs of VslQuerySecureKernelProfileInformation @ 0x1402900C4
 * Callers:
 *     ExpQuerySystemInformation @ 0x1405CAF30 (ExpQuerySystemInformation.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x14012A77C (VslpEnterIumSecureMode.c)
 *     HvlQueryVsmConnection @ 0x14012A80C (HvlQueryVsmConnection.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     VslpLockPagesForTransfer @ 0x140290D8C (VslpLockPagesForTransfer.c)
 *     VslpUnlockPagesForTransfer @ 0x140290F68 (VslpUnlockPagesForTransfer.c)
 */

__int64 __fastcall VslQuerySecureKernelProfileInformation(__int64 a1, int a2, unsigned int a3, _DWORD *a4)
{
  int v8; // ecx
  __int64 result; // rax
  NTSTATUS v10; // edi
  unsigned int v11; // [rsp+20h] [rbp-108h]
  _QWORD v12[10]; // [rsp+30h] [rbp-F8h] BYREF
  _QWORD v13[14]; // [rsp+80h] [rbp-A8h] BYREF

  memset(v13, 0, 0x68uLL);
  memset(v12, 0, 0x48uLL);
  if ( !HvlQueryVsmConnection(0LL) )
    return 3224698910LL;
  if ( a3 > 0x1FA000 )
    return 3221225476LL;
  if ( !a3 || (result = VslpLockPagesForTransfer((unsigned int)v12, a2, a3, 2, v8 & v11), (int)result >= 0) )
  {
    v13[2] = v12[0];
    v13[3] = v12[7];
    v13[1] = a1;
    v10 = VslpEnterIumSecureMode(2, 60LL, 0LL, (__int64)v13);
    if ( v10 >= 0 )
      *a4 = v13[2];
    if ( a3 )
      VslpUnlockPagesForTransfer(v12);
    return (unsigned int)v10;
  }
  return result;
}
