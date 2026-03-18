/*
 * XREFs of NtUserfnINOUTLPSIZE @ 0x1C01F8690
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C013D370 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtUserfnINOUTLPSIZE(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4, __int64 a5, char a6)
{
  _QWORD *v7; // r11
  __int64 result; // rax
  __int64 v9; // [rsp+30h] [rbp-28h] BYREF

  v7 = a4;
  if ( (unsigned __int64)a4 >= MmUserProbeAddress )
    v7 = (_QWORD *)MmUserProbeAddress;
  *v7 = *v7;
  v9 = *a4;
  result = ((__int64 (__fastcall *)(__int64, __int64, __int64, __int64 *, __int64))mpFnidPfn[(a6 + 6) & 0x1F])(
             a1,
             a2,
             a3,
             &v9,
             a5);
  *a4 = v9;
  return result;
}
