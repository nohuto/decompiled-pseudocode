/*
 * XREFs of Controller_CreateSecureObject @ 0x1C005F8A0
 * Callers:
 *     Controller_Create @ 0x1C005ECE8 (Controller_Create.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00021E0 (__security_check_cookie.c)
 *     SecureChannel_SendRequestSynchronously @ 0x1C006B43C (SecureChannel_SendRequestSynchronously.c)
 */

__int64 __fastcall Controller_CreateSecureObject(__int64 a1)
{
  __int64 v2; // rcx
  int v3; // ecx
  __int64 v5; // [rsp+30h] [rbp-50h] BYREF
  __int64 v6; // [rsp+38h] [rbp-48h]
  __int64 v7; // [rsp+40h] [rbp-40h]
  __int64 v8; // [rsp+48h] [rbp-38h] BYREF
  __int128 v9; // [rsp+50h] [rbp-30h]
  __int64 v10; // [rsp+60h] [rbp-20h]
  int v11; // [rsp+68h] [rbp-18h]
  int v12; // [rsp+6Ch] [rbp-14h]

  v11 = 1;
  v8 = 0LL;
  v12 = 0;
  v10 = 0LL;
  v2 = *(_QWORD *)(a1 + 112);
  v5 = 0LL;
  v6 = 0LL;
  v7 = 0LL;
  v9 = 0LL;
  v3 = SecureChannel_SendRequestSynchronously(v2, (unsigned int)&v8, 40, (unsigned int)&v5, 24);
  if ( v3 >= 0 )
  {
    v3 = v5;
    if ( (int)v5 >= 0 )
    {
      *(_QWORD *)(a1 + 552) = v6;
      *(_DWORD *)(a1 + 544) = v7;
    }
  }
  return (unsigned int)v3;
}
