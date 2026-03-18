/*
 * XREFs of DrvGetHdevName @ 0x1C00D5070
 * Callers:
 *     NtUserGetHDevName @ 0x1C00B63C0 (NtUserGetHDevName.c)
 * Callees:
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C00D21F8 (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 */

_BOOL8 __fastcall DrvGetHdevName(__int64 a1, unsigned __int16 *a2)
{
  return (int)RtlStringCchCopyW(a2, 0x20uLL, (size_t *)(*(_QWORD *)(a1 + 2568) + 64LL)) >= 0;
}
