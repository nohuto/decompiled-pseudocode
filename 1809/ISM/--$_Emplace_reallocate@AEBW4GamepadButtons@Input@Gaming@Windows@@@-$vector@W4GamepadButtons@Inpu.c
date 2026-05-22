/*
 * XREFs of ??$_Emplace_reallocate@AEBW4GamepadButtons@Input@Gaming@Windows@@@?$vector@W4GamepadButtons@Input@Gaming@Windows@@V?$allocator@W4GamepadButtons@Input@Gaming@Windows@@@std@@@std@@QEAAPEAW4GamepadButtons@Input@Gaming@Windows@@QEAW42345@AEBW42345@@Z @ 0x18000F68C
 * Callers:
 *     ?GetAllAncestors@ViewHierarchy@@UEBA?AV?$vector@IV?$allocator@I@std@@@std@@I@Z @ 0x18000E750 (-GetAllAncestors@ViewHierarchy@@UEBA-AV-$vector@IV-$allocator@I@std@@@std@@I@Z.c)
 *     ?ProcessInputAttempt@InputAttemptedTargetManager@@QEBAXI@Z @ 0x18002AB70 (-ProcessInputAttempt@InputAttemptedTargetManager@@QEBAXI@Z.c)
 *     ?ChordedKeyStateMachine@ViewMenuChordedKeyHandler@@AEAAJ_N0W4GamepadButtons@Input@Gaming@Windows@@PEA_N@Z @ 0x180038DB8 (-ChordedKeyStateMachine@ViewMenuChordedKeyHandler@@AEAAJ_N0W4GamepadButtons@Input@Gaming@Windows.c)
 *     ?DetectComboButton@ButtonRecognizer@@QEAAJPEAUInputInfo@@@Z @ 0x1800C6924 (-DetectComboButton@ButtonRecognizer@@QEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     ?_Xlength@?$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V?$allocator@UContextualProcessorMetadata@ContextualProcessorBuffer@@@std@@@std@@CAXXZ @ 0x180008CD8 (-_Xlength@-$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V-$allocator@UContext.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18012C150 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18012C18C (--2@YAPEAX_K@Z.c)
 *     memmove_0 @ 0x18012DB6B (memmove_0.c)
 */

__int64 __fastcall std::vector<enum Windows::Gaming::Input::GamepadButtons>::_Emplace_reallocate<enum Windows::Gaming::Input::GamepadButtons const &>(
        _QWORD *a1,
        char *a2,
        _DWORD *a3)
{
  __int64 v6; // rsi
  __int64 v7; // rax
  unsigned __int64 v8; // r14
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rax
  __int64 v12; // r12
  size_t v13; // rdx
  size_t v14; // rcx
  void *v15; // rax
  const struct std::nothrow_t *v16; // rdx
  char *v17; // rcx
  _QWORD *v18; // rbx
  char *v19; // r8
  char *v20; // rdx
  char *v21; // rcx
  size_t v22; // r8
  __int64 v23; // rcx
  char *v24; // rcx
  char *v25; // r8
  __int64 v27; // [rsp+68h] [rbp+10h]

  v6 = (__int64)&a2[-*a1] >> 2;
  v7 = (__int64)(a1[1] - *a1) >> 2;
  if ( v7 == 0x3FFFFFFFFFFFFFFFLL )
    std::vector<ContextualProcessorBuffer::ContextualProcessorMetadata>::_Xlength();
  v8 = v7 + 1;
  v9 = (__int64)(a1[2] - *a1) >> 2;
  v10 = v9 >> 1;
  if ( v9 <= 0x3FFFFFFFFFFFFFFFLL - (v9 >> 1) )
  {
    v11 = v10 + v9;
    if ( v10 + v9 < v8 )
      v11 = v8;
  }
  else
  {
    v11 = v7 + 1;
  }
  v27 = v11;
  v12 = 4 * v11;
  v13 = 4 * v11;
  if ( v11 > 0x3FFFFFFFFFFFFFFFLL )
    v13 = -1LL;
  if ( v13 < 0x1000 )
  {
    if ( v13 )
      v18 = operator new(v13);
    else
      v18 = 0LL;
  }
  else
  {
    v14 = v13 + 39;
    if ( v13 + 39 < v13 )
      v14 = -1LL;
    v15 = operator new(v14);
    if ( !v15 )
      goto LABEL_26;
    v18 = (_QWORD *)(((unsigned __int64)v15 + 39) & 0xFFFFFFFFFFFFFFE0uLL);
    *(v18 - 1) = v15;
  }
  try
  {
    *((_DWORD *)v18 + v6) = *a3;
    v19 = (char *)a1[1];
    v20 = (char *)*a1;
    v21 = (char *)v18;
    if ( a2 == v19 )
    {
      v22 = v19 - v20;
    }
    else
    {
      memmove_0(v18, v20, (size_t)&a2[-*a1]);
      v21 = (char *)v18 + 4 * v6 + 4;
      v22 = a1[1] - (_QWORD)a2;
      v20 = a2;
    }
    memmove_0(v21, v20, v22);
  }
  catch ( ... )
  {
    std::allocator<enum Windows::Gaming::Input::GamepadButtons>::deallocate(v23, v18, v27);
    throw;
  }
  v24 = (char *)*a1;
  if ( *a1 )
  {
    v16 = (const struct std::nothrow_t *)((a1[2] - (_QWORD)v24) & 0xFFFFFFFFFFFFFFFCuLL);
    if ( (unsigned __int64)v16 < 0x1000 )
    {
LABEL_24:
      operator delete(v24, v16);
      goto LABEL_25;
    }
    v16 = (const struct std::nothrow_t *)((char *)v16 + 39);
    v25 = (char *)*((_QWORD *)v24 - 1);
    v17 = (char *)(v24 - v25);
    if ( (unsigned __int64)(v17 - 8) <= 0x1F )
    {
      v24 = v25;
      goto LABEL_24;
    }
LABEL_26:
    _o__invalid_parameter_noinfo_noreturn(v17, v16);
    __debugbreak();
  }
LABEL_25:
  *a1 = v18;
  a1[1] = (char *)v18 + 4 * v8;
  a1[2] = (char *)v18 + v12;
  return *a1 + 4 * v6;
}
