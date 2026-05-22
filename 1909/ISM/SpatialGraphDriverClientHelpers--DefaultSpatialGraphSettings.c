/*
 * XREFs of SpatialGraphDriverClientHelpers::DefaultSpatialGraphSettings @ 0x1801546BC
 * Callers:
 *     ??$MakeAndInitialize@V?$Singleton@VSpatialGraphNodeReferenceFactory@Holographic@Internal@Windows@@V1234@@WRL@Microsoft@@UIInspectable@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIInspectable@@@Z @ 0x18014AE40 (--$MakeAndInitialize@V-$Singleton@VSpatialGraphNodeReferenceFactory@Holographic@Internal@Windows.c)
 *     ?CreateSpatialGraphDriverClient@@YAJPEAUHSTRING__@@PEAPEAUISpatialGraphDriverClient@Holographic@Internal@Windows@@@Z @ 0x180154660 (-CreateSpatialGraphDriverClient@@YAJPEAUHSTRING__@@PEAPEAUISpatialGraphDriverClient@Holographic@.c)
 * Callees:
 *     ?GetDwordWithDefault@RegistryHelpers@@YAIPEAUHKEY__@@PEB_W1I@Z @ 0x18002A59C (-GetDwordWithDefault@RegistryHelpers@@YAIPEAUHKEY__@@PEB_W1I@Z.c)
 */

bool __fastcall SpatialGraphDriverClientHelpers::DefaultSpatialGraphSettings(RegistryHelpers *a1)
{
  return (unsigned int)RegistryHelpers::GetDwordWithDefault(
                         a1,
                         (const WCHAR *)&stru_1801AE530,
                         L"SpatialGraphComputeMissingVelocities",
                         0LL) != 0;
}
