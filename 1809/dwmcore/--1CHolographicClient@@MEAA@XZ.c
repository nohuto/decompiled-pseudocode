/*
 * XREFs of ??1CHolographicClient@@MEAA@XZ @ 0x180211E7C
 * Callers:
 *     ??_ECHolographicClient@@MEAAPEAXI@Z @ 0x180212000 (--_ECHolographicClient@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ @ 0x18001D4F8 (-InternalRelease@-$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x180057AF0 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ??$ReleaseInterface@VCD3DSurface@@@@YAXAEAPEAVCD3DSurface@@@Z @ 0x18007AF60 (--$ReleaseInterface@VCD3DSurface@@@@YAXAEAPEAVCD3DSurface@@@Z.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x18009BE74 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?ResetEvent@details@wil@@YAXPEAX@Z @ 0x18020BBE0 (-ResetEvent@details@wil@@YAXPEAX@Z.c)
 *     ?ClearMessage@CHolographicInteropTaskQueue@@AEAAXPEAUMESSAGE@1@@Z @ 0x180211A38 (-ClearMessage@CHolographicInteropTaskQueue@@AEAAXPEAUMESSAGE@1@@Z.c)
 *     ?ReverseList@CHolographicInteropTaskQueue@@AEAAPEAU_SLIST_ENTRY@@PEAU2@@Z @ 0x180211C84 (-ReverseList@CHolographicInteropTaskQueue@@AEAAPEAU_SLIST_ENTRY@@PEAU2@@Z.c)
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
  *((_DWORD *)this + 56) = 0;
  DynArrayImpl<0>::ShrinkToSize((__int64)this + 200, 0x20u);
  v4 = *((_QWORD *)this + 30);
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
  ReleaseInterface<CD3DSurface>((__int64 *)this + 30);
  ReleaseInterface<CD3DSurface>((__int64 *)this + 31);
  v12 = (void *)*((_QWORD *)this + 29);
  if ( v12 )
    CloseHandle(v12);
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 25);
  Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)this + 24);
  Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)this + 23);
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 17);
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 13);
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 9);
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 5);
  Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease(v2);
  Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)this + 3);
  *(_QWORD *)this = &CMILCOMBase::`vftable';
}
