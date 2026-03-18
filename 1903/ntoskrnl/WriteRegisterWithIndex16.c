/*
 * XREFs of WriteRegisterWithIndex16 @ 0x14034F790
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall WriteRegisterWithIndex16(__int64 a1, unsigned __int8 a2, unsigned __int8 a3)
{
  return ((__int64 (__fastcall *)(_QWORD, _QWORD))off_140427B18)(
           *(_QWORD *)a1 + a2 * (unsigned int)*(unsigned __int8 *)(a1 + 14),
           a3);
}
