/*
 * XREFs of ??$_Emplace_reallocate@AEBUColor@UI@Windows@@@?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@QEAAPEAUColor@UI@Windows@@QEAU234@AEBU234@@Z @ 0x1800762A4
 * Callers:
 *     ?ProcessLampState@LampArrayDevice@@AEAAJPEAUViewClientListEntry@1@PEA_N@Z @ 0x180074890 (-ProcessLampState@LampArrayDevice@@AEAAJPEAUViewClientListEntry@1@PEA_N@Z.c)
 * Callees:
 *     ?_Xlength@?$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V?$allocator@UContextualProcessorMetadata@ContextualProcessorBuffer@@@std@@@std@@CAXXZ @ 0x180008CD8 (-_Xlength@-$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V-$allocator@UContext.c)
 *     ?_Change_array@?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@AEAAXQEAUColor@UI@Windows@@_K1@Z @ 0x180076214 (-_Change_array@-$vector@UColor@UI@Windows@@V-$allocator@UColor@UI@Windows@@@std@@@std@@AEAAXQEAU.c)
 *     ??2@YAPEAX_K@Z @ 0x18012C18C (--2@YAPEAX_K@Z.c)
 *     memmove_0 @ 0x18012DB6B (memmove_0.c)
 */

__int64 __fastcall std::vector<Windows::UI::Color>::_Emplace_reallocate<Windows::UI::Color const &>(
        const void **a1,
        _BYTE *a2,
        _DWORD *a3)
{
  __int64 v6; // r14
  __int64 v7; // rax
  unsigned __int64 v8; // r15
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rdi
  size_t v12; // rax
  size_t v13; // rcx
  void *v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  _QWORD *v17; // rbx
  _QWORD *v18; // rax
  _BYTE *v19; // r8
  _BYTE *v20; // rdx
  char *v21; // rcx
  size_t v22; // r8
  __int64 v23; // rcx
  __int64 result; // rax

  v6 = (a2 - (_BYTE *)*a1) >> 2;
  v7 = ((_BYTE *)a1[1] - (_BYTE *)*a1) >> 2;
  if ( v7 == 0x3FFFFFFFFFFFFFFFLL )
    std::vector<ContextualProcessorBuffer::ContextualProcessorMetadata>::_Xlength();
  v8 = v7 + 1;
  v9 = ((_BYTE *)a1[2] - (_BYTE *)*a1) >> 2;
  v10 = v9 >> 1;
  if ( v9 <= 0x3FFFFFFFFFFFFFFFLL - (v9 >> 1) )
  {
    v11 = v10 + v9;
    if ( v10 + v9 < v8 )
      v11 = v7 + 1;
  }
  else
  {
    v11 = v7 + 1;
  }
  v12 = 4 * v11;
  if ( v11 > 0x3FFFFFFFFFFFFFFFLL )
    v12 = -1LL;
  if ( v12 < 0x1000 )
  {
    v17 = 0LL;
    if ( v12 )
    {
      v18 = operator new(v12);
      v17 = v18;
    }
  }
  else
  {
    v13 = v12 + 39;
    if ( v12 + 39 < v12 )
      v13 = -1LL;
    v14 = operator new(v13);
    if ( !v14 )
    {
      _o__invalid_parameter_noinfo_noreturn(v16, v15);
      __debugbreak();
    }
    v17 = (_QWORD *)(((unsigned __int64)v14 + 39) & 0xFFFFFFFFFFFFFFE0uLL);
    *(v17 - 1) = v14;
  }
  try
  {
    *((_DWORD *)v17 + v6) = *a3;
    v19 = a1[1];
    v20 = *a1;
    v21 = (char *)v17;
    if ( a2 == v19 )
    {
      v22 = v19 - v20;
    }
    else
    {
      memmove_0(v17, v20, a2 - (_BYTE *)*a1);
      v21 = (char *)v17 + 4 * v6 + 4;
      v22 = (_BYTE *)a1[1] - a2;
      v20 = a2;
    }
    memmove_0(v21, v20, v22);
    std::vector<Windows::UI::Color>::_Change_array((__int64)a1, (__int64)v17, v8, v11);
    result = (__int64)*a1 + 4 * v6;
  }
  catch ( ... )
  {
    std::allocator<enum Windows::Gaming::Input::GamepadButtons>::deallocate(v23, v17, v11);
    throw;
  }
  return result;
}
