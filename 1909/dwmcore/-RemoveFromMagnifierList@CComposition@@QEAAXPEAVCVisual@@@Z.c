/*
 * XREFs of ?RemoveFromMagnifierList@CComposition@@QEAAXPEAVCVisual@@@Z @ 0x1801765BC
 * Callers:
 *     ?Partition_SetMagnifier@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMILCMD_PARTITION_SETMAGNIFIER@@@Z @ 0x180176240 (-Partition_SetMagnifier@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMILCM.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ?FindMagnifier@CComposition@@QEAAIPEAVCVisual@@@Z @ 0x180175D80 (-FindMagnifier@CComposition@@QEAAIPEAVCVisual@@@Z.c)
 *     ?RemoveAtOrderNotPreserved@?$DynArray@PEAV?$CWeakReference@VCVisual@@@@$0A@@@QEAAJI@Z @ 0x180176494 (-RemoveAtOrderNotPreserved@-$DynArray@PEAV-$CWeakReference@VCVisual@@@@$0A@@@QEAAJI@Z.c)
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
  if ( Magnifier != *(_DWORD *)(v3 + 968) )
  {
    v5 = v3 + 944;
    v6 = *(_QWORD *)(*(_QWORD *)(v3 + 944) + 8LL * Magnifier);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
    DynArray<CWeakReference<CVisual> *,0>::RemoveAtOrderNotPreserved(v5, v4);
  }
}
