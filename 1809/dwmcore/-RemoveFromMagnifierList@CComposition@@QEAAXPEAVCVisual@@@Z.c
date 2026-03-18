/*
 * XREFs of ?RemoveFromMagnifierList@CComposition@@QEAAXPEAVCVisual@@@Z @ 0x18014BF64
 * Callers:
 *     ?Partition_SetMagnifier@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_PARTITION_SETMAGNIFIER@@@Z @ 0x18014BA00 (-Partition_SetMagnifier@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_P.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?FindMagnifier@CComposition@@QEAAIPEAVCVisual@@@Z @ 0x18014B3D0 (-FindMagnifier@CComposition@@QEAAIPEAVCVisual@@@Z.c)
 *     ?RemoveAtOrderNotPreserved@?$DynArray@PEAV?$CWeakReference@VCVisual@@@@$0A@@@QEAAJI@Z @ 0x18014BE44 (-RemoveAtOrderNotPreserved@-$DynArray@PEAV-$CWeakReference@VCVisual@@@@$0A@@@QEAAJI@Z.c)
 */

void __fastcall CComposition::RemoveFromMagnifierList(CComposition *this, struct CVisual *a2)
{
  unsigned int Magnifier; // eax
  __int64 v3; // rcx
  unsigned int v4; // edi
  __int64 v5; // rbx
  __int64 v6; // rcx

  Magnifier = CComposition::FindMagnifier(this, a2);
  v4 = Magnifier;
  if ( Magnifier != *(_DWORD *)(v3 + 952) )
  {
    v5 = v3 + 928;
    v6 = *(_QWORD *)(*(_QWORD *)(v3 + 928) + 8LL * Magnifier);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
    DynArray<CWeakReference<CVisual> *,0>::RemoveAtOrderNotPreserved(v5, v4);
  }
}
