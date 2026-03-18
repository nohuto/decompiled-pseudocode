/*
 * XREFs of VslPrepareSecureImageRelocations @ 0x1402915D0
 * Callers:
 *     <none>
 * Callees:
 *     VslpEnterIumSecureMode @ 0x14012A77C (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     VslpLockPagesForTransfer @ 0x140290D8C (VslpLockPagesForTransfer.c)
 *     VslpUnlockPagesForTransfer @ 0x140290F68 (VslpUnlockPagesForTransfer.c)
 */

__int64 __fastcall VslPrepareSecureImageRelocations(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        ULONG a6,
        __int64 a7,
        __int64 a8)
{
  unsigned __int64 v10; // rsi
  unsigned __int64 v11; // rbx
  __int64 result; // rax
  int v13; // edi
  _QWORD v16[10]; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD v17[10]; // [rsp+90h] [rbp-70h] BYREF
  _QWORD v18[10]; // [rsp+E0h] [rbp-20h] BYREF
  _QWORD v19[14]; // [rsp+130h] [rbp+30h] BYREF

  memset(v19, 0, 0x68uLL);
  memset(v16, 0, 0x48uLL);
  memset(v18, 0, 0x48uLL);
  memset(v17, 0, 0x48uLL);
  v10 = (a3 & 0xFFF) + a4 + 4095;
  if ( (v10 & 0xFFFFFFFFFFFFF000uLL) > 0x1FA000 )
    return 3221225485LL;
  v11 = (a7 & 0xFFF) + a8 + 4095;
  if ( (v11 & 0xFFFFFFFFFFFFF000uLL) > 0x1FA000 )
    return 3221225485LL;
  if ( v10 < 0x1000 || (result = VslpLockPagesForTransfer((__int64)v16, a3, a4, 0, 0), (int)result >= 0) )
  {
    if ( v11 >= 0x1000 )
    {
      v13 = VslpLockPagesForTransfer((__int64)v17, a7, a8, 0, 0);
      if ( v13 < 0 )
      {
LABEL_7:
        VslpUnlockPagesForTransfer((__int64)v16);
        return (unsigned int)v13;
      }
      v13 = VslpLockPagesForTransfer((__int64)v18, a5, a6, 0, 0);
      if ( v13 < 0 )
      {
        VslpUnlockPagesForTransfer((__int64)v17);
        goto LABEL_7;
      }
    }
    v19[1] = a1;
    v19[2] = a2;
    v19[3] = v16[0];
    v19[4] = v16[7];
    v19[5] = v18[0];
    v19[6] = v18[7];
    v19[7] = v17[0];
    v19[8] = v17[7];
    v13 = VslpEnterIumSecureMode(2, 28LL, 0LL, (__int64)v19);
    if ( v11 >= 0x1000 )
    {
      VslpUnlockPagesForTransfer((__int64)v17);
      VslpUnlockPagesForTransfer((__int64)v18);
    }
    if ( v10 < 0x1000 )
      return (unsigned int)v13;
    goto LABEL_7;
  }
  return result;
}
