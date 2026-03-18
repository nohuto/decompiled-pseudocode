/*
 * XREFs of ?_Tidy@?$deque@VCMegaRect@@V?$allocator@VCMegaRect@@@std@@@std@@IEAAXXZ @ 0x1800B81EC
 * Callers:
 *     ?Render@CDrawListEntryBatch@@UEAAJXZ @ 0x180078FA0 (-Render@CDrawListEntryBatch@@UEAAJXZ.c)
 *     ??_GCDrawListEntryBatch@@EEAAPEAXI@Z @ 0x1800B80B4 (--_GCDrawListEntryBatch@@EEAAPEAXI@Z.c)
 * Callees:
 *     ??R?$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z @ 0x18000FF04 (--R-$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z.c)
 *     ?ReplacePrimitive@CHWDrawListEntry@@QEAA?AV?$unique_ptr@VCDrawListPrimitive@@U?$default_delete@VCDrawListPrimitive@@@std@@@std@@$$QEAV23@AEBVCMILMatrix@@@Z @ 0x180078B10 (-ReplacePrimitive@CHWDrawListEntry@@QEAA-AV-$unique_ptr@VCDrawListPrimitive@@U-$default_delete@V.c)
 *     ??3@YAXPEAX@Z @ 0x1800932DC (--3@YAXPEAX@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x1800B74F4 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ?_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z @ 0x1800C42E8 (-_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x1800CEFE0 (--3@YAXPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

void __fastcall std::deque<CMegaRect>::_Tidy(_QWORD *a1)
{
  __int64 v2; // rcx
  __int64 v3; // rdi
  void *v4; // rcx
  void *v5; // rcx
  unsigned __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rdi
  __int64 (__fastcall ****v9)(_QWORD, __int64); // rsi
  void *v10; // rcx
  void *v11; // rsi
  volatile signed __int32 *v12; // rcx
  unsigned __int64 v14; // [rsp+48h] [rbp+10h] BYREF
  void *v15; // [rsp+50h] [rbp+18h] BYREF
  __int64 (__fastcall ***v16)(_QWORD, __int64); // [rsp+58h] [rbp+20h] BYREF

  while ( 1 )
  {
    v2 = a1[4];
    if ( !v2 )
      break;
    v7 = (a1[2] - 1LL) & (a1[3] - 1LL + v2);
    v8 = *(_QWORD *)(a1[1] + 8 * v7);
    v9 = (__int64 (__fastcall ****)(_QWORD, __int64))(v8 + 32);
    if ( *(_QWORD *)(v8 + 32) )
    {
      CHWDrawListEntry::ReplacePrimitive(*(_QWORD *)v8, &v16, (__int64 *)(v8 + 32), v8 + 40);
      if ( v16 )
        std::default_delete<CShape>::operator()(v7, v16);
    }
    if ( *v9 )
      std::default_delete<CShape>::operator()(v7, *v9);
    v10 = *(void **)(v8 + 16);
    if ( v10 )
      operator delete(v10);
    v11 = *(void **)(v8 + 8);
    if ( v11 )
    {
      FastRegion::CRegion::FreeMemory(*(void ***)(v8 + 8));
      operator delete(v11, 0x48uLL);
    }
    v12 = *(volatile signed __int32 **)v8;
    if ( *(_QWORD *)v8 )
    {
      *(_QWORD *)v8 = 0LL;
      if ( _InterlockedExchangeAdd(v12 + 2, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v12 + 16LL))(v12, 1LL);
    }
    if ( a1[4]-- == 1LL )
      a1[3] = 0LL;
  }
  v3 = a1[2];
  while ( v3 )
  {
    --v3;
    v4 = *(void **)(a1[1] + 8 * v3);
    if ( v4 )
      operator delete(v4, 0x70uLL);
  }
  v5 = (void *)a1[1];
  if ( v5 )
  {
    v6 = 8LL * a1[2];
    v14 = v6;
    v15 = v5;
    if ( v6 >= 0x1000 )
    {
      std::_Adjust_manually_vector_aligned(&v15, &v14);
      v6 = v14;
      v5 = v15;
    }
    operator delete(v5, v6);
  }
  a1[2] = 0LL;
  a1[1] = 0LL;
}
