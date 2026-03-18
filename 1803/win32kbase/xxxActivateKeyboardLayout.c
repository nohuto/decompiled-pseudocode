/*
 * XREFs of xxxActivateKeyboardLayout @ 0x1C012A8C0
 * Callers:
 *     <none>
 * Callees:
 *     ThreadUnlock1 @ 0x1C0022E20 (ThreadUnlock1.c)
 *     HKLtoPKL @ 0x1C005BC40 (HKLtoPKL.c)
 *     ?ReorderKeyboardLayouts@@YAXPEAUtagWINDOWSTATION@@PEAUtagKL@@@Z @ 0x1C0129804 (-ReorderKeyboardLayouts@@YAXPEAUtagWINDOWSTATION@@PEAUtagKL@@@Z.c)
 *     xxxInternalActivateKeyboardLayout @ 0x1C012A970 (xxxInternalActivateKeyboardLayout.c)
 */

struct tagKL *__fastcall xxxActivateKeyboardLayout(
        struct tagWINDOWSTATION *a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4)
{
  struct tagTHREADINFO *v4; // rsi
  struct tagKL *result; // rax
  struct tagKL *v9; // rbx
  __int64 v10; // rbx
  _QWORD v11[5]; // [rsp+20h] [rbp-28h] BYREF

  v4 = gptiCurrent;
  result = (struct tagKL *)HKLtoPKL((__int64)gptiCurrent, a2);
  v9 = result;
  if ( result )
  {
    if ( (a3 & 8) != 0 )
      ReorderKeyboardLayouts(a1, result);
    v11[0] = *((_QWORD *)v4 + 51);
    *((_QWORD *)v4 + 51) = v11;
    v11[1] = v9;
    _InterlockedIncrement((volatile signed __int32 *)v9 + 2);
    v10 = xxxInternalActivateKeyboardLayout(v9, a3, a4);
    ThreadUnlock1();
    return (struct tagKL *)v10;
  }
  return result;
}
