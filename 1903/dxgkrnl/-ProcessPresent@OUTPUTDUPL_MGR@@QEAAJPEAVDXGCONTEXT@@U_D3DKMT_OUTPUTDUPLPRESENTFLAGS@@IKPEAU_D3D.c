/*
 * XREFs of ?ProcessPresent@OUTPUTDUPL_MGR@@QEAAJPEAVDXGCONTEXT@@U_D3DKMT_OUTPUTDUPLPRESENTFLAGS@@IKPEAU_D3DKMT_PRESENT_RGNS@@PEBUDXGK_PRESENT_PARAMS@@IPEAPEAV2@PEAVCOREDEVICEACCESS@@@Z @ 0x1C02744A0
 * Callers:
 *     ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C0105590 (-Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESET.c)
 *     ?OutputDuplPresentToHwQueue@@YAJPEAU_D3DKMT_OUTPUTDUPLPRESENTTOHWQUEUE@@PEAVDXGPROCESS@@@Z @ 0x1C024844C (-OutputDuplPresentToHwQueue@@YAJPEAU_D3DKMT_OUTPUTDUPLPRESENTTOHWQUEUE@@PEAVDXGPROCESS@@@Z.c)
 *     ?OutputDuplPresentInternal@@YAJPEAVDXGADAPTER@@PEAVDXGCONTEXT@@PEAU_D3DKMT_OUTPUTDUPLPRESENT@@PEAPEAV2@@Z @ 0x1C027410C (-OutputDuplPresentInternal@@YAJPEAVDXGADAPTER@@PEAVDXGCONTEXT@@PEAU_D3DKMT_OUTPUTDUPLPRESENT@@PE.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0006FF4 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007560 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007DEC (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     ?MoveContextToPendingDestroyList@OUTPUTDUPL_MGR@@QEAAXIPEAVDXGDEVICE@@HHW4_DXGK_DIAG_OUTPUTDUPL_DESTROY_REASON@@@Z @ 0x1C013D610 (-MoveContextToPendingDestroyList@OUTPUTDUPL_MGR@@QEAAXIPEAVDXGDEVICE@@HHW4_DXGK_DIAG_OUTPUTDUPL_.c)
 *     ?QueryActiveContextCount@OUTPUTDUPL_MGR@@QEAAII@Z @ 0x1C0148670 (-QueryActiveContextCount@OUTPUTDUPL_MGR@@QEAAII@Z.c)
 *     ?ReserveDmaBuffersForBlts@DXGCONTEXT@@QEAAJPEAVCOREDEVICEACCESS@@IPEAPEAU_VIDMM_DMA_BUFFER@@@Z @ 0x1C025AF14 (-ReserveDmaBuffersForBlts@DXGCONTEXT@@QEAAJPEAVCOREDEVICEACCESS@@IPEAPEAU_VIDMM_DMA_BUFFER@@@Z.c)
 *     ?UnreserveDmaBuffersForBlts@DXGCONTEXT@@QEAAJXZ @ 0x1C025BD24 (-UnreserveDmaBuffersForBlts@DXGCONTEXT@@QEAAJXZ.c)
 *     ?IsHighFreqLoggingEnabled@OUTPUTDUPL_MGR@@QEAAHXZ @ 0x1C0272C78 (-IsHighFreqLoggingEnabled@OUTPUTDUPL_MGR@@QEAAHXZ.c)
 *     ?LogPresentParams@OUTPUTDUPL_MGR@@AEAAJU_D3DKMT_OUTPUTDUPLPRESENTFLAGS@@PEAU_D3DKMT_PRESENT_RGNS@@IPEAVAUTOEXPANDALLOCATION@@@Z @ 0x1C0273310 (-LogPresentParams@OUTPUTDUPL_MGR@@AEAAJU_D3DKMT_OUTPUTDUPLPRESENTFLAGS@@PEAU_D3DKMT_PRESENT_RGNS.c)
 *     ?ProcessPresent@OUTPUTDUPL_CONTEXT@@QEAAJPEAVDXGCONTEXT@@U_D3DKMT_OUTPUTDUPLPRESENTFLAGS@@IKPEAU_D3DKMT_PRESENT_RGNS@@PEBUDXGK_PRESENT_PARAMS@@PEAVAUTOEXPANDALLOCATION@@PEAPEAV2@@Z @ 0x1C0279C48 (-ProcessPresent@OUTPUTDUPL_CONTEXT@@QEAAJPEAVDXGCONTEXT@@U_D3DKMT_OUTPUTDUPLPRESENTFLAGS@@IKPEAU.c)
 */

__int64 __fastcall OUTPUTDUPL_MGR::ProcessPresent(
        OUTPUTDUPL_MGR *this,
        struct DXGCONTEXT *a2,
        struct _D3DKMT_OUTPUTDUPLPRESENTFLAGS a3,
        unsigned int a4,
        unsigned int a5,
        struct _D3DKMT_PRESENT_RGNS *a6,
        const struct DXGK_PRESENT_PARAMS *a7,
        unsigned int a8,
        struct DXGCONTEXT **a9,
        struct COREDEVICEACCESS *a10)
{
  unsigned int v13; // esi
  unsigned int ActiveContextCount; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  int v17; // edi
  __int64 v18; // r8
  __int64 v19; // rax
  __int64 v21; // r12
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 *v25; // r14
  unsigned int v26; // r13d
  int v27; // eax
  DXGFASTMUTEX ***v28; // rcx
  __int64 v29; // rcx
  int v30; // eax
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // rax
  int v36; // [rsp+50h] [rbp-118h]
  _BYTE v38[16]; // [rsp+80h] [rbp-E8h] BYREF
  struct _VIDMM_DMA_BUFFER *v39; // [rsp+90h] [rbp-D8h] BYREF

  v13 = 0;
  ActiveContextCount = OUTPUTDUPL_MGR::QueryActiveContextCount(this, a8);
  v17 = DXGCONTEXT::ReserveDmaBuffersForBlts(a2, a10, ActiveContextCount, &v39);
  if ( v17 < 0 )
  {
    v19 = WdLogNewEntry5_WdError(v16, v15, v18);
    *(_QWORD *)(v19 + 24) = a2;
    WdLogEvent5_WdError(v19);
    return (unsigned int)v17;
  }
  v21 = *((_QWORD *)this + 2) + 32LL * a8;
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v38, *(struct DXGFASTMUTEX *const *)v21, 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v38);
  v25 = *(__int64 **)(v21 + 8);
  v26 = 0;
  v27 = 1;
  v36 = 1;
  if ( !*((_DWORD *)this + 2) )
    goto LABEL_20;
  while ( 1 )
  {
    v23 = *v25;
    if ( !*v25 || !*(_DWORD *)(v23 + 316) )
      goto LABEL_16;
    if ( v27 )
    {
      if ( (unsigned int)OUTPUTDUPL_MGR::IsHighFreqLoggingEnabled(this) )
      {
        v17 = OUTPUTDUPL_MGR::LogPresentParams(v28, a3, a6, a8, *(struct AUTOEXPANDALLOCATION **)(v21 + 16));
        if ( v17 < 0 )
          goto LABEL_19;
      }
      v36 = 0;
      v23 = *v25;
    }
    v30 = OUTPUTDUPL_CONTEXT::ProcessPresent(
            (OUTPUTDUPL_CONTEXT *)v23,
            a2,
            a3,
            a4,
            a5,
            a6,
            a7,
            *(struct AUTOEXPANDALLOCATION **)(v21 + 16),
            a9);
    v17 = v30;
    if ( v30 == -1071775486 )
    {
      v23 = 259LL;
      v17 = 259;
      *(_DWORD *)(*v25 + 280) = 1;
LABEL_14:
      v13 = 259;
      goto LABEL_15;
    }
    if ( v30 < 0 )
      break;
    v23 = 259LL;
    if ( v30 == 259 )
      goto LABEL_14;
LABEL_15:
    v27 = v36;
LABEL_16:
    ++v26;
    ++v25;
    if ( v26 >= *((_DWORD *)this + 2) )
      goto LABEL_20;
  }
  v13 = v30;
LABEL_19:
  v31 = WdLogNewEntry5_WdError(v29, v22, v24);
  *(_QWORD *)(v31 + 24) = a2;
  WdLogEvent5_WdError(v31);
LABEL_20:
  if ( v38[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v38);
  if ( v17 < 0 )
  {
    v32 = WdLogNewEntry5_WdError(v23, v22, v24);
    *(_QWORD *)(v32 + 24) = a8;
    WdLogEvent5_WdError(v32);
    OUTPUTDUPL_MGR::MoveContextToPendingDestroyList((OUTPUTDUPL_CONTEXT **)this, a8, 0LL, 0, 0, 7);
    if ( v13 != v17 )
    {
      v35 = WdLogNewEntry5_WdAssertion(v34, v33);
      *(_QWORD *)(v35 + 24) = 1183LL;
      WdLogEvent5_WdAssertion(v35);
    }
    if ( v13 != -1073741130 )
      v13 = 259;
  }
  DXGCONTEXT::UnreserveDmaBuffersForBlts(a2);
  return v13;
}
