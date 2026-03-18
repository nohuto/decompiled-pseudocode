/*
 * XREFs of DwmAsyncChildStyleChange @ 0x1C00C3FCC
 * Callers:
 *     ?xxxRemoveDeleteMenuHelper@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@IKH@Z @ 0x1C000FD7C (-xxxRemoveDeleteMenuHelper@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@IKH@Z.c)
 *     ?xxxRedrawForSetLPITEMInfo@@YAXAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z @ 0x1C00217EC (-xxxRedrawForSetLPITEMInfo@@YAXAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z.c)
 *     xxxDispatchMessage @ 0x1C0023E5C (xxxDispatchMessage.c)
 *     xxxSimpleDoSyncPaint @ 0x1C0026490 (xxxSimpleDoSyncPaint.c)
 *     xxxInternalDoSyncPaint @ 0x1C0029330 (xxxInternalDoSyncPaint.c)
 *     InternalInvalidate3 @ 0x1C002C088 (InternalInvalidate3.c)
 *     xxxCreateWindowEx @ 0x1C0030FEC (xxxCreateWindowEx.c)
 *     ClearHungFlag @ 0x1C0037FF8 (ClearHungFlag.c)
 *     xxxDoPaint @ 0x1C00649C0 (xxxDoPaint.c)
 *     ComposeWindowIfNeeded @ 0x1C0075FC4 (ComposeWindowIfNeeded.c)
 *     xxxGetSystemMenu @ 0x1C00C2104 (xxxGetSystemMenu.c)
 *     xxxEnableMenuItem @ 0x1C00C2670 (xxxEnableMenuItem.c)
 *     DecomposeWindowIfNeeded @ 0x1C00C3AB8 (DecomposeWindowIfNeeded.c)
 *     ComposeWindow @ 0x1C00C3B30 (ComposeWindow.c)
 *     UnsetLayeredWindow @ 0x1C00C3C58 (UnsetLayeredWindow.c)
 *     SetOrClrWF @ 0x1C00C3E94 (SetOrClrWF.c)
 *     xxxSetLayeredWindow @ 0x1C00C433C (xxxSetLayeredWindow.c)
 *     xxxSetScrollBar @ 0x1C00D9304 (xxxSetScrollBar.c)
 *     xxxSetClassData @ 0x1C010B0CC (xxxSetClassData.c)
 * Callees:
 *     memset @ 0x1C013D6C0 (memset.c)
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
