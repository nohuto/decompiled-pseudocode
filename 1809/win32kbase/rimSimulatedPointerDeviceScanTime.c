/*
 * XREFs of rimSimulatedPointerDeviceScanTime @ 0x1C012C358
 * Callers:
 *     rimUpdatePointerDeviceFrameScanTime @ 0x1C012C434 (rimUpdatePointerDeviceFrameScanTime.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall rimSimulatedPointerDeviceScanTime(__int64 a1, __int64 a2, __int64 *a3, int *a4)
{
  __int64 v4; // r8
  int v5; // ecx
  __int64 result; // rax

  ++*(_DWORD *)(a2 + 800);
  v4 = *a3;
  if ( *(_DWORD *)(a2 + 800) == 1 )
  {
    v5 = *a4;
    *(_DWORD *)(a2 + 776) = *a4;
    *(_QWORD *)(a2 + 816) = v4;
  }
  else
  {
    v5 = (unsigned __int64)(1000 * (v4 - *(_QWORD *)(a2 + 816))) / *(_QWORD *)(a1 + 520) + *(_DWORD *)(a2 + 776);
    *a4 = v5;
  }
  result = *(unsigned int *)(a2 + 780);
  *(_DWORD *)(a2 + 784) = result;
  *(_DWORD *)(a2 + 780) = v5;
  *(_QWORD *)(a2 + 808) = v4;
  return result;
}
