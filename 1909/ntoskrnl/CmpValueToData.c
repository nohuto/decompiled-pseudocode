/*
 * XREFs of CmpValueToData @ 0x14076A054
 * Callers:
 *     CmpFindControlSet @ 0x140769C6C (CmpFindControlSet.c)
 *     CmpFindRedirectedDriverServiceStateNode @ 0x140A128A0 (CmpFindRedirectedDriverServiceStateNode.c)
 *     CmpSortDriverList @ 0x140A12B00 (CmpSortDriverList.c)
 *     CmpFindTagIndex @ 0x140A12EA8 (CmpFindTagIndex.c)
 *     CmpAddDriverToList @ 0x140A13070 (CmpAddDriverToList.c)
 *     CmpIsLoadType @ 0x140A13820 (CmpIsLoadType.c)
 *     CmSelectQualifiedInstallLanguage @ 0x140A13ADC (CmSelectQualifiedInstallLanguage.c)
 * Callees:
 *     KeBugCheckEx @ 0x1401C46A0 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     CmpGetValueData @ 0x140661700 (CmpGetValueData.c)
 */

PVOID __fastcall CmpValueToData(ULONG_PTR BugCheckParameter3, __int64 a2, ULONG_PTR a3, unsigned int *a4, __int64 a5)
{
  _BYTE v8[8]; // [rsp+40h] [rbp-18h] BYREF
  PVOID P[2]; // [rsp+48h] [rbp-10h] BYREF

  if ( !CmpGetValueData(BugCheckParameter3, a2, a3, a4, (__int64)P, (__int64)v8, a5) )
    return 0LL;
  if ( v8[0] == 1 )
  {
    ExFreePoolWithTag(P[0], 0);
    KeBugCheckEx(0x51u, 8uLL, 0LL, BugCheckParameter3, a3);
  }
  return P[0];
}
