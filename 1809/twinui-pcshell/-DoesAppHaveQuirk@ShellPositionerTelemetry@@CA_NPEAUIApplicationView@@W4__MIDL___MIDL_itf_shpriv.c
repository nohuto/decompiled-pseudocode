/*
 * XREFs of ?DoesAppHaveQuirk@ShellPositionerTelemetry@@CA_NPEAUIApplicationView@@W4__MIDL___MIDL_itf_shpriv_core_0000_0318_0005@@@Z @ 0x18002F974
 * Callers:
 *     ?PositionViewForActivation_@ShellPositionerTelemetry@@QEBAXPEAUIApplicationView@@W4SHELL_POSITIONER_TYPE@@@Z @ 0x18002F6F0 (-PositionViewForActivation_@ShellPositionerTelemetry@@QEBAXPEAUIApplicationView@@W4SHELL_POSITIO.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
bool __fastcall ShellPositionerTelemetry::DoesAppHaveQuirk(
        int (__fastcall ***a1)(_QWORD, GUID *, __int64 *),
        unsigned int a2)
{
  bool v3; // di
  __int64 v4; // rbx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v9; // [rsp+50h] [rbp+20h] BYREF
  __int64 v10; // [rsp+60h] [rbp+30h] BYREF

  v3 = 0;
  v10 = 0LL;
  v9 = 0LL;
  if ( (**a1)(a1, &GUID_3e46ed27_6707_4c99_aff4_ad6824b65aa2, &v10) >= 0 )
  {
    v4 = v10;
    v5 = v9;
    if ( v9 )
    {
      v9 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
    }
    if ( (*(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v4 + 24LL))(v4, &v9) >= 0 )
      v3 = (*(unsigned int (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v9 + 328LL))(v9, a2) != 0;
  }
  v6 = v9;
  if ( v9 )
  {
    v9 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  v7 = v10;
  if ( v10 )
  {
    v10 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  return v3;
}
