/*
 * XREFs of NtUserfnINOUTLPSCROLLINFO @ 0x1C02381E0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C01680F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtUserfnINOUTLPSCROLLINFO(__int64 a1, __int64 a2, __int64 a3, ULONG64 a4, __int64 a5, char a6)
{
  int v7; // eax
  __int64 result; // rax
  __int128 v9; // [rsp+48h] [rbp-30h] BYREF
  __int64 v10; // [rsp+58h] [rbp-20h]
  int v11; // [rsp+60h] [rbp-18h]

  v9 = 0uLL;
  v10 = 0LL;
  v11 = 0;
  if ( a4 >= MmUserProbeAddress )
    *(_DWORD *)MmUserProbeAddress = 0;
  *(_OWORD *)a4 = *(_OWORD *)a4;
  *(_QWORD *)(a4 + 16) = *(_QWORD *)(a4 + 16);
  v7 = *(_DWORD *)(a4 + 24);
  *(_DWORD *)(a4 + 24) = v7;
  v9 = *(_OWORD *)a4;
  v10 = *(_QWORD *)(a4 + 16);
  v11 = v7;
  result = ((__int64 (__fastcall *)(__int64, __int64, __int64, __int128 *, __int64))mpFnidPfn[(a6 + 6) & 0x1F])(
             a1,
             a2,
             a3,
             &v9,
             a5);
  *(_OWORD *)a4 = v9;
  *(_QWORD *)(a4 + 16) = v10;
  *(_DWORD *)(a4 + 24) = v11;
  return result;
}
