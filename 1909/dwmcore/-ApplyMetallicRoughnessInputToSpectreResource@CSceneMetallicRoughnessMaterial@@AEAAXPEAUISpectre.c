/*
 * XREFs of ?ApplyMetallicRoughnessInputToSpectreResource@CSceneMetallicRoughnessMaterial@@AEAAXPEAUISpectreMaterial@@@Z @ 0x1801F727C
 * Callers:
 *     ?ApplyAllPropertiesToSpectreResource@CSceneMetallicRoughnessMaterial@@MEAAXPEAUISpectreMaterial@@@Z @ 0x1801F7180 (-ApplyAllPropertiesToSpectreResource@CSceneMetallicRoughnessMaterial@@MEAAXPEAUISpectreMaterial@.c)
 *     ?OnChanged@CSceneMetallicRoughnessMaterial@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1801F73C0 (-OnChanged@CSceneMetallicRoughnessMaterial@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?OnMetallicRoughnessInputChanged@CSceneMetallicRoughnessMaterial@@QEAAXXZ @ 0x1801F74D8 (-OnMetallicRoughnessInputChanged@CSceneMetallicRoughnessMaterial@@QEAAXXZ.c)
 * Callees:
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x18016A488 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     ?ApplyInputToSpectreResource@CScenePbrMaterial@@IEAAXPEAUISpectreMaterial@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEAVCSceneSurfaceMaterialInput@@@Z @ 0x1801F76B0 (-ApplyInputToSpectreResource@CScenePbrMaterial@@IEAAXPEAUISpectreMaterial@@V-$basic_string@DU-$c.c)
 */

void __fastcall CSceneMetallicRoughnessMaterial::ApplyMetallicRoughnessInputToSpectreResource(
        CSceneMetallicRoughnessMaterial *this,
        struct ISpectreMaterial *a2)
{
  __int64 v2; // rbx
  _QWORD *v4; // rax
  __int64 v5; // rcx
  _QWORD v6[5]; // [rsp+20h] [rbp-28h] BYREF

  v2 = *((_QWORD *)this + 21);
  v4 = std::string::string(v6, (__int64)"Material/SpecularTexture");
  CScenePbrMaterial::ApplyInputToSpectreResource(v5, a2, v4, v2);
}
