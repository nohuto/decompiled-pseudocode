/*
 * XREFs of sub_180096508 @ 0x180096508
 * Callers:
 *     sub_180096464 @ 0x180096464 (sub_180096464.c)
 * Callees:
 *     sub_180096BAC @ 0x180096BAC (sub_180096BAC.c)
 *     sub_180096CF0 @ 0x180096CF0 (sub_180096CF0.c)
 *     sub_180096DC0 @ 0x180096DC0 (sub_180096DC0.c)
 *     sub_1800970A8 @ 0x1800970A8 (sub_1800970A8.c)
 *     sub_180097220 @ 0x180097220 (sub_180097220.c)
 *     sub_180097364 @ 0x180097364 (sub_180097364.c)
 *     sub_180097494 @ 0x180097494 (sub_180097494.c)
 *     sub_1800976EC @ 0x1800976EC (sub_1800976EC.c)
 *     sub_180097820 @ 0x180097820 (sub_180097820.c)
 */

__int64 __fastcall sub_180096508(__int64 a1, __int64 a2)
{
  int v2; // ebx
  __int64 result; // rax

  v2 = *(_DWORD *)(a2 + 28);
  *(_DWORD *)(a1 + 292) = v2;
  *(_DWORD *)(a1 + 296) = v2;
  if ( (v2 & 0x100) != 0 )
    result = sub_180097364(a1);
  if ( (v2 & 0x80u) != 0 )
    result = sub_180096BAC(a1);
  if ( (v2 & 1) != 0 )
    result = sub_1800976EC(a1);
  if ( (v2 & 2) != 0 )
    result = sub_180097820(a1);
  if ( (v2 & 0x10000000) != 0 )
  {
    result = sub_180096DC0(a1, *(_QWORD *)(a2 + 88));
  }
  else if ( (v2 & 0x40) != 0 )
  {
    result = sub_180096CF0(a1);
  }
  if ( (v2 & 0x10) != 0 )
    result = sub_180097220(a1, *(_QWORD *)(a2 + 64), 0LL);
  if ( (v2 & 0x20) != 0 )
    result = sub_180097494(a1, *(_QWORD *)(a2 + 80), 0LL);
  if ( (v2 & 0x400) != 0 )
    return sub_1800970A8(a1, *(_QWORD *)(a2 + 104), *(_QWORD *)(a2 + 96));
  return result;
}
