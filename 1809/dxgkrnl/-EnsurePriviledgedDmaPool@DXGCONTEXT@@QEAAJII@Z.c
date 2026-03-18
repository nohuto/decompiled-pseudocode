/*
 * XREFs of ?EnsurePriviledgedDmaPool@DXGCONTEXT@@QEAAJII@Z @ 0x1C011D290
 * Callers:
 *     ?Initialize@DXGCONTEXT@@QEAAJPEAXI@Z @ 0x1C00E6380 (-Initialize@DXGCONTEXT@@QEAAJPEAXI@Z.c)
 *     ?AcquireDmaBuffer@DXGCONTEXT@@QEAAJPEAPEAU_VIDMM_DMA_BUFFER@@PEAVCOREDEVICEACCESS@@E@Z @ 0x1C013D9E8 (-AcquireDmaBuffer@DXGCONTEXT@@QEAAJPEAPEAU_VIDMM_DMA_BUFFER@@PEAVCOREDEVICEACCESS@@E@Z.c)
 * Callees:
 *     ?AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C000FFE8 (-AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@@Z @ 0x1C001003C (--0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@@Z.c)
 *     ?Release@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0011D54 (-Release@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00231C0 (memset.c)
 *     ??_GDXGDEVICESYNCOBJECT@@QEAAPEAXI@Z @ 0x1C0035970 (--_GDXGDEVICESYNCOBJECT@@QEAAPEAXI@Z.c)
 *     ?CreateSyncObject@DXGGLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@IPEAU_D3DDDI_SYNCHRONIZATIONOBJECTINFO2@@U_VIDSCH_SYNC_OBJECT_CLIENTHINT@@_NPEAVDXGPAGINGQUEUE@@PEAPEAVDXGSYNCOBJECT@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEAPEAVDXGADAPTERSYNCOBJECT@@@Z @ 0x1C00DDED4 (-CreateSyncObject@DXGGLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@IPEAU_D3DDDI_SYNCHRONIZATIO.c)
 */

__int64 __fastcall DXGCONTEXT::EnsurePriviledgedDmaPool(DXGCONTEXT *this, int a2, int a3)
{
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rbx
  int v11; // eax
  __int64 v12; // rax
  DXGDEVICESYNCOBJECT *v13; // rcx
  __int64 v14; // rcx
  PERESOURCE *Global; // rax
  struct DXGDEVICE *v16; // rdi
  __int64 v17; // rcx
  unsigned int v18; // r14d
  struct ADAPTER_RENDER *v19; // rsi
  struct DXGGLOBAL *v20; // rax
  int SyncObject; // eax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // rax
  char v26; // [rsp+20h] [rbp-B8h]
  _BYTE v27[8]; // [rsp+60h] [rbp-78h] BYREF
  char v28; // [rsp+68h] [rbp-70h]
  _QWORD v29[10]; // [rsp+70h] [rbp-68h] BYREF

  if ( *((_QWORD *)this + 29) )
    return 0LL;
  v26 = 1;
  v7 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, DXGCONTEXT *, char, _DWORD, int, int, _DWORD, _DWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 544LL) + 8LL) + 432LL))(
         *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 552LL),
         *((unsigned int *)this + 98),
         *(_QWORD *)(*((_QWORD *)this + 2) + 648LL),
         this,
         v26,
         *((_DWORD *)this + 50),
         a2,
         a3,
         *((_DWORD *)this + 51),
         *((_DWORD *)this + 52));
  *((_QWORD *)this + 29) = v7;
  if ( v7 )
  {
    LODWORD(v10) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                              + 544LL)
                                                                  + 8LL)
                                                      + 440LL))(v7);
    if ( (int)v10 >= 0 )
    {
      v11 = *((_DWORD *)this + 99);
      *((_DWORD *)this + 53) = a2;
      *((_DWORD *)this + 54) = a3;
      if ( (v11 & 0x10) == 0 )
        return 0LL;
      memset(v29, 0, sizeof(v29));
      LODWORD(v29[0]) = 5;
      *((_QWORD *)this + 31) = 0LL;
      v29[1] = 0LL;
      Global = (PERESOURCE *)DXGGLOBAL::GetGlobal(v14);
      DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v27, Global);
      DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)v27);
      v16 = (struct DXGDEVICE *)*((_QWORD *)this + 2);
      v17 = *((unsigned int *)this + 98);
      v18 = 1 << v17;
      v19 = (struct ADAPTER_RENDER *)*((_QWORD *)v16 + 2);
      v20 = DXGGLOBAL::GetGlobal(v17);
      SyncObject = DXGGLOBAL::CreateSyncObject(
                     (__int64)v20,
                     v19,
                     v16,
                     v18,
                     (__int64)v29,
                     4u,
                     0,
                     0LL,
                     0LL,
                     (struct DXGDEVICESYNCOBJECT **)this + 30,
                     0LL,
                     0LL);
      v10 = SyncObject;
      if ( SyncObject >= 0 )
      {
        if ( v28 )
          DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v27);
        return 0LL;
      }
      v25 = WdLogNewEntry5_WdWarning(v23, v22, v24);
      *(_QWORD *)(v25 + 24) = this;
      *(_QWORD *)(v25 + 32) = v10;
      WdLogEvent5_WdWarning(v25);
      if ( v28 )
        DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v27);
    }
  }
  else
  {
    v12 = WdLogNewEntry5_WdWarning(v8, 0LL, v9);
    LODWORD(v10) = -1073741801;
    *(_QWORD *)(v12 + 24) = this;
    *(_QWORD *)(v12 + 32) = -1073741801LL;
    WdLogEvent5_WdWarning(v12);
  }
  v13 = (DXGDEVICESYNCOBJECT *)*((_QWORD *)this + 30);
  if ( v13 )
  {
    DXGDEVICESYNCOBJECT::`scalar deleting destructor'(v13);
    *((_QWORD *)this + 30) = 0LL;
  }
  if ( *((_QWORD *)this + 29) )
  {
    (*(void (**)(void))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 544LL) + 8LL) + 448LL))();
    *((_QWORD *)this + 29) = 0LL;
  }
  return (unsigned int)v10;
}
