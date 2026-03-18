/*
 * XREFs of EditionUpdateInputTransformFromHitTest @ 0x1C0004870
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateInputTransformFromHitTest@@YAXPEAUtagWND@@0PEAXHPEAUtagINPUT_TRANSFORM@@PEA_K@Z @ 0x1C000489C (-UpdateInputTransformFromHitTest@@YAXPEAUtagWND@@0PEAXHPEAUtagINPUT_TRANSFORM@@PEA_K@Z.c)
 */

void __fastcall EditionUpdateInputTransformFromHitTest(
        __int64 a1,
        struct tagWND *a2,
        struct tagWND *a3,
        int a4,
        struct tagINPUT_TRANSFORM *a5,
        unsigned __int64 *a6)
{
  UpdateInputTransformFromHitTest(*(struct tagWND **)(a1 + 72), a2, a3, a4, a5, a6);
}
