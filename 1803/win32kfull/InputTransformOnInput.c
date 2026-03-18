/*
 * XREFs of InputTransformOnInput @ 0x1C01BDB90
 * Callers:
 *     <none>
 * Callees:
 *     ?OnInput@InputTransform@@YAHPEAUtagWND@@_KPEBUtagINPUT_TRANSFORM@@@Z @ 0x1C00F4B38 (-OnInput@InputTransform@@YAHPEAUtagWND@@_KPEBUtagINPUT_TRANSFORM@@@Z.c)
 */

__int64 __fastcall InputTransformOnInput(
        __int64 a1,
        struct tagWND *a2,
        struct tagWND *a3,
        const struct tagINPUT_TRANSFORM *a4)
{
  return InputTransform::OnInput(*(struct _EX_PUSH_LOCK ***)(a1 + 72), a2, a3, a4);
}
