/*
 * XREFs of ??1KeyboardModifierState@@EEAA@XZ @ 0x1801417E0
 * Callers:
 *     ??_EKeyboardModifierState@@EEAAPEAXI@Z @ 0x180141890 (--_EKeyboardModifierState@@EEAAPEAXI@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000A200 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall KeyboardModifierState::~KeyboardModifierState(KeyboardModifierState *this)
{
  void *v2; // rcx
  _QWORD **v3; // rax
  _QWORD *v4; // r8
  _QWORD *v5; // rcx
  _QWORD *v6; // rbx

  *(_QWORD *)this = &KeyboardModifierState::`vftable';
  v2 = (void *)*((_QWORD *)this + 5);
  KeyboardModifierState::s_pKeyboardModifierState = 0LL;
  if ( v2 )
  {
    std::_Deallocate<16,0>(
      v2,
      (const struct std::nothrow_t *)((*((_QWORD *)this + 7) - (_QWORD)v2) & 0xFFFFFFFFFFFFFFF8uLL));
    *((_QWORD *)this + 5) = 0LL;
    *((_QWORD *)this + 6) = 0LL;
    *((_QWORD *)this + 7) = 0LL;
  }
  v3 = (_QWORD **)*((_QWORD *)this + 3);
  v4 = *v3;
  *v3 = v3;
  *(_QWORD *)(*((_QWORD *)this + 3) + 8LL) = *((_QWORD *)this + 3);
  *((_QWORD *)this + 4) = 0LL;
  v5 = (_QWORD *)*((_QWORD *)this + 3);
  if ( v4 != v5 )
  {
    do
    {
      v6 = (_QWORD *)*v4;
      std::_Deallocate<16,0>(v4, (const struct std::nothrow_t *)0x18);
      v5 = (_QWORD *)*((_QWORD *)this + 3);
      v4 = v6;
    }
    while ( v6 != v5 );
  }
  std::_Deallocate<16,0>(v5, (const struct std::nothrow_t *)0x18);
  *(_QWORD *)this = &RefCountedObject::`vftable';
}
