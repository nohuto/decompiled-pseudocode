/*
 * XREFs of KeHwPolicyLocateResource @ 0x1409D4CB0
 * Callers:
 *     KiLoadPolicyFromImage @ 0x140574804 (KiLoadPolicyFromImage.c)
 * Callees:
 *     LdrResSearchResource @ 0x14068BEF0 (LdrResSearchResource.c)
 *     KiHwPolicyFindDriverImage @ 0x1409D4D58 (KiHwPolicyFindDriverImage.c)
 */

__int64 __fastcall KeHwPolicyLocateResource(__int64 a1, __int64 a2, __int64 a3, unsigned int **a4, ULONGLONG *a5)
{
  unsigned __int64 v7; // rcx
  _QWORD v11[5]; // [rsp+40h] [rbp-28h] BYREF

  v7 = KiHwPolicyDriverImageBase;
  if ( KiHwPolicyDriverImageBase
    || !KiHwPolicyDriverNotPresent
    && (KiHwPolicyDriverImageBase = KiHwPolicyFindDriverImage(a1), (v7 = KiHwPolicyDriverImageBase) != 0) )
  {
    v11[2] = 0LL;
    v11[0] = a2;
    v11[1] = a3;
    return LdrResSearchResource(v7, v11, 3u, 48, a4, a5, 0LL, 0LL);
  }
  else
  {
    KiHwPolicyDriverNotPresent = 1;
    return 3221226092LL;
  }
}
