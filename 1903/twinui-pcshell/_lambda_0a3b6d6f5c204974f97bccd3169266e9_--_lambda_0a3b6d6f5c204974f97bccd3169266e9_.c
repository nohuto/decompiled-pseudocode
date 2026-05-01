/*
 * XREFs of _lambda_0a3b6d6f5c204974f97bccd3169266e9_::_lambda_0a3b6d6f5c204974f97bccd3169266e9_ @ 0x18009A718
 * Callers:
 *     ?ApplyWindowingEnvironmentSettingsRequested@WindowEventDispatcher@@UEAAJPEAUIAppViewApplyWindowingEnvironmentSettingsRequestedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x18027BF40 (-ApplyWindowingEnvironmentSettingsRequested@WindowEventDispatcher@@UEAAJPEAUIAppViewApplyWindowi.c)
 * Callees:
 *     ??0WeakRef@WRL@Microsoft@@QEAA@AEBV?$ComPtr@UIWeakReference@@@12@@Z @ 0x1800823C0 (--0WeakRef@WRL@Microsoft@@QEAA@AEBV-$ComPtr@UIWeakReference@@@12@@Z.c)
 */

__int64 *__fastcall lambda_0a3b6d6f5c204974f97bccd3169266e9_::_lambda_0a3b6d6f5c204974f97bccd3169266e9_(
        __int64 *a1,
        __int64 *a2,
        __int64 a3)
{
  __int64 *result; // rax

  Microsoft::WRL::WeakRef::WeakRef(a1, a2);
  result = a1;
  a1[1] = a3;
  return result;
}
