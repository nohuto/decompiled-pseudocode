/*
 * XREFs of IopAllocateIrpWithExtension @ 0x1400F1600
 * Callers:
 *     IopAllocateIrpExReturn @ 0x140037580 (IopAllocateIrpExReturn.c)
 *     IoAllocateIrpEx @ 0x1400893F0 (IoAllocateIrpEx.c)
 *     IoAllocateIrp @ 0x1400ED860 (IoAllocateIrp.c)
 *     IopMountVolume @ 0x1406A0254 (IopMountVolume.c)
 *     IopInitializeReserveIrps @ 0x140A1D5C8 (IopInitializeReserveIrps.c)
 * Callees:
 *     IopAllocateIrpPrivate @ 0x1400375B0 (IopAllocateIrpPrivate.c)
 *     IopInitActivityIdIrp @ 0x140293718 (IopInitActivityIdIrp.c)
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
