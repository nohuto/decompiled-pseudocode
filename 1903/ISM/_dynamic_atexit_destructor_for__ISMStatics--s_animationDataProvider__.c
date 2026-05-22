/*
 * XREFs of _dynamic_atexit_destructor_for__ISMStatics::s_animationDataProvider__ @ 0x18003E0C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 dynamic_atexit_destructor_for__ISMStatics::s_animationDataProvider__()
{
  return Microsoft::WRL::ComPtr<IViewHierarchy>::InternalRelease(&ISMStatics::s_animationDataProvider);
}
