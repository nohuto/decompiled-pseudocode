/*
 * XREFs of EngQueryW32kCddInterface @ 0x1C008C130
 * Callers:
 *     <none>
 * Callees:
 *     UserIsWddmConnectedSession @ 0x1C0016E18 (UserIsWddmConnectedSession.c)
 *     ?IsCddCddRemoteSessionFilteringAllowed@@YAHXZ @ 0x1C005465C (-IsCddCddRemoteSessionFilteringAllowed@@YAHXZ.c)
 *     ?GetGraphicsDeviceFromDevObjHandle@@YAPEAUtagGRAPHICS_DEVICE@@QEAX@Z @ 0x1C008C28C (-GetGraphicsDeviceFromDevObjHandle@@YAPEAUtagGRAPHICS_DEVICE@@QEAX@Z.c)
 */

__int64 __fastcall EngQueryW32kCddInterface(void *a1, _QWORD *a2, _DWORD *a3, __int64 a4, _DWORD *a5, _QWORD *a6)
{
  struct tagGRAPHICS_DEVICE *GraphicsDeviceFromDevObjHandle; // rbx
  _QWORD *v8; // r8
  _QWORD *v9; // r9
  unsigned int v10; // r10d
  _QWORD *v11; // r11
  __int64 v12; // rax
  __int64 v14; // rax

  if ( a3[1] != 4 )
    return 3221225485LL;
  if ( *a3 != 152 )
    return 3221225485LL;
  GraphicsDeviceFromDevObjHandle = GetGraphicsDeviceFromDevObjHandle(a1);
  if ( !GraphicsDeviceFromDevObjHandle )
    return 3221225485LL;
  v8[1] = W32kCddGetWin32kCommand;
  v8[2] = W32kCddClipRegionApiExt;
  v8[3] = W32kCddIncPresentUniq;
  v8[4] = W32kCddInitPdev;
  v8[5] = W32kCddIsNullBrushApiExt;
  v8[6] = W32kCddDisableGdiHwAccelerationApiExt;
  v8[7] = W32kCddLineToApiExt;
  v8[8] = W32kCddStrokePathApiExt;
  v8[9] = W32kGenerateMoveDataApiExt;
  v8[10] = W32kAcquireDynamicModeChangeLockShared;
  v8[11] = W32kReleaseDynamicModeChangeLockShared;
  v8[12] = DxgkCddEngIsRemoteConnection;
  if ( (unsigned int)UserIsWddmConnectedSession() )
  {
    v12 = *((_QWORD *)GraphicsDeviceFromDevObjHandle + 30);
    goto LABEL_6;
  }
  if ( !IsCddCddRemoteSessionFilteringAllowed()
    || (*((_DWORD *)GraphicsDeviceFromDevObjHandle + 40) & 0x4000000) == 0
    && gbForceCddRemoteSessionBitmapSupport == v10 )
  {
    v12 = *((_QWORD *)GraphicsDeviceFromDevObjHandle + 35);
    goto LABEL_6;
  }
  v12 = *((_QWORD *)GraphicsDeviceFromDevObjHandle + 35);
  if ( !v12 )
    return 3221225485LL;
LABEL_6:
  *v9 = v12;
  *a5 = *((_DWORD *)GraphicsDeviceFromDevObjHandle + 64);
  *a6 = gpepCSRSS;
  if ( a2 )
  {
    v14 = v11[13];
    if ( v14 )
    {
      a2[331] = v14;
      a2[332] = v11[15];
      a2[333] = v11[18];
      a2[334] = v11[16];
      a2[335] = v11[17];
    }
    else
    {
      return (unsigned int)-1073741811;
    }
  }
  return v10;
}
