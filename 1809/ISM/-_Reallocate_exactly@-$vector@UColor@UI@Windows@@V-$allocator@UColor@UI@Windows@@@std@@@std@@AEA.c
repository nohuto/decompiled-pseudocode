/*
 * XREFs of ?_Reallocate_exactly@?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@AEAAX_K@Z @ 0x18007614C
 * Callers:
 *     ?ProcessLampState@LampArrayDevice@@AEAAJPEAUViewClientListEntry@1@PEA_N@Z @ 0x180074890 (-ProcessLampState@LampArrayDevice@@AEAAJPEAUViewClientListEntry@1@PEA_N@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18012C18C (--2@YAPEAX_K@Z.c)
 *     memmove_0 @ 0x18012DB6B (memmove_0.c)
 */

__int64 __fastcall std::vector<Windows::UI::Color>::_Reallocate_exactly(__int64 a1, unsigned __int64 a2)
{
  size_t v3; // rax
  size_t v4; // rcx
  void *v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  _QWORD *v8; // rbx
  __int64 v9; // rcx

  v3 = 4 * a2;
  if ( a2 > 0x3FFFFFFFFFFFFFFFLL )
    v3 = -1LL;
  if ( v3 < 0x1000 )
  {
    v8 = 0LL;
    if ( v3 )
      v8 = operator new(v3);
  }
  else
  {
    v4 = v3 + 39;
    if ( v3 + 39 < v3 )
      v4 = -1LL;
    v5 = operator new(v4);
    if ( !v5 )
    {
      _o__invalid_parameter_noinfo_noreturn(v7, v6);
      __debugbreak();
    }
    v8 = (_QWORD *)(((unsigned __int64)v5 + 39) & 0xFFFFFFFFFFFFFFE0uLL);
    *(v8 - 1) = v5;
  }
  try
  {
    memmove_0(v8, *(const void **)a1, *(_QWORD *)(a1 + 8) - *(_QWORD *)a1);
    v9 = a1;
  }
  catch ( ... )
  {
    std::allocator<enum Windows::Gaming::Input::GamepadButtons>::deallocate(v9, v8, a2);
    throw;
  }
  return std::vector<Windows::UI::Color>::_Change_array();
}
