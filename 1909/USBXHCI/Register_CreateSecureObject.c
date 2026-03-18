/*
 * XREFs of Register_CreateSecureObject @ 0x1C0067578
 * Callers:
 *     Register_Create @ 0x1C0067418 (Register_Create.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00021E0 (__security_check_cookie.c)
 *     memset @ 0x1C0008D80 (memset.c)
 *     WPP_RECORDER_SF_d @ 0x1C000B24C (WPP_RECORDER_SF_d.c)
 *     SecureChannel_SendRequestSynchronously @ 0x1C006B43C (SecureChannel_SendRequestSynchronously.c)
 */

__int64 __fastcall Register_CreateSecureObject(__int64 a1)
{
  _QWORD *v1; // rbx
  __int64 v3; // rdi
  int v4; // ebx
  int v6; // [rsp+28h] [rbp-60h]
  __int64 v7; // [rsp+30h] [rbp-58h] BYREF
  __int64 v8; // [rsp+38h] [rbp-50h]
  _QWORD v9[7]; // [rsp+40h] [rbp-48h] BYREF

  v1 = *(_QWORD **)(a1 + 8);
  v7 = 0LL;
  v8 = 0LL;
  v3 = v1[14];
  memset(v9, 0, sizeof(v9));
  LODWORD(v9[4]) = 7;
  v9[5] = v1[69];
  BYTE1(v9[6]) = 1;
  LOBYTE(v9[6]) = v1[42] & 1;
  v4 = SecureChannel_SendRequestSynchronously(v3, (unsigned int)v9, 56, (unsigned int)&v7, 16);
  if ( v4 >= 0 )
  {
    if ( (int)v7 >= 0 )
    {
      *(_QWORD *)(a1 + 120) = v8;
      *(_BYTE *)(a1 + 128) = 1;
    }
    else
    {
      v4 = v7;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v6 = v7;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
          2u,
          6u,
          0x48u,
          (__int64)&WPP_9d05267a3ed0340255d9e56cf9248aa3_Traceguids,
          v6);
      }
    }
  }
  return (unsigned int)v4;
}
