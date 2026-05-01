/*
 * XREFs of ?get_OldLimit@AppMemoryUsageLimitChangingEventArgs@System@Windows@@UAGJPA_K@Z @ 0x100075F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __stdcall Windows::System::AppMemoryUsageLimitChangingEventArgs::get_OldLimit(
        Windows::System::AppMemoryUsageLimitChangingEventArgs *this,
        unsigned __int64 *a2)
{
  if ( !a2 )
    return -2147024809;
  *a2 = *((_QWORD *)this + 4);
  return 0;
}
