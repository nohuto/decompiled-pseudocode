/*
 * XREFs of VslCapturePgoData @ 0x140851960
 * Callers:
 *     <none>
 * Callees:
 *     VslpEnterIumSecureMode @ 0x14012A77C (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     VslpLockPagesForTransfer @ 0x140290D8C (VslpLockPagesForTransfer.c)
 *     VslpUnlockPagesForTransfer @ 0x140290F68 (VslpUnlockPagesForTransfer.c)
 */

__int64 __fastcall VslCapturePgoData(size_t Size, char *a2)
{
  __int64 v4; // rbp
  int v5; // ebx
  ULONG v6; // r14d
  _QWORD v8[10]; // [rsp+30h] [rbp-E8h] BYREF
  _QWORD v9[14]; // [rsp+80h] [rbp-98h] BYREF

  memset(v9, 0, 0x68uLL);
  memset(v8, 0, 0x48uLL);
  v4 = 0LL;
  v5 = 0;
  memset(a2, 0, Size);
  if ( Size )
  {
    while ( 1 )
    {
      v6 = Size;
      if ( 2072576 - ((unsigned __int16)a2 & 0xFFFu) < Size )
        v6 = 2072576 - ((unsigned __int16)a2 & 0xFFF);
      v5 = VslpLockPagesForTransfer((__int64)v8, (__int64)a2, v6, 1, 0);
      if ( v5 < 0 )
        break;
      v9[2] = v8[0];
      v9[3] = v8[7];
      v9[1] = v4;
      v5 = VslpEnterIumSecureMode(2, 72LL, 0LL, (__int64)v9);
      VslpUnlockPagesForTransfer((__int64)v8);
      if ( v5 == -2147483622 )
        return 0;
      if ( v5 >= 0 )
      {
        a2 += v6;
        v4 += v6;
        Size -= v6;
        if ( Size )
          continue;
      }
      return (unsigned int)v5;
    }
  }
  return (unsigned int)v5;
}
