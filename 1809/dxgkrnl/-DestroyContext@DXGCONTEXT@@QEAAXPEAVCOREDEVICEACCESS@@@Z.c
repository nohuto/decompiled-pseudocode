/*
 * XREFs of ?DestroyContext@DXGCONTEXT@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C00EA1E4
 * Callers:
 *     ?CreateContext@DXGDEVICE@@QEAAJPEAPEAVDXGCONTEXT@@IIU_D3DDDI_CREATECONTEXTFLAGS@@PEAXIW4_D3DKMT_CLIENTHINT@@E@Z @ 0x1C00E6218 (-CreateContext@DXGDEVICE@@QEAAJPEAPEAVDXGCONTEXT@@IIU_D3DDDI_CREATECONTEXTFLAGS@@PEAXIW4_D3DKMT_.c)
 *     ?DestroyContext@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00EA118 (-DestroyContext@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?DestroyDevice@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C00EE608 (-DestroyDevice@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0005E8C (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?NotifyContextCreation@DXGADAPTER@@QEAAXPEAVDXGCONTEXT@@EI@Z @ 0x1C000FCCC (-NotifyContextCreation@DXGADAPTER@@QEAAXPEAVDXGCONTEXT@@EI@Z.c)
 *     ?RemoveFromCddPrimarySyncContextListSafe@ADAPTER_RENDER@@QEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C0010508 (-RemoveFromCddPrimarySyncContextListSafe@ADAPTER_RENDER@@QEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXXZ @ 0x1C00105FC (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x1C0010680 (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0011E50 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 *     ??_GDXGDEVICESYNCOBJECT@@QEAAPEAXI@Z @ 0x1C0035970 (--_GDXGDEVICESYNCOBJECT@@QEAAPEAXI@Z.c)
 *     McTemplateK0pqqqqqqqqppp @ 0x1C0035C0C (McTemplateK0pqqqqqqqqppp.c)
 *     ?DestroyCoreState@DXGDEVICESYNCOBJECT@@QEAAXXZ @ 0x1C00DC7E8 (-DestroyCoreState@DXGDEVICESYNCOBJECT@@QEAAXXZ.c)
 *     ?DdiDestroyContext@ADAPTER_RENDER@@QEAAJPEAX@Z @ 0x1C00EA538 (-DdiDestroyContext@ADAPTER_RENDER@@QEAAJPEAX@Z.c)
 *     ?VmBusSendSyncMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@@Z @ 0x1C01F7688 (-VmBusSendSyncMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@.c)
 *     ?DestroyCoreState@DXGHWQUEUE@@IEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C021371C (-DestroyCoreState@DXGHWQUEUE@@IEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x1C0229704 (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
 */

void __fastcall DXGCONTEXT::DestroyContext(DXGCONTEXT *this, PERESOURCE **a2)
{
  __int64 v2; // rax
  __int64 v5; // rcx
  __int64 v6; // rax
  ADAPTER_RENDER *v7; // rcx
  __int64 v8; // rsi
  DXGDEVICESYNCOBJECT *v9; // rcx
  DXGHWQUEUE *i; // rsi
  char v11; // si
  __int64 v12; // rcx
  __int64 v13; // rcx
  char v14; // di
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rcx
  DXGDEVICESYNCOBJECT *v19; // rcx
  void *v20; // rdx
  __int128 v21; // xmm1
  __int64 v22; // rax
  DXGPROCESS *v23; // rcx
  int v24; // eax
  __int64 v25; // rax
  int v26; // [rsp+28h] [rbp-39h]
  struct _MDL *v27; // [rsp+30h] [rbp-31h]
  int v28; // [rsp+30h] [rbp-31h]
  int v29; // [rsp+38h] [rbp-29h]
  int v30; // [rsp+40h] [rbp-21h]
  int v31; // [rsp+48h] [rbp-19h]
  int v32; // [rsp+50h] [rbp-11h]
  int v33; // [rsp+58h] [rbp-9h]
  int v34; // [rsp+60h] [rbp-1h]
  __int128 v35; // [rsp+88h] [rbp+27h] BYREF
  __int128 v36; // [rsp+98h] [rbp+37h]

  v2 = *((_QWORD *)this + 2);
  if ( !*(_DWORD *)(v2 + 72) )
  {
    ExIsResourceAcquiredExclusiveLite(*(PERESOURCE *)(v2 + 104));
    v2 = *((_QWORD *)this + 2);
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*(_QWORD *)(v2 + 16) + 16LL)) )
  {
    v22 = WdLogNewEntry5_WdAssertion(v5);
    *(_QWORD *)(v22 + 24) = 1658LL;
    WdLogEvent5_WdAssertion(v22);
  }
  if ( a2 )
    DXGADAPTER::IsCoreResourceExclusiveOwner(a2[3]);
  if ( !*((_BYTE *)this + 428) )
  {
    v6 = *((_QWORD *)this + 2);
    *((_BYTE *)this + 428) = 1;
    v7 = *(ADAPTER_RENDER **)(v6 + 16);
    v8 = *((_QWORD *)v7 + 2);
    if ( *(_BYTE *)(v8 + 185) )
    {
      if ( *((_DWORD *)this + 7) )
      {
        v23 = *(DXGPROCESS **)(v6 + 40);
        *(_QWORD *)&v35 = 0LL;
        *((_QWORD *)&v35 + 1) = DXGPROCESS::GetHostProcess(v23);
        v24 = *((_DWORD *)this + 7);
        LODWORD(v36) = 7;
        DWORD2(v36) = v24;
        DXG_VMBUS_CHANNEL_BASE::VmBusSendSyncMessage(
          (DXG_VMBUS_CHANNEL_BASE *)(v8 + 4152),
          (struct DXGKVMB_COMMAND_BASE *)&v35,
          0x20u,
          0LL,
          0LL,
          v27);
        *((_DWORD *)this + 7) = 0;
      }
    }
    else
    {
      ADAPTER_RENDER::RemoveFromCddPrimarySyncContextListSafe(v7, (struct _LIST_ENTRY *)this + 10);
      v9 = (DXGDEVICESYNCOBJECT *)*((_QWORD *)this + 30);
      if ( v9 )
        DXGDEVICESYNCOBJECT::DestroyCoreState(v9);
      for ( i = (DXGHWQUEUE *)*((_QWORD *)this + 50); i != (DXGCONTEXT *)((char *)this + 400) && i; i = *(DXGHWQUEUE **)i )
        DXGHWQUEUE::DestroyCoreState(i, (struct COREDEVICEACCESS *)a2);
      if ( *((_QWORD *)this + 32) || *((_QWORD *)this + 33) )
      {
        if ( !a2 || DXGADAPTER::IsCoreResourceExclusiveOwner(a2[3]) )
        {
          v11 = 0;
        }
        else
        {
          v11 = 1;
          COREDEVICEACCESS::Release((COREDEVICEACCESS *)a2);
        }
        v12 = *((_QWORD *)this + 32);
        v35 = 9uLL;
        if ( v12 )
          (*(void (__fastcall **)(__int64, __int128 *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                              + 520LL)
                                                                  + 8LL)
                                                      + 296LL))(
            v12,
            &v35);
        v13 = *((_QWORD *)this + 33);
        if ( v13 )
          (*(void (__fastcall **)(__int64, __int128 *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                              + 520LL)
                                                                  + 8LL)
                                                      + 296LL))(
            v13,
            &v35);
        if ( v11 )
          COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)a2);
        if ( *((DXGCONTEXT **)this + 41) != (DXGCONTEXT *)((char *)this + 328)
          || (v14 = 0, *(_QWORD *)(*((_QWORD *)this + 2) + 688LL) != *((_QWORD *)this + 2) + 688LL) )
        {
          v14 = 1;
        }
        v15 = *((_QWORD *)this + 32);
        if ( v15 && v14 )
          (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                          + 520LL)
                                                              + 8LL)
                                                  + 312LL))(
            v15,
            0LL);
        v16 = *((_QWORD *)this + 33);
        if ( v16 && v14 )
          (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                          + 520LL)
                                                              + 8LL)
                                                  + 312LL))(
            v16,
            0LL);
      }
      v17 = *((_QWORD *)this + 43);
      if ( v17 )
      {
        if ( !*((_QWORD *)this + 7) )
        {
          v25 = WdLogNewEntry5_WdAssertion(v17);
          *(_QWORD *)(v25 + 24) = 1763LL;
          WdLogEvent5_WdAssertion(v25);
          v17 = *((_QWORD *)this + 43);
        }
        (*(void (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 544LL)
                                                    + 8LL)
                                        + 512LL))(v17);
        (*(void (__fastcall **)(_QWORD, char *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                       + 544LL)
                                                           + 8LL)
                                               + 496LL))(
          *((_QWORD *)this + 43),
          (char *)this + 376);
        *((_QWORD *)this + 43) = 0LL;
      }
      v18 = *((_QWORD *)this + 44);
      if ( v18 )
      {
        (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                        + 544LL)
                                                            + 8LL)
                                                + 496LL))(
          v18,
          0LL);
        *((_QWORD *)this + 44) = 0LL;
      }
      if ( *((_QWORD *)this + 29) )
      {
        (*(void (**)(void))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 544LL) + 8LL) + 448LL))();
        *((_QWORD *)this + 29) = 0LL;
      }
      v19 = (DXGDEVICESYNCOBJECT *)*((_QWORD *)this + 30);
      if ( v19 )
      {
        DXGDEVICESYNCOBJECT::`scalar deleting destructor'(v19);
        *((_QWORD *)this + 30) = 0LL;
      }
      if ( *((_QWORD *)this + 32) )
      {
        (*(void (**)(void))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 520LL) + 8LL) + 240LL))();
        *((_QWORD *)this + 32) = 0LL;
      }
      if ( *((_QWORD *)this + 36) )
      {
        (*(void (**)(void))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 520LL) + 8LL) + 264LL))();
        *((_QWORD *)this + 36) = 0LL;
      }
      if ( *((_QWORD *)this + 35) )
      {
        (*(void (**)(void))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 520LL) + 8LL) + 248LL))();
        *((_QWORD *)this + 35) = 0LL;
      }
      if ( *((_QWORD *)this + 33) )
      {
        (*(void (**)(void))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 520LL) + 8LL) + 240LL))();
        *((_QWORD *)this + 33) = 0LL;
      }
      if ( *((_QWORD *)this + 34) )
      {
        (*(void (**)(void))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 544LL) + 8LL) + 1000LL))();
        *((_QWORD *)this + 34) = 0LL;
      }
      if ( (*((_DWORD *)this + 10) & 1) != 0 )
      {
        v20 = (void *)*((_QWORD *)this + 23);
        if ( v20 )
        {
          ADAPTER_RENDER::DdiDestroyContext(*(ADAPTER_RENDER **)(*((_QWORD *)this + 2) + 16LL), v20);
          *((_QWORD *)this + 23) = 0LL;
        }
      }
      if ( bTracingEnabled )
      {
        v21 = *(_OWORD *)((char *)this + 216);
        v35 = *(_OWORD *)((char *)this + 200);
        v36 = v21;
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        {
          v34 = 0;
          v33 = v36;
          v32 = HIDWORD(v35);
          v31 = DWORD2(v35);
          v30 = DWORD1(v35);
          v29 = v35;
          v28 = *((_DWORD *)this + 97);
          v26 = *((_DWORD *)this + 96);
          McTemplateK0pqqqqqqqqppp(
            DWORD1(v35),
            &EventDestroyContext,
            (const GUID *)v35,
            *((_QWORD *)this + 2),
            v26,
            v28,
            v29,
            v30,
            v31,
            v32,
            v33,
            v34,
            this,
            0LL,
            0LL);
        }
      }
      if ( !*((_BYTE *)this + 429) )
        DXGADAPTER::NotifyContextCreation(
          *(DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL),
          this,
          0,
          *((_DWORD *)this + 96));
    }
  }
}
