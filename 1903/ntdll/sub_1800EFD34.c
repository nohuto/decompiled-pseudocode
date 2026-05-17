/*
 * XREFs of sub_1800EFD34 @ 0x1800EFD34
 * Callers:
 *     sub_18003AAA0 @ 0x18003AAA0 (sub_18003AAA0.c)
 *     sub_180040830 @ 0x180040830 (sub_180040830.c)
 *     sub_180040B50 @ 0x180040B50 (sub_180040B50.c)
 *     sub_180043280 @ 0x180043280 (sub_180043280.c)
 *     sub_180044EDC @ 0x180044EDC (sub_180044EDC.c)
 *     RtlDestroyHeap @ 0x18004A960 (RtlDestroyHeap.c)
 *     sub_18004EA3C @ 0x18004EA3C (sub_18004EA3C.c)
 *     sub_1800F1080 @ 0x1800F1080 (sub_1800F1080.c)
 * Callees:
 *     sub_1800F8090 @ 0x1800F8090 (sub_1800F8090.c)
 *     sub_180104220 @ 0x180104220 (sub_180104220.c)
 */

__int64 __fastcall sub_1800EFD34(int a1, __int64 a2, __int64 a3, unsigned int a4, __int64 a5)
{
  unsigned __int16 v5; // cx

  if ( a1 && (v5 = a1 - 1, v5 < 2u) )
    return ((__int64 (__fastcall *)(__int64, __int64, _QWORD, __int64))funcs_1800EFD70[v5])(a2, a3, a4, a5);
  else
    return 3221225473LL;
}
