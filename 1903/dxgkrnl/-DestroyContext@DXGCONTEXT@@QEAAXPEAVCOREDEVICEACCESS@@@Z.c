/*
 * XREFs of ?DestroyContext@DXGCONTEXT@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C0120EC8
 * Callers:
 *     ?CreateContext@DXGDEVICE@@QEAAJPEAPEAVDXGCONTEXT@@IIU_D3DDDI_CREATECONTEXTFLAGS@@PEAXIW4_D3DKMT_CLIENTHINT@@E@Z @ 0x1C011F6CC (-CreateContext@DXGDEVICE@@QEAAJPEAPEAVDXGCONTEXT@@IIU_D3DDDI_CREATECONTEXTFLAGS@@PEAXIW4_D3DKMT_.c)
 *     ?DestroyContext@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C01209A8 (-DestroyContext@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?DestroyDevice@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C0121538 (-DestroyDevice@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 * Callees:
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x1C00046DC (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C0006F08 (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00070E4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?NotifyContextCreation@DXGADAPTER@@QEAAXPEAVDXGCONTEXT@@EI@Z @ 0x1C000C7B8 (-NotifyContextCreation@DXGADAPTER@@QEAAXPEAVDXGCONTEXT@@EI@Z.c)
 *     ??_GDXGDEVICESYNCOBJECT@@QEAAPEAXI@Z @ 0x1C000CA30 (--_GDXGDEVICESYNCOBJECT@@QEAAPEAXI@Z.c)
 *     ?RemoveFromCddPrimarySyncContextListSafe@ADAPTER_RENDER@@QEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C000CA64 (-RemoveFromCddPrimarySyncContextListSafe@ADAPTER_RENDER@@QEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000CD7C (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024FA0 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0pqqqqqqqqppp @ 0x1C003C1E0 (McTemplateK0pqqqqqqqqppp.c)
 *     ?DestroyCoreState@DXGDEVICESYNCOBJECT@@QEAAXXZ @ 0x1C00F1BF8 (-DestroyCoreState@DXGDEVICESYNCOBJECT@@QEAAXXZ.c)
 *     ?DdiDestroyContext@ADAPTER_RENDER@@QEAAJPEAX@Z @ 0x1C012124C (-DdiDestroyContext@ADAPTER_RENDER@@QEAAJPEAX@Z.c)
 *     ?VmBusSendSyncMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@@Z @ 0x1C022769C (-VmBusSendSyncMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@.c)
 *     ?DestroyCoreState@DXGHWQUEUE@@IEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C0247258 (-DestroyCoreState@DXGHWQUEUE@@IEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x1C025E230 (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
 */

void __fastcall DXGCONTEXT::DestroyContext(DXGCONTEXT *this, PERESOURCE **a2)
{
  __int64 v2; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rsi
  __int64 v9; // rax
  __int64 v10; // rdx
  const GUID *v11; // r8
  DXGDEVICESYNCOBJECT *v12; // rcx
  DXGDEVICESYNCOBJECT *v13; // rcx
  DXGHWQUEUE *i; // rsi
  char v15; // si
  __int64 v16; // rcx
  __int64 v17; // rcx
  char v18; // di
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // rcx
  DXGDEVICESYNCOBJECT *v23; // rcx
  DXGDEVICESYNCOBJECT *v24; // rcx
  void *v25; // rdx
  __int64 v26; // r9
  __int128 v27; // xmm1
  __int64 v28; // rcx
  int v29; // edx
  __int64 v30; // rax
  DXGPROCESS *v31; // rcx
  int v32; // eax
  __int64 v33; // rax
  unsigned int *v34; // [rsp+28h] [rbp-39h]
  struct _MDL *v35; // [rsp+30h] [rbp-31h]
  int v36; // [rsp+38h] [rbp-29h]
  int v37; // [rsp+40h] [rbp-21h]
  int v38; // [rsp+48h] [rbp-19h]
  int v39; // [rsp+50h] [rbp-11h]
  int v40; // [rsp+58h] [rbp-9h]
  int v41; // [rsp+60h] [rbp-1h]
  __int128 v42; // [rsp+88h] [rbp+27h] BYREF
  __int128 v43; // [rsp+98h] [rbp+37h]

  v2 = *((_QWORD *)this + 2);
  if ( !*(_DWORD *)(v2 + 72) )
  {
    ExIsResourceAcquiredExclusiveLite(*(PERESOURCE *)(v2 + 104));
    v2 = *((_QWORD *)this + 2);
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*(_QWORD *)(v2 + 16) + 16LL)) )
  {
    v30 = WdLogNewEntry5_WdAssertion(v6, v5);
    *(_QWORD *)(v30 + 24) = 1669LL;
    WdLogEvent5_WdAssertion(v30);
  }
  if ( a2 )
    DXGADAPTER::IsCoreResourceExclusiveOwner(a2[3]);
  if ( !*((_BYTE *)this + 444) )
  {
    v7 = *((_QWORD *)this + 2);
    *((_BYTE *)this + 444) = 1;
    v8 = *(_QWORD *)(*(_QWORD *)(v7 + 16) + 16LL);
    v9 = v7;
    if ( *(_BYTE *)(v8 + 185) && *((_DWORD *)this + 7) )
    {
      v31 = *(DXGPROCESS **)(v7 + 40);
      *(_QWORD *)&v42 = 0LL;
      *((_QWORD *)&v42 + 1) = DXGPROCESS::GetHostProcess(v31);
      v32 = *((_DWORD *)this + 7);
      LODWORD(v43) = 7;
      DWORD2(v43) = v32;
      DXG_VMBUS_CHANNEL_BASE::VmBusSendSyncMessage(
        (DXG_VMBUS_CHANNEL_BASE *)(v8 + 4144),
        (struct DXGKVMB_COMMAND_BASE *)&v42,
        0x20u,
        0LL,
        0LL,
        v35);
      v9 = *((_QWORD *)this + 2);
      *((_DWORD *)this + 7) = 0;
    }
    ADAPTER_RENDER::RemoveFromCddPrimarySyncContextListSafe(
      *(ADAPTER_RENDER **)(v9 + 16),
      (struct _LIST_ENTRY *)this + 10);
    v12 = (DXGDEVICESYNCOBJECT *)*((_QWORD *)this + 30);
    if ( v12 )
      DXGDEVICESYNCOBJECT::DestroyCoreState(v12);
    v13 = (DXGDEVICESYNCOBJECT *)*((_QWORD *)this + 32);
    if ( v13 )
      DXGDEVICESYNCOBJECT::DestroyCoreState(v13);
    for ( i = (DXGHWQUEUE *)*((_QWORD *)this + 52); i != (DXGCONTEXT *)((char *)this + 416) && i; i = *(DXGHWQUEUE **)i )
      DXGHWQUEUE::DestroyCoreState(i, (struct COREDEVICEACCESS *)a2);
    if ( *((_QWORD *)this + 34) || *((_QWORD *)this + 35) )
    {
      if ( !a2 || DXGADAPTER::IsCoreResourceExclusiveOwner(a2[3]) )
      {
        v15 = 0;
      }
      else
      {
        v15 = 1;
        COREDEVICEACCESS::Release((COREDEVICEACCESS *)a2);
      }
      v16 = *((_QWORD *)this + 34);
      v42 = 9uLL;
      if ( v16 )
        (*(void (__fastcall **)(__int64, __int128 *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                            + 520LL)
                                                                + 8LL)
                                                    + 296LL))(
          v16,
          &v42);
      v17 = *((_QWORD *)this + 35);
      if ( v17 )
        (*(void (__fastcall **)(__int64, __int128 *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                            + 520LL)
                                                                + 8LL)
                                                    + 296LL))(
          v17,
          &v42);
      if ( v15 )
        COREDEVICEACCESS::AcquireSharedUncheck((__int64)a2);
      if ( *((DXGCONTEXT **)this + 43) != (DXGCONTEXT *)((char *)this + 344)
        || (v18 = 0, *(_QWORD *)(*((_QWORD *)this + 2) + 688LL) != *((_QWORD *)this + 2) + 688LL) )
      {
        v18 = 1;
      }
      v19 = *((_QWORD *)this + 34);
      if ( v19 && v18 )
        (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                        + 520LL)
                                                            + 8LL)
                                                + 312LL))(
          v19,
          0LL);
      v20 = *((_QWORD *)this + 35);
      if ( v20 && v18 )
        (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                        + 520LL)
                                                            + 8LL)
                                                + 312LL))(
          v20,
          0LL);
    }
    v21 = *((_QWORD *)this + 45);
    if ( v21 )
    {
      if ( !*((_QWORD *)this + 7) )
      {
        v33 = WdLogNewEntry5_WdAssertion(v21, v10);
        *(_QWORD *)(v33 + 24) = 1778LL;
        WdLogEvent5_WdAssertion(v33);
        v21 = *((_QWORD *)this + 45);
      }
      (*(void (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 544LL) + 8LL)
                                      + 512LL))(v21);
      (*(void (__fastcall **)(_QWORD, char *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 544LL)
                                                         + 8LL)
                                             + 496LL))(
        *((_QWORD *)this + 45),
        (char *)this + 392);
      *((_QWORD *)this + 45) = 0LL;
    }
    v22 = *((_QWORD *)this + 46);
    if ( v22 )
    {
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 544LL)
                                                          + 8LL)
                                              + 496LL))(
        v22,
        0LL);
      *((_QWORD *)this + 46) = 0LL;
    }
    if ( *((_QWORD *)this + 29) )
    {
      (*(void (**)(void))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 544LL) + 8LL) + 448LL))();
      *((_QWORD *)this + 29) = 0LL;
    }
    v23 = (DXGDEVICESYNCOBJECT *)*((_QWORD *)this + 30);
    if ( v23 )
    {
      DXGDEVICESYNCOBJECT::`scalar deleting destructor'(v23);
      *((_QWORD *)this + 30) = 0LL;
    }
    v24 = (DXGDEVICESYNCOBJECT *)*((_QWORD *)this + 32);
    if ( v24 )
    {
      DXGDEVICESYNCOBJECT::`scalar deleting destructor'(v24);
      *((_QWORD *)this + 32) = 0LL;
    }
    if ( *((_QWORD *)this + 36) )
    {
      (*(void (**)(void))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 544LL) + 8LL) + 1000LL))();
      *((_QWORD *)this + 36) = 0LL;
    }
    if ( *((_QWORD *)this + 34) )
    {
      (*(void (**)(void))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 520LL) + 8LL) + 240LL))();
      *((_QWORD *)this + 34) = 0LL;
    }
    if ( *((_QWORD *)this + 38) )
    {
      (*(void (**)(void))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 520LL) + 8LL) + 264LL))();
      *((_QWORD *)this + 38) = 0LL;
    }
    if ( *((_QWORD *)this + 37) )
    {
      (*(void (**)(void))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 520LL) + 8LL) + 248LL))();
      *((_QWORD *)this + 37) = 0LL;
    }
    if ( *((_QWORD *)this + 35) )
    {
      (*(void (**)(void))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 520LL) + 8LL) + 240LL))();
      *((_QWORD *)this + 35) = 0LL;
    }
    if ( (*((_DWORD *)this + 10) & 1) != 0 )
    {
      v25 = (void *)*((_QWORD *)this + 23);
      if ( v25 )
      {
        ADAPTER_RENDER::DdiDestroyContext(*(ADAPTER_RENDER **)(*((_QWORD *)this + 2) + 16LL), v25);
        *((_QWORD *)this + 23) = 0LL;
      }
    }
    if ( bTracingEnabled )
    {
      v26 = *((_QWORD *)this + 2);
      v27 = *(_OWORD *)((char *)this + 216);
      v28 = *((unsigned int *)this + 101);
      v29 = *((_DWORD *)this + 100);
      v42 = *(_OWORD *)((char *)this + 200);
      v43 = v27;
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
      {
        v41 = 0;
        v40 = v43;
        v39 = HIDWORD(v42);
        v38 = DWORD2(v42);
        v37 = DWORD1(v42);
        v36 = v42;
        LODWORD(v35) = v28;
        LODWORD(v34) = v29;
        McTemplateK0pqqqqqqqqppp(
          v28,
          &EventDestroyContext,
          v11,
          v26,
          v34,
          v35,
          v36,
          v37,
          v38,
          v39,
          v40,
          v41,
          this,
          0LL,
          0LL);
      }
    }
    if ( !*((_BYTE *)this + 445) )
      DXGADAPTER::NotifyContextCreation(
        *(DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL),
        this,
        0,
        *((_DWORD *)this + 100));
  }
}
