/*
 * XREFs of ReadPortWithIndex16 @ 0x14034F4B0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ReadPortWithIndex16(__int64 a1, unsigned __int8 a2)
{
  return ((__int64 (__fastcall *)(_QWORD))off_140427AE0)(*(_QWORD *)a1 + a2
                                                                       * (unsigned int)*(unsigned __int8 *)(a1 + 14));
}
