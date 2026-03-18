/*
 * XREFs of ?_Tidy@?$deque@VCMegaRect@@V?$allocator@VCMegaRect@@@std@@@std@@IEAAXXZ @ 0x1800220CC
 * Callers:
 *     ??_GCDrawListEntryBatch@@EEAAPEAXI@Z @ 0x18002202C (--_GCDrawListEntryBatch@@EEAAPEAXI@Z.c)
 *     ?Render@CDrawListEntryBatch@@UEAAJXZ @ 0x1800C99A0 (-Render@CDrawListEntryBatch@@UEAAJXZ.c)
 * Callees:
 *     ??R?$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z @ 0x18000D0E4 (--R-$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z.c)
 *     ?_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z @ 0x180063BC0 (-_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800BAE7C (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x1800EBE98 (--3@YAXPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?ReplacePrimitive@CHWDrawListEntry@@QEAA?AV?$unique_ptr@VCDrawListPrimitive@@U?$default_delete@VCDrawListPrimitive@@@std@@@std@@$$QEAV23@AEBVCMILMatrix@@@Z @ 0x180187778 (-ReplacePrimitive@CHWDrawListEntry@@QEAA-AV-$unique_ptr@VCDrawListPrimitive@@U-$default_delete@V.c)
 */

void __fastcall std::deque<CMegaRect>::_Tidy(_QWORD *a1)
{
  __int64 v2; // rcx
  __int64 v3; // rdi
  void *v4; // rcx
  void *v5; // rcx
  __int64 v6; // rcx
  volatile signed __int32 **v7; // rsi
  __int64 (__fastcall ****v8)(_QWORD, __int64); // rdi
  volatile signed __int32 *v9; // r8
  void **v10; // rdi
  _DWORD *v11; // r14
  volatile signed __int32 *v12; // rcx
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // [rsp+58h] [rbp+10h] BYREF
  void *v16; // [rsp+60h] [rbp+18h] BYREF
  __int64 (__fastcall ***v17)(_QWORD, __int64); // [rsp+68h] [rbp+20h] BYREF

  while ( 1 )
  {
    v2 = a1[4];
    if ( !v2 )
      break;
    v6 = (a1[2] - 1LL) & (a1[3] - 1LL + v2);
    v7 = *(volatile signed __int32 ***)(a1[1] + 8 * v6);
    v8 = (__int64 (__fastcall ****)(_QWORD, __int64))(v7 + 4);
    if ( v7[4] )
    {
      CHWDrawListEntry::ReplacePrimitive(*v7, &v17, v7 + 4, v7 + 5);
      if ( v17 )
        std::default_delete<CShape>::operator()(v6, v17);
    }
    if ( *v8 )
      std::default_delete<CShape>::operator()(v6, *v8);
    v9 = v7[2];
    if ( v9 )
      HeapFree(WPF::g_processHeap, 0, (LPVOID)v9);
    v10 = (void **)v7[1];
    if ( v10 )
    {
      v11 = v10 + 1;
      if ( v10 + 1 != *v10 )
      {
        WPF::ProcessHeapImpl::Free(*v10);
        *v10 = v11;
        *v11 = 0;
      }
      operator delete(v10, 0x48uLL);
    }
    v12 = *v7;
    if ( *v7 )
    {
      *v7 = 0LL;
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
    v14 = 8LL * a1[2];
    v15 = v14;
    v16 = v5;
    if ( v14 >= 0x1000 )
    {
      std::_Adjust_manually_vector_aligned(&v16, &v15);
      v14 = v15;
      v5 = v16;
    }
    operator delete(v5, v14);
  }
  a1[2] = 0LL;
  a1[1] = 0LL;
}
