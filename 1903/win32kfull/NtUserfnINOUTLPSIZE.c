/*
 * XREFs of NtUserfnINOUTLPSIZE @ 0x1C0238920
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C01664D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtUserfnINOUTLPSIZE(__int64 a1, __int64 a2, __int64 a3, __int64 *a4, __int64 a5, char a6)
{
  __int64 *v6; // rbx
  __int64 result; // rax
  __int64 v8; // [rsp+30h] [rbp-28h] BYREF

  v6 = a4;
  v8 = 0LL;
  if ( (unsigned __int64)a4 >= MmUserProbeAddress )
    a4 = (__int64 *)MmUserProbeAddress;
  *a4 = *a4;
  v8 = *v6;
  result = ((__int64 (__fastcall *)(__int64, __int64, __int64, __int64 *, __int64))mpFnidPfn[(a6 + 6) & 0x1F])(
             a1,
             a2,
             a3,
             &v8,
             a5);
  *v6 = v8;
  return result;
}
