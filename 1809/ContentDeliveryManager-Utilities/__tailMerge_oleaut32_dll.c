/*
 * XREFs of __tailMerge_oleaut32_dll @ 0x1800C7C55
 * Callers:
 *     __imp_load_SysFreeString @ 0x1800C7C49 (__imp_load_SysFreeString.c)
 * Callees:
 *     __delayLoadHelper2 @ 0x1800A5140 (__delayLoadHelper2.c)
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
