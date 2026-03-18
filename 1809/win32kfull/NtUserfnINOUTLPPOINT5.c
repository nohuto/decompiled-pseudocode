/*
 * XREFs of NtUserfnINOUTLPPOINT5 @ 0x1C0152450
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C01632C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtUserfnINOUTLPPOINT5(__int64 a1, __int64 a2, __int64 a3, ULONG64 a4, __int64 a5, char a6)
{
  __int64 result; // rax
  __int128 v8; // [rsp+48h] [rbp-40h] BYREF
  __int128 v9; // [rsp+58h] [rbp-30h]
  __int64 v10; // [rsp+68h] [rbp-20h]

  if ( a4 >= MmUserProbeAddress )
    *(_DWORD *)MmUserProbeAddress = 0;
  *(_OWORD *)a4 = *(_OWORD *)a4;
  *(_OWORD *)(a4 + 16) = *(_OWORD *)(a4 + 16);
  *(_QWORD *)(a4 + 32) = *(_QWORD *)(a4 + 32);
  v8 = *(_OWORD *)a4;
  v9 = *(_OWORD *)(a4 + 16);
  v10 = *(_QWORD *)(a4 + 32);
  result = ((__int64 (__fastcall *)(__int64, __int64, __int64, __int128 *, __int64))mpFnidPfn[(a6 + 6) & 0x1F])(
             a1,
             a2,
             a3,
             &v8,
             a5);
  *(_OWORD *)a4 = v8;
  *(_OWORD *)(a4 + 16) = v9;
  *(_QWORD *)(a4 + 32) = v10;
  return result;
}
