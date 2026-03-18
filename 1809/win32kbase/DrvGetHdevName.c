/*
 * XREFs of DrvGetHdevName @ 0x1C0013CE0
 * Callers:
 *     NtUserGetHDevName @ 0x1C0013910 (NtUserGetHDevName.c)
 * Callees:
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C0013D14 (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 */

_BOOL8 __fastcall DrvGetHdevName(__int64 a1, unsigned __int16 *a2)
{
  return RtlStringCchCopyW(a2, 0x20uLL, (const unsigned __int16 *)(*(_QWORD *)(a1 + 2576) + 64LL)) >= 0;
}
