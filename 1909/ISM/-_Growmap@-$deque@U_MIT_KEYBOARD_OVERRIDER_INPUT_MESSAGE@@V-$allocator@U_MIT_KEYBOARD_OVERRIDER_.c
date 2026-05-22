/*
 * XREFs of ?_Growmap@?$deque@U_MIT_KEYBOARD_OVERRIDER_INPUT_MESSAGE@@V?$allocator@U_MIT_KEYBOARD_OVERRIDER_INPUT_MESSAGE@@@std@@@std@@IEAAX_K@Z @ 0x1800C139C
 * Callers:
 *     ?push_back@?$deque@U_MIT_KEYBOARD_OVERRIDER_INPUT_MESSAGE@@V?$allocator@U_MIT_KEYBOARD_OVERRIDER_INPUT_MESSAGE@@@std@@@std@@QEAAXAEBU_MIT_KEYBOARD_OVERRIDER_INPUT_MESSAGE@@@Z @ 0x1800C1614 (-push_back@-$deque@U_MIT_KEYBOARD_OVERRIDER_INPUT_MESSAGE@@V-$allocator@U_MIT_KEYBOARD_OVERRIDER.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000A200 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18000ADC4 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     memset_0 @ 0x18002C06E (memset_0.c)
 *     ??$_Uninitialized_copy@PEAPEAUKeyboardEvent@@PEAPEAU1@V?$allocator@PEAUKeyboardEvent@@@std@@@std@@YAPEAPEAUKeyboardEvent@@QEAPEAU1@0PEAPEAU1@AEAV?$allocator@PEAUKeyboardEvent@@@0@@Z @ 0x1800BFF94 (--$_Uninitialized_copy@PEAPEAUKeyboardEvent@@PEAPEAU1@V-$allocator@PEAUKeyboardEvent@@@std@@@std.c)
 */

void __fastcall std::deque<_MIT_KEYBOARD_OVERRIDER_INPUT_MESSAGE>::_Growmap(_QWORD *a1)
{
  unsigned __int64 v2; // rdx
  unsigned __int64 v3; // rcx
  unsigned __int64 v4; // rsi
  unsigned __int64 v5; // r15
  size_t v6; // rcx
  char *v7; // rbp
  __int64 v8; // r14
  char *v9; // rax
  const void *v10; // rcx
  char *v11; // rax
  size_t v12; // r8
  char *v13; // rcx
  void *v14; // rcx

  v2 = 1LL;
  v3 = a1[2];
  if ( v3 )
    v2 = v3;
  while ( 1 )
  {
    v4 = v2 - v3;
    if ( v2 != v3 && v2 >= 8 )
      break;
    if ( 0xB21642C8590B21LL - v2 < v2 )
      std::_Xlength_error("deque<T> too long");
    v2 *= 2LL;
  }
  v5 = a1[3];
  v6 = 8 * v2;
  if ( v2 > 0x1FFFFFFFFFFFFFFFLL )
    v6 = -1LL;
  v7 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(v6);
  v8 = 8 * v5;
  v9 = std::_Uninitialized_copy<KeyboardEvent * *,KeyboardEvent * *,std::allocator<KeyboardEvent *>>(
         (const void *)(8 * v5 + a1[1]),
         a1[1] + 8LL * a1[2],
         &v7[8 * v5]);
  v10 = (const void *)a1[1];
  if ( v5 > v4 )
  {
    std::_Uninitialized_copy<KeyboardEvent * *,KeyboardEvent * *,std::allocator<KeyboardEvent *>>(
      v10,
      (__int64)v10 + 8 * v4,
      v9);
    v13 = std::_Uninitialized_copy<KeyboardEvent * *,KeyboardEvent * *,std::allocator<KeyboardEvent *>>(
            (const void *)(8 * v4 + a1[1]),
            v8 + a1[1],
            v7);
    v12 = 8 * v4;
  }
  else
  {
    v11 = std::_Uninitialized_copy<KeyboardEvent * *,KeyboardEvent * *,std::allocator<KeyboardEvent *>>(
            v10,
            (__int64)v10 + v8,
            v9);
    memset_0(v11, 0, 8 * (v4 - v5));
    v12 = 8 * v5;
    v13 = v7;
  }
  memset_0(v13, 0, v12);
  v14 = (void *)a1[1];
  if ( v14 )
    std::_Deallocate<16,0>(v14, (const struct std::nothrow_t *)(8LL * a1[2]));
  a1[1] = v7;
  a1[2] += v4;
}
