/*
 * XREFs of ?DrvGetRemoteDeviceCount@@YAIXZ @ 0x1C01585FC
 * Callers:
 *     xxxRemoteReconnect @ 0x1C01577E0 (xxxRemoteReconnect.c)
 *     DxgkEngGetRemoteDeviceCount @ 0x1C025B700 (DxgkEngGetRemoteDeviceCount.c)
 * Callees:
 *     <none>
 */

__int64 DrvGetRemoteDeviceCount(void)
{
  unsigned int v0; // edx
  struct tagGRAPHICS_DEVICE *v1; // r8
  bool v2; // zf
  unsigned int v3; // ecx

  v0 = 0;
  v1 = gpGraphicsDeviceList;
  while ( v1 )
  {
    v2 = (*((_DWORD *)v1 + 40) & 0x4000000) == 0;
    v3 = v0 + 1;
    v1 = (struct tagGRAPHICS_DEVICE *)*((_QWORD *)v1 + 16);
    if ( v2 )
      v3 = v0;
    v0 = v3;
  }
  return v0;
}
