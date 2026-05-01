/*
 * XREFs of _wil::details::ResultFromCaughtException_WinRt_::_1_::catch$5 @ 0x1800AF187
 * Callers:
 *     <none>
 * Callees:
 *     ?MaybeGetExceptionString@details@wil@@YAXPE$AAVException@Platform@@PEA_W_K@Z @ 0x18007A570 (-MaybeGetExceptionString@details@wil@@YAXPE$AAVException@Platform@@PEA_W_K@Z.c)
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall wil::details::ResultFromCaughtException_WinRt_::_1_::catch_5(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx

  **(_BYTE **)(a2 + 128) = 1;
  v3 = *(_QWORD *)(a2 + 72);
  wil::details::MaybeGetExceptionString(v3, *(wchar_t **)(a2 + 112), *(_QWORD *)(a2 + 120));
  *(_DWORD *)(a2 + 136) = *(_DWORD *)(v3 + 64);
  return &loc_18007A553;
}
