/*
 * XREFs of ?ulDispatchGFPEFunction@XEPALOBJ@@QEAAKW4GFPE_FUNCTION_ID@@K@Z @ 0x1C006AE10
 * Callers:
 *     ?ulGetMatchingIndexFromColorref@@YAKVXEPALOBJ@@0K@Z @ 0x1C006AD84 (-ulGetMatchingIndexFromColorref@@YAKVXEPALOBJ@@0K@Z.c)
 *     ?ulGetNearestFromPalentry@XEPALOBJ@@QEAAKUtagPALETTEENTRY@@K@Z @ 0x1C0089494 (-ulGetNearestFromPalentry@XEPALOBJ@@QEAAKUtagPALETTEENTRY@@K@Z.c)
 *     ?ulGetMatchFromPalentry@XEPALOBJ@@QEAAKUtagPALETTEENTRY@@@Z @ 0x1C0122820 (-ulGetMatchFromPalentry@XEPALOBJ@@QEAAKUtagPALETTEENTRY@@@Z.c)
 *     GreSetMagicColors @ 0x1C012D79C (GreSetMagicColors.c)
 * Callees:
 *     ?ulIndexedGetMatchFromPalentry@@YAKPEAVPALETTE@@K@Z @ 0x1C006AF08 (-ulIndexedGetMatchFromPalentry@@YAKPEAVPALETTE@@K@Z.c)
 *     ?ulGetNearestFromPalentryNoExactMatchFirst@XEPALOBJ@@QEAAKUtagPALETTEENTRY@@@Z @ 0x1C006AFD0 (-ulGetNearestFromPalentryNoExactMatchFirst@XEPALOBJ@@QEAAKUtagPALETTEENTRY@@@Z.c)
 */

unsigned int __fastcall XEPALOBJ::ulDispatchGFPEFunction(struct PALETTE **a1, int a2, unsigned int a3)
{
  unsigned int v3; // r11d
  unsigned int result; // eax
  struct PALETTE *v5; // rbx
  struct tagPALETTEENTRY v6; // r11d
  _DWORD *v7; // r8
  struct PALETTE *v8; // [rsp+58h] [rbp+20h] BYREF

  v3 = a3;
  if ( a2 != 8 )
  {
    switch ( a2 )
    {
      case 1:
        return ulIndexedGetMatchFromPalentry(*a1, a3);
      case 2:
        v5 = *a1;
        result = ulIndexedGetMatchFromPalentry(*a1, a3);
        if ( result == -1 )
        {
          v8 = v5;
          return XEPALOBJ::ulGetNearestFromPalentryNoExactMatchFirst((XEPALOBJ *)&v8, v6);
        }
        return result;
      case 3:
        return ((a3 & 0xF8) << 8) | ((a3 & 0xFC00 | (a3 >> 14) & 0x3E0) >> 5);
      case 4:
        return ((a3 & 0xF8) << 7) | ((a3 & 0xF800 | (a3 >> 13) & 0x7C0) >> 6);
      case 5:
        v7 = (_DWORD *)*((_QWORD *)*a1 + 14);
        return *v7 & (v3 >> v7[3] << v7[6]) | v7[1] & (v3 >> v7[4] << v7[7]) | v7[2] & (v3 >> v7[5] << v7[8]);
      case 6:
        return a3 & 0xFF00 | ((unsigned __int8)a3 << 16) | BYTE2(a3);
      case 7:
        return v3;
      default:
        KeBugCheckEx(0x164u, 0xCuLL, (ULONG_PTR)*a1, a2, 9uLL);
    }
  }
  return a3 & 0xFFFFFF;
}
