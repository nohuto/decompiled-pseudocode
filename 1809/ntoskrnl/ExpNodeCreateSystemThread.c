/*
 * XREFs of ExpNodeCreateSystemThread @ 0x14066BB68
 * Callers:
 *     ExpPartitionCreateSystemThread @ 0x14066BB14 (ExpPartitionCreateSystemThread.c)
 * Callees:
 *     KeSelectIdealProcessor @ 0x1400D8A34 (KeSelectIdealProcessor.c)
 *     KeQueryNodeActiveAffinity @ 0x1400E3CC0 (KeQueryNodeActiveAffinity.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     PsCreateSystemThreadEx @ 0x14066BC80 (PsCreateSystemThreadEx.c)
 */

__int64 __fastcall ExpNodeCreateSystemThread(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        int *a8,
        __int64 a9)
{
  int v12; // [rsp+50h] [rbp-38h] BYREF
  struct _GROUP_AFFINITY Affinity; // [rsp+58h] [rbp-30h] BYREF

  KeQueryNodeActiveAffinity(*(_WORD *)(a1 + 146), &Affinity, 0LL);
  v12 = KeSelectIdealProcessor(a1, (__int64)&Affinity, a8);
  return PsCreateSystemThreadEx(a9, 0x1FFFFFLL, 0LL, a4, 0LL, a6, a7, &Affinity, &v12);
}
