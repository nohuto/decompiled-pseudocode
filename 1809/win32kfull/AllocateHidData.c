/*
 * XREFs of AllocateHidData @ 0x1C0002A30
 * Callers:
 *     ?PostRawKeyboardInputToForeground@@YAHPEAU_RAW_INPUT_FOREGROUND_TARGET@@KPEAXPEAU_KEYBOARD_INPUT_DATA@@IG@Z @ 0x1C000272C (-PostRawKeyboardInputToForeground@@YAHPEAU_RAW_INPUT_FOREGROUND_TARGET@@KPEAXPEAU_KEYBOARD_INPUT.c)
 *     ?PostRawKeyboardInputToSinks@@YAXKPEAXPEAU_KEYBOARD_INPUT_DATA@@IGH@Z @ 0x1C0002824 (-PostRawKeyboardInputToSinks@@YAXKPEAXPEAU_KEYBOARD_INPUT_DATA@@IGH@Z.c)
 *     EditionPostRawMouseInputMessage @ 0x1C00A5770 (EditionPostRawMouseInputMessage.c)
 *     ?PostHidInput@@YAHPEAUDEVICEINFO@@PEAUtagQ@@PEAUtagWND@@_K@Z @ 0x1C01C47B8 (-PostHidInput@@YAHPEAUDEVICEINFO@@PEAUtagQ@@PEAUtagWND@@_K@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AllocateHidData(__int64 a1, int a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v8; // rcx
  __int64 v9; // r9
  int v10; // esi
  __int64 v11; // rax
  __int64 v12; // rbx
  __int64 v14; // rax
  _QWORD v15[5]; // [rsp+20h] [rbp-28h] BYREF

  if ( a5 )
  {
    v8 = *(_QWORD *)(a5 + 16);
  }
  else
  {
    v14 = *(_QWORD *)(gpqForeground + 120LL);
    if ( v14 )
      v8 = *(_QWORD *)(v14 + 16);
    else
      v8 = *(_QWORD *)(gpqForeground + 96LL);
  }
  if ( (int)a3 + 56 < (unsigned int)a3 )
    return 0LL;
  v9 = (unsigned int)(a3 + 56);
  if ( (int)a3 + 24 < (unsigned int)a3 )
    return 0LL;
  v10 = a3 + 24;
  LOBYTE(a3) = 18;
  v11 = HMAllocObject(v8, 0LL, a3, v9);
  v12 = v11;
  if ( v11 )
  {
    v15[1] = a5;
    *(_QWORD *)(v11 + 24) = 0LL;
    v15[0] = v11 + 24;
    HMAssignmentLock(v15);
    *(_DWORD *)(v12 + 36) = v10;
    *(_DWORD *)(v12 + 32) = a2;
    *(_QWORD *)(v12 + 40) = a1;
    *(_QWORD *)(v12 + 48) = a4;
  }
  return v12;
}
