/*
 * XREFs of ?push_back@?$deque@U_MIT_KEYBOARD_OVERRIDER_INPUT_MESSAGE@@V?$allocator@U_MIT_KEYBOARD_OVERRIDER_INPUT_MESSAGE@@@std@@@std@@QEAAXAEBU_MIT_KEYBOARD_OVERRIDER_INPUT_MESSAGE@@@Z @ 0x1800C1764
 * Callers:
 *     ?push@?$queue@U_MIT_KEYBOARD_OVERRIDER_INPUT_MESSAGE@@V?$deque@U_MIT_KEYBOARD_OVERRIDER_INPUT_MESSAGE@@V?$allocator@U_MIT_KEYBOARD_OVERRIDER_INPUT_MESSAGE@@@std@@@std@@@std@@QEAAXAEBU_MIT_KEYBOARD_OVERRIDER_INPUT_MESSAGE@@@Z @ 0x1800C1664 (-push@-$queue@U_MIT_KEYBOARD_OVERRIDER_INPUT_MESSAGE@@V-$deque@U_MIT_KEYBOARD_OVERRIDER_INPUT_ME.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18000AD54 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Growmap@?$deque@U_MIT_KEYBOARD_OVERRIDER_INPUT_MESSAGE@@V?$allocator@U_MIT_KEYBOARD_OVERRIDER_INPUT_MESSAGE@@@std@@@std@@IEAAX_K@Z @ 0x1800C14EC (-_Growmap@-$deque@U_MIT_KEYBOARD_OVERRIDER_INPUT_MESSAGE@@V-$allocator@U_MIT_KEYBOARD_OVERRIDER_.c)
 */

_OWORD *__fastcall std::deque<_MIT_KEYBOARD_OVERRIDER_INPUT_MESSAGE>::push_back(_QWORD *a1, _OWORD *a2)
{
  unsigned __int64 v4; // rcx
  __int64 v5; // rsi
  __int64 v6; // rax
  _OWORD *result; // rax
  __int64 v8; // rcx
  __int128 v9; // xmm1

  v4 = a1[2];
  if ( v4 <= a1[4] + 1LL )
  {
    std::deque<_MIT_KEYBOARD_OVERRIDER_INPUT_MESSAGE>::_Growmap(a1);
    v4 = a1[2];
  }
  a1[3] &= v4 - 1;
  v5 = (a1[2] - 1LL) & (a1[4] + a1[3]);
  v6 = a1[1];
  if ( !*(_QWORD *)(v6 + 8 * v5) )
  {
    *(_QWORD *)(a1[1] + 8 * v5) = std::_Allocate<16,std::_Default_allocate_traits,0>(0x170uLL);
    v6 = a1[1];
  }
  result = *(_OWORD **)(v6 + 8 * v5);
  v8 = 2LL;
  do
  {
    *result = *a2;
    result[1] = a2[1];
    result[2] = a2[2];
    result[3] = a2[3];
    result[4] = a2[4];
    result[5] = a2[5];
    result[6] = a2[6];
    result += 8;
    v9 = a2[7];
    a2 += 8;
    *(result - 1) = v9;
    --v8;
  }
  while ( v8 );
  *result = *a2;
  result[1] = a2[1];
  result[2] = a2[2];
  result[3] = a2[3];
  result[4] = a2[4];
  result[5] = a2[5];
  result[6] = a2[6];
  ++a1[4];
  return result;
}
