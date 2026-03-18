/*
 * XREFs of ??1CHolographicClient@@MEAA@XZ @ 0x180248890
 * Callers:
 *     ??_ECHolographicClient@@MEAAPEAXI@Z @ 0x180248A60 (--_ECHolographicClient@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ @ 0x18001F5BC (-InternalRelease@-$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$ReleaseInterface@VCD3DSurface@@@@YAXAEAPEAVCD3DSurface@@@Z @ 0x180023F3C (--$ReleaseInterface@VCD3DSurface@@@@YAXAEAPEAVCD3DSurface@@@Z.c)
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180026730 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180089514 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800B8A58 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800C42A4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ?ResetEvent@details@wil@@YAXPEAX@Z @ 0x1801B6274 (-ResetEvent@details@wil@@YAXPEAX@Z.c)
 *     ?ClearMessage@CHolographicInteropTaskQueue@@AEAAXPEAUMESSAGE@1@@Z @ 0x180248438 (-ClearMessage@CHolographicInteropTaskQueue@@AEAAXPEAUMESSAGE@1@@Z.c)
 *     ?ReverseList@CHolographicInteropTaskQueue@@AEAAPEAU_SLIST_ENTRY@@PEAU2@@Z @ 0x1802486C0 (-ReverseList@CHolographicInteropTaskQueue@@AEAAPEAU_SLIST_ENTRY@@PEAU2@@Z.c)
 */

void __fastcall CHolographicClient::~CHolographicClient(CHolographicClient *this)
{
  __int64 *v2; // r15
  __int64 v3; // rcx
  __int64 v4; // rbx
  void *v5; // rdx
  struct _SLIST_ENTRY *v6; // rax
  CHolographicInteropTaskQueue *v7; // rcx
  CHolographicInteropTaskQueue *v8; // rcx
  struct _SLIST_ENTRY *v9; // r14
  union _SLIST_HEADER *v10; // rbp
  struct MESSAGE *v11; // rbx
  void *v12; // rcx
  __int64 *v13; // rbx
  __int64 *v14; // rbp

  *(_QWORD *)this = &CHolographicClient::`vftable'{for `CMILCOMBase'};
  v2 = (__int64 *)((char *)this + 32);
  *((_QWORD *)this + 2) = &CHolographicClient::`vftable'{for `IHolographicCompositorHost'};
  v3 = *((_QWORD *)this + 4);
  if ( v3 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 40LL))(v3);
    Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease(v2);
  }
  if ( *((_QWORD *)this + 3) )
    Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)this + 3);
  *((_DWORD *)this + 60) = 0;
  DynArrayImpl<0>::ShrinkToSize((__int64)this + 216, 0x20u);
  v4 = *((_QWORD *)this + 32);
  wil::details::ResetEvent(*(wil::details **)(v4 + 48), v5);
  v6 = InterlockedFlushSList((PSLIST_HEADER)(v4 + 16));
  v9 = CHolographicInteropTaskQueue::ReverseList(v7, v6);
  if ( v9 )
  {
    v10 = (union _SLIST_HEADER *)(v4 + 32);
    do
    {
      v11 = (struct MESSAGE *)v9;
      v9 = v9->Next;
      CHolographicInteropTaskQueue::ClearMessage(v8, v11);
      InterlockedPushEntrySList(v10, (PSLIST_ENTRY)v11);
    }
    while ( v9 );
  }
  ReleaseInterface<CD3DSurface>((__int64 *)this + 32);
  ReleaseInterface<CD3DSurface>((__int64 *)this + 33);
  v12 = (void *)*((_QWORD *)this + 31);
  if ( v12 )
    CloseHandle(v12);
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 216);
  Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)this + 26);
  Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)this + 25);
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 160);
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 128);
  v13 = (__int64 *)*((_QWORD *)this + 13);
  if ( v13 )
  {
    v14 = (__int64 *)*((_QWORD *)this + 14);
    if ( v13 != v14 )
    {
      do
        wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>(v13++);
      while ( v13 != v14 );
      v13 = (__int64 *)*((_QWORD *)this + 13);
    }
    std::_Deallocate<16,0>(v13, (*((_QWORD *)this + 15) - (_QWORD)v13) & 0xFFFFFFFFFFFFFFF8uLL);
    *((_QWORD *)this + 13) = 0LL;
    *((_QWORD *)this + 14) = 0LL;
    *((_QWORD *)this + 15) = 0LL;
  }
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 72);
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 40);
  Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease(v2);
  Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)this + 3);
  *(_QWORD *)this = &CMILCOMBase::`vftable';
}
