/*
 * XREFs of ?FrameUpdate@CHolographicClient@@UEAAJII@Z @ 0x180212450
 * Callers:
 *     <none>
 * Callees:
 *     ??4?$ComPtr@VCInteractionTrackerPositionAnimation@@@WRL@Microsoft@@QEAAAEAV012@PEAVCInteractionTrackerPositionAnimation@@@Z @ 0x18004ED70 (--4-$ComPtr@VCInteractionTrackerPositionAnimation@@@WRL@Microsoft@@QEAAAEAV012@PEAVCInteractionT.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?ActivateView@CHolographicExclusiveView@@QEAA_NPEAVCHolographicClient@@@Z @ 0x18020C7B8 (-ActivateView@CHolographicExclusiveView@@QEAA_NPEAVCHolographicClient@@@Z.c)
 *     ?ProcessExclusiveSurfaceUpdate@CHolographicExclusiveView@@AEAA_NIPEAUEXCLUSIVE_SURFACE_UPDATE@@@Z @ 0x18020CB64 (-ProcessExclusiveSurfaceUpdate@CHolographicExclusiveView@@AEAA_NIPEAUEXCLUSIVE_SURFACE_UPDATE@@@.c)
 *     CHolographicInteropTaskQueue::ProcessPendingMessages__lambda_e17157816af85a08dfd01dfd4111dd83___ @ 0x180211CD4 (CHolographicInteropTaskQueue--ProcessPendingMessages__lambda_e17157816af85a08dfd01dfd4111dd83___.c)
 *     ?DoTextureUpdates@CHolographicClient@@AEAAXXZ @ 0x180212190 (-DoTextureUpdates@CHolographicClient@@AEAAXXZ.c)
 *     ?FindExclusiveViewByViewId@CHolographicClient@@AEAAPEAVCHolographicExclusiveView@@I@Z @ 0x180212414 (-FindExclusiveViewByViewId@CHolographicClient@@AEAAPEAVCHolographicExclusiveView@@I@Z.c)
 */

__int64 __fastcall CHolographicClient::FrameUpdate(CHolographicClient *this, unsigned int a2, DWORD a3)
{
  CHolographicClient *v3; // r15
  char v6; // bp
  unsigned int v8; // ebx
  int v9; // edx
  CHolographicExclusiveView **v10; // r14
  struct CHolographicExclusiveView *ExclusiveViewByViewId; // rax
  __int64 v12; // rdi
  void *v13; // rcx
  signed int v14; // edi
  __int64 v15; // rcx
  _QWORD v17[2]; // [rsp+20h] [rbp-48h] BYREF
  __int64 v18; // [rsp+30h] [rbp-38h]
  CHolographicClient *v19; // [rsp+70h] [rbp+8h] BYREF

  v3 = (CHolographicClient *)((char *)this - 16);
  v19 = (CHolographicClient *)((char *)this - 16);
  v6 = 0;
  v8 = 0;
  CHolographicInteropTaskQueue::ProcessPendingMessages__lambda_e17157816af85a08dfd01dfd4111dd83___(
    *((_QWORD *)this + 28),
    &v19);
  v9 = *((_DWORD *)this + 38);
  if ( !v9 )
    goto LABEL_21;
  v10 = (CHolographicExclusiveView **)((char *)this + 168);
  if ( !*((_QWORD *)this + 21) )
  {
    ExclusiveViewByViewId = CHolographicClient::FindExclusiveViewByViewId(v3, v9);
    v12 = (__int64)ExclusiveViewByViewId;
    if ( ExclusiveViewByViewId )
    {
      if ( *((_BYTE *)ExclusiveViewByViewId + 75) )
      {
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 1) + 104LL))(*((_QWORD *)this + 1));
LABEL_7:
        Microsoft::WRL::ComPtr<CInteractionTrackerPositionAnimation>::operator=((__int64 *)this + 21, v12);
        goto LABEL_8;
      }
      if ( CHolographicExclusiveView::ActivateView(ExclusiveViewByViewId, v3) )
        goto LABEL_7;
    }
  }
LABEL_8:
  if ( !*v10 || *((_BYTE *)*v10 + 75) )
    goto LABEL_21;
  v13 = (void *)*((_QWORD *)this + 27);
  v17[0] = 0LL;
  v17[1] = 0LL;
  v18 = 0LL;
  v14 = WaitForSingleObject(v13, a3);
  if ( !v14 )
  {
    if ( *((_BYTE *)*v10 + 72) )
      v6 = CHolographicExclusiveView::ProcessExclusiveSurfaceUpdate(*v10, a2, (struct EXCLUSIVE_SURFACE_UPDATE *)v17);
    if ( !v6 )
      goto LABEL_16;
    v15 = *((_QWORD *)this + 1);
    LODWORD(v18) = *((_DWORD *)this + 39);
    (*(void (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v15 + 80LL))(v15, v17);
  }
  if ( v14 > 0 )
  {
    v8 = (unsigned __int16)v14 | 0x80070000;
    goto LABEL_18;
  }
LABEL_16:
  v8 = v14;
LABEL_18:
  if ( !v14 && !v6 )
    v8 = 1;
LABEL_21:
  CHolographicClient::DoTextureUpdates(v3);
  return v8;
}
