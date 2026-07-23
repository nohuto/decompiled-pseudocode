/*
 * XREFs of IopAllocateIrpWithExtension @ 0x14000EB44
 * Callers:
 *     IoAllocateIrp @ 0x14008E400 (IoAllocateIrp.c)
 *     IoAllocateIrpEx @ 0x1400B91B0 (IoAllocateIrpEx.c)
 *     IopAllocateIrpExReturn @ 0x1400B9220 (IopAllocateIrpExReturn.c)
 *     IopMountVolume @ 0x1405A3E64 (IopMountVolume.c)
 *     IopInitializeReserveIrps @ 0x1409DB110 (IopInitializeReserveIrps.c)
 * Callees:
 *     IopAllocateIrpPrivate @ 0x1400B9250 (IopAllocateIrpPrivate.c)
 *     IopInitActivityIdIrp @ 0x14027F1D4 (IopInitActivityIdIrp.c)
 */

__int64 __fastcall IopAllocateIrpWithExtension(__int64 a1, __int64 a2)
{
  __int64 IrpPrivate; // rax
  __int64 v3; // rbx
  __int64 v4; // rcx

  LOBYTE(a2) = a2 + 1;
  IrpPrivate = IopAllocateIrpPrivate(0LL, a2);
  v3 = IrpPrivate;
  if ( IrpPrivate )
  {
    *(_QWORD *)(IrpPrivate + 184) -= 72LL;
    v4 = *(_QWORD *)(IrpPrivate + 184);
    --*(_BYTE *)(IrpPrivate + 67);
    --*(_BYTE *)(IrpPrivate + 66);
    *(_QWORD *)(IrpPrivate + 200) = v4;
    if ( (IopFunctionPointerMask & 4) != 0 && (IopIrpExtensionStatus & 1) != 0 )
      IopInitActivityIdIrp(IrpPrivate);
  }
  return v3;
}
