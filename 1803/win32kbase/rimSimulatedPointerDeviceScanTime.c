/*
 * XREFs of rimSimulatedPointerDeviceScanTime @ 0x1C010350C
 * Callers:
 *     rimUpdatePointerDeviceFrameScanTime @ 0x1C01035FC (rimUpdatePointerDeviceFrameScanTime.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall rimSimulatedPointerDeviceScanTime(__int64 a1, __int64 a2, __int64 *a3, int *a4)
{
  __int64 v4; // r8
  int v5; // ecx
  __int64 result; // rax

  ++*(_DWORD *)(a2 + 768);
  v4 = *a3;
  if ( *(_DWORD *)(a2 + 768) == 1 )
  {
    v5 = *a4;
    *(_DWORD *)(a2 + 744) = *a4;
    *(_QWORD *)(a2 + 784) = v4;
  }
  else
  {
    v5 = (unsigned __int64)(1000 * (v4 - *(_QWORD *)(a2 + 784))) / *(_QWORD *)(a1 + 504) + *(_DWORD *)(a2 + 744);
    *a4 = v5;
  }
  result = *(unsigned int *)(a2 + 748);
  *(_DWORD *)(a2 + 752) = result;
  *(_DWORD *)(a2 + 748) = v5;
  *(_QWORD *)(a2 + 776) = v4;
  return result;
}
