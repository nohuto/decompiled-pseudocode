/*
 * XREFs of unknown_libname_98 @ 0x18013323D
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// Microsoft VisualC v7/14 64bit runtime
void **__fastcall unknown_libname_98(__int64 a1, __int64 a2)
{
  void **result; // rax

  result = &Spectre::Engine::IImageProcessingEffect::`vftable';
  **(_QWORD **)(a2 + 32) = &Spectre::Engine::IImageProcessingEffect::`vftable';
  return result;
}
