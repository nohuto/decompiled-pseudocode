/*
 * XREFs of DrvGetHdevName @ 0x1C004FEA0
 * Callers:
 *     NtUserGetHDevName @ 0x1C004FCC0 (NtUserGetHDevName.c)
 * Callees:
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C004FED4 (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 */

_BOOL8 __fastcall DrvGetHdevName(__int64 a1, unsigned __int16 *a2)
{
  return RtlStringCchCopyW(a2, 0x20uLL, (const unsigned __int16 *)(*(_QWORD *)(a1 + 2576) + 64LL)) >= 0;
}
