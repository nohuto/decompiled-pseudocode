/*
 * XREFs of ?ApplyAllPropertiesToSpectreResource@CSceneMetallicRoughnessMaterial@@MEAAXPEAUISpectreMaterial@@@Z @ 0x1801F7180
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ?ApplyBaseColorFactorToSpectreResource@CSceneMetallicRoughnessMaterial@@AEAAXPEAUISpectreMaterial@@@Z @ 0x1801F71E8 (-ApplyBaseColorFactorToSpectreResource@CSceneMetallicRoughnessMaterial@@AEAAXPEAUISpectreMateria.c)
 *     ?ApplyBaseColorInputToSpectreResource@CSceneMetallicRoughnessMaterial@@AEAAXPEAUISpectreMaterial@@@Z @ 0x1801F7238 (-ApplyBaseColorInputToSpectreResource@CSceneMetallicRoughnessMaterial@@AEAAXPEAUISpectreMaterial.c)
 *     ?ApplyAllPropertiesToSpectreResource@CScenePbrMaterial@@MEAAXPEAUISpectreMaterial@@@Z @ 0x1801F7560 (-ApplyAllPropertiesToSpectreResource@CScenePbrMaterial@@MEAAXPEAUISpectreMaterial@@@Z.c)
 */

void __fastcall CSceneMetallicRoughnessMaterial::ApplyAllPropertiesToSpectreResource(
        CSceneMetallicRoughnessMaterial *this,
        struct ISpectreMaterial *a2)
{
  CScenePbrMaterial::ApplyAllPropertiesToSpectreResource(this, a2);
  CSceneMetallicRoughnessMaterial::ApplyBaseColorFactorToSpectreResource(this, a2);
  CSceneMetallicRoughnessMaterial::ApplyBaseColorInputToSpectreResource(this, a2);
  (*(void (__fastcall **)(struct ISpectreMaterial *))(*(_QWORD *)a2 + 64LL))(a2);
  CSceneMetallicRoughnessMaterial::ApplyMetallicRoughnessInputToSpectreResource(this, a2);
}
