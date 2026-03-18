/*
 * XREFs of ?OnSpatialLost@CSpatialVisualContent@@EEAAXPEAUIDwmSpatialCompositor@@@Z @ 0x1801DB2D0
 * Callers:
 *     <none>
 * Callees:
 *     ?reset@?$com_ptr_t@UIDwmSpatialWorld@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18015930C (-reset@-$com_ptr_t@UIDwmSpatialWorld@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 */

void __fastcall CSpatialVisualContent::OnSpatialLost(CSpatialVisualContent *this, struct IDwmSpatialCompositor *a2)
{
  wil::com_ptr_t<IDwmSpatialWorld,wil::err_returncode_policy>::reset((__int64 *)this + 2);
  wil::com_ptr_t<IDwmSpatialWorld,wil::err_returncode_policy>::reset((__int64 *)this + 3);
}
