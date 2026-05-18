/*
 * XREFs of sub_180016234 @ 0x180016234
 * Callers:
 *     sub_180019AC8 @ 0x180019AC8 (sub_180019AC8.c)
 *     sub_180023830 @ 0x180023830 (sub_180023830.c)
 *     sub_180028B80 @ 0x180028B80 (sub_180028B80.c)
 *     sub_180028F80 @ 0x180028F80 (sub_180028F80.c)
 *     sub_18002AB70 @ 0x18002AB70 (sub_18002AB70.c)
 *     sub_18003C958 @ 0x18003C958 (sub_18003C958.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

__int64 *__fastcall sub_180016234(__int64 *a1)
{
  __int64 v2; // rcx

  v2 = *a1;
  if ( v2 )
  {
    *a1 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  return a1;
}
