/*
 * XREFs of ?RemoveFromDDAExcludeVisualList@CComposition@@QEAAXPEAVCVisual@@@Z @ 0x18017656C
 * Callers:
 *     ?Partition_SetExcludeFromDDA@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMILCMD_PARTITION_SETEXCLUDEFROMDDA@@@Z @ 0x1800DDFD4 (-Partition_SetExcludeFromDDA@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtag.c)
 * Callees:
 *     ?FindDDAExcludeVisual@CComposition@@QEAAIPEAVCVisual@@@Z @ 0x1800DE0D0 (-FindDDAExcludeVisual@CComposition@@QEAAIPEAVCVisual@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ?RemoveAtOrderNotPreserved@?$DynArray@PEAV?$CWeakReference@VCVisual@@@@$0A@@@QEAAJI@Z @ 0x180176494 (-RemoveAtOrderNotPreserved@-$DynArray@PEAV-$CWeakReference@VCVisual@@@@$0A@@@QEAAJI@Z.c)
 */

void __fastcall CComposition::RemoveFromDDAExcludeVisualList(CComposition *this, struct CVisual *a2)
{
  unsigned int DDAExcludeVisual; // eax
  __int64 v3; // rcx
  unsigned int v4; // edi
  __int64 v5; // rbx
  __int64 v6; // rcx

  DDAExcludeVisual = CComposition::FindDDAExcludeVisual(this, a2);
  v4 = DDAExcludeVisual;
  if ( DDAExcludeVisual != *(_DWORD *)(v3 + 1000) )
  {
    v5 = v3 + 976;
    v6 = *(_QWORD *)(*(_QWORD *)(v3 + 976) + 8LL * DDAExcludeVisual);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
    DynArray<CWeakReference<CVisual> *,0>::RemoveAtOrderNotPreserved(v5, v4);
  }
}
