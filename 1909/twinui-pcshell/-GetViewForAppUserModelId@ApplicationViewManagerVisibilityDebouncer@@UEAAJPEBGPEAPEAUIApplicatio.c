/*
 * XREFs of ?GetViewForAppUserModelId@ApplicationViewManagerVisibilityDebouncer@@UEAAJPEBGPEAPEAUIApplicationView@@@Z @ 0x180177B40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ApplicationViewManagerVisibilityDebouncer::GetViewForAppUserModelId(
        ApplicationViewManagerVisibilityDebouncer *this,
        const unsigned __int16 *a2,
        struct IApplicationView **a3)
{
  return (*(__int64 (__fastcall **)(_QWORD, const unsigned __int16 *, struct IApplicationView **))(**((_QWORD **)this + 18)
                                                                                                 + 64LL))(
           *((_QWORD *)this + 18),
           a2,
           a3);
}
