/*
 * XREFs of wistd::__function::__func__lambda_890942bf62097d6c778291458fa4014d__void___cdecl(enum_wil::RegistryChangeKind)_::operator() @ 0x180079610
 * Callers:
 *     <none>
 * Callees:
 *     ?GetControlMode@PerceptionSimulationSettings@@SA?AW4SimulationControlMode@@XZ @ 0x180041808 (-GetControlMode@PerceptionSimulationSettings@@SA-AW4SimulationControlMode@@XZ.c)
 */

void __fastcall wistd::__function::__func__lambda_890942bf62097d6c778291458fa4014d__void___cdecl_enum_wil::RegistryChangeKind__::operator()(
        __int64 a1)
{
  int ControlMode; // eax
  void *v3; // rdx
  wil::details **v4; // rcx

  ControlMode = PerceptionSimulationSettings::GetControlMode();
  v4 = *(wil::details ***)(a1 + 8);
  if ( !ControlMode )
    ++v4;
  wil::details::SetEvent(*v4, v3);
}
