/*
 * XREFs of _dynamic_initializer_for__Microsoft::WRL::Module_1_Microsoft::WRL::Details::DefaultModule_1___::isInitialized__ @ 0x10005470
 * Callers:
 *     <none>
 * Callees:
 *     ?StaticInitialize@?$Module@$00V?$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@CG_NXZ @ 0x10006D00 (-StaticInitialize@-$Module@$00V-$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@CG_NXZ.c)
 */

int dynamic_initializer_for__Microsoft::WRL::Module_1_Microsoft::WRL::Details::DefaultModule_1___::isInitialized__()
{
  int result; // eax

  result = Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::StaticInitialize();
  Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::isInitialized = result;
  return result;
}
