/*
 * XREFs of IovUtilIsWdmStack @ 0x140974D64
 * Callers:
 *     VfPnpVerifyIrpStackDownward @ 0x14097FEC0 (VfPnpVerifyIrpStackDownward.c)
 *     VfPnpVerifyIrpStackUpward @ 0x140980050 (VfPnpVerifyIrpStackUpward.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14003F860 (ObfDereferenceObjectWithTag.c)
 *     PpvUtilIsPdo @ 0x140963D18 (PpvUtilIsPdo.c)
 *     IovUtilGetBottomDeviceObjectWithTag @ 0x140974ABC (IovUtilGetBottomDeviceObjectWithTag.c)
 */

_BOOL8 __fastcall IovUtilIsWdmStack(_QWORD *a1)
{
  PVOID BottomDeviceObjectWithTag; // rax
  BOOL IsPdo; // ebx
  PVOID v3; // r8

  BottomDeviceObjectWithTag = IovUtilGetBottomDeviceObjectWithTag(a1);
  IsPdo = PpvUtilIsPdo((__int64)BottomDeviceObjectWithTag);
  ObfDereferenceObjectWithTag(v3, 0x49667256u);
  return IsPdo;
}
