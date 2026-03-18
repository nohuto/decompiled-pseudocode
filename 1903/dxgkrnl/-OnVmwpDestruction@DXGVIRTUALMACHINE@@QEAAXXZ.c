/*
 * XREFs of ?OnVmwpDestruction@DXGVIRTUALMACHINE@@QEAAXXZ @ 0x1C004461C
 * Callers:
 *     ?DestroyDxgProcess@DXGPROCESS@@SAXPEAV1@@Z @ 0x1C00F5920 (-DestroyDxgProcess@DXGPROCESS@@SAXPEAV1@@Z.c)
 * Callees:
 *     ?DestroyVirtualMachine@DXGVIRTUALMACHINE@@QEAAXXZ @ 0x1C025D6D8 (-DestroyVirtualMachine@DXGVIRTUALMACHINE@@QEAAXXZ.c)
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
