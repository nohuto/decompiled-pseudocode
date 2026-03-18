/*
 * XREFs of RtlpCreateUserThreadEx @ 0x140610864
 * Callers:
 *     ExpWorkerFactoryCreateThread @ 0x1400831A4 (ExpWorkerFactoryCreateThread.c)
 *     RtlCreateUserThread @ 0x1408CE760 (RtlCreateUserThread.c)
 * Callees:
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     ZwClose @ 0x1401C02B0 (ZwClose.c)
 *     ZwCreateThreadEx @ 0x1401C1870 (ZwCreateThreadEx.c)
 */

__int64 __fastcall RtlpCreateUserThreadEx(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        HANDLE *a10,
        _OWORD *a11)
{
  __int64 result; // rax
  HANDLE Handle; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v13; // [rsp+68h] [rbp-98h] BYREF
  _DWORD v14[2]; // [rsp+78h] [rbp-88h] BYREF
  __int64 v15; // [rsp+80h] [rbp-80h]
  __int64 v16; // [rsp+88h] [rbp-78h]
  int v17; // [rsp+90h] [rbp-70h]
  int v18; // [rsp+94h] [rbp-6Ch]
  __int64 v19; // [rsp+98h] [rbp-68h]
  __int64 v20; // [rsp+A0h] [rbp-60h]
  __int64 v21; // [rsp+B0h] [rbp-50h]
  __int64 v22; // [rsp+B8h] [rbp-48h]
  __int64 v23; // [rsp+C0h] [rbp-40h]
  __int128 *v24; // [rsp+C8h] [rbp-38h]
  __int64 v25; // [rsp+D0h] [rbp-30h]
  __int64 v26; // [rsp+D8h] [rbp-28h]
  __int128 v27; // [rsp+E0h] [rbp-20h]
  __int64 v28; // [rsp+F0h] [rbp-10h]

  v26 = 0LL;
  v28 = 0LL;
  v14[1] = 0;
  v18 = 0;
  v27 = 0LL;
  v13 = 0uLL;
  if ( (a3 & 0xFFFFFF88) != 0 )
    return 3221225485LL;
  v14[0] = 48;
  v17 = 512;
  v19 = a2;
  v22 = 65539LL;
  v23 = 16LL;
  v21 = 40LL;
  v24 = &v13;
  v15 = 0LL;
  v16 = 0LL;
  v20 = 0LL;
  v25 = 0LL;
  result = ZwCreateThreadEx((__int64)&Handle, 0x1FFFFFLL, (__int64)v14);
  if ( (int)result >= 0 )
  {
    if ( a10 )
      *a10 = Handle;
    else
      ZwClose(Handle);
    if ( a11 )
      *a11 = v13;
    return 0LL;
  }
  return result;
}
