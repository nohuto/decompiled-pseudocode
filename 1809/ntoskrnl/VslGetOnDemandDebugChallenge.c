/*
 * XREFs of VslGetOnDemandDebugChallenge @ 0x1408198E0
 * Callers:
 *     PsIumGetOnDemandDebugChallenge @ 0x14088E0A0 (PsIumGetOnDemandDebugChallenge.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x140129D80 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     VslpLockPagesForTransfer @ 0x14027C704 (VslpLockPagesForTransfer.c)
 *     VslpUnlockPagesForTransfer @ 0x14027C8E0 (VslpUnlockPagesForTransfer.c)
 */

__int64 __fastcall VslGetOnDemandDebugChallenge(__int64 a1, void *a2, unsigned int a3, _DWORD *a4)
{
  __int64 result; // rax
  NTSTATUS v9; // ebx
  unsigned int v10; // eax
  _QWORD v11[10]; // [rsp+40h] [rbp-10E8h] BYREF
  _BYTE v12[8]; // [rsp+90h] [rbp-1098h] BYREF
  __int64 v13; // [rsp+98h] [rbp-1090h]
  size_t Size; // [rsp+A0h] [rbp-1088h]
  __int64 v15; // [rsp+A8h] [rbp-1080h]
  _BYTE Src[4096]; // [rsp+100h] [rbp-1028h] BYREF

  result = VslpLockPagesForTransfer((__int64)v11, (__int64)Src, 0x1000u, 1, 0);
  if ( (int)result >= 0 )
  {
    v13 = *(_QWORD *)(a1 + 720);
    Size = v11[0];
    v15 = v11[7];
    v9 = VslpEnterIumSecureMode(2u, 18LL, 0, (__int64)v12);
    VslpUnlockPagesForTransfer((__int64)v11);
    if ( v9 >= 0 )
    {
      v10 = Size;
      *a4 = Size;
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
