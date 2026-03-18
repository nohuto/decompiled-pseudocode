/*
 * XREFs of _GetPointerDeviceType @ 0x1C01F0298
 * Callers:
 *     ?ContactVisualizationWorker@@YAHKPEAX_KHK@Z @ 0x1C01DCF2C (-ContactVisualizationWorker@@YAHKPEAX_KHK@Z.c)
 *     ?ProcessInertia@Edgy@@YAXPEBUINERTIA_INFO_INTERNAL@@@Z @ 0x1C01F6B10 (-ProcessInertia@Edgy@@YAXPEBUINERTIA_INFO_INTERNAL@@@Z.c)
 *     ?_GetArcData@Edgy@@YA?AUtagARC_DATA@1@AEAUtagEDGY_DATA@@QEAX@Z @ 0x1C01F6E8C (-_GetArcData@Edgy@@YA-AUtagARC_DATA@1@AEAUtagEDGY_DATA@@QEAX@Z.c)
 *     ?_StoreLastUpDataAndPost@Edgy@@YAXAEAUtagEDGY_DATA@@QEAX@Z @ 0x1C01F7D1C (-_StoreLastUpDataAndPost@Edgy@@YAXAEAUtagEDGY_DATA@@QEAX@Z.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C0072018 (HMValidateHandleNoSecure.c)
 *     PHIDTtoPT @ 0x1C01EF688 (PHIDTtoPT.c)
 */

__int64 __fastcall GetPointerDeviceType(unsigned __int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  unsigned int v4; // edx

  LOBYTE(a2) = 19;
  v3 = HMValidateHandleNoSecure(a1, a2, a3);
  v4 = -1;
  if ( v3 && (*(_DWORD *)(v3 + 200) & 0x80u) != 0 )
    return (unsigned int)PHIDTtoPT(*(_QWORD *)(v3 + 480));
  return v4;
}
