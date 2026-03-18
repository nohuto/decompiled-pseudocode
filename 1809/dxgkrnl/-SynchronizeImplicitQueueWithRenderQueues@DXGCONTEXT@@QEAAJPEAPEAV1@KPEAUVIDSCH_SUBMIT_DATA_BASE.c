/*
 * XREFs of ?SynchronizeImplicitQueueWithRenderQueues@DXGCONTEXT@@QEAAJPEAPEAV1@KPEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C0226FA0
 * Callers:
 *     ?SubmitPresentHistoryToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@HPEAT_LARGE_INTEGER@@PEAUDXGK_PRESENT_PARAMS@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAVDXGCONTEXT@@PEAU_PRESENT_REDIRECTED_PARAMS@@@Z @ 0x1C00FC840 (-SubmitPresentHistoryToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADA.c)
 *     ?SubmitPresent@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@PEBUDXGK_PRESENT_PARAMS@@IPEAPEAV1@PEAVDXGALLOCATION@@IIPEAU_DXGKARG_PRESENT@@PEAU_D3DKMT_PRESENT_RGNS@@PEAU_VIDMM_DMA_BUFFER@@PEAUVIDSCH_SUBMIT_DATA_BASE@@W4_D3DDDIFORMAT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C011B490 (-SubmitPresent@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@PEBUDXGK_PRESENT_PARAMS@@IPEAPEAV1@PEAVDXGA.c)
 *     ?SubmitPresentHistoryTokenFromVm@DXGADAPTER@@QEAAJIU_VIDSCH_SUBMIT_FLAGS@@PEAVDXGPRESENTHISTORYTOKENQUEUE@@PEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCRefCountedBuffer@@I@Z @ 0x1C01EA108 (-SubmitPresentHistoryTokenFromVm@DXGADAPTER@@QEAAJIU_VIDSCH_SUBMIT_FLAGS@@PEAVDXGPRESENTHISTORYT.c)
 *     ?SubmitPresentLda@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@IPEAPEAV1@PEAVDXGALLOCATION@@PEAU_DXGKARG_PRESENT@@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C02266C0 (-SubmitPresentLda@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@IPEAPEAV1@PEAVDXGALLOCATION@@PEAU_DXGKAR.c)
 *     ?SubmitPresentMultiPlaneOverlays3@DXGCONTEXT@@AEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@EEEPEBVDXGALLOCATIONREFERENCE@@PEAEPEAU_DXGKARG_PRESENT@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAPEAV1@@Z @ 0x1C024C1C4 (-SubmitPresentMultiPlaneOverlays3@DXGCONTEXT@@AEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@EEEP.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00231C0 (memset.c)
 *     ?GetBroadcastPresentSyncObject@DXGDEVICE@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@XZ @ 0x1C01FE894 (-GetBroadcastPresentSyncObject@DXGDEVICE@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@XZ.c)
 *     ?GetRenderHwQueueCount@DXGCONTEXT@@QEAAIXZ @ 0x1C0214184 (-GetRenderHwQueueCount@DXGCONTEXT@@QEAAIXZ.c)
 */

__int64 __fastcall DXGCONTEXT::SynchronizeImplicitQueueWithRenderQueues(
        DXGCONTEXT *this,
        struct DXGCONTEXT **a2,
        unsigned int a3,
        struct VIDSCH_SUBMIT_DATA_BASE *a4)
{
  signed __int64 v8; // rax
  DXGDEVICE *v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rax
  unsigned int v12; // ebx
  unsigned int RenderHwQueueCount; // edi
  DXGCONTEXT **v14; // r9
  __int64 v15; // r9
  __int64 v16; // r10
  _BYTE *PoolWithTag; // r10
  __int64 v18; // rdx
  DXGCONTEXT *i; // r8
  DXGCONTEXT *v20; // rax
  struct DXGCONTEXT **v21; // r11
  __int64 v22; // rbx
  _QWORD **v23; // r8
  _QWORD *j; // r9
  _QWORD *v25; // rax
  int v26; // eax
  unsigned int v27; // ecx
  _BYTE *v29; // [rsp+40h] [rbp-29h]
  _BYTE v30[64]; // [rsp+48h] [rbp-21h] BYREF
  unsigned int v31; // [rsp+88h] [rbp+1Fh]
  signed __int64 v32; // [rsp+D0h] [rbp+67h] BYREF
  struct _VIDSCH_SYNC_OBJECT *BroadcastPresentSyncObject; // [rsp+E8h] [rbp+7Fh] BYREF

  v8 = _InterlockedExchangeAdd64((volatile signed __int64 *)(*((_QWORD *)this + 2) + 1776LL), 1uLL);
  v9 = (DXGDEVICE *)*((_QWORD *)this + 2);
  v32 = v8 + 1;
  BroadcastPresentSyncObject = DXGDEVICE::GetBroadcastPresentSyncObject(v9);
  if ( !BroadcastPresentSyncObject )
  {
    v11 = WdLogNewEntry5_WdError(v10);
    v12 = -1073741801;
    *(_QWORD *)(v11 + 24) = -1073741801LL;
    *(_QWORD *)(v11 + 32) = 2344LL;
    WdLogEvent5_WdError(v11);
    return v12;
  }
  RenderHwQueueCount = DXGCONTEXT::GetRenderHwQueueCount(this);
  if ( a3 > 1 )
  {
    v14 = a2 + 1;
    do
    {
      RenderHwQueueCount += DXGCONTEXT::GetRenderHwQueueCount(*v14);
      v14 = (DXGCONTEXT **)(v15 + 8);
    }
    while ( v16 != 1 );
  }
  PoolWithTag = 0LL;
  v31 = 0;
  v29 = 0LL;
  if ( RenderHwQueueCount <= 8 )
  {
    PoolWithTag = v30;
    v29 = v30;
  }
  else
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / RenderHwQueueCount < 8 )
      goto LABEL_12;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 8LL * RenderHwQueueCount, 0x4B677844u);
    v29 = PoolWithTag;
  }
  v31 = RenderHwQueueCount;
  if ( !PoolWithTag )
    goto LABEL_13;
  memset(PoolWithTag, 0, 8LL * RenderHwQueueCount);
  PoolWithTag = v29;
LABEL_12:
  if ( PoolWithTag )
  {
    v18 = 0LL;
    for ( i = (DXGCONTEXT *)*((_QWORD *)this + 50); ; i = *(DXGCONTEXT **)i )
    {
      v20 = 0LL;
      if ( i != (DXGCONTEXT *)((char *)this + 400) )
        v20 = i;
      if ( !v20 )
        break;
      *(_QWORD *)&PoolWithTag[8 * v18] = *((_QWORD *)v20 + 5);
      v18 = (unsigned int)(v18 + 1);
    }
    if ( a3 > 1 )
    {
      v21 = a2 + 1;
      v22 = a3 - 1;
      do
      {
        v23 = (_QWORD **)((char *)*v21 + 400);
        for ( j = *v23; ; j = (_QWORD *)*j )
        {
          v25 = 0LL;
          if ( j != v23 )
            v25 = j;
          if ( !v25 )
            break;
          *(_QWORD *)&PoolWithTag[8 * v18] = v25[5];
          v18 = (unsigned int)(v18 + 1);
        }
        ++v21;
        --v22;
      }
      while ( v22 );
    }
    v26 = (*(__int64 (__fastcall **)(_QWORD, _BYTE *, __int64, struct _VIDSCH_SYNC_OBJECT **, _DWORD, signed __int64 *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 520LL) + 8LL) + 648LL))(
            RenderHwQueueCount,
            PoolWithTag,
            1LL,
            &BroadcastPresentSyncObject,
            0,
            &v32);
    v27 = v26;
    if ( v26 >= 0 )
    {
      if ( a4 )
      {
        *((_QWORD *)a4 + 65) = BroadcastPresentSyncObject;
        *((_QWORD *)a4 + 66) = v32;
      }
      else
      {
        v27 = (*(__int64 (__fastcall **)(_QWORD, struct _VIDSCH_SYNC_OBJECT *, signed __int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 520LL) + 8LL)
                                                                                              + 632LL))(
                *((_QWORD *)this + 36),
                BroadcastPresentSyncObject,
                v32);
      }
      v12 = v27;
    }
    else
    {
      v12 = v26;
    }
    PoolWithTag = v29;
    goto LABEL_34;
  }
LABEL_13:
  v12 = -1073741801;
LABEL_34:
  if ( PoolWithTag != v30 && PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0);
  return v12;
}
