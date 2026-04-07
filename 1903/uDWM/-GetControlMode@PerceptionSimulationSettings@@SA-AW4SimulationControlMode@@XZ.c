/*
 * XREFs of ?GetControlMode@PerceptionSimulationSettings@@SA?AW4SimulationControlMode@@XZ @ 0x180041DB8
 * Callers:
 *     ?DriverDetected@HolographicDriverDetectedWatcher@Mirage@Windows@@SA_NXZ @ 0x180041B1C (-DriverDetected@HolographicDriverDetectedWatcher@Mirage@Windows@@SA_NXZ.c)
 *     wistd::__function::__func__lambda_890942bf62097d6c778291458fa4014d__void___cdecl(enum_wil::RegistryChangeKind)_::operator() @ 0x180079970 (wistd--__function--__func__lambda_890942bf62097d6c778291458fa4014d__void___cdecl(en_ea_180079970.c)
 * Callees:
 *     <none>
 */

__int64 PerceptionSimulationSettings::GetControlMode()
{
  unsigned int v0; // ebx
  unsigned int v2; // [rsp+50h] [rbp+8h] BYREF
  DWORD v3; // [rsp+58h] [rbp+10h] BYREF

  v3 = 4;
  v0 = 0;
  v2 = 0;
  if ( !RegGetValueW(
          HKEY_LOCAL_MACHINE,
          L"Software\\Microsoft\\Windows\\CurrentVersion\\PerceptionSimulationExtensions",
          L"Mode",
          0x10010u,
          0LL,
          &v2,
          &v3) )
    return v2;
  return v0;
}
