/*
 * XREFs of ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x180051E14
 * Callers:
 *     ?CreateFromValueInternal@SemaphoreValue@details_abi@wil@@AEAAJPEBG_N_K@Z @ 0x18004F114 (-CreateFromValueInternal@SemaphoreValue@details_abi@wil@@AEAAJPEBG_N_K@Z.c)
 *     ?CreateKeyboardInputInfo@Win32kInterop@@SA?AUKeyboardInputInfo@@PEBU_MIT_KEYBOARD_INPUT_MESSAGE@@@Z @ 0x1800BB9F0 (-CreateKeyboardInputInfo@Win32kInterop@@SA-AUKeyboardInputInfo@@PEBU_MIT_KEYBOARD_INPUT_MESSAGE@.c)
 * Callees:
 *     StringCopyWorkerW @ 0x180051F2C (StringCopyWorkerW.c)
 */

__int64 __fastcall StringCchCopyW(unsigned __int16 *a1, size_t a2, size_t *a3)
{
  int v3; // r9d
  size_t v5; // [rsp+20h] [rbp-18h]

  v3 = 0;
  if ( a2 - 1 > 0x7FFFFFFE )
    v3 = -2147024809;
  if ( v3 < 0 )
  {
    if ( a2 )
      *a1 = 0;
  }
  else
  {
    return (unsigned int)StringCopyWorkerW(a1, a2, a3, (STRSAFE_PCNZWCH)a3, v5);
  }
  return (unsigned int)v3;
}
