/*
 * XREFs of ExGetSuiteMask @ 0x1407550D0
 * Callers:
 *     PspSiloInitializeSuiteMask @ 0x14088794C (PspSiloInitializeSuiteMask.c)
 *     ExpInitSystemPhase0 @ 0x1409D51A0 (ExpInitSystemPhase0.c)
 * Callees:
 *     RtlGetProductInfo @ 0x14018D620 (RtlGetProductInfo.c)
 *     ExpGetProductInfoSuiteTypeMap @ 0x140755164 (ExpGetProductInfoSuiteTypeMap.c)
 *     ExpParseSuiteMask @ 0x1407551AC (ExpParseSuiteMask.c)
 */

__int64 __fastcall ExGetSuiteMask(__int64 a1, char a2)
{
  int v3; // ebx
  int v4; // eax
  int *v5; // rdx
  __int64 v6; // r8
  _BYTE v8[4]; // [rsp+30h] [rbp-18h] BYREF
  int v9; // [rsp+34h] [rbp-14h]
  ULONG ReturnedProductType; // [rsp+58h] [rbp+10h] BYREF

  v3 = ExpParseSuiteMask();
  if ( RtlGetProductInfo(6u, 0, 0, 0, &ReturnedProductType) && ReturnedProductType != -1412584499 )
  {
    v4 = 0;
    v5 = &dword_14090C224;
    v6 = 51LL;
    do
    {
      if ( *(v5 - 1) != ReturnedProductType )
        v4 |= *v5;
      v5 += 3;
      --v6;
    }
    while ( v6 );
    v3 &= ~v4;
    if ( (unsigned __int8)ExpGetProductInfoSuiteTypeMap(ReturnedProductType, v8) )
      v3 |= v9;
  }
  return v3 | (a2 != 0 ? 131088 : 272);
}
