/*
 * XREFs of NtCreateImplicitCompositionInputSink @ 0x1C0010760
 * Callers:
 *     <none>
 * Callees:
 *     ?_CreateCompositionInputSink@@YAJPEBUCOMPOSITION_INPUT_SINK@@HPEAPEAX@Z @ 0x1C001079C (-_CreateCompositionInputSink@@YAJPEBUCOMPOSITION_INPUT_SINK@@HPEAPEAX@Z.c)
 */

int __fastcall NtCreateImplicitCompositionInputSink(const struct COMPOSITION_INPUT_SINK *a1, void **a2)
{
  return _CreateCompositionInputSink(a1, 1, a2);
}
