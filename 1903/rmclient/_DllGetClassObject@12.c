/*
 * XREFs of _DllGetClassObject@12 @ 0x1000F620
 * Callers:
 *     <none>
 * Callees:
 *     ?Create@?$Module@$00V?$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@SGAAV?$DefaultModule@$00@Details@23@XZ @ 0x100071F0 (-Create@-$Module@$00V-$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@SGAAV-$DefaultMo.c)
 */

HRESULT __stdcall DllGetClassObject(const IID *const rclsid, const IID *const riid, LPVOID *ppv)
{
  void *v3; // eax

  v3 = Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::Create();
  return Microsoft::WRL::Details::GetClassObject<1>(
           v3,
           (void *)rclsid,
           (Microsoft::WRL::Details *)riid,
           (unsigned int *)ppv);
}
