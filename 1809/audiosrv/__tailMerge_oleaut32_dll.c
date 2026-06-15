/*
 * XREFs of __tailMerge_oleaut32_dll @ 0x180061939
 * Callers:
 *     __imp_load_SysFreeString @ 0x18006192D (__imp_load_SysFreeString.c)
 *     __imp_load_VariantTimeToSystemTime @ 0x180061F42 (__imp_load_VariantTimeToSystemTime.c)
 *     __imp_load_SystemTimeToVariantTime @ 0x180061F54 (__imp_load_SystemTimeToVariantTime.c)
 *     __imp_load_SafeArrayGetLBound @ 0x180061FF1 (__imp_load_SafeArrayGetLBound.c)
 *     __imp_load_SafeArrayGetUBound @ 0x180062003 (__imp_load_SafeArrayGetUBound.c)
 *     __imp_load_SafeArrayDestroy @ 0x180062015 (__imp_load_SafeArrayDestroy.c)
 *     __imp_load_SafeArrayCreate @ 0x180062027 (__imp_load_SafeArrayCreate.c)
 *     __imp_load_SafeArrayGetVartype @ 0x180062039 (__imp_load_SafeArrayGetVartype.c)
 *     __imp_load_SafeArrayCopy @ 0x18006204B (__imp_load_SafeArrayCopy.c)
 *     __imp_load_SafeArrayUnlock @ 0x18006205D (__imp_load_SafeArrayUnlock.c)
 *     __imp_load_SafeArrayLock @ 0x18006206F (__imp_load_SafeArrayLock.c)
 *     __imp_load_SysAllocString @ 0x18006210C (__imp_load_SysAllocString.c)
 *     __imp_load_SafeArrayGetElement @ 0x180062328 (__imp_load_SafeArrayGetElement.c)
 *     __imp_load_BSTR_UserSize @ 0x1800630AC (__imp_load_BSTR_UserSize.c)
 *     __imp_load_BSTR_UserFree @ 0x1800630CC (__imp_load_BSTR_UserFree.c)
 *     __imp_load_LPSAFEARRAY_UserSize @ 0x1800630EC (__imp_load_LPSAFEARRAY_UserSize.c)
 *     __imp_load_BSTR_UserUnmarshal64 @ 0x18006310C (__imp_load_BSTR_UserUnmarshal64.c)
 *     __imp_load_LPSAFEARRAY_UserFree @ 0x18006312C (__imp_load_LPSAFEARRAY_UserFree.c)
 *     __imp_load_LPSAFEARRAY_UserUnmarshal @ 0x18006314C (__imp_load_LPSAFEARRAY_UserUnmarshal.c)
 *     __imp_load_LPSAFEARRAY_UserFree64 @ 0x18006316C (__imp_load_LPSAFEARRAY_UserFree64.c)
 *     __imp_load_LPSAFEARRAY_UserMarshal64 @ 0x18006318C (__imp_load_LPSAFEARRAY_UserMarshal64.c)
 *     __imp_load_BSTR_UserUnmarshal @ 0x1800631AC (__imp_load_BSTR_UserUnmarshal.c)
 *     __imp_load_BSTR_UserMarshal @ 0x1800631CC (__imp_load_BSTR_UserMarshal.c)
 *     __imp_load_LPSAFEARRAY_UserUnmarshal64 @ 0x1800631EC (__imp_load_LPSAFEARRAY_UserUnmarshal64.c)
 *     __imp_load_LPSAFEARRAY_UserMarshal @ 0x18006320C (__imp_load_LPSAFEARRAY_UserMarshal.c)
 *     __imp_load_BSTR_UserFree64 @ 0x18006322C (__imp_load_BSTR_UserFree64.c)
 *     __imp_load_BSTR_UserSize64 @ 0x18006324C (__imp_load_BSTR_UserSize64.c)
 *     __imp_load_LPSAFEARRAY_UserSize64 @ 0x18006326C (__imp_load_LPSAFEARRAY_UserSize64.c)
 *     __imp_load_BSTR_UserMarshal64 @ 0x18006328C (__imp_load_BSTR_UserMarshal64.c)
 * Callees:
 *     __delayLoadHelper2 @ 0x180015460 (__delayLoadHelper2.c)
 */

__int64 __fastcall _tailMerge_oleaut32_dll(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 (__fastcall *Helper2)(__int64, __int64, __int64, __int64); // rax

  Helper2 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))_delayLoadHelper2(
                                                                          (__int64)&_DELAY_IMPORT_DESCRIPTOR_OLEAUT32_dll,
                                                                          v4);
  return Helper2(a1, a2, a3, a4);
}
