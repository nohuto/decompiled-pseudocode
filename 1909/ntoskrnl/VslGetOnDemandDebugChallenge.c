/*
 * XREFs of VslGetOnDemandDebugChallenge @ 0x140851B38
 * Callers:
 *     PsIumGetOnDemandDebugChallenge @ 0x1408CABF4 (PsIumGetOnDemandDebugChallenge.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x14012B19C (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memmove @ 0x1401D7480 (memmove.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     VslpLockPagesForTransfer @ 0x140290AEC (VslpLockPagesForTransfer.c)
 *     VslpUnlockPagesForTransfer @ 0x140290CC8 (VslpUnlockPagesForTransfer.c)
 */

__int64 __fastcall VslGetOnDemandDebugChallenge(__int64 a1, void *a2, unsigned int a3, _DWORD *a4)
{
  __int64 result; // rax
  NTSTATUS v9; // ebx
  unsigned int v10; // eax
  _QWORD v11[10]; // [rsp+40h] [rbp-10E8h] BYREF
  _QWORD v12[14]; // [rsp+90h] [rbp-1098h] BYREF
  _BYTE Src[4096]; // [rsp+100h] [rbp-1028h] BYREF

  memset(v12, 0, 0x68uLL);
  memset(v11, 0, 0x48uLL);
  result = VslpLockPagesForTransfer((__int64)v11, (__int64)Src, 0x1000u, 1, 0);
  if ( (int)result >= 0 )
  {
    v12[1] = *(_QWORD *)(a1 + 728);
    v12[2] = v11[0];
    v12[3] = v11[7];
    v9 = VslpEnterIumSecureMode(2, 18LL, 0LL, (__int64)v12);
    VslpUnlockPagesForTransfer((__int64)v11);
    if ( v9 >= 0 )
    {
      v10 = v12[2];
      *a4 = v12[2];
      if ( v10 <= a3 )
      {
        if ( a2 )
          memmove(a2, Src, v10);
      }
      else
      {
        return (unsigned int)-1073741789;
      }
    }
    return (unsigned int)v9;
  }
  return result;
}
