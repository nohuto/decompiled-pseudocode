/*
 * XREFs of sub_1800F0DA4 @ 0x1800F0DA4
 * Callers:
 *     sub_18008E5F0 @ 0x18008E5F0 (sub_18008E5F0.c)
 *     sub_180099C60 @ 0x180099C60 (sub_180099C60.c)
 *     sub_1800ACDE0 @ 0x1800ACDE0 (sub_1800ACDE0.c)
 *     sub_1800AE7EC @ 0x1800AE7EC (sub_1800AE7EC.c)
 *     sub_1800AF450 @ 0x1800AF450 (sub_1800AF450.c)
 *     sub_1800B0924 @ 0x1800B0924 (sub_1800B0924.c)
 *     sub_1800B7C88 @ 0x1800B7C88 (sub_1800B7C88.c)
 *     sub_1800B87A0 @ 0x1800B87A0 (sub_1800B87A0.c)
 *     sub_1800F09C8 @ 0x1800F09C8 (sub_1800F09C8.c)
 *     sub_1800F0ED4 @ 0x1800F0ED4 (sub_1800F0ED4.c)
 *     sub_1800FE530 @ 0x1800FE530 (sub_1800FE530.c)
 *     sub_1800FE8E0 @ 0x1800FE8E0 (sub_1800FE8E0.c)
 *     sub_1800FF368 @ 0x1800FF368 (sub_1800FF368.c)
 *     sub_180100330 @ 0x180100330 (sub_180100330.c)
 *     sub_180100E30 @ 0x180100E30 (sub_180100E30.c)
 *     sub_180100F88 @ 0x180100F88 (sub_180100F88.c)
 *     sub_180101060 @ 0x180101060 (sub_180101060.c)
 *     sub_1801011A0 @ 0x1801011A0 (sub_1801011A0.c)
 *     sub_180102010 @ 0x180102010 (sub_180102010.c)
 *     sub_1801040CC @ 0x1801040CC (sub_1801040CC.c)
 * Callees:
 *     sub_18008363C @ 0x18008363C (sub_18008363C.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800F0DA4(__int64 a1)
{
  __int64 v1; // r8
  volatile signed __int32 *v2; // rbx
  __int64 v3; // rdx
  signed __int32 v4; // eax
  __int64 v5; // rdi

  v1 = 0LL;
  v2 = 0LL;
  v3 = *(_QWORD *)(a1 + 64);
  if ( v3 )
  {
    while ( 1 )
    {
      v4 = *(_DWORD *)(v3 + 8);
      if ( !v4 )
        break;
      if ( v4 == _InterlockedCompareExchange((volatile signed __int32 *)(v3 + 8), v4 + 1, v4) )
      {
        v1 = *(_QWORD *)(a1 + 56);
        v2 = *(volatile signed __int32 **)(a1 + 64);
        break;
      }
    }
  }
  v5 = sub_18008363C(v1);
  if ( v2 )
  {
    if ( _InterlockedExchangeAdd(v2 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v2)(v2);
      if ( _InterlockedExchangeAdd(v2 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v2 + 8LL))(v2);
    }
  }
  return v5;
}
