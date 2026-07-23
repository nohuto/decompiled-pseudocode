/*
 * XREFs of sub_180065058 @ 0x180065058
 * Callers:
 *     sub_18001C610 @ 0x18001C610 (sub_18001C610.c)
 *     sub_180064FB8 @ 0x180064FB8 (sub_180064FB8.c)
 * Callees:
 *     sub_180064EEC @ 0x180064EEC (sub_180064EEC.c)
 *     sub_180065094 @ 0x180065094 (sub_180065094.c)
 */

void __fastcall sub_180065058(__int64 a1)
{
  __int64 v2; // rax
  PVOID *v3; // rcx

  if ( *(_QWORD *)(a1 + 80) )
  {
    v2 = sub_180065094();
    v3 = *(PVOID **)(a1 + 80);
    if ( (PVOID *)v2 != v3 )
      sub_180064EEC(v3);
    *(_QWORD *)(a1 + 80) = 0LL;
  }
}
