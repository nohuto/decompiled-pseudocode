/*
 * XREFs of DwmAsyncChildStyleChange @ 0x1C0089A4C
 * Callers:
 *     ComposeWindowIfNeeded @ 0x1C00287CC (ComposeWindowIfNeeded.c)
 *     xxxDispatchMessage @ 0x1C002ADC8 (xxxDispatchMessage.c)
 *     xxxSetScrollBar @ 0x1C002DBFC (xxxSetScrollBar.c)
 *     xxxCalcClientRect @ 0x1C003358C (xxxCalcClientRect.c)
 *     ClearHungFlag @ 0x1C003ABAC (ClearHungFlag.c)
 *     xxxDoPaint @ 0x1C003B610 (xxxDoPaint.c)
 *     xxxInternalDoSyncPaint @ 0x1C0050C60 (xxxInternalDoSyncPaint.c)
 *     xxxCreateWindowEx @ 0x1C0061510 (xxxCreateWindowEx.c)
 *     InternalInvalidate3 @ 0x1C0067108 (InternalInvalidate3.c)
 *     DecomposeWindowIfNeeded @ 0x1C0089628 (DecomposeWindowIfNeeded.c)
 *     UnsetLayeredWindow @ 0x1C00896A4 (UnsetLayeredWindow.c)
 *     SetOrClrWF @ 0x1C008990C (SetOrClrWF.c)
 *     ComposeWindow @ 0x1C0089E28 (ComposeWindow.c)
 *     xxxSetLayeredWindow @ 0x1C008D304 (xxxSetLayeredWindow.c)
 *     xxxGetSystemMenu @ 0x1C00FB780 (xxxGetSystemMenu.c)
 *     xxxSetClassData @ 0x1C010F818 (xxxSetClassData.c)
 *     xxxEnableMenuItem @ 0x1C012C8A0 (xxxEnableMenuItem.c)
 *     ?xxxRemoveDeleteMenuHelper@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@IKH@Z @ 0x1C012CAD0 (-xxxRemoveDeleteMenuHelper@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@IKH@Z.c)
 *     ?xxxRedrawForSetLPITEMInfo@@YAXAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z @ 0x1C012CEC0 (-xxxRedrawForSetLPITEMInfo@@YAXAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z.c)
 * Callees:
 *     memset @ 0x1C0168440 (memset.c)
 */

__int64 __fastcall DwmAsyncChildStyleChange(PVOID Object, __int64 a2, int a3, int a4)
{
  unsigned int v8; // ebx
  _DWORD v10[16]; // [rsp+20h] [rbp-48h] BYREF

  v8 = -1073741823;
  _InterlockedIncrement64(&g_cDWMWindowUniqueness);
  if ( Object )
  {
    memset(v10, 0, 0x3CuLL);
    v10[0] = 3932180;
    LOWORD(v10[1]) = 0x8000;
    v10[10] = 1073741846;
    *(_QWORD *)&v10[11] = a2;
    v10[13] = a3;
    v10[14] = a4;
    v8 = LpcRequestPort(Object, v10);
    ObfDereferenceObject(Object);
  }
  return v8;
}
