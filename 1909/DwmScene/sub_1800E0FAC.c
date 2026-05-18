/*
 * XREFs of sub_1800E0FAC @ 0x1800E0FAC
 * Callers:
 *     sub_1800D5088 @ 0x1800D5088 (sub_1800D5088.c)
 *     sub_1800D51EC @ 0x1800D51EC (sub_1800D51EC.c)
 *     sub_1800D52DC @ 0x1800D52DC (sub_1800D52DC.c)
 *     sub_180108F60 @ 0x180108F60 (sub_180108F60.c)
 *     sub_180109218 @ 0x180109218 (sub_180109218.c)
 *     sub_18010940C @ 0x18010940C (sub_18010940C.c)
 *     sub_180109510 @ 0x180109510 (sub_180109510.c)
 *     sub_1801096F0 @ 0x1801096F0 (sub_1801096F0.c)
 *     sub_1801098BC @ 0x1801098BC (sub_1801098BC.c)
 *     sub_18010A154 @ 0x18010A154 (sub_18010A154.c)
 *     sub_18010A230 @ 0x18010A230 (sub_18010A230.c)
 *     ?dtor$0@?0???0WorkQueue@details@Concurrency@@QEAA@XZ@4HA @ 0x180133149 (-dtor$0@-0---0WorkQueue@details@Concurrency@@QEAA@XZ@4HA.c)
 *     ?dtor$1@?0???0WorkQueue@details@Concurrency@@QEAA@XZ@4HA @ 0x180133155 (-dtor$1@-0---0WorkQueue@details@Concurrency@@QEAA@XZ@4HA.c)
 *     sub_180133168 @ 0x180133168 (sub_180133168.c)
 *     sub_18013317B @ 0x18013317B (sub_18013317B.c)
 *     sub_18013318E @ 0x18013318E (sub_18013318E.c)
 *     sub_1801331E3 @ 0x1801331E3 (sub_1801331E3.c)
 *     sub_1801331F3 @ 0x1801331F3 (sub_1801331F3.c)
 *     sub_18013322E @ 0x18013322E (sub_18013322E.c)
 *     sub_18013323E @ 0x18013323E (sub_18013323E.c)
 *     sub_18013325D @ 0x18013325D (sub_18013325D.c)
 *     sub_180133269 @ 0x180133269 (sub_180133269.c)
 *     sub_180133275 @ 0x180133275 (sub_180133275.c)
 *     sub_1801332A5 @ 0x1801332A5 (sub_1801332A5.c)
 *     sub_1801332B1 @ 0x1801332B1 (sub_1801332B1.c)
 *     sub_1801332BD @ 0x1801332BD (sub_1801332BD.c)
 *     sub_1801332C9 @ 0x1801332C9 (sub_1801332C9.c)
 *     ?dtor$4@?0??_Putmfld@?$money_put@GV?$ostreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@AEBA?AV?$ostreambuf_iterator@GU?$char_traits@G@std@@@2@V32@_NAEAVios_base@2@G1V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@G@Z@4HA_3 @ 0x1801332D5 (-dtor$4@-0--_Putmfld@-$money_put@GV-$ostreambuf_iterator@GU-$char_traits@G@std@@@st_ea_1801332D5.c)
 *     unknown_libname_97 @ 0x1801332ED (unknown_libname_97.c)
 * Callees:
 *     sub_1800E16A8 @ 0x1800E16A8 (sub_1800E16A8.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800E0FAC(_QWORD *a1)
{
  __int64 result; // rax
  volatile signed __int32 *v3; // rbx
  volatile signed __int32 *v4; // rbx
  volatile signed __int32 *v5; // rbx
  volatile signed __int32 *v6; // rcx

  result = sub_1800E16A8(a1);
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
