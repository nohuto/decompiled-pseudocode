/*
 * XREFs of PnpRegSzToString @ 0x1406FEAD8
 * Callers:
 *     PiDevCfgBuildIndirectString @ 0x1406FE698 (PiDevCfgBuildIndirectString.c)
 *     PiDevCfgResolveVariableDeviceProperty @ 0x14071E970 (PiDevCfgResolveVariableDeviceProperty.c)
 *     PiFindDevInstMatch @ 0x14073628C (PiFindDevInstMatch.c)
 *     PipApplyFunctionToServiceInstances @ 0x14077D2B4 (PipApplyFunctionToServiceInstances.c)
 *     PipServiceInstanceToDeviceInstance @ 0x140861170 (PipServiceInstanceToDeviceInstance.c)
 *     PiDevCfgMakeServiceBootStart @ 0x1408675A0 (PiDevCfgMakeServiceBootStart.c)
 *     PiDevCfgResolveVariableKeyHandle @ 0x14086A900 (PiDevCfgResolveVariableKeyHandle.c)
 *     PpInitGetGroupOrderIndex @ 0x140A114E0 (PpInitGetGroupOrderIndex.c)
 *     PipGetDriverTagPriority @ 0x140A11644 (PipGetDriverTagPriority.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PnpRegSzToString(_WORD *a1, unsigned int a2, int *a3)
{
  _WORD *v3; // r9
  unsigned __int64 v4; // rdx
  int v5; // r9d

  v3 = a1;
  v4 = (unsigned __int64)&a1[(unsigned __int64)a2 >> 1];
  if ( (unsigned __int64)a1 < v4 )
  {
    do
    {
      if ( !*v3 )
        break;
      ++v3;
    }
    while ( (unsigned __int64)v3 < v4 );
  }
  v5 = (_DWORD)v3 - (_DWORD)a1;
  if ( a3 )
    *a3 = v5;
  return 1LL;
}
