/*
 * XREFs of ?CreateModeList@ADAPTER_DISPLAY@@QEAAJEPEAU_D3DKMT_GETDISPLAYMODELIST@@@Z @ 0x1C0120954
 * Callers:
 *     ?DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@EAEAU_D3DKMT_GETDISPLAYMODELIST@@PEAE@Z @ 0x1C0121CCC (-DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@EAEAU_D3DKMT_GETDISPLAYMODEL.c)
 * Callees:
 *     DxgkLogCodePointPacket @ 0x1C00051F4 (DxgkLogCodePointPacket.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000DF84 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000E054 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000E790 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C0011F20 (--_V@YAXPEAX@Z.c)
 *     McTemplateK0pqq @ 0x1C002FEE4 (McTemplateK0pqq.c)
 *     ?GetActiveVidPnBasedDisplayModeList@@YAJQEAXEPEAU_D3DKMT_GETDISPLAYMODELIST@@1@Z @ 0x1C012033C (-GetActiveVidPnBasedDisplayModeList@@YAJQEAXEPEAU_D3DKMT_GETDISPLAYMODELIST@@1@Z.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::CreateModeList(
        ADAPTER_DISPLAY *this,
        char a2,
        struct _D3DKMT_GETDISPLAYMODELIST *a3)
{
  __int64 v6; // rcx
  const GUID *v7; // r8
  __int64 v8; // r14
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  DXGADAPTER *v12; // rcx
  __int64 ActiveVidPnBasedDisplayModeList; // rsi
  const GUID *v14; // r8
  __int64 VidPnSourceId; // rdx
  void *v16; // rcx
  __int64 v17; // xmm1_8
  __int64 v18; // rcx
  __int64 v19; // rdx
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
  v8 = v29 * KeQueryTimeIncrement();
  if ( !a3 )
  {
    v9 = WdLogNewEntry5_WdAssertion(v6);
    *(_QWORD *)(v9 + 24) = 5968LL;
    WdLogEvent5_WdAssertion(v9);
  }
  if ( a3->VidPnSourceId >= *((_DWORD *)this + 20) )
  {
    v10 = WdLogNewEntry5_WdAssertion(v6);
    *(_QWORD *)(v10 + 24) = 5969LL;
    WdLogEvent5_WdAssertion(v10);
  }
  if ( a3->pModeList )
  {
    v11 = WdLogNewEntry5_WdAssertion(v6);
    *(_QWORD *)(v11 + 24) = 5970LL;
    WdLogEvent5_WdAssertion(v11);
  }
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    McTemplateK0pqq(v6, &EventStartRebuildModeCache, v7, this, a3->VidPnSourceId, 0);
  v12 = (DXGADAPTER *)*((_QWORD *)this + 2);
  v27[0] = 0LL;
  v27[1] = 0LL;
  v28 = 0LL;
  ActiveVidPnBasedDisplayModeList = (int)GetActiveVidPnBasedDisplayModeList(
                                           v12,
                                           a2,
                                           a3,
                                           (struct _D3DKMT_GETDISPLAYMODELIST *)((unsigned __int64)v27 & -(__int64)(*((_QWORD *)this + 22) != 0LL)));
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v26, (ADAPTER_DISPLAY *)((char *)this + 136), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v26);
  v14 = (const GUID *)*((_QWORD *)this + 22);
  if ( v14 )
  {
    VidPnSourceId = a3->VidPnSourceId;
    v16 = *(void **)&v14->Data4[24 * VidPnSourceId];
    if ( v16 )
    {
      operator delete[](v16);
      LODWORD(VidPnSourceId) = a3->VidPnSourceId;
      v14 = (const GUID *)*((_QWORD *)this + 22);
    }
    v17 = v28;
    v18 = 3LL * (unsigned int)VidPnSourceId;
    *(const GUID *)((char *)v14 + 8 * v18) = *(const GUID *)v27;
    *((_QWORD *)&v14[1].Data1 + v18) = v17;
  }
  else
  {
    v18 = (__int64)v27[1];
    if ( v27[1] )
      operator delete[](v27[1]);
  }
  if ( v26[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v26);
  if ( (int)ActiveVidPnBasedDisplayModeList < 0 )
  {
    operator delete[](a3->pModeList);
    a3->pModeList = 0LL;
    v21 = (_QWORD *)WdLogNewEntry5_WdEvent(v20, v19);
    v21[3] = this;
    v21[4] = a3->VidPnSourceId;
    v21[5] = ActiveVidPnBasedDisplayModeList;
    WdLogEvent5_WdEvent(v21);
  }
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
  {
    LODWORD(v25) = ActiveVidPnBasedDisplayModeList;
    LODWORD(v24) = a3->VidPnSourceId;
    McTemplateK0pqq(v18, &EventEndRebuildModeCache, v14, this, v24, v25);
  }
  v30 = MEMORY[0xFFFFF78000000320];
  TimeIncrement = KeQueryTimeIncrement();
  DxgkLogCodePointPacket(
    0x1Du,
    a3->VidPnSourceId,
    ActiveVidPnBasedDisplayModeList,
    (v30 * (unsigned __int64)TimeIncrement - v8) / 0x2710,
    *(_QWORD *)(*((_QWORD *)this + 2) + 276LL));
  return (unsigned int)ActiveVidPnBasedDisplayModeList;
}
