/*
 * XREFs of ReadRegisterWithIndex64 @ 0x14034F000
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ReadRegisterWithIndex64(__int64 a1, unsigned __int8 a2)
{
  return ((__int64 (__fastcall *)(_QWORD))off_140427B30)(*(_QWORD *)a1 + a2
                                                                       * (unsigned int)*(unsigned __int8 *)(a1 + 14));
}
