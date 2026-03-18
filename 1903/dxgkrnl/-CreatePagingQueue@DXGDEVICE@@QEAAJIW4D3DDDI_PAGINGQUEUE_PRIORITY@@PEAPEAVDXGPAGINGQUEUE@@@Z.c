/*
 * XREFs of ?CreatePagingQueue@DXGDEVICE@@QEAAJIW4D3DDDI_PAGINGQUEUE_PRIORITY@@PEAPEAVDXGPAGINGQUEUE@@@Z @ 0x1C011F9F4
 * Callers:
 *     ?DxgkCreatePagingQueueInternal@@YAJPEAU_D3DKMT_CREATEPAGINGQUEUE@@H@Z @ 0x1C011FE74 (-DxgkCreatePagingQueueInternal@@YAJPEAU_D3DKMT_CREATEPAGINGQUEUE@@H@Z.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00070E4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??2?$DXGQUOTAALLOCATOR@$00$0ELGHHIEE@@@SAPEAX_K@Z @ 0x1C000C860 (--2-$DXGQUOTAALLOCATOR@$00$0ELGHHIEE@@@SAPEAX_K@Z.c)
 *     ??_GDXGPAGINGQUEUE@@IEAAPEAXI@Z @ 0x1C000C990 (--_GDXGPAGINGQUEUE@@IEAAPEAXI@Z.c)
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     memset @ 0x1C0025300 (memset.c)
 *     ?Initialize@DXGPAGINGQUEUE@@IEAAJIW4D3DDDI_PAGINGQUEUE_PRIORITY@@@Z @ 0x1C011FB1C (-Initialize@DXGPAGINGQUEUE@@IEAAJIW4D3DDDI_PAGINGQUEUE_PRIORITY@@@Z.c)
 *     ?DestroyCoreState@DXGPAGINGQUEUE@@IEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C0120E0C (-DestroyCoreState@DXGPAGINGQUEUE@@IEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?MapGuestFenceCpuVaToHost@@YAJ_KPEAPEAXPEA_KPEAI@Z @ 0x1C0219574 (-MapGuestFenceCpuVaToHost@@YAJ_KPEAPEAXPEA_KPEAI@Z.c)
 *     ?VmBusSendCreatePagingQueue@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIPEBU_D3DKMT_CREATEPAGINGQUEUE@@PEAUDXGKVMB_COMMAND_CREATEPAGINGQUEUE_RETURN@@@Z @ 0x1C0223810 (-VmBusSendCreatePagingQueue@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIPEBU_D3DKMT_CREATEPAGINGQUEUE@@PE.c)
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x1C025E230 (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
 */

__int64 __fastcall DXGDEVICE::CreatePagingQueue(
        DXGDEVICE *this,
        unsigned int a2,
        enum D3DDDI_PAGINGQUEUE_PRIORITY a3,
        struct DXGPAGINGQUEUE **a4)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  _QWORD *v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rbx
  __int64 v17; // rbp
  DXGPAGINGQUEUE *v18; // rax
  DXGPAGINGQUEUE **v19; // rcx
  __int64 v20; // rdx
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  DXGPROCESS *v26; // rcx
  unsigned int v27; // ebx
  unsigned int HostProcess; // eax
  __int64 v29; // rdx
  int v30; // eax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // rax
  _D3DKMT_CREATEPAGINGQUEUE v35; // [rsp+30h] [rbp-78h] BYREF
  __int64 v36; // [rsp+50h] [rbp-58h] BYREF
  unsigned __int64 v37; // [rsp+58h] [rbp-50h]
  __int64 v38; // [rsp+60h] [rbp-48h]

  if ( !*((_DWORD *)this + 18) && !ExIsResourceAcquiredExclusiveLite(*((PERESOURCE *)this + 13)) )
  {
    v22 = WdLogNewEntry5_WdAssertion(v9, v8);
    *(_QWORD *)(v22 + 24) = 7584LL;
    WdLogEvent5_WdAssertion(v22);
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*((_QWORD *)this + 2) + 16LL)) )
  {
    v23 = WdLogNewEntry5_WdAssertion(v11, v10);
    *(_QWORD *)(v23 + 24) = 7585LL;
    WdLogEvent5_WdAssertion(v23);
  }
  if ( !a4 )
  {
    v24 = WdLogNewEntry5_WdAssertion(v11, v10);
    *(_QWORD *)(v24 + 24) = 7586LL;
    WdLogEvent5_WdAssertion(v24);
  }
  v12 = DXGQUOTAALLOCATOR<1,1265072196>::operator new(0x50uLL);
  if ( v12 )
  {
    v14 = 0LL;
    v12[2] = this;
    *v12 = 0LL;
    v12[1] = 0LL;
    *((_DWORD *)v12 + 6) = 0;
    *((_DWORD *)v12 + 7) = 0;
    v12[4] = 0LL;
    v12[5] = 0LL;
    *((_DWORD *)v12 + 12) = 0;
    v12[7] = 0LL;
    v12[8] = 1LL;
    *((_BYTE *)v12 + 72) = 0;
  }
  *a4 = (struct DXGPAGINGQUEUE *)v12;
  if ( v12 )
  {
    LODWORD(v16) = DXGPAGINGQUEUE::Initialize((DXGPAGINGQUEUE *)v12, a2, a3);
    if ( (int)v16 >= 0 )
    {
      v17 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
      if ( !*(_BYTE *)(v17 + 185) )
      {
LABEL_13:
        v18 = *a4;
        v19 = (DXGPAGINGQUEUE **)((char *)this + 392);
        v20 = *((_QWORD *)this + 49);
        if ( *(DXGDEVICE **)(v20 + 8) != (DXGDEVICE *)((char *)this + 392) )
          __fastfail(3u);
        *(_QWORD *)v18 = v20;
        *((_QWORD *)v18 + 1) = v19;
        *(_QWORD *)(v20 + 8) = v18;
        *v19 = v18;
        _InterlockedIncrement64((volatile signed __int64 *)this + 8);
        return 0LL;
      }
      v36 = 0LL;
      v37 = 0LL;
      v38 = 0LL;
      memset(&v35, 0, sizeof(v35));
      v26 = (DXGPROCESS *)*((_QWORD *)this + 5);
      v27 = *((_DWORD *)this + 84);
      v35.PhysicalAdapterIndex = a2;
      v35.Priority = a3;
      HostProcess = DXGPROCESS::GetHostProcess(v26);
      LODWORD(v16) = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendCreatePagingQueue(
                       (DXG_GUEST_VIRTUALGPU_VMBUS *)(v17 + 4144),
                       HostProcess,
                       v27,
                       &v35,
                       (struct DXGKVMB_COMMAND_CREATEPAGINGQUEUE_RETURN *)&v36);
      if ( (int)v16 >= 0 )
      {
        v29 = *((_QWORD *)*a4 + 5);
        *((_DWORD *)*a4 + 7) = v36;
        *(_DWORD *)(v29 + 44) = HIDWORD(v36);
        v30 = MapGuestFenceCpuVaToHost(
                v37,
                (void **)(v29 + 56),
                (unsigned __int64 *)(v29 + 80),
                (unsigned int *)(v29 + 88));
        v16 = v30;
        if ( v30 >= 0 )
          goto LABEL_13;
        v34 = WdLogNewEntry5_WdError(v32, v31, v33);
        *(_QWORD *)(v34 + 24) = v16;
        *(_QWORD *)(v34 + 32) = 7634LL;
        WdLogEvent5_WdError(v34);
      }
    }
  }
  else
  {
    v25 = WdLogNewEntry5_WdWarning(v14, v13, v15);
    LODWORD(v16) = -1073741801;
    *(_QWORD *)(v25 + 24) = this;
    *(_QWORD *)(v25 + 32) = -1073741801LL;
    WdLogEvent5_WdWarning(v25);
  }
  if ( *a4 )
  {
    DXGPAGINGQUEUE::DestroyCoreState(*a4, 0LL);
    if ( *a4 )
      DXGPAGINGQUEUE::`scalar deleting destructor'(*a4);
    *a4 = 0LL;
  }
  return (unsigned int)v16;
}
