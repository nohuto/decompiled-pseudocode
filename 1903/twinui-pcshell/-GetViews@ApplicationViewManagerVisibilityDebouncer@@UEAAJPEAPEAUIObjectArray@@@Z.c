/*
 * XREFs of ?GetViews@ApplicationViewManagerVisibilityDebouncer@@UEAAJPEAPEAUIObjectArray@@@Z @ 0x180158A20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ApplicationViewManagerVisibilityDebouncer::GetViews(
        ApplicationViewManagerVisibilityDebouncer *this,
        struct IObjectArray **a2)
{
  return (*(__int64 (__fastcall **)(_QWORD, struct IObjectArray **))(**((_QWORD **)this + 18) + 24LL))(
           *((_QWORD *)this + 18),
           a2);
}
