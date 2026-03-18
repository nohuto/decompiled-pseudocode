/*
 * XREFs of EngQueryW32kCddInterface @ 0x1C006C5B0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGraphicsDeviceFromDevObjHandle@@YAPEAUtagGRAPHICS_DEVICE@@QEAX@Z @ 0x1C006C6F0 (-GetGraphicsDeviceFromDevObjHandle@@YAPEAUtagGRAPHICS_DEVICE@@QEAX@Z.c)
 */

__int64 __fastcall EngQueryW32kCddInterface(void *a1, __int64 a2, _DWORD *a3, __int64 a4, _DWORD *a5, _QWORD *a6)
{
  struct tagGRAPHICS_DEVICE *GraphicsDeviceFromDevObjHandle; // rax
  _QWORD *v7; // r8
  _QWORD *v8; // r9
  _QWORD *v9; // r10
  unsigned int v10; // edx
  struct tagGRAPHICS_DEVICE *v11; // rcx
  __int64 v12; // rax
  __int64 v14; // rax

  if ( a3[1] != 3 )
    return 3221225485LL;
  if ( *a3 != 144 )
    return 3221225485LL;
  GraphicsDeviceFromDevObjHandle = GetGraphicsDeviceFromDevObjHandle(a1);
  v10 = 0;
  v11 = GraphicsDeviceFromDevObjHandle;
  if ( !GraphicsDeviceFromDevObjHandle )
    return 3221225485LL;
  v7[1] = W32kCddGetWin32kCommand;
  v7[2] = W32kCddClipRegionApiExt;
  v7[3] = W32kCddIncPresentUniq;
  v7[4] = W32kCddInitPdev;
  v7[5] = W32kCddIsNullBrushApiExt;
  v7[6] = W32kCddDisableGdiHwAccelerationApiExt;
  v7[7] = W32kCddLineToApiExt;
  v7[8] = W32kCddStrokePathApiExt;
  v7[9] = W32kGenerateMoveDataApiExt;
  v7[10] = W32kAcquireDynamicModeChangeLockShared;
  v7[11] = W32kReleaseDynamicModeChangeLockShared;
  if ( (*((_DWORD *)GraphicsDeviceFromDevObjHandle + 40) & 0x4000000) != 0 )
  {
    v12 = *((_QWORD *)GraphicsDeviceFromDevObjHandle + 35);
    if ( gbDisableCddRemoteSessionFiltering || v12 )
      goto LABEL_6;
    return 3221225485LL;
  }
  v12 = *((_QWORD *)GraphicsDeviceFromDevObjHandle + 30);
LABEL_6:
  *v8 = v12;
  *a5 = *((_DWORD *)v11 + 64);
  *a6 = gpepCSRSS;
  if ( v9 )
  {
    v14 = v7[12];
    if ( v14 )
    {
      v9[330] = v14;
      v9[331] = v7[14];
      v9[332] = v7[17];
      v9[333] = v7[15];
      v9[334] = v7[16];
    }
    else
    {
      return (unsigned int)-1073741811;
    }
  }
  return v10;
}
