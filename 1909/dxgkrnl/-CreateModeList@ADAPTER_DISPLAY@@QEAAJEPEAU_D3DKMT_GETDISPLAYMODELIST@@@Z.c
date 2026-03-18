/*
 * XREFs of ?CreateModeList@ADAPTER_DISPLAY@@QEAAJEPEAU_D3DKMT_GETDISPLAYMODELIST@@@Z @ 0x1C0170B68
 * Callers:
 *     ?DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@EAEAU_D3DKMT_GETDISPLAYMODELIST@@PEAE@Z @ 0x1C00C7B08 (-DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@EAEAU_D3DKMT_GETDISPLAYMODEL.c)
 * Callees:
 *     ?DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z @ 0x1C0002E40 (-DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0007290 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007784 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000801C (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??_V@YAXPEAX@Z @ 0x1C000C530 (--_V@YAXPEAX@Z.c)
 *     McTemplateK0pqq @ 0x1C0035844 (McTemplateK0pqq.c)
 *     ?GetActiveVidPnBasedDisplayModeList@@YAJQEAXEPEAU_D3DKMT_GETDISPLAYMODELIST@@1@Z @ 0x1C0170DE0 (-GetActiveVidPnBasedDisplayModeList@@YAJQEAXEPEAU_D3DKMT_GETDISPLAYMODELIST@@1@Z.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::CreateModeList(
        ADAPTER_DISPLAY *this,
        unsigned __int8 a2,
        struct _D3DKMT_GETDISPLAYMODELIST *a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  const GUID *v8; // r8
  __int64 v9; // r14
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  void *v13; // rcx
  __int64 ActiveVidPnBasedDisplayModeList; // rsi
  const GUID *v15; // r8
  __int64 VidPnSourceId; // rdx
  void *v17; // rcx
  __int64 v18; // xmm1_8
  __int64 v19; // rcx
  __int64 v20; // rcx
  _QWORD *v21; // rax
  ULONG TimeIncrement; // eax
  __int64 v24; // [rsp+20h] [rbp-40h]
  __int64 v25; // [rsp+28h] [rbp-38h]
  _BYTE v26[16]; // [rsp+30h] [rbp-30h] BYREF
  void *v27[2]; // [rsp+40h] [rbp-20h] BYREF
  __int64 v28; // [rsp+50h] [rbp-10h]
  __int64 v29; // [rsp+90h] [rbp+30h]
  __int64 v30; // [rsp+A0h] [rbp+40h]

  v29 = MEMORY[0xFFFFF78000000320];
  v9 = v29 * KeQueryTimeIncrement();
  if ( !a3 )
  {
    v10 = WdLogNewEntry5_WdAssertion(v7, v6);
    *(_QWORD *)(v10 + 24) = 6221LL;
    WdLogEvent5_WdAssertion(v10);
  }
  if ( a3->VidPnSourceId >= *((_DWORD *)this + 20) )
  {
    v11 = WdLogNewEntry5_WdAssertion(v7, v6);
    *(_QWORD *)(v11 + 24) = 6222LL;
    WdLogEvent5_WdAssertion(v11);
  }
  if ( a3->pModeList )
  {
    v12 = WdLogNewEntry5_WdAssertion(v7, v6);
    *(_QWORD *)(v12 + 24) = 6223LL;
    WdLogEvent5_WdAssertion(v12);
  }
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    McTemplateK0pqq(v7, &EventStartRebuildModeCache, v8, this, a3->VidPnSourceId, 0);
  v13 = (void *)*((_QWORD *)this + 2);
  v27[0] = 0LL;
  v27[1] = 0LL;
  v28 = 0LL;
  ActiveVidPnBasedDisplayModeList = (int)GetActiveVidPnBasedDisplayModeList(
                                           v13,
                                           a2,
                                           a3,
                                           (struct _D3DKMT_GETDISPLAYMODELIST *)((unsigned __int64)v27 & -(__int64)(*((_QWORD *)this + 35) != 0LL)));
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v26, (ADAPTER_DISPLAY *)((char *)this + 240), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v26);
  v15 = (const GUID *)*((_QWORD *)this + 35);
  if ( v15 )
  {
    VidPnSourceId = a3->VidPnSourceId;
    v17 = *(void **)&v15->Data4[24 * VidPnSourceId];
    if ( v17 )
    {
      operator delete[](v17);
      LODWORD(VidPnSourceId) = a3->VidPnSourceId;
      v15 = (const GUID *)*((_QWORD *)this + 35);
    }
    v18 = v28;
    v19 = 3LL * (unsigned int)VidPnSourceId;
    *(const GUID *)((char *)v15 + 8 * v19) = *(const GUID *)v27;
    *((_QWORD *)&v15[1].Data1 + v19) = v18;
  }
  else
  {
    v19 = (__int64)v27[1];
    if ( v27[1] )
      operator delete[](v27[1]);
  }
  if ( v26[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v26);
  if ( (int)ActiveVidPnBasedDisplayModeList < 0 )
  {
    operator delete[](a3->pModeList);
    a3->pModeList = 0LL;
    v21 = (_QWORD *)WdLogNewEntry5_WdEvent(v20);
    v21[3] = this;
    v21[4] = a3->VidPnSourceId;
    v21[5] = ActiveVidPnBasedDisplayModeList;
    WdLogEvent5_WdEvent(v21);
  }
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
  {
    LODWORD(v25) = ActiveVidPnBasedDisplayModeList;
    LODWORD(v24) = a3->VidPnSourceId;
    McTemplateK0pqq(v19, &EventEndRebuildModeCache, v15, this, v24, v25);
  }
  v30 = MEMORY[0xFFFFF78000000320];
  TimeIncrement = KeQueryTimeIncrement();
  DxgkLogCodePointPacket(
    0x1Du,
    a3->VidPnSourceId,
    ActiveVidPnBasedDisplayModeList,
    (v30 * (unsigned __int64)TimeIncrement - v9) / 0x2710,
    *(_QWORD *)(*((_QWORD *)this + 2) + 276LL));
  return (unsigned int)ActiveVidPnBasedDisplayModeList;
}
