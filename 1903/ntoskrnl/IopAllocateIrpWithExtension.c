/*
 * XREFs of IopAllocateIrpWithExtension @ 0x1400B54F8
 * Callers:
 *     IopAllocateIrpExReturn @ 0x140037180 (IopAllocateIrpExReturn.c)
 *     IoAllocateIrp @ 0x140099A10 (IoAllocateIrp.c)
 *     IoAllocateIrpEx @ 0x1400EB290 (IoAllocateIrpEx.c)
 *     IopMountVolume @ 0x140681CF4 (IopMountVolume.c)
 *     IopInitializeReserveIrps @ 0x140A1D3EC (IopInitializeReserveIrps.c)
 * Callees:
 *     IopAllocateIrpPrivate @ 0x1400371B0 (IopAllocateIrpPrivate.c)
 *     IopInitActivityIdIrp @ 0x1402939B8 (IopInitActivityIdIrp.c)
 */

_QWORD *__fastcall IopAllocateIrpWithExtension(__int64 a1, char a2, char a3)
{
  _QWORD *IrpPrivate; // rax
  _QWORD *v4; // rbx
  __int64 v5; // rcx

  IrpPrivate = IopAllocateIrpPrivate(0LL, a2 + 1, a3);
  v4 = IrpPrivate;
  if ( IrpPrivate )
  {
    IrpPrivate[23] -= 72LL;
    v5 = IrpPrivate[23];
    --*((_BYTE *)IrpPrivate + 67);
    --*((_BYTE *)IrpPrivate + 66);
    IrpPrivate[25] = v5;
    if ( (IopFunctionPointerMask & 4) != 0 && (IopIrpExtensionStatus & 1) != 0 )
      IopInitActivityIdIrp(IrpPrivate);
  }
  return v4;
}
