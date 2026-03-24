/*
 * XREFs of IoClearIrpExtraCreateParameter @ 0x140282FD0
 * Callers:
 *     IopSymlinkAllocateAndAddECP @ 0x1406AC144 (IopSymlinkAllocateAndAddECP.c)
 * Callees:
 *     <none>
 */

void __stdcall IoClearIrpExtraCreateParameter(PIRP Irp)
{
  if ( (Irp->Flags & 0x80u) != 0 )
    Irp->UserBuffer = 0LL;
}
