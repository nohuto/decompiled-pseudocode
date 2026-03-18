/*
 * XREFs of unsafe_cast_fnid_or_class_to_PIMEWND @ 0x1C001C564
 * Callers:
 *     xxxCreateDefaultImeWindow @ 0x1C001C00C (xxxCreateDefaultImeWindow.c)
 *     ImeCanDestroyDefIMEforChild @ 0x1C001C3B4 (ImeCanDestroyDefIMEforChild.c)
 *     zzzImeCanDestroyDefIME @ 0x1C001C420 (zzzImeCanDestroyDefIME.c)
 *     ?xxxNotifyImeShowStatus@@YAXPEAUtagWND@@@Z @ 0x1C01E44EC (-xxxNotifyImeShowStatus@@YAXPEAUtagWND@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall unsafe_cast_fnid_or_class_to_PIMEWND(_QWORD *a1)
{
  __int64 v1; // r8

  if ( !a1 )
    return 0LL;
  v1 = a1[5];
  if ( (*(_WORD *)(v1 + 42) & 0x3FFF) != 0x2A9 && **(_WORD **)(a1[17] + 8LL) != *(_WORD *)(gpsi + 898LL) )
    return 0LL;
  if ( *(_DWORD *)(v1 + 252) )
    return a1[35];
  return *(_QWORD *)(v1 + 296);
}
