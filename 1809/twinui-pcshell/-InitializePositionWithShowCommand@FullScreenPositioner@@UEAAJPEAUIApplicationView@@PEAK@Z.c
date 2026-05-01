/*
 * XREFs of ?InitializePositionWithShowCommand@FullScreenPositioner@@UEAAJPEAUIApplicationView@@PEAK@Z @ 0x180141B90
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall FullScreenPositioner::InitializePositionWithShowCommand(
        FullScreenPositioner *this,
        struct IApplicationView *a2,
        unsigned int *a3)
{
  *a3 = 0;
  return (*(__int64 (__fastcall **)(char *, struct IApplicationView *, _QWORD))(*((_QWORD *)this + 1) + 40LL))(
           (char *)this + 8,
           a2,
           0LL);
}
