/*
 * XREFs of _lambda_55c662481733b548f9656ca853e76ad4_::_lambda_55c662481733b548f9656ca853e76ad4_ @ 0x1800A7778
 * Callers:
 *     ?ApplyWindowingEnvironmentSettingsRequested@WindowEventDispatcher@@UEAAJPEAUIAppViewApplyWindowingEnvironmentSettingsRequestedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x18029B410 (-ApplyWindowingEnvironmentSettingsRequested@WindowEventDispatcher@@UEAAJPEAUIAppViewApplyWindowi.c)
 * Callees:
 *     ??0WeakRef@WRL@Microsoft@@QEAA@AEBV?$ComPtr@UIWeakReference@@@12@@Z @ 0x180085008 (--0WeakRef@WRL@Microsoft@@QEAA@AEBV-$ComPtr@UIWeakReference@@@12@@Z.c)
 */

__int64 *__fastcall lambda_55c662481733b548f9656ca853e76ad4_::_lambda_55c662481733b548f9656ca853e76ad4_(
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
