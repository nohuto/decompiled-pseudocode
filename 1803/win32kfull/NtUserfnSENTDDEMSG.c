/*
 * XREFs of NtUserfnSENTDDEMSG @ 0x1C01F90D0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C013D370 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtUserfnSENTDDEMSG(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, int a6)
{
  if ( a6 != 692 )
    return 0LL;
  LODWORD(a2) = a2 | 0x40000000;
  return ((__int64 (__fastcall *)(__int64, __int64))qword_1C0326170)(a1, a2);
}
