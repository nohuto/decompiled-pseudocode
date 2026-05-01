/*
 * XREFs of ?GetViewsByZOrder@ApplicationViewManagerVisibilityDebouncer@@UEAAJPEAPEAUIObjectArray@@@Z @ 0x18012F2F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ApplicationViewManagerVisibilityDebouncer::GetViewsByZOrder(
        ApplicationViewManagerVisibilityDebouncer *this,
        struct IObjectArray **a2)
{
  return (*(__int64 (__fastcall **)(_QWORD, struct IObjectArray **))(**((_QWORD **)this + 18) + 32LL))(
           *((_QWORD *)this + 18),
           a2);
}
