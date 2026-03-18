/*
 * XREFs of ?EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z @ 0x1C00AA88C
 * Callers:
 *     ?HmgAllocateSecureUserMemory@@YAPEAXPEAPEAX@Z @ 0x1C006B224 (-HmgAllocateSecureUserMemory@@YAPEAXPEAPEAX@Z.c)
 *     EngAllocUserMemEx @ 0x1C008DD74 (EngAllocUserMemEx.c)
 *     ?bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x1C009C490 (-bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 *     EngFreeUserMem @ 0x1C009D8E0 (EngFreeUserMem.c)
 *     ?HmgFreeAllocateSecureUserMemory@@YAXPEAX0@Z @ 0x1C00F8D70 (-HmgFreeAllocateSecureUserMemory@@YAXPEAX0@Z.c)
 *     EngSecureMem @ 0x1C0106BE0 (EngSecureMem.c)
 *     GdiProcessCallout @ 0x1C0108800 (GdiProcessCallout.c)
 * Callees:
 *     ?EvaluateFeature@@YAXPEBUreg_FeatureDescriptor@@@Z @ 0x1C00AA8B4 (-EvaluateFeature@@YAXPEBUreg_FeatureDescriptor@@@Z.c)
 */

_BOOL8 __fastcall EvaluateCurrentState(const struct reg_FeatureDescriptor *a1)
{
  EvaluateFeature(a1);
  return *(_DWORD *)g_Feature_2182559032_59890558_FeatureDescriptorDetails != 1;
}
