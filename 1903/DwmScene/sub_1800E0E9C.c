/*
 * XREFs of sub_1800E0E9C @ 0x1800E0E9C
 * Callers:
 *     sub_1800D4F78 @ 0x1800D4F78 (sub_1800D4F78.c)
 *     sub_1800D50DC @ 0x1800D50DC (sub_1800D50DC.c)
 *     sub_1800D51CC @ 0x1800D51CC (sub_1800D51CC.c)
 *     sub_180108E50 @ 0x180108E50 (sub_180108E50.c)
 *     sub_180109108 @ 0x180109108 (sub_180109108.c)
 *     sub_1801092FC @ 0x1801092FC (sub_1801092FC.c)
 *     sub_180109400 @ 0x180109400 (sub_180109400.c)
 *     sub_1801095E0 @ 0x1801095E0 (sub_1801095E0.c)
 *     sub_1801097AC @ 0x1801097AC (sub_1801097AC.c)
 *     sub_18010A044 @ 0x18010A044 (sub_18010A044.c)
 *     sub_18010A120 @ 0x18010A120 (sub_18010A120.c)
 *     ?dtor$0@?0???0WorkQueue@details@Concurrency@@QEAA@XZ@4HA @ 0x180133039 (-dtor$0@-0---0WorkQueue@details@Concurrency@@QEAA@XZ@4HA.c)
 *     ?dtor$1@?0???0WorkQueue@details@Concurrency@@QEAA@XZ@4HA @ 0x180133045 (-dtor$1@-0---0WorkQueue@details@Concurrency@@QEAA@XZ@4HA.c)
 *     sub_180133058 @ 0x180133058 (sub_180133058.c)
 *     sub_18013306B @ 0x18013306B (sub_18013306B.c)
 *     sub_18013307E @ 0x18013307E (sub_18013307E.c)
 *     sub_1801330D3 @ 0x1801330D3 (sub_1801330D3.c)
 *     sub_1801330E3 @ 0x1801330E3 (sub_1801330E3.c)
 *     sub_18013311E @ 0x18013311E (sub_18013311E.c)
 *     sub_18013312E @ 0x18013312E (sub_18013312E.c)
 *     sub_18013314D @ 0x18013314D (sub_18013314D.c)
 *     sub_180133159 @ 0x180133159 (sub_180133159.c)
 *     sub_180133165 @ 0x180133165 (sub_180133165.c)
 *     sub_180133195 @ 0x180133195 (sub_180133195.c)
 *     sub_1801331A1 @ 0x1801331A1 (sub_1801331A1.c)
 *     sub_1801331AD @ 0x1801331AD (sub_1801331AD.c)
 *     sub_1801331B9 @ 0x1801331B9 (sub_1801331B9.c)
 *     ?dtor$4@?0??_Putmfld@?$money_put@GV?$ostreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@AEBA?AV?$ostreambuf_iterator@GU?$char_traits@G@std@@@2@V32@_NAEAVios_base@2@G1V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@G@Z@4HA_3 @ 0x1801331C5 (-dtor$4@-0--_Putmfld@-$money_put@GV-$ostreambuf_iterator@GU-$char_traits@G@std@@@st_ea_1801331C5.c)
 *     unknown_libname_97 @ 0x1801331DD (unknown_libname_97.c)
 * Callees:
 *     sub_1800E1598 @ 0x1800E1598 (sub_1800E1598.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800E0E9C(_QWORD *a1)
{
  __int64 result; // rax
  volatile signed __int32 *v3; // rbx
  volatile signed __int32 *v4; // rbx
  volatile signed __int32 *v5; // rbx
  volatile signed __int32 *v6; // rcx

  result = sub_1800E1598(a1);
  v3 = (volatile signed __int32 *)a1[21];
  if ( v3 )
  {
    result = (unsigned int)_InterlockedDecrement(v3 + 2);
    if ( !(_DWORD)result )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v3)(v3);
      result = (unsigned int)_InterlockedDecrement(v3 + 3);
      if ( !(_DWORD)result )
        result = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v3 + 8LL))(v3);
    }
  }
  v4 = (volatile signed __int32 *)a1[19];
  if ( v4 )
  {
    result = (unsigned int)_InterlockedDecrement(v4 + 2);
    if ( !(_DWORD)result )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v4)(v4);
      result = (unsigned int)_InterlockedDecrement(v4 + 3);
      if ( !(_DWORD)result )
        result = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v4 + 8LL))(v4);
    }
  }
  v5 = (volatile signed __int32 *)a1[3];
  if ( v5 )
  {
    result = (unsigned int)_InterlockedDecrement(v5 + 2);
    if ( !(_DWORD)result )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v5)(v5);
      result = (unsigned int)_InterlockedDecrement(v5 + 3);
      if ( !(_DWORD)result )
        result = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v5 + 8LL))(v5);
    }
  }
  v6 = (volatile signed __int32 *)a1[1];
  if ( v6 )
  {
    result = (unsigned int)_InterlockedDecrement(v6 + 3);
    if ( !(_DWORD)result )
      return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v6 + 8LL))(v6);
  }
  return result;
}
