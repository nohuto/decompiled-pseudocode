/*
 * XREFs of ?PostRawKeyboardInputToForeground@@YAHPEAU_RAW_INPUT_FOREGROUND_TARGET@@KPEAXPEAU_KEYBOARD_INPUT_DATA@@IG@Z @ 0x1C0004CB8
 * Callers:
 *     ?HandleRawInput@@YA?AW4RAW_INPUT_PROCESSING_RESULT@@PEAXPEAU_KEYBOARD_INPUT_DATA@@PEBURAW_INPUT_SUPPLEMENTAL_INFO@@@Z @ 0x1C00EA424 (-HandleRawInput@@YA-AW4RAW_INPUT_PROCESSING_RESULT@@PEAXPEAU_KEYBOARD_INPUT_DATA@@PEBURAW_INPUT_.c)
 * Callees:
 *     AllocateHidData @ 0x1C0004FA4 (AllocateHidData.c)
 *     FreeHidData @ 0x1C0005A70 (FreeHidData.c)
 *     PostInputMessage @ 0x1C0019B84 (PostInputMessage.c)
 */

__int64 __fastcall PostRawKeyboardInputToForeground(
        struct _RAW_INPUT_FOREGROUND_TARGET *a1,
        int a2,
        void *a3,
        struct _KEYBOARD_INPUT_DATA *a4,
        unsigned int a5,
        unsigned __int16 a6)
{
  __int64 result; // rax
  __int64 v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // rcx
  unsigned int v14; // edi

  result = AllocateHidData((_DWORD)a3, 1, 16, 0, *((_QWORD *)a1 + 2));
  v11 = result;
  if ( result )
  {
    v12 = *((_QWORD *)a1 + 2);
    v13 = *(_QWORD *)a1;
    *(_WORD *)(result + 56) = a4->MakeCode;
    *(_WORD *)(result + 58) = a4->Flags;
    *(_WORD *)(result + 60) = a4->Reserved;
    *(_DWORD *)(result + 64) = a5;
    *(_WORD *)(result + 62) = a6;
    *(_DWORD *)(result + 68) = a4->ExtraInformation;
    v14 = PostInputMessage(v13, v12, 255LL, 0LL, *(_QWORD *)result, a2, 0LL, a4->ExtraInformation, 0, 0LL, a3, 0LL);
    if ( !v14 )
      FreeHidData(v11);
    return v14;
  }
  return result;
}
