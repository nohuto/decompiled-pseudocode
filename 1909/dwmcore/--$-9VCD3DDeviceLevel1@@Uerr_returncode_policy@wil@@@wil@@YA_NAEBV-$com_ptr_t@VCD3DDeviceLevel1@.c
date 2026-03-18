/*
 * XREFs of ??$?9VCD3DDeviceLevel1@@Uerr_returncode_policy@wil@@@wil@@YA_NAEBV?$com_ptr_t@VCD3DDeviceLevel1@@Uerr_returncode_policy@wil@@@0@$$T@Z @ 0x1800EBEAC
 * Callers:
 *     ?CheckAndReportHighResourceUsage@CProcessResourceAttributionReporter@@AEAAXXZ @ 0x1800CBBA8 (-CheckAndReportHighResourceUsage@CProcessResourceAttributionReporter@@AEAAXXZ.c)
 *     ?EnsureSceneCompositor@CSceneResourceManager@@AEAAJXZ @ 0x18017A510 (-EnsureSceneCompositor@CSceneResourceManager@@AEAAJXZ.c)
 *     ?OnSceneLost@CSceneMesh@@EEAAJPEAUISpectreRenderer@@@Z @ 0x1801F54B0 (-OnSceneLost@CSceneMesh@@EEAAJPEAUISpectreRenderer@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall wil::operator!=<CD3DDeviceLevel1,wil::err_returncode_policy>(_QWORD *a1)
{
  return *a1 != 0LL;
}
