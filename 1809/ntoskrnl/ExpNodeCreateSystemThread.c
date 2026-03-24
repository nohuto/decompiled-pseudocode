/*
 * XREFs of ExpNodeCreateSystemThread @ 0x14066A9A8
 * Callers:
 *     ExpPartitionCreateSystemThread @ 0x14066A954 (ExpPartitionCreateSystemThread.c)
 * Callees:
 *     KeSelectIdealProcessor @ 0x1400D89B4 (KeSelectIdealProcessor.c)
 *     KeQueryNodeActiveAffinity @ 0x1400E3C40 (KeQueryNodeActiveAffinity.c)
 *     __security_check_cookie @ 0x140194010 (__security_check_cookie.c)
 *     PsCreateSystemThreadEx @ 0x14066AAC0 (PsCreateSystemThreadEx.c)
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
