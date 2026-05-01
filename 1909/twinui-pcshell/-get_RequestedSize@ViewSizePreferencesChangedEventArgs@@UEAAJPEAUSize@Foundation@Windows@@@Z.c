/*
 * XREFs of ?get_RequestedSize@ViewSizePreferencesChangedEventArgs@@UEAAJPEAUSize@Foundation@Windows@@@Z @ 0x180087920
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ViewSizePreferencesChangedEventArgs::get_RequestedSize(
        ViewSizePreferencesChangedEventArgs *this,
        struct Windows::Foundation::Size *a2)
{
  __int64 result; // rax

  result = 0LL;
  *(_QWORD *)a2 = *((_QWORD *)this + 8);
  return result;
}
