/*
 * XREFs of ?OnInput@HotkeyContextualProcessor@@UEAAJPEAUInputInfo@@PEAUInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x1801083F0
 * Callers:
 *     <none>
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002DDA4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?DetectAndProcessHotKey@HotKeyProcessor@@QEAAJI_N_KAEA_N@Z @ 0x180145D1C (-DetectAndProcessHotKey@HotKeyProcessor@@QEAAJI_N_KAEA_N@Z.c)
 */

__int64 __fastcall HotkeyContextualProcessor::OnInput(
        HotKeyProcessor **this,
        struct InputInfo *a2,
        struct InputContext *a3,
        struct ContextualProcessorResponse *a4)
{
  unsigned int v5; // edx
  int v6; // r8d
  int v7; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  bool v10; // [rsp+48h] [rbp+10h] BYREF

  *(_DWORD *)a4 = 4;
  if ( (*(_BYTE *)a2 & 4) != 0 )
  {
    v5 = *((unsigned __int16 *)a2 + 18);
    v10 = 0;
    if ( (unsigned __int16)v5 > 6u || (v6 = 118, !_bittest(&v6, v5)) )
    {
      if ( (_WORD)v5 != 231 )
      {
        v7 = HotKeyProcessor::DetectAndProcessHotKey(
               this[4],
               (unsigned __int16)v5,
               *((_BYTE *)a2 + 70) & 1,
               *((_QWORD *)a2 + 42),
               &v10);
        if ( v7 < 0 )
        {
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            104LL,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\hotkey\\system\\lib\\ho"
                     "tkeycontextualprocessor.cpp",
            (const char *)(unsigned int)v7);
          __debugbreak();
        }
        if ( v10 )
          *((_BYTE *)a2 + 344) = 1;
      }
    }
  }
  return 0LL;
}
