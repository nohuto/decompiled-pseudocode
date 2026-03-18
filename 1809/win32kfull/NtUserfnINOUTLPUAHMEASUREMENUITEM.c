/*
 * XREFs of NtUserfnINOUTLPUAHMEASUREMENUITEM @ 0x1C0220560
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C01632C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtUserfnINOUTLPUAHMEASUREMENUITEM(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _OWORD *a4,
        __int64 a5,
        char a6)
{
  __int64 result; // rax
  __int128 v8; // [rsp+50h] [rbp-88h] BYREF
  __int128 v9; // [rsp+60h] [rbp-78h]
  __int128 v10; // [rsp+70h] [rbp-68h]
  __int128 v11; // [rsp+80h] [rbp-58h]
  __int128 v12; // [rsp+90h] [rbp-48h]
  __int128 v13; // [rsp+A0h] [rbp-38h]
  __int128 v14; // [rsp+B0h] [rbp-28h]

  if ( (unsigned __int64)a4 >= MmUserProbeAddress )
    *(_DWORD *)MmUserProbeAddress = 0;
  *a4 = *a4;
  a4[1] = a4[1];
  a4[2] = a4[2];
  a4[3] = a4[3];
  a4[4] = a4[4];
  a4[5] = a4[5];
  a4[6] = a4[6];
  v8 = *a4;
  v9 = a4[1];
  v10 = a4[2];
  v11 = a4[3];
  v12 = a4[4];
  v13 = a4[5];
  v14 = a4[6];
  result = ((__int64 (__fastcall *)(__int64, __int64, __int64, __int128 *, __int64))mpFnidPfn[(a6 + 6) & 0x1F])(
             a1,
             a2,
             a3,
             &v8,
             a5);
  *a4 = v8;
  a4[1] = v9;
  a4[2] = v10;
  a4[3] = v11;
  a4[4] = v12;
  a4[5] = v13;
  a4[6] = v14;
  return result;
}
