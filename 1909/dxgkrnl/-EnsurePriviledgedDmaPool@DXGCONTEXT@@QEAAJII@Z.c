/*
 * XREFs of ?EnsurePriviledgedDmaPool@DXGCONTEXT@@QEAAJII@Z @ 0x1C0145BB4
 * Callers:
 *     ?Initialize@DXGCONTEXT@@QEAAJPEAXI@Z @ 0x1C0121A28 (-Initialize@DXGCONTEXT@@QEAAJPEAXI@Z.c)
 * Callees:
 *     ?Release@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C00072E0 (-Release@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ?AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C00073D0 (-AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@@Z @ 0x1C0007424 (--0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C510 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??_GDXGDEVICESYNCOBJECT@@QEAAPEAXI@Z @ 0x1C000CABC (--_GDXGDEVICESYNCOBJECT@@QEAAPEAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00250D0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0025440 (memset.c)
 *     ?CreateSyncObject@DXGGLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@IPEAU_D3DDDI_SYNCHRONIZATIONOBJECTINFO2@@U_VIDSCH_SYNC_OBJECT_CLIENTHINT@@_NPEAVDXGPAGINGQUEUE@@PEAPEAVDXGSYNCOBJECT@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEAPEAVDXGADAPTERSYNCOBJECT@@@Z @ 0x1C00FA870 (-CreateSyncObject@DXGGLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@IPEAU_D3DDDI_SYNCHRONIZATIO.c)
 */

__int64 __fastcall DXGCONTEXT::EnsurePriviledgedDmaPool(DXGCONTEXT *this, int a2, int a3)
{
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rbx
  int v10; // eax
  __int64 v12; // rax
  DXGDEVICESYNCOBJECT *v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rcx
  PERESOURCE *Global; // rax
  struct DXGDEVICE *v17; // rdi
  __int64 v18; // rcx
  unsigned int v19; // r14d
  struct ADAPTER_RENDER *v20; // rsi
  __int64 v21; // rdx
  struct DXGGLOBAL *v22; // rax
  int SyncObject; // eax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // rax
  char v28; // [rsp+20h] [rbp-B8h]
  _BYTE v29[8]; // [rsp+60h] [rbp-78h] BYREF
  char v30; // [rsp+68h] [rbp-70h]
  _QWORD v31[10]; // [rsp+70h] [rbp-68h] BYREF

  if ( *((_QWORD *)this + 29) )
    return 0LL;
  v28 = 1;
  v6 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, DXGCONTEXT *, char, _DWORD, int, int, _DWORD, _DWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 544LL) + 8LL) + 432LL))(
         *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 552LL),
         *((unsigned int *)this + 102),
         *(_QWORD *)(*((_QWORD *)this + 2) + 648LL),
         this,
         v28,
         *((_DWORD *)this + 50),
         a2,
         a3,
         *((_DWORD *)this + 51),
         *((_DWORD *)this + 52));
  *((_QWORD *)this + 29) = v6;
  if ( v6 )
  {
    LODWORD(v9) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                             + 544LL)
                                                                 + 8LL)
                                                     + 440LL))(v6);
    if ( (int)v9 >= 0 )
    {
      v10 = *((_DWORD *)this + 103);
      *((_DWORD *)this + 53) = a2;
      *((_DWORD *)this + 54) = a3;
      if ( (v10 & 0x10) == 0 )
        return 0LL;
      memset(v31, 0, sizeof(v31));
      LODWORD(v31[0]) = 5;
      *((_QWORD *)this + 31) = 0LL;
      v31[1] = 0LL;
      Global = (PERESOURCE *)DXGGLOBAL::GetGlobal(v15, v14);
      DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v29, Global);
      DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)v29);
      v17 = (struct DXGDEVICE *)*((_QWORD *)this + 2);
      v18 = *((unsigned int *)this + 102);
      v19 = 1 << v18;
      v20 = (struct ADAPTER_RENDER *)*((_QWORD *)v17 + 2);
      v22 = DXGGLOBAL::GetGlobal(v18, v21);
      SyncObject = DXGGLOBAL::CreateSyncObject(
                     (__int64)v22,
                     v20,
                     v17,
                     v19,
                     (__int64)v31,
                     4u,
                     0,
                     0LL,
                     0LL,
                     (struct DXGDEVICESYNCOBJECT **)this + 30,
                     0LL,
                     0LL);
      v9 = SyncObject;
      if ( SyncObject >= 0 )
      {
        if ( v30 )
          DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v29);
        return 0LL;
      }
      v27 = WdLogNewEntry5_WdWarning(v25, v24, v26);
      *(_QWORD *)(v27 + 24) = this;
      *(_QWORD *)(v27 + 32) = v9;
      WdLogEvent5_WdWarning(v27);
      if ( v30 )
        DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v29);
    }
  }
  else
  {
    v12 = WdLogNewEntry5_WdWarning(v7, 0LL, v8);
    LODWORD(v9) = -1073741801;
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
  return (unsigned int)v9;
}
