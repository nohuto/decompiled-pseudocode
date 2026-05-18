/*
 * XREFs of sub_180096618 @ 0x180096618
 * Callers:
 *     sub_180096574 @ 0x180096574 (sub_180096574.c)
 * Callees:
 *     sub_180096CBC @ 0x180096CBC (sub_180096CBC.c)
 *     sub_180096E00 @ 0x180096E00 (sub_180096E00.c)
 *     sub_180096ED0 @ 0x180096ED0 (sub_180096ED0.c)
 *     sub_1800971B8 @ 0x1800971B8 (sub_1800971B8.c)
 *     sub_180097330 @ 0x180097330 (sub_180097330.c)
 *     sub_180097474 @ 0x180097474 (sub_180097474.c)
 *     sub_1800975A4 @ 0x1800975A4 (sub_1800975A4.c)
 *     sub_1800977FC @ 0x1800977FC (sub_1800977FC.c)
 *     sub_180097930 @ 0x180097930 (sub_180097930.c)
 */

__int64 __fastcall sub_180096618(__int64 a1, __int64 a2)
{
  int v2; // ebx
  __int64 result; // rax

  v2 = *(_DWORD *)(a2 + 28);
  *(_DWORD *)(a1 + 292) = v2;
  *(_DWORD *)(a1 + 296) = v2;
  if ( (v2 & 0x100) != 0 )
    result = sub_180097474(a1);
  if ( (v2 & 0x80u) != 0 )
    result = sub_180096CBC(a1);
  if ( (v2 & 1) != 0 )
    result = sub_1800977FC(a1);
  if ( (v2 & 2) != 0 )
    result = sub_180097930(a1);
  if ( (v2 & 0x10000000) != 0 )
  {
    result = sub_180096ED0(a1, *(_QWORD *)(a2 + 88));
  }
  else if ( (v2 & 0x40) != 0 )
  {
    result = sub_180096E00(a1);
  }
  if ( (v2 & 0x10) != 0 )
    result = sub_180097330(a1, *(_QWORD *)(a2 + 64), 0LL);
  if ( (v2 & 0x20) != 0 )
    result = sub_1800975A4(a1, *(_QWORD *)(a2 + 80), 0LL);
  if ( (v2 & 0x400) != 0 )
    return sub_1800971B8(a1, *(_QWORD *)(a2 + 104), *(_QWORD *)(a2 + 96));
  return result;
}
