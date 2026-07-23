/*
 * XREFs of CmpFindNameInListWithStatus @ 0x1405D1670
 * Callers:
 *     CmDeleteValueKey @ 0x1405B7634 (CmDeleteValueKey.c)
 *     CmSetValueKey @ 0x1405CCE28 (CmSetValueKey.c)
 *     CmpCompareNewValueDataAgainstKCBCache @ 0x1405CE560 (CmpCompareNewValueDataAgainstKCBCache.c)
 *     CmpFindNameInList @ 0x1405D162C (CmpFindNameInList.c)
 *     CmpGetSymbolicLinkTarget @ 0x1405D8CC0 (CmpGetSymbolicLinkTarget.c)
 *     CmQueryValueKey @ 0x1406461B0 (CmQueryValueKey.c)
 *     CmQueryMultipleValueForLayeredKey @ 0x1407EE82C (CmQueryMultipleValueForLayeredKey.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     CmpFindNameInListCellWithStatus @ 0x1405D1720 (CmpFindNameInListCellWithStatus.c)
 */

__int64 __fastcall CmpFindNameInListWithStatus(
        __int64 a1,
        unsigned int *a2,
        __int64 a3,
        int a4,
        __int64 a5,
        __int64 a6)
{
  __int64 v7; // r8
  __int64 v8; // rsi
  __int64 v12; // rax
  unsigned int NameInListCellWithStatus; // edi
  int v15; // [rsp+68h] [rbp+10h] BYREF
  __int16 v16; // [rsp+6Ch] [rbp+14h]
  __int16 v17; // [rsp+6Eh] [rbp+16h]

  v7 = *a2;
  v8 = 0LL;
  v17 = 0;
  v15 = -1;
  v16 = 0;
  if ( (_DWORD)v7 )
  {
    v12 = (*(__int64 (__fastcall **)(__int64, _QWORD, int *))(a1 + 8))(a1, a2[1], &v15);
    v7 = *a2;
    v8 = v12;
  }
  NameInListCellWithStatus = CmpFindNameInListCellWithStatus(a1, v8, v7, a3, a4, a5, a6);
  if ( v8 )
    (*(void (__fastcall **)(__int64, int *))(a1 + 16))(a1, &v15);
  return NameInListCellWithStatus;
}
