/*
 * XREFs of ?ProcessPresent@OUTPUTDUPL_MGR@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_OUTPUTDUPLPRESENT@@IPEAPEAV2@PEAVCOREDEVICEACCESS@@@Z @ 0x1C023F1D0
 * Callers:
 *     ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C0107E40 (-Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESET.c)
 *     ?OutputDuplPresentInternal@@YAJPEAVDXGADAPTER@@PEAVDXGCONTEXT@@PEAU_D3DKMT_OUTPUTDUPLPRESENT@@PEAPEAV2@@Z @ 0x1C023EE78 (-OutputDuplPresentInternal@@YAJPEAVDXGADAPTER@@PEAVDXGCONTEXT@@PEAU_D3DKMT_OUTPUTDUPLPRESENT@@PE.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000DF84 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000E054 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000E790 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     ?MoveContextToPendingDestroyList@OUTPUTDUPL_MGR@@QEAAXIPEAVDXGDEVICE@@HHW4_DXGK_DIAG_OUTPUTDUPL_DESTROY_REASON@@@Z @ 0x1C012B530 (-MoveContextToPendingDestroyList@OUTPUTDUPL_MGR@@QEAAXIPEAVDXGDEVICE@@HHW4_DXGK_DIAG_OUTPUTDUPL_.c)
 *     ?QueryActiveContextCount@OUTPUTDUPL_MGR@@QEAAII@Z @ 0x1C0137A40 (-QueryActiveContextCount@OUTPUTDUPL_MGR@@QEAAII@Z.c)
 *     ?ReserveDmaBuffersForBlts@DXGCONTEXT@@QEAAJPEAVCOREDEVICEACCESS@@IPEAPEAU_VIDMM_DMA_BUFFER@@@Z @ 0x1C02265A4 (-ReserveDmaBuffersForBlts@DXGCONTEXT@@QEAAJPEAVCOREDEVICEACCESS@@IPEAPEAU_VIDMM_DMA_BUFFER@@@Z.c)
 *     ?UnreserveDmaBuffersForBlts@DXGCONTEXT@@QEAAJXZ @ 0x1C022727C (-UnreserveDmaBuffersForBlts@DXGCONTEXT@@QEAAJXZ.c)
 *     ?IsHighFreqLoggingEnabled@OUTPUTDUPL_MGR@@QEAAHXZ @ 0x1C023D9D8 (-IsHighFreqLoggingEnabled@OUTPUTDUPL_MGR@@QEAAHXZ.c)
 *     ?LogPresentParams@OUTPUTDUPL_MGR@@AEAAJPEBU_D3DKMT_OUTPUTDUPLPRESENT@@PEAVAUTOEXPANDALLOCATION@@@Z @ 0x1C023DFE8 (-LogPresentParams@OUTPUTDUPL_MGR@@AEAAJPEBU_D3DKMT_OUTPUTDUPLPRESENT@@PEAVAUTOEXPANDALLOCATION@@.c)
 *     ?ProcessPresent@OUTPUTDUPL_CONTEXT@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_OUTPUTDUPLPRESENT@@PEAVAUTOEXPANDALLOCATION@@PEAPEAV2@@Z @ 0x1C02447F0 (-ProcessPresent@OUTPUTDUPL_CONTEXT@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_OUTPUTDUPLPRESENT@@PEAVAUTO.c)
 */

__int64 __fastcall OUTPUTDUPL_MGR::ProcessPresent(
        OUTPUTDUPL_MGR *this,
        struct DXGCONTEXT *a2,
        const struct _D3DKMT_OUTPUTDUPLPRESENT *a3,
        unsigned int a4,
        struct DXGCONTEXT **a5,
        struct COREDEVICEACCESS *a6)
{
  unsigned int v8; // edi
  __int64 v9; // r14
  unsigned int ActiveContextCount; // eax
  __int64 v11; // rcx
  int v12; // ebx
  __int64 v13; // rax
  __int64 v15; // r15
  OUTPUTDUPL_CONTEXT *v16; // rcx
  OUTPUTDUPL_CONTEXT **v17; // r14
  unsigned int v18; // r12d
  int v19; // r13d
  DXGDIAGNOSTICSWITHMUTEX **v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rax
  _BYTE v27[24]; // [rsp+48h] [rbp-F0h] BYREF
  struct _VIDMM_DMA_BUFFER *v28; // [rsp+60h] [rbp-D8h] BYREF

  v8 = 0;
  v9 = a4;
  ActiveContextCount = OUTPUTDUPL_MGR::QueryActiveContextCount(this, a3->VidPnSourceId);
  v12 = DXGCONTEXT::ReserveDmaBuffersForBlts(a2, a6, ActiveContextCount, &v28);
  if ( v12 < 0 )
  {
    v13 = WdLogNewEntry5_WdError(v11);
    *(_QWORD *)(v13 + 24) = a2;
    WdLogEvent5_WdError(v13);
    return (unsigned int)v12;
  }
  v15 = *((_QWORD *)this + 2) + 32 * v9;
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v27, *(struct DXGFASTMUTEX *const *)v15, 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v27);
  v17 = *(OUTPUTDUPL_CONTEXT ***)(v15 + 8);
  v18 = 0;
  v19 = 1;
  if ( !*((_DWORD *)this + 2) )
    goto LABEL_19;
  while ( 1 )
  {
    v16 = *v17;
    if ( !*v17 || !*((_DWORD *)v16 + 79) )
      goto LABEL_15;
    if ( v19 )
    {
      if ( (unsigned int)OUTPUTDUPL_MGR::IsHighFreqLoggingEnabled(this) )
      {
        v12 = OUTPUTDUPL_MGR::LogPresentParams(v20, a3, *(struct AUTOEXPANDALLOCATION **)(v15 + 16));
        if ( v12 < 0 )
          goto LABEL_18;
      }
      v16 = *v17;
      v19 = 0;
    }
    v12 = OUTPUTDUPL_CONTEXT::ProcessPresent(v16, a2, a3, *(struct AUTOEXPANDALLOCATION **)(v15 + 16), a5);
    if ( v12 == -1071775486 )
    {
      v12 = 259;
      *((_DWORD *)*v17 + 70) = 1;
LABEL_14:
      v8 = 259;
      goto LABEL_15;
    }
    if ( v12 < 0 )
      break;
    if ( v12 == 259 )
      goto LABEL_14;
LABEL_15:
    ++v18;
    ++v17;
    if ( v18 >= *((_DWORD *)this + 2) )
      goto LABEL_19;
  }
  v8 = v12;
LABEL_18:
  v21 = WdLogNewEntry5_WdError(v16);
  *(_QWORD *)(v21 + 24) = a2;
  WdLogEvent5_WdError(v21);
LABEL_19:
  if ( v27[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v27);
  if ( v12 < 0 )
  {
    v22 = WdLogNewEntry5_WdError(v16);
    *(_QWORD *)(v22 + 24) = a4;
    WdLogEvent5_WdError(v22);
    OUTPUTDUPL_MGR::MoveContextToPendingDestroyList((OUTPUTDUPL_CONTEXT **)this, a4, 0LL, 0, 0, 7);
    if ( v8 != v12 )
    {
      v24 = WdLogNewEntry5_WdAssertion(v23);
      *(_QWORD *)(v24 + 24) = 1166LL;
      WdLogEvent5_WdAssertion(v24);
    }
    if ( v8 != -1073741130 )
      v8 = 259;
  }
  DXGCONTEXT::UnreserveDmaBuffersForBlts(a2);
  return v8;
}
