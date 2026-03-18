/*
 * XREFs of NtUserfnINLPHELPINFOSTRUCT @ 0x1C02380D0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C008B3AC (UserSetLastError.c)
 *     _guard_dispatch_icall_nop @ 0x1C01664D0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0166840 (memset.c)
 */

__int64 __fastcall NtUserfnINLPHELPINFOSTRUCT(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __m128i *a4,
        __int64 a5,
        char a6)
{
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rbx
  __m128i v14[3]; // [rsp+40h] [rbp-38h] BYREF

  memset(v14, 0, 0x28uLL);
  if ( (unsigned __int64)a4 >= MmUserProbeAddress )
    a4 = (__m128i *)MmUserProbeAddress;
  v14[0] = *a4;
  v14[1] = a4[1];
  v14[2].m128i_i64[0] = a4[2].m128i_i64[0];
  if ( _mm_cvtsi128_si32(v14[0]) == 40 )
    return ((__int64 (__fastcall *)(__int64, _QWORD, __int64, __m128i *, __int64))mpFnidPfn[(a6 + 6) & 0x1F])(
             a1,
             a2,
             a3,
             v14,
             a5);
  v12 = 0LL;
  UserSetLastError(87LL, MmUserProbeAddress, v10, v11);
  return v12;
}
