/*
 * XREFs of ?OnSpatialPreRender@CSpatialVisualContent@@EEAAXPEAUIDwmSpatialCompositor@@_K@Z @ 0x1801DB300
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?reset@?$com_ptr_t@UIDwmSpatialWorld@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18015930C (-reset@-$com_ptr_t@UIDwmSpatialWorld@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 */

void __fastcall CSpatialVisualContent::OnSpatialPreRender(
        CSpatialVisualContent *this,
        struct IDwmSpatialCompositor *a2,
        __int64 a3)
{
  __int64 v5; // rcx
  char v7; // bp
  __int64 *v8; // rdi
  __int64 v9; // rbx
  __int64 v10; // rax
  char v11; // al
  char v12; // cl

  v5 = *((_QWORD *)this + 2);
  if ( v5 )
  {
    v7 = 0;
    if ( !*((_QWORD *)this + 3) )
    {
      wil::com_ptr_t<IDwmSpatialWorld,wil::err_returncode_policy>::reset((__int64 *)this + 3);
      if ( (*(int (__fastcall **)(struct IDwmSpatialCompositor *, _QWORD, GUID *, char *))(*(_QWORD *)a2 + 64LL))(
             a2,
             *((_QWORD *)this + 1),
             &GUID_098c24b2_3f81_46af_a2e6_468930c46c43,
             (char *)this + 24) < 0 )
        return;
      v8 = (__int64 *)*((_QWORD *)this + 3);
      v9 = *v8;
      v10 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 2) + 24LL))(*((_QWORD *)this + 2));
      (*(void (__fastcall **)(__int64 *, __int64))(v9 + 24))(v8, v10);
      v5 = *((_QWORD *)this + 2);
      v7 = 1;
    }
    v11 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v5 + 40LL))(v5, a3);
    v12 = v7;
    if ( v11 )
      v12 = 1;
    if ( v12 )
      (*(void (__fastcall **)(char *, _QWORD, _QWORD))(*((_QWORD *)this - 7) + 64LL))((char *)this - 56, 0LL, 0LL);
  }
}
