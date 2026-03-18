/*
 * XREFs of ?ApplyBaseColorInputToSpectreResource@CSceneMetallicRoughnessMaterial@@AEAAXPEAUISpectreMaterial@@@Z @ 0x1801F8928
 * Callers:
 *     ?ApplyAllPropertiesToSpectreResource@CSceneMetallicRoughnessMaterial@@MEAAXPEAUISpectreMaterial@@@Z @ 0x1801F8870 (-ApplyAllPropertiesToSpectreResource@CSceneMetallicRoughnessMaterial@@MEAAXPEAUISpectreMaterial@.c)
 *     ?OnBaseColorInputChanged@CSceneMetallicRoughnessMaterial@@QEAAXXZ @ 0x1801F8A30 (-OnBaseColorInputChanged@CSceneMetallicRoughnessMaterial@@QEAAXXZ.c)
 *     ?OnChanged@CSceneMetallicRoughnessMaterial@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1801F8AB0 (-OnChanged@CSceneMetallicRoughnessMaterial@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 * Callees:
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x18016BB78 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     ?ApplyInputToSpectreResource@CScenePbrMaterial@@IEAAXPEAUISpectreMaterial@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEAVCSceneSurfaceMaterialInput@@@Z @ 0x1801F8DA0 (-ApplyInputToSpectreResource@CScenePbrMaterial@@IEAAXPEAUISpectreMaterial@@V-$basic_string@DU-$c.c)
 */

void __fastcall CSceneMetallicRoughnessMaterial::ApplyBaseColorInputToSpectreResource(
        CSceneMetallicRoughnessMaterial *this,
        struct ISpectreMaterial *a2)
{
  __int64 v2; // rbx
  _QWORD *v4; // rax
  __int64 v5; // rcx
  _QWORD v6[5]; // [rsp+20h] [rbp-28h] BYREF

  v2 = *((_QWORD *)this + 20);
  v4 = std::string::string(v6, (__int64)"Material/DiffuseTexture");
  CScenePbrMaterial::ApplyInputToSpectreResource(v5, a2, v4, v2);
}
