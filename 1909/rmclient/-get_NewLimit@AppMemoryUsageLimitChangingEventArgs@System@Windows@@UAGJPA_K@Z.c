/*
 * XREFs of ?get_NewLimit@AppMemoryUsageLimitChangingEventArgs@System@Windows@@UAGJPA_K@Z @ 0x100075C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __stdcall Windows::System::AppMemoryUsageLimitChangingEventArgs::get_NewLimit(
        Windows::System::AppMemoryUsageLimitChangingEventArgs *this,
        unsigned __int64 *a2)
{
  if ( !a2 )
    return -2147024809;
  *a2 = *((_QWORD *)this + 5);
  return 0;
}
