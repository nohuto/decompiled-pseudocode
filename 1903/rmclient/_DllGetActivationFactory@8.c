/*
 * XREFs of _DllGetActivationFactory@8 @ 0x100073D0
 * Callers:
 *     <none>
 * Callees:
 *     ?Create@?$Module@$00V?$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@SGAAV?$DefaultModule@$00@Details@23@XZ @ 0x100071F0 (-Create@-$Module@$00V-$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@SGAAV-$DefaultMo.c)
 */

int __stdcall DllGetActivationFactory(int a1, int a2)
{
  void *v2; // eax

  v2 = Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::Create();
  return Microsoft::WRL::Details::GetActivationFactory<1>(v2, a1, a2);
}
