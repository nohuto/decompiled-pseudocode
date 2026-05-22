/*
 * XREFs of ?_Calculate_growth@?$vector@UINPUT_SPACE_PAYLOAD@@V?$allocator@UINPUT_SPACE_PAYLOAD@@@std@@@std@@AEBA_K_K@Z @ 0x180011D58
 * Callers:
 *     ??$_Emplace_reallocate@AEBUINPUT_SPACE_PAYLOAD@@@?$vector@UINPUT_SPACE_PAYLOAD@@V?$allocator@UINPUT_SPACE_PAYLOAD@@@std@@@std@@QEAAPEAUINPUT_SPACE_PAYLOAD@@QEAU2@AEBU2@@Z @ 0x180011A28 (--$_Emplace_reallocate@AEBUINPUT_SPACE_PAYLOAD@@@-$vector@UINPUT_SPACE_PAYLOAD@@V-$allocator@UIN.c)
 *     ??$_Assign_range@PEAUINPUT_SPACE_PAYLOAD@@@?$vector@UINPUT_SPACE_PAYLOAD@@V?$allocator@UINPUT_SPACE_PAYLOAD@@@std@@@std@@AEAAXPEAUINPUT_SPACE_PAYLOAD@@0Uforward_iterator_tag@1@@Z @ 0x180011B5C (--$_Assign_range@PEAUINPUT_SPACE_PAYLOAD@@@-$vector@UINPUT_SPACE_PAYLOAD@@V-$allocator@UINPUT_SP.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall std::vector<INPUT_SPACE_PAYLOAD>::_Calculate_growth(_QWORD *a1, unsigned __int64 a2)
{
  unsigned __int64 v3; // rdx
  unsigned __int64 v4; // rcx
  unsigned __int64 result; // rax

  v3 = (a1[2] - *a1) / 24LL;
  v4 = v3 >> 1;
  if ( v3 > 0xAAAAAAAAAAAAAAALL - (v3 >> 1) )
    return a2;
  result = v4 + v3;
  if ( v4 + v3 < a2 )
    return a2;
  return result;
}
