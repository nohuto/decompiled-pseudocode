/*
 * XREFs of ?AcquireDmaBuffer@DXGCONTEXT@@QEAAJPEAPEAU_VIDMM_DMA_BUFFER@@PEAVCOREDEVICEACCESS@@E@Z @ 0x1C01522BC
 * Callers:
 *     ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C010A6E0 (-Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESET.c)
 *     ?SubmitPresentWithDmaBuffer@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@PEBUDXGK_PRESENT_PARAMS@@IPEAVDXGALLOCATION@@2PEAU_DXGKARG_PRESENT@@PEAU_VIDMM_DMA_BUFFER@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C011B5A0 (-SubmitPresentWithDmaBuffer@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@PEBUDXGK_PRESENT_PARAMS@@IPEAV.c)
 *     ?Blt@DXGCONTEXT@@QEAAJIIIPEAPEAV1@PEAUtagRECT@@IPEBU2@PEAVCOREDEVICEACCESS@@PEBUDXGK_PRESENT_PARAMS@@@Z @ 0x1C02581C0 (-Blt@DXGCONTEXT@@QEAAJIIIPEAPEAV1@PEAUtagRECT@@IPEBU2@PEAVCOREDEVICEACCESS@@PEBUDXGK_PRESENT_PAR.c)
 *     ?BltFromVm@DXGCONTEXT@@QEAAJIIIPEAPEAV1@UtagRECT@@1IPEBU2@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0258ACC (-BltFromVm@DXGCONTEXT@@QEAAJIIIPEAPEAV1@UtagRECT@@1IPEBU2@PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?ReserveDmaBuffersForBlts@DXGCONTEXT@@QEAAJPEAVCOREDEVICEACCESS@@IPEAPEAU_VIDMM_DMA_BUFFER@@@Z @ 0x1C025B5B0 (-ReserveDmaBuffersForBlts@DXGCONTEXT@@QEAAJPEAVCOREDEVICEACCESS@@IPEAPEAU_VIDMM_DMA_BUFFER@@@Z.c)
 *     ?RenderKmLda@DXGCONTEXT@@SAJPEAU_D3DKMT_RENDER@@PEAVCOREDEVICEACCESS@@PEAPEAV1@PEAPEAVDXGALLOCATION@@PEAPEAVDXGHWQUEUE@@@Z @ 0x1C0267C8C (-RenderKmLda@DXGCONTEXT@@SAJPEAU_D3DKMT_RENDER@@PEAVCOREDEVICEACCESS@@PEAPEAV1@PEAPEAVDXGALLOCAT.c)
 * Callees:
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x1C000469C (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?Release@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C00072E0 (-Release@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ?AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C00073D0 (-AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@@Z @ 0x1C0007424 (--0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@@Z.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C0007470 (-AcquireShared@COREDEVICEACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C00075A8 (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C510 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??_GDXGDEVICESYNCOBJECT@@QEAAPEAXI@Z @ 0x1C000CABC (--_GDXGDEVICESYNCOBJECT@@QEAAPEAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00250D0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0025440 (memset.c)
 *     ?CreateSyncObject@DXGGLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@IPEAU_D3DDDI_SYNCHRONIZATIONOBJECTINFO2@@U_VIDSCH_SYNC_OBJECT_CLIENTHINT@@_NPEAVDXGPAGINGQUEUE@@PEAPEAVDXGSYNCOBJECT@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEAPEAVDXGADAPTERSYNCOBJECT@@@Z @ 0x1C00FA870 (-CreateSyncObject@DXGGLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@IPEAU_D3DDDI_SYNCHRONIZATIO.c)
 */

__int64 __fastcall DXGCONTEXT::AcquireDmaBuffer(
        DXGCONTEXT *this,
        struct _VIDMM_DMA_BUFFER **a2,
        struct COREDEVICEACCESS *a3,
        char a4)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  int v11; // edi
  __int64 v12; // rbx
  __int64 v13; // rdi
  int v14; // eax
  __int64 v15; // rcx
  int v17; // esi
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // r8
  int v21; // eax
  __int64 v22; // rax
  DXGDEVICESYNCOBJECT *v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // rcx
  PERESOURCE *Global; // rax
  struct DXGDEVICE *v27; // rsi
  __int64 v28; // rcx
  unsigned int v29; // edi
  struct ADAPTER_RENDER *v30; // rbp
  __int64 v31; // rdx
  struct DXGGLOBAL *v32; // rax
  int SyncObject; // eax
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // r8
  int v37; // eax
  __int64 v38; // rcx
  __int64 v39; // rdi
  __int64 v40; // rax
  __int64 v41; // rax
  _BYTE v42[8]; // [rsp+60h] [rbp-88h] BYREF
  char v43; // [rsp+68h] [rbp-80h]
  _QWORD v44[10]; // [rsp+70h] [rbp-78h] BYREF

  if ( *((_BYTE *)this + 449) )
  {
    *a2 = 0LL;
    return 0LL;
  }
  ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(*((_QWORD *)this + 2) + 104LL));
  v11 = 3;
  if ( *((_DWORD *)this + 18) > 3u )
    v11 = *((_DWORD *)this + 18);
  if ( *((_QWORD *)this + 29) )
    goto LABEL_5;
  v17 = *((_DWORD *)this + 26);
  v18 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, DXGCONTEXT *, char, _DWORD, int, int, _DWORD, _DWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 544LL) + 8LL) + 432LL))(
          *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 552LL),
          *((unsigned int *)this + 102),
          *(_QWORD *)(*((_QWORD *)this + 2) + 648LL),
          this,
          1,
          *((_DWORD *)this + 50),
          v11,
          v17,
          *((_DWORD *)this + 51),
          *((_DWORD *)this + 52));
  *((_QWORD *)this + 29) = v18;
  if ( !v18 )
  {
    v22 = WdLogNewEntry5_WdWarning(v19, 0LL, v20);
    LODWORD(v12) = -1073741801;
    *(_QWORD *)(v22 + 24) = this;
    *(_QWORD *)(v22 + 32) = -1073741801LL;
    WdLogEvent5_WdWarning(v22);
    goto LABEL_17;
  }
  LODWORD(v12) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                            + 544LL)
                                                                + 8LL)
                                                    + 440LL))(v18);
  if ( (int)v12 < 0 )
  {
LABEL_17:
    v23 = (DXGDEVICESYNCOBJECT *)*((_QWORD *)this + 30);
    if ( v23 )
    {
      DXGDEVICESYNCOBJECT::`scalar deleting destructor'(v23);
      *((_QWORD *)this + 30) = 0LL;
    }
    v9 = *((_QWORD *)this + 29);
    if ( v9 )
    {
      (*(void (**)(void))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 544LL) + 8LL) + 448LL))();
      *((_QWORD *)this + 29) = 0LL;
    }
    goto LABEL_6;
  }
  v21 = *((_DWORD *)this + 103);
  *((_DWORD *)this + 53) = v11;
  *((_DWORD *)this + 54) = v17;
  if ( (v21 & 0x10) != 0 )
  {
    memset(v44, 0, sizeof(v44));
    LODWORD(v44[0]) = 5;
    *((_QWORD *)this + 31) = 0LL;
    v44[1] = 0LL;
    Global = (PERESOURCE *)DXGGLOBAL::GetGlobal(v25, v24);
    DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v42, Global);
    DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)v42);
    v27 = (struct DXGDEVICE *)*((_QWORD *)this + 2);
    v28 = *((unsigned int *)this + 102);
    v29 = 1 << v28;
    v30 = (struct ADAPTER_RENDER *)*((_QWORD *)v27 + 2);
    v32 = DXGGLOBAL::GetGlobal(v28, v31);
    SyncObject = DXGGLOBAL::CreateSyncObject(
                   (__int64)v32,
                   v30,
                   v27,
                   v29,
                   (__int64)v44,
                   4u,
                   0,
                   0LL,
                   0LL,
                   (struct DXGDEVICESYNCOBJECT **)this + 30,
                   0LL,
                   0LL);
    v12 = SyncObject;
    if ( SyncObject < 0 )
    {
      v34 = WdLogNewEntry5_WdWarning(v9, v8, v10);
      *(_QWORD *)(v34 + 24) = this;
      *(_QWORD *)(v34 + 32) = v12;
      WdLogEvent5_WdWarning(v34);
      if ( v43 )
        DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v42);
      goto LABEL_17;
    }
    if ( v43 )
      DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v42);
  }
LABEL_5:
  LODWORD(v12) = 0;
LABEL_6:
  if ( (int)v12 < 0 )
  {
    v35 = WdLogNewEntry5_WdWarning(v9, v8, v10);
    *(_QWORD *)(v35 + 24) = this;
    WdLogEvent5_WdWarning(v35);
    return (unsigned int)v12;
  }
  v13 = *((_QWORD *)this + 29);
  LOBYTE(v8) = 1;
  v14 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, struct _VIDMM_DMA_BUFFER **))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 544LL) + 8LL)
                                                                                         + 488LL))(
          v13,
          v8,
          0LL,
          a2);
  v12 = v14;
  if ( v14 != -1071775486 )
  {
    if ( v14 < 0 )
    {
      v41 = WdLogNewEntry5_WdEvent(v15);
      *(_QWORD *)(v41 + 24) = this;
      *(_QWORD *)(v41 + 32) = v12;
      WdLogEvent5_WdEvent(v41);
    }
    return (unsigned int)v12;
  }
  if ( !a3 )
    return (unsigned int)v12;
  COREDEVICEACCESS::Release(a3);
  LOBYTE(v36) = a4;
  LODWORD(v12) = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, struct _VIDMM_DMA_BUFFER **))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 544LL) + 8LL)
                                                                                                  + 488LL))(
                   v13,
                   0LL,
                   v36,
                   a2);
  v37 = COREDEVICEACCESS::AcquireShared((__int64)a3, 0xFFFFFFFF, 0LL);
  v39 = v37;
  if ( v37 >= 0 )
    return (unsigned int)v12;
  v40 = WdLogNewEntry5_WdEvent(v38);
  *(_QWORD *)(v40 + 24) = this;
  *(_QWORD *)(v40 + 32) = v39;
  WdLogEvent5_WdEvent(v40);
  COREDEVICEACCESS::AcquireSharedUncheck((__int64)a3);
  return (unsigned int)v39;
}
