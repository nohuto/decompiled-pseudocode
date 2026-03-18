/*
 * XREFs of RtlpCreateUserThreadEx @ 0x14068CF34
 * Callers:
 *     ExpWorkerFactoryCreateThread @ 0x140106DFC (ExpWorkerFactoryCreateThread.c)
 *     RtlCreateUserThread @ 0x140890460 (RtlCreateUserThread.c)
 * Callees:
 *     __security_check_cookie @ 0x140193FF0 (__security_check_cookie.c)
 *     ZwClose @ 0x1401B8350 (ZwClose.c)
 *     ZwCreateThreadEx @ 0x1401B98F0 (ZwCreateThreadEx.c)
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
  int v14; // [rsp+78h] [rbp-88h] BYREF
  __int64 v15; // [rsp+80h] [rbp-80h]
  __int64 v16; // [rsp+88h] [rbp-78h]
  int v17; // [rsp+90h] [rbp-70h]
  __int64 v18; // [rsp+98h] [rbp-68h]
  __int64 v19; // [rsp+A0h] [rbp-60h]
  __int64 v20; // [rsp+B0h] [rbp-50h]
  __int64 v21; // [rsp+B8h] [rbp-48h]
  __int64 v22; // [rsp+C0h] [rbp-40h]
  __int128 *v23; // [rsp+C8h] [rbp-38h]
  __int64 v24; // [rsp+D0h] [rbp-30h]

  v13 = 0uLL;
  if ( (a3 & 0xFFFFFFE8) != 0 )
    return 3221225485LL;
  v14 = 48;
  v17 = 512;
  v18 = a2;
  v21 = 65539LL;
  v22 = 16LL;
  v20 = 40LL;
  v23 = &v13;
  v15 = 0LL;
  v16 = 0LL;
  v19 = 0LL;
  v24 = 0LL;
  result = ZwCreateThreadEx((__int64)&Handle, 0x1FFFFFLL, (__int64)&v14);
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
