/*
 * XREFs of ?EnsureKMDpiMetricsCacheNode@@YAPEAUtagDpiKMMetricsCacheNode@@H@Z @ 0x1C01CC6B0
 * Callers:
 *     GetDPIMETRICSForDpiUnsafe @ 0x1C0021FA8 (GetDPIMETRICSForDpiUnsafe.c)
 * Callees:
 *     <none>
 */

// write access to const memory has been detected, the output may be wrong!
struct tagDpiKMMetricsCacheNode *__fastcall EnsureKMDpiMetricsCacheNode(int a1)
{
  __int16 v1; // bx
  unsigned __int16 *v2; // r8
  _DWORD *v3; // r9
  __int64 v4; // rax

  v1 = a1;
  v2 = (unsigned __int16 *)gpDpiKernelModeMetricsMRUNode;
  if ( !gpDpiKernelModeMetricsMRUNode || (unsigned __int16)*gpDpiKernelModeMetricsMRUNode != a1 )
  {
    v2 = (unsigned __int16 *)gpDpiKernelModeMetricsCache;
    if ( !gpDpiKernelModeMetricsCache )
      goto LABEL_7;
    do
    {
      if ( *v2 == a1 )
        break;
      v2 = (unsigned __int16 *)*((_QWORD *)v2 + 1);
    }
    while ( v2 );
  }
  if ( v2 )
  {
LABEL_14:
    gpDpiKernelModeMetricsMRUNode = v2;
    return (struct tagDpiKMMetricsCacheNode *)v2;
  }
LABEL_7:
  v3 = &DesktopScaleFactorsArray;
  while ( (96 * *v3 + 50) / 0x64u != a1 )
  {
    if ( (__int64)++v3 >= (__int64)"win32kfull.sys" )
      goto LABEL_13;
  }
  v4 = Win32AllocPoolZInit(88LL, 1768973397LL);
  v2 = (unsigned __int16 *)v4;
  if ( !v4 )
    return (struct tagDpiKMMetricsCacheNode *)v2;
  *(_WORD *)v4 = v1;
  *(_WORD *)(v4 + 2) = 1;
  *(_QWORD *)(v4 + 8) = gpDpiKernelModeMetricsCache;
  gpDpiKernelModeMetricsCache = v4;
LABEL_13:
  if ( v2 )
    goto LABEL_14;
  return (struct tagDpiKMMetricsCacheNode *)v2;
}
