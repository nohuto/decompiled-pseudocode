/*
 * XREFs of _dynamic_atexit_destructor_for__ISMStatics::s_viewHierarchy__ @ 0x18003DBB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 dynamic_atexit_destructor_for__ISMStatics::s_viewHierarchy__()
{
  return Microsoft::WRL::ComPtr<IViewHierarchy>::InternalRelease(&ISMStatics::s_viewHierarchy);
}
