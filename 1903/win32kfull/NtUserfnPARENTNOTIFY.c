/*
 * XREFs of NtUserfnPARENTNOTIFY @ 0x1C0137390
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C01664D0 (_guard_dispatch_icall_nop.c)
 *     NtUserfnPOINTERINPUT @ 0x1C0239420 (NtUserfnPOINTERINPUT.c)
 */

__int64 __fastcall NtUserfnPARENTNOTIFY(__int64 a1, int a2, __int16 a3, int a4, __int64 a5, int a6)
{
  if ( a2 == 528 && a3 == 582 )
    return NtUserfnPOINTERINPUT(a1, 528, 582, a4, a5, a6);
  else
    return ((__int64 (__fastcall *)(__int64))mpFnidPfn[((_BYTE)a6 + 6) & 0x1F])(a1);
}
