/*
 * XREFs of ?HampActivityPropertiesInitializeByClass@@YAXPEBGW4_HAM_ACTIVITY_CLASS@@PEAU_HAM_ACTIVITY_PROPERTIES@@@Z @ 0x1800103D8
 * Callers:
 *     HamPopulateActivityPropertiesByClass @ 0x18000F580 (HamPopulateActivityPropertiesByClass.c)
 * Callees:
 *     ?HampActivityPropertiesInitialize@@YAXPEBG0PEAU_HAM_ACTIVITY_PROPERTIES@@@Z @ 0x180010314 (-HampActivityPropertiesInitialize@@YAXPEBG0PEAU_HAM_ACTIVITY_PROPERTIES@@@Z.c)
 */

__int64 __fastcall HampActivityPropertiesInitializeByClass(char *a1, int a2, __int64 a3)
{
  __int64 v3; // rbx
  CCHAR LeastSignificantBit; // al
  CCHAR v6; // cl
  __int64 result; // rax

  v3 = a2;
  HampActivityPropertiesInitialize(a1, (char *)word_18001C118, (struct _HAM_ACTIVITY_PROPERTIES *)a3);
  *(_DWORD *)a3 |= 0x3000u;
  LeastSignificantBit = RtlFindLeastSignificantBit(dword_18001C15C[v3]);
  *(_DWORD *)a3 &= 0xFFFFFF80;
  v6 = LeastSignificantBit;
  result = 0LL;
  *(_DWORD *)a3 |= v6 & 0x7F;
  *(_QWORD *)(a3 + 320) |= 0xAFuLL;
  *(_DWORD *)(a3 + 368) &= 0xFFFFFFDC;
  *(_QWORD *)(a3 + 352) = 0LL;
  *(_QWORD *)(a3 + 344) = 0LL;
  *(_QWORD *)(a3 + 336) = 0LL;
  *(_QWORD *)(a3 + 328) = 0LL;
  return result;
}
