/*
 * XREFs of ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIWeakReference@@@Details@WRL@Microsoft@@UAGKXZ @ 0x1000BB20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

signed __int32 __stdcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IWeakReference>::AddRef(
        int a1)
{
  return _InterlockedIncrement((volatile signed __int32 *)(a1 + 8));
}
