/*
 * XREFs of IoClearIrpExtraCreateParameter @ 0x1402983E0
 * Callers:
 *     IopSymlinkAllocateAndAddECP @ 0x1406CEDB0 (IopSymlinkAllocateAndAddECP.c)
 * Callees:
 *     <none>
 */

void __stdcall IoClearIrpExtraCreateParameter(PIRP Irp)
{
  if ( (Irp->Flags & 0x80u) != 0 )
    Irp->UserBuffer = 0LL;
}
