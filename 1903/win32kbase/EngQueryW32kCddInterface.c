/*
 * XREFs of EngQueryW32kCddInterface @ 0x1C009F1D0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsCddCddRemoteSessionFilteringAllowed@@YAHXZ @ 0x1C004934C (-IsCddCddRemoteSessionFilteringAllowed@@YAHXZ.c)
 *     UserIsWddmConnectedSession @ 0x1C004FD20 (UserIsWddmConnectedSession.c)
 *     ?GetGraphicsDeviceFromDevObjHandle@@YAPEAUtagGRAPHICS_DEVICE@@QEAX@Z @ 0x1C009F34C (-GetGraphicsDeviceFromDevObjHandle@@YAPEAUtagGRAPHICS_DEVICE@@QEAX@Z.c)
 */

__int64 __fastcall EngQueryW32kCddInterface(void *a1, _QWORD *a2, __int64 a3, _QWORD *a4, _DWORD *a5, _QWORD *a6)
{
  unsigned int v9; // ebx
  struct tagGRAPHICS_DEVICE *GraphicsDeviceFromDevObjHandle; // rsi
  _QWORD *v11; // r8
  __int64 v12; // rax
  __int64 v14; // rax

  if ( *(_DWORD *)(a3 + 4) != 4 )
    return 3221225485LL;
  if ( *(_DWORD *)a3 != 152 )
    return 3221225485LL;
  v9 = 0;
  GraphicsDeviceFromDevObjHandle = GetGraphicsDeviceFromDevObjHandle(a1);
  if ( !GraphicsDeviceFromDevObjHandle )
    return 3221225485LL;
  v11[1] = W32kCddGetWin32kCommand;
  v11[2] = W32kCddClipRegionApiExt;
  v11[3] = W32kCddIncPresentUniq;
  v11[4] = W32kCddInitPdev;
  v11[5] = W32kCddIsNullBrushApiExt;
  v11[6] = W32kCddDisableGdiHwAccelerationApiExt;
  v11[7] = W32kCddLineToApiExt;
  v11[8] = W32kCddStrokePathApiExt;
  v11[9] = W32kGenerateMoveDataApiExt;
  v11[10] = W32kAcquireDynamicModeChangeLockShared;
  v11[11] = W32kReleaseDynamicModeChangeLockShared;
  v11[12] = DxgkCddEngIsRemoteConnection;
  if ( (unsigned int)UserIsWddmConnectedSession() )
  {
    v12 = *((_QWORD *)GraphicsDeviceFromDevObjHandle + 30);
    goto LABEL_6;
  }
  if ( !IsCddCddRemoteSessionFilteringAllowed()
    || (*((_DWORD *)GraphicsDeviceFromDevObjHandle + 40) & 0x4000000) == 0 && !gbForceCddRemoteSessionBitmapSupport )
  {
    v12 = *((_QWORD *)GraphicsDeviceFromDevObjHandle + 35);
    goto LABEL_6;
  }
  v12 = *((_QWORD *)GraphicsDeviceFromDevObjHandle + 35);
  if ( !v12 )
    return 3221225485LL;
LABEL_6:
  *a4 = v12;
  *a5 = *((_DWORD *)GraphicsDeviceFromDevObjHandle + 64);
  *a6 = gpepCSRSS;
  if ( a2 )
  {
    v14 = *(_QWORD *)(a3 + 104);
    if ( v14 )
    {
      a2[331] = v14;
      a2[332] = *(_QWORD *)(a3 + 120);
      a2[333] = *(_QWORD *)(a3 + 144);
      a2[334] = *(_QWORD *)(a3 + 128);
      a2[335] = *(_QWORD *)(a3 + 136);
    }
    else
    {
      return (unsigned int)-1073741811;
    }
  }
  return v9;
}
