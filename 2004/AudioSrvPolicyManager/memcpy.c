/*
 * XREFs of memcpy @ 0x18003AE0F
 * Callers:
 *     sub_180001FD0 @ 0x180001FD0 (sub_180001FD0.c)
 *     sub_18000ED88 @ 0x18000ED88 (sub_18000ED88.c)
 *     sub_18000F0C0 @ 0x18000F0C0 (sub_18000F0C0.c)
 *     sub_180026714 @ 0x180026714 (sub_180026714.c)
 *     sub_180026E90 @ 0x180026E90 (sub_180026E90.c)
 *     sub_18002B8A0 @ 0x18002B8A0 (sub_18002B8A0.c)
 *     sub_180035970 @ 0x180035970 (sub_180035970.c)
 *     sub_180036244 @ 0x180036244 (sub_180036244.c)
 *     sub_1800368E4 @ 0x1800368E4 (sub_1800368E4.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void *__cdecl memcpy(void *a1, const void *Src, size_t Size)
{
  return __imp_memcpy(a1, Src, Size);
}
