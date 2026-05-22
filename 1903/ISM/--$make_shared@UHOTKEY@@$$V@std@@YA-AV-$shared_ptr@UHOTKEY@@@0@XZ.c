/*
 * XREFs of ??$make_shared@UHOTKEY@@$$V@std@@YA?AV?$shared_ptr@UHOTKEY@@@0@XZ @ 0x180145750
 * Callers:
 *     ?RegisterHotKey@HotKeyProcessor@@UEAAJIII_N@Z @ 0x180146BC0 (-RegisterHotKey@HotKeyProcessor@@UEAAJIII_N@Z.c)
 * Callees:
 *     memset_0 @ 0x18002C3EE (memset_0.c)
 *     ??2@YAPEAX_K@Z @ 0x18002C79C (--2@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall std::make_shared<HOTKEY,>(_QWORD *a1)
{
  _QWORD *result; // rax
  _DWORD *v3; // [rsp+30h] [rbp+8h]

  v3 = operator new(0x30uLL);
  v3[2] = 1;
  v3[3] = 1;
  *(_QWORD *)v3 = &std::_Ref_count_obj<HOTKEY>::`vftable';
  memset_0(v3 + 4, 0, 0x20uLL);
  *a1 = v3 + 4;
  result = a1;
  a1[1] = v3;
  return result;
}
