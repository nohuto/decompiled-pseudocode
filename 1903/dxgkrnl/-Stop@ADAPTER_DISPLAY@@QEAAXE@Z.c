/*
 * XREFs of ?Stop@ADAPTER_DISPLAY@@QEAAXE@Z @ 0x1C01F4248
 * Callers:
 *     ?Stop@DXGADAPTER@@QEAAXEE@Z @ 0x1C01EEFE8 (-Stop@DXGADAPTER@@QEAAXEE@Z.c)
 * Callees:
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0008690 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000874C (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C320 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?IsAddapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z @ 0x1C000E028 (-IsAddapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z.c)
 *     ?ReleaseAllVidPnSourceOwners@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z @ 0x1C0155E34 (-ReleaseAllVidPnSourceOwners@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z.c)
 *     ?Stop@DXGPROTECTEDSESSION@@QEAAXXZ @ 0x1C02617A0 (-Stop@DXGPROTECTEDSESSION@@QEAAXXZ.c)
 *     ?CleanCachedIddDisplayConfigRequest@DXGSESSIONMGR@@QEAAJK@Z @ 0x1C02768C8 (-CleanCachedIddDisplayConfigRequest@DXGSESSIONMGR@@QEAAJK@Z.c)
 */

void __fastcall ADAPTER_DISPLAY::Stop(ADAPTER_DISPLAY *this, struct _LUID *a2)
{
  PERESOURCE **v3; // rdx
  _DWORD *i; // rax
  DXGPROTECTEDSESSION *j; // rdi
  DXGADAPTER *v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  struct DXGGLOBAL *Global; // rax
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rdi
  __int64 v15; // rax
  unsigned int v16; // [rsp+48h] [rbp+10h] BYREF

  if ( !(_BYTE)a2 )
  {
    v3 = *(PERESOURCE ***)(*((_QWORD *)this + 2) + 2560LL);
    if ( !v3 )
      v3 = 0LL;
    ADAPTER_DISPLAY::ReleaseAllVidPnSourceOwners((PERESOURCE **)this, v3);
    DXGFASTMUTEX::Acquire((ADAPTER_DISPLAY *)((char *)this + 24));
    for ( i = (_DWORD *)*((_QWORD *)this + 8); i != (_DWORD *)((char *)this + 64) && i; i = *(_DWORD **)i )
      i[14] = 0;
    DXGFASTMUTEX::Release((struct _KTHREAD **)this + 3);
    DXGFASTMUTEX::Acquire((ADAPTER_DISPLAY *)((char *)this + 544));
    for ( j = (DXGPROTECTEDSESSION *)*((_QWORD *)this + 73);
          j != (ADAPTER_DISPLAY *)((char *)this + 584) && j;
          j = *(DXGPROTECTEDSESSION **)j )
    {
      DXGPROTECTEDSESSION::Stop(j);
    }
    DXGFASTMUTEX::Release((struct _KTHREAD **)this + 68);
  }
  v6 = (DXGADAPTER *)*((_QWORD *)this + 2);
  if ( (*((_DWORD *)v6 + 77) & 0x100) != 0 && DXGADAPTER::IsAddapterSessionized(v6, a2, &v16, 0LL) )
  {
    Global = DXGGLOBAL::GetGlobal(v8, v7);
    v10 = DXGSESSIONMGR::CleanCachedIddDisplayConfigRequest(*((DXGSESSIONMGR **)Global + 74), v16);
    v14 = v10;
    if ( v10 < 0 )
    {
      v15 = WdLogNewEntry5_WdError(v12, v11, v13);
      *(_QWORD *)(v15 + 24) = v16;
      *(_QWORD *)(v15 + 32) = v14;
      WdLogEvent5_WdError(v15);
    }
  }
  KeCancelTimer((PKTIMER)((char *)this + 608));
  KeFlushQueuedDpcs();
}
