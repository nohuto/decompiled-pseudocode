/*
 * XREFs of ACPIInternalMoveList @ 0x1C0030560
 * Callers:
 *     ACPIInitRemoveDeviceExtension @ 0x1C00101D4 (ACPIInitRemoveDeviceExtension.c)
 *     ACPIBuildDeviceDpc @ 0x1C001C6E0 (ACPIBuildDeviceDpc.c)
 *     ACPITableLoadCallBack @ 0x1C002F450 (ACPITableLoadCallBack.c)
 *     ACPIBuildMissingEjectionRelations @ 0x1C004A010 (ACPIBuildMissingEjectionRelations.c)
 *     ACPIInitDeleteDeviceExtension @ 0x1C00545E8 (ACPIInitDeleteDeviceExtension.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall ACPIInternalMoveList(_QWORD *a1, __int64 a2)
{
  _QWORD *v2; // r9
  _QWORD *v3; // r8
  _QWORD *result; // rax

  v2 = (_QWORD *)*a1;
  if ( (_QWORD *)*a1 != a1 )
  {
    v3 = *(_QWORD **)(a2 + 8);
    result = (_QWORD *)a1[1];
    *result = a2;
    *(_QWORD *)(a2 + 8) = result;
    v2[1] = v3;
    *v3 = v2;
    a1[1] = a1;
    *a1 = a1;
  }
  return result;
}
