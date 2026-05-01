/*
 * XREFs of ?GetApp@CAppLayoutOperationItem@@UEAAJPEAPEAUIImmersiveApplication@@@Z @ 0x180440410
 * Callers:
 *     <none>
 * Callees:
 *     ?GetApplicationFromView@ApplicationViewHelpers@@YAJPEAUIApplicationView@@PEAPEAUIImmersiveApplication@@@Z @ 0x180021C68 (-GetApplicationFromView@ApplicationViewHelpers@@YAJPEAUIApplicationView@@PEAPEAUIImmersiveApplic.c)
 */

__int64 __fastcall CAppLayoutOperationItem::GetApp(
        CAppLayoutOperationItem *this,
        struct IImmersiveApplication **a2,
        struct IImmersiveApplication **a3)
{
  __int64 result; // rax
  __int64 (__fastcall ***v4)(ApplicationViewHelpers *, GUID *, __int64 *); // rcx

  *a2 = 0LL;
  result = 2147943568LL;
  v4 = (__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64 *))*((_QWORD *)this + 2);
  if ( v4 )
    return ApplicationViewHelpers::GetApplicationFromView(v4, (struct IApplicationView *)a2, a3);
  return result;
}
