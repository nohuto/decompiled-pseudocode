/*
 * XREFs of ??0DXGSHAREDPOWERREGISTRATIONOBJECT@@IEAA@PEAVDXGGLOBAL@@QEAX1P6AXPEAXW4_DEVICE_POWER_STATE@@E2@ZP6AX22@ZP6AX2KIE2@ZPEAV?$DXGNODELIST@VDXGGLOBAL@@VDXGSHAREDPOWERINUSELISTOBJECT@@@@@Z @ 0x1C020D6E4
 * Callers:
 *     ?RegisterSharedPowerComponent@DXGGLOBAL@@QEAAJPEAXQEAXP6AX0W4_DEVICE_POWER_STATE@@E0@ZP6AX00@ZP6AX0KIE0@ZP6AX00KEIU_GUID@@I@Z@Z @ 0x1C003BAEC (-RegisterSharedPowerComponent@DXGGLOBAL@@QEAAJPEAXQEAXP6AX0W4_DEVICE_POWER_STATE@@E0@ZP6AX00@ZP6.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall DXGSHAREDPOWERREGISTRATIONOBJECT::DXGSHAREDPOWERREGISTRATIONOBJECT(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  _QWORD *result; // rax

  a1[2] = a2;
  *a1 = 0LL;
  a1[1] = 0LL;
  a1[5] = a5;
  a1[6] = a6;
  a1[7] = a7;
  a1[8] = a8;
  result = a1;
  a1[3] = a3;
  a1[4] = a4;
  return result;
}
