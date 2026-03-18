/*
 * XREFs of ?GetTransform@InputTransform@@YAHPEBUtagWND@@PEAUtagINPUT_TRANSFORM@@@Z @ 0x1C00F1994
 * Callers:
 *     ?OnInput@InputTransform@@YAHPEAUtagWND@@_K@Z @ 0x1C00F1810 (-OnInput@InputTransform@@YAHPEAUtagWND@@_K@Z.c)
 *     EditionGetInputTransform @ 0x1C01F6580 (EditionGetInputTransform.c)
 * Callees:
 *     ?QueryTransform@CompositionInputObject@@QEBAJPEAUtagINPUT_TRANSFORM@@@Z @ 0x1C0007F94 (-QueryTransform@CompositionInputObject@@QEBAJPEAUtagINPUT_TRANSFORM@@@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 *     memset @ 0x1C0168440 (memset.c)
 */

__int64 __fastcall InputTransform::GetTransform(
        InputTransform *this,
        const struct tagWND *a2,
        struct tagINPUT_TRANSFORM *a3)
{
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // rax
  __int64 result; // rax
  CompositionInputObject *v9; // rdi
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  _OWORD v13[4]; // [rsp+20h] [rbp-48h] BYREF

  if ( !(unsigned __int8)IsInputThread(this, a2, a3)
    && W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v5, v6) != gptiManipulationThread )
  {
    return 0LL;
  }
  v7 = *((_QWORD *)this + 34);
  if ( !v7 )
    return 0LL;
  v9 = *(CompositionInputObject **)(v7 + 96);
  if ( !v9 )
    return 0LL;
  memset(v13, 0, sizeof(v13));
  if ( (int)CompositionInputObject::QueryTransform(v9, (struct tagINPUT_TRANSFORM *)v13) < 0 )
    return 0LL;
  result = 1LL;
  v10 = v13[1];
  *(_OWORD *)a2 = v13[0];
  v11 = v13[2];
  *((_OWORD *)a2 + 1) = v10;
  v12 = v13[3];
  *((_OWORD *)a2 + 2) = v11;
  *((_OWORD *)a2 + 3) = v12;
  return result;
}
