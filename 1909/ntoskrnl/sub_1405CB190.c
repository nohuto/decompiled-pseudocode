/*
 * XREFs of sub_1405CB190 @ 0x1405CB190
 * Callers:
 *     WbGetWarbirdProcess @ 0x1405CAF80 (WbGetWarbirdProcess.c)
 *     WbRemoveWarbirdProcess @ 0x140652B2C (WbRemoveWarbirdProcess.c)
 * Callees:
 *     sub_1405CB1F4 @ 0x1405CB1F4 (sub_1405CB1F4.c)
 */

__int64 __fastcall sub_1405CB190(int a1, _QWORD *a2)
{
  __int64 result; // rax
  __int64 v4; // rcx
  __int64 v5; // [rsp+50h] [rbp+18h] BYREF

  v5 = 0LL;
  result = sub_1405CB1F4((unsigned int)&qword_14046B590, a1, 8, (unsigned int)&v5, 0LL);
  if ( (int)result >= 0 && a2 )
  {
    v4 = v5;
    if ( v5 )
    {
      _InterlockedIncrement64((volatile signed __int64 *)(v5 + 232));
      v4 = v5;
    }
    *a2 = v4;
  }
  return result;
}
