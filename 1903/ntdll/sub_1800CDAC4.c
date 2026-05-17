/*
 * XREFs of sub_1800CDAC4 @ 0x1800CDAC4
 * Callers:
 *     LdrDeleteEnclave @ 0x1800CD470 (LdrDeleteEnclave.c)
 * Callees:
 *     RtlEnterCriticalSection @ 0x18001B380 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x18003A8A0 (RtlLeaveCriticalSection.c)
 *     ZwTerminateEnclave @ 0x18009FDD0 (ZwTerminateEnclave.c)
 *     sub_1800CD828 @ 0x1800CD828 (sub_1800CD828.c)
 *     sub_1800CDB44 @ 0x1800CDB44 (sub_1800CDB44.c)
 */

__int64 __fastcall sub_1800CDAC4(_QWORD *a1)
{
  __int64 result; // rax
  __int64 v3; // rdx
  _QWORD *v4; // rax

  result = ZwTerminateEnclave();
  if ( (int)result >= 0 )
  {
    a1[14] = 0LL;
    sub_1800CD828((__int64)a1, -1073741823);
    a1[9] = 0LL;
    RtlEnterCriticalSection((__int64)&unk_180165AE0);
    v3 = *a1;
    if ( *(_QWORD **)(*a1 + 8LL) != a1 || (v4 = (_QWORD *)a1[1], (_QWORD *)*v4 != a1) )
      __fastfail(3u);
    *v4 = v3;
    *(_QWORD *)(v3 + 8) = v4;
    RtlLeaveCriticalSection((__int64)&unk_180165AE0);
    sub_1800CDB44(a1);
    return 0LL;
  }
  return result;
}
