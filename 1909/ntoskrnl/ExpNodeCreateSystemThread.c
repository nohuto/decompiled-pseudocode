/*
 * XREFs of ExpNodeCreateSystemThread @ 0x1406C05EC
 * Callers:
 *     ExpPartitionCreateSystemThread @ 0x1406C0598 (ExpPartitionCreateSystemThread.c)
 * Callees:
 *     KeSelectIdealProcessor @ 0x14001C5E4 (KeSelectIdealProcessor.c)
 *     KeQueryNodeActiveAffinity @ 0x140118A60 (KeQueryNodeActiveAffinity.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     PsCreateSystemThreadEx @ 0x1406725D0 (PsCreateSystemThreadEx.c)
 */

__int64 __fastcall ExpNodeCreateSystemThread(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        ULONG_PTR a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        _WORD *a8,
        __int64 a9)
{
  USHORT v10; // cx
  int v13; // [rsp+50h] [rbp-38h] BYREF
  struct _GROUP_AFFINITY v14; // [rsp+58h] [rbp-30h] BYREF

  v14.Mask = 0LL;
  v10 = *(_WORD *)(a1 + 146);
  *(_QWORD *)&v14.Group = 0LL;
  KeQueryNodeActiveAffinity(v10, &v14, 0LL);
  v13 = (unsigned __int16)KeSelectIdealProcessor(a1, &v14, a8, 0LL);
  return PsCreateSystemThreadEx(a9, 0x1FFFFF, 0LL, a4, 0LL, a6, a7, (__int64 *)&v14, &v13);
}
