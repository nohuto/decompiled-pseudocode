/*
 * XREFs of sub_1800D16A0 @ 0x1800D16A0
 * Callers:
 *     sub_1800D2538 @ 0x1800D2538 (sub_1800D2538.c)
 * Callees:
 *     RtlImageNtHeaderEx @ 0x18001CB40 (RtlImageNtHeaderEx.c)
 *     sub_180020D8C @ 0x180020D8C (sub_180020D8C.c)
 */

__int64 __fastcall sub_1800D16A0(unsigned __int64 a1)
{
  unsigned int v2; // ebx
  __int64 v4; // [rsp+38h] [rbp+10h] BYREF

  RtlImageNtHeaderEx(3, a1, 0LL, &v4);
  v2 = *(_DWORD *)(v4 + 80);
  sub_180020D8C(a1, v2);
  return sub_1800DFBC4(a1, v2);
}
