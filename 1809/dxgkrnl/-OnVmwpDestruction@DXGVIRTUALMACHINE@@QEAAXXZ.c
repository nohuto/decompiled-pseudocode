/*
 * XREFs of ?OnVmwpDestruction@DXGVIRTUALMACHINE@@QEAAXXZ @ 0x1C003DC64
 * Callers:
 *     ?DestroyDxgProcess@DXGPROCESS@@SAXPEAV1@@Z @ 0x1C00E9048 (-DestroyDxgProcess@DXGPROCESS@@SAXPEAV1@@Z.c)
 * Callees:
 *     ?DestroyVirtualMachine@DXGVIRTUALMACHINE@@QEAAXXZ @ 0x1C0228D38 (-DestroyVirtualMachine@DXGVIRTUALMACHINE@@QEAAXXZ.c)
 */

void __fastcall DXGVIRTUALMACHINE::OnVmwpDestruction(DXGVIRTUALMACHINE *this)
{
  void *v2; // rcx
  void *v3; // rcx

  v2 = (void *)*((_QWORD *)this + 23);
  if ( v2 )
  {
    ObfDereferenceObject(v2);
    *((_QWORD *)this + 23) = 0LL;
  }
  v3 = (void *)*((_QWORD *)this + 24);
  if ( v3 )
  {
    ObfDereferenceObject(v3);
    *((_QWORD *)this + 24) = 0LL;
  }
  DXGVIRTUALMACHINE::DestroyVirtualMachine(this);
}
