/*
 * XREFs of ReadPortWithIndex16 @ 0x14032DB30
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C5EB0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ReadPortWithIndex16(__int64 a1, unsigned __int8 a2)
{
  return ((__int64 (__fastcall *)(_QWORD))off_1404016E0)(*(_QWORD *)a1 + a2
                                                                       * (unsigned int)*(unsigned __int8 *)(a1 + 14));
}
