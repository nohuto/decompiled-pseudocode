/*
 * XREFs of rimSimulatedPointerDeviceScanTime @ 0x1C0159280
 * Callers:
 *     rimUpdatePointerDeviceFrameScanTime @ 0x1C0159374 (rimUpdatePointerDeviceFrameScanTime.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall rimSimulatedPointerDeviceScanTime(__int64 a1, __int64 a2, __int64 *a3, int *a4)
{
  __int64 v4; // r8
  int v5; // ecx
  __int64 result; // rax

  ++*(_DWORD *)(a2 + 808);
  v4 = *a3;
  if ( *(_DWORD *)(a2 + 808) == 1 )
  {
    v5 = *a4;
    *(_DWORD *)(a2 + 784) = *a4;
    *(_QWORD *)(a2 + 824) = v4;
  }
  else
  {
    v5 = (unsigned __int64)(1000 * (v4 - *(_QWORD *)(a2 + 824))) / *(_QWORD *)(a1 + 520) + *(_DWORD *)(a2 + 784);
    *a4 = v5;
  }
  result = *(unsigned int *)(a2 + 788);
  *(_DWORD *)(a2 + 792) = result;
  *(_DWORD *)(a2 + 788) = v5;
  *(_QWORD *)(a2 + 816) = v4;
  return result;
}
