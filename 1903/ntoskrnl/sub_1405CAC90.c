/*
 * XREFs of sub_1405CAC90 @ 0x1405CAC90
 * Callers:
 *     WbGetWarbirdProcess @ 0x1405CAA80 (WbGetWarbirdProcess.c)
 *     WbRemoveWarbirdProcess @ 0x140671CFC (WbRemoveWarbirdProcess.c)
 * Callees:
 *     sub_1405CACF4 @ 0x1405CACF4 (sub_1405CACF4.c)
 */

__int64 __fastcall sub_1405CAC90(int a1, _QWORD *a2)
{
  __int64 result; // rax
  __int64 v4; // rcx
  __int64 v5; // [rsp+50h] [rbp+18h] BYREF

  v5 = 0LL;
  result = sub_1405CACF4((unsigned int)&qword_14046B850, a1, 8, (unsigned int)&v5, 0LL);
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
