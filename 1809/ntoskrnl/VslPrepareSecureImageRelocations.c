/*
 * XREFs of VslPrepareSecureImageRelocations @ 0x14027CE30
 * Callers:
 *     <none>
 * Callees:
 *     VslpEnterIumSecureMode @ 0x140129D80 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     VslpLockPagesForTransfer @ 0x14027C704 (VslpLockPagesForTransfer.c)
 *     VslpUnlockPagesForTransfer @ 0x14027C8E0 (VslpUnlockPagesForTransfer.c)
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
  unsigned __int64 v11; // rdi
  __int64 result; // rax
  int v13; // ebx
  _QWORD v14[10]; // [rsp+30h] [rbp-D0h] BYREF
  _QWORD v15[10]; // [rsp+80h] [rbp-80h] BYREF
  _QWORD v16[10]; // [rsp+D0h] [rbp-30h] BYREF
  _BYTE v17[8]; // [rsp+120h] [rbp+20h] BYREF
  __int64 v18; // [rsp+128h] [rbp+28h]
  __int64 v19; // [rsp+130h] [rbp+30h]
  __int64 v20; // [rsp+138h] [rbp+38h]
  __int64 v21; // [rsp+140h] [rbp+40h]
  __int64 v22; // [rsp+148h] [rbp+48h]
  __int64 v23; // [rsp+150h] [rbp+50h]
  __int64 v24; // [rsp+158h] [rbp+58h]
  __int64 v25; // [rsp+160h] [rbp+60h]

  v10 = (a3 & 0xFFF) + a4 + 4095;
  if ( (v10 & 0xFFFFFFFFFFFFF000uLL) > 0x1FA000 )
    return 3221225485LL;
  v11 = (a7 & 0xFFF) + a8 + 4095;
  if ( (v11 & 0xFFFFFFFFFFFFF000uLL) > 0x1FA000 )
    return 3221225485LL;
  if ( v10 < 0x1000 )
  {
    memset(v14, 0, 0x48uLL);
LABEL_7:
    if ( v11 < 0x1000 )
    {
      memset(v15, 0, 0x48uLL);
      memset(v16, 0, 0x48uLL);
    }
    else
    {
      v13 = VslpLockPagesForTransfer((__int64)v15, a7, a8, 0, 0);
      if ( v13 < 0 )
      {
LABEL_9:
        VslpUnlockPagesForTransfer((__int64)v14);
        return (unsigned int)v13;
      }
      v13 = VslpLockPagesForTransfer((__int64)v16, a5, a6, 0, 0);
      if ( v13 < 0 )
      {
        VslpUnlockPagesForTransfer((__int64)v15);
        goto LABEL_9;
      }
    }
    v20 = v14[0];
    v21 = v14[7];
    v22 = v16[0];
    v23 = v16[7];
    v24 = v15[0];
    v25 = v15[7];
    v18 = a1;
    v19 = a2;
    v13 = VslpEnterIumSecureMode(2u, 28LL, 0, (__int64)v17);
    if ( v11 >= 0x1000 )
    {
      VslpUnlockPagesForTransfer((__int64)v15);
      VslpUnlockPagesForTransfer((__int64)v16);
    }
    if ( v10 < 0x1000 )
      return (unsigned int)v13;
    goto LABEL_9;
  }
  result = VslpLockPagesForTransfer((__int64)v14, a3, a4, 0, 0);
  if ( (int)result >= 0 )
    goto LABEL_7;
  return result;
}
