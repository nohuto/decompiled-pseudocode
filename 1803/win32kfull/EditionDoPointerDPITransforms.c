/*
 * XREFs of EditionDoPointerDPITransforms @ 0x1C01BA4A0
 * Callers:
 *     <none>
 * Callees:
 *     GetDPITransformationMonitor @ 0x1C01AF3F0 (GetDPITransformationMonitor.c)
 */

__int64 __fastcall EditionDoPointerDPITransforms(__int64 a1, __int64 *a2, __int64 a3)
{
  __int64 v5; // rdx
  __int64 result; // rax
  __int64 DPITransformationMonitor; // [rsp+30h] [rbp+8h] BYREF

  v5 = *(_QWORD *)(a1 + 72);
  result = *(_QWORD *)(v5 + 40);
  if ( (*(_DWORD *)(result + 288) & 0xF) != 2 )
  {
    DPITransformationMonitor = GetDPITransformationMonitor(*a2, v5);
    PhysicalToLogicalDPIPoint(a2, a2, 0LL, &DPITransformationMonitor);
    return PhysicalToLogicalDPIPoint(a3, a3, 0LL, &DPITransformationMonitor);
  }
  return result;
}
