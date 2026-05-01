/*
 * XREFs of ?c_str@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBAPEBGXZ @ 0x1800904C0
 * Callers:
 *     ?RegisterForViewEvents@TouchKeyboardExperienceManager@@AEAAJAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x1803330DC (-RegisterForViewEvents@TouchKeyboardExperienceManager@@AEAAJAEBV-$basic_string@GU-$char_traits@G.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall std::wstring::c_str(_QWORD *a1)
{
  if ( a1[3] >= 8uLL )
    return (_QWORD *)*a1;
  return a1;
}
