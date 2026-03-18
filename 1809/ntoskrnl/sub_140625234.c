/*
 * XREFs of sub_140625234 @ 0x140625234
 * Callers:
 *     WbRemoveWarbirdProcess @ 0x140608988 (WbRemoveWarbirdProcess.c)
 *     WbGetWarbirdProcess @ 0x140625584 (WbGetWarbirdProcess.c)
 * Callees:
 *     sub_140625298 @ 0x140625298 (sub_140625298.c)
 */

__int64 __fastcall sub_140625234(int a1, _QWORD *a2)
{
  __int64 result; // rax
  __int64 v4; // rcx
  __int64 v5; // [rsp+50h] [rbp+18h] BYREF

  v5 = 0LL;
  result = sub_140625298((unsigned int)&dword_14043FA10, a1, 8, (unsigned int)&v5, 0LL);
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
