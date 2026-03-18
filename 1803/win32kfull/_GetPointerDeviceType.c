/*
 * XREFs of _GetPointerDeviceType @ 0x1C01B8190
 * Callers:
 *     ?ContactVisualizationWorker@@YAHKPEAX_KHK@Z @ 0x1C01A74D4 (-ContactVisualizationWorker@@YAHKPEAX_KHK@Z.c)
 *     ?ProcessEdgyInertia@Edgy@@YAXPEBUINERTIA_INFO_INTERNAL@@@Z @ 0x1C01BDF64 (-ProcessEdgyInertia@Edgy@@YAXPEBUINERTIA_INFO_INTERNAL@@@Z.c)
 *     ?_GetArcData@Edgy@@YA?AUtagARC_DATA@1@AEAUtagEDGY_DATA@@QEAX@Z @ 0x1C01BE2DC (-_GetArcData@Edgy@@YA-AUtagARC_DATA@1@AEAUtagEDGY_DATA@@QEAX@Z.c)
 *     ?_StoreLastUpDataAndPost@Edgy@@YAXAEAUtagEDGY_DATA@@QEAX@Z @ 0x1C01BF134 (-_StoreLastUpDataAndPost@Edgy@@YAXAEAUtagEDGY_DATA@@QEAX@Z.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C00270B8 (HMValidateHandleNoSecure.c)
 *     PHIDTtoPT @ 0x1C00E0CE8 (PHIDTtoPT.c)
 */

__int64 __fastcall GetPointerDeviceType(unsigned __int64 a1, __int64 a2)
{
  __int64 v2; // rax
  unsigned int v3; // edx

  LOBYTE(a2) = 19;
  v2 = HMValidateHandleNoSecure(a1, a2);
  v3 = -1;
  if ( v2 && (*(_DWORD *)(v2 + 200) & 0x80u) != 0 )
    return (unsigned int)PHIDTtoPT(*(_QWORD *)(v2 + 480));
  return v3;
}
