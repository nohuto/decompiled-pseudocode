/*
 * XREFs of ?OnSpatialReady@CSpatialVisualContent@@EEAAXPEAUIDwmSpatialCompositor@@@Z @ 0x1801DB3F0
 * Callers:
 *     <none>
 * Callees:
 *     ?reset@?$com_ptr_t@UIDwmSpatialWorld@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18015930C (-reset@-$com_ptr_t@UIDwmSpatialWorld@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 */

void __fastcall CSpatialVisualContent::OnSpatialReady(CSpatialVisualContent *this, struct IDwmSpatialCompositor *a2)
{
  char *v2; // rbx

  v2 = (char *)this + 16;
  wil::com_ptr_t<IDwmSpatialWorld,wil::err_returncode_policy>::reset((__int64 *)this + 2);
  (*(void (__fastcall **)(struct IDwmSpatialCompositor *, char *))(*(_QWORD *)a2 + 48LL))(a2, v2);
}
