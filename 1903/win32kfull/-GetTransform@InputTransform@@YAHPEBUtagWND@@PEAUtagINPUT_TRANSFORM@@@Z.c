/*
 * XREFs of ?GetTransform@InputTransform@@YAHPEBUtagWND@@PEAUtagINPUT_TRANSFORM@@@Z @ 0x1C01179D4
 * Callers:
 *     ?OnInput@InputTransform@@YAHPEAUtagWND@@_K@Z @ 0x1C0117850 (-OnInput@InputTransform@@YAHPEAUtagWND@@_K@Z.c)
 *     EditionGetInputTransform @ 0x1C01F6830 (EditionGetInputTransform.c)
 * Callees:
 *     ?QueryTransform@CompositionInputObject@@QEBAJPEAUtagINPUT_TRANSFORM@@@Z @ 0x1C0007F94 (-QueryTransform@CompositionInputObject@@QEBAJPEAUtagINPUT_TRANSFORM@@@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     memset @ 0x1C0166840 (memset.c)
 */

__int64 __fastcall InputTransform::GetTransform(
        InputTransform *this,
        const struct tagWND *a2,
        struct tagINPUT_TRANSFORM *a3)
{
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rax
  __int64 result; // rax
  CompositionInputObject *v10; // rdi
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  _OWORD v14[4]; // [rsp+20h] [rbp-48h] BYREF

  if ( !(unsigned __int8)IsInputThread(this, a2, a3)
    && W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v5, v6, v7) != gptiManipulationThread )
  {
    return 0LL;
  }
  v8 = *((_QWORD *)this + 34);
  if ( !v8 )
    return 0LL;
  v10 = *(CompositionInputObject **)(v8 + 96);
  if ( !v10 )
    return 0LL;
  memset(v14, 0, sizeof(v14));
  if ( (int)CompositionInputObject::QueryTransform(v10, (struct tagINPUT_TRANSFORM *)v14) < 0 )
    return 0LL;
  result = 1LL;
  v11 = v14[1];
  *(_OWORD *)a2 = v14[0];
  v12 = v14[2];
  *((_OWORD *)a2 + 1) = v11;
  v13 = v14[3];
  *((_OWORD *)a2 + 2) = v12;
  *((_OWORD *)a2 + 3) = v13;
  return result;
}
