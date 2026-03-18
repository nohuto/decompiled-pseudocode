/*
 * XREFs of ?OutputDuplPresentInternal@@YAJPEAVDXGADAPTER@@PEAVDXGCONTEXT@@PEAU_D3DKMT_OUTPUTDUPLPRESENT@@PEAPEAV2@@Z @ 0x1C027410C
 * Callers:
 *     OutputDuplPresent @ 0x1C02761F0 (OutputDuplPresent.c)
 * Callees:
 *     ??IDXGADAPTER_REFERENCE@@QEAAPEAPEAVDXGADAPTER@@XZ @ 0x1C00040EC (--IDXGADAPTER_REFERENCE@@QEAAPEAPEAVDXGADAPTER@@XZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0006DA8 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0006E04 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C0007150 (-AcquireShared@COREDEVICEACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     ?Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C000BC50 (-Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C000BFE0 (--1COREACCESS@@QEAA@XZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C000CB44 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z @ 0x1C000CC68 (-IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z.c)
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     ?FindOutputDuplManager@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12PEAPEAVOUTPUTDUPL_MGR@@@Z @ 0x1C00D51B8 (-FindOutputDuplManager@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12PEAPEAVOUTPUTDUPL_MGR@@@Z.c)
 *     ?FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ @ 0x1C00F37C8 (-FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ.c)
 *     ?ProcessPresent@OUTPUTDUPL_MGR@@QEAAJPEAVDXGCONTEXT@@U_D3DKMT_OUTPUTDUPLPRESENTFLAGS@@IKPEAU_D3DKMT_PRESENT_RGNS@@PEBUDXGK_PRESENT_PARAMS@@IPEAPEAV2@PEAVCOREDEVICEACCESS@@@Z @ 0x1C02744A0 (-ProcessPresent@OUTPUTDUPL_MGR@@QEAAJPEAVDXGCONTEXT@@U_D3DKMT_OUTPUTDUPLPRESENTFLAGS@@IKPEAU_D3D.c)
 */

__int64 __fastcall OutputDuplPresentInternal(
        struct DXGADAPTER *a1,
        struct DXGCONTEXT *a2,
        struct _D3DKMT_OUTPUTDUPLPRESENT *a3,
        struct DXGCONTEXT **a4)
{
  struct DXGADAPTER **v8; // rbx
  struct DXGADAPTER **v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  int OutputDuplManager; // ebx
  __int64 v13; // r8
  struct OUTPUTDUPL_MGR *RemoteOutputDuplMgr; // rsi
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // r9
  __int64 v19; // rdx
  __int64 v20; // r8
  struct _D3DKMT_OUTPUTDUPLPRESENTFLAGS::$A409EE896D278F5C017A650FBAD844EC::$1BE8774737E2D873D5DADE2689676029 Value; // eax
  DXGADAPTER **v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // rax
  DXGADAPTER *v29; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int64 v30; // [rsp+58h] [rbp-A8h] BYREF
  struct OUTPUTDUPL_MGR *v31; // [rsp+60h] [rbp-A0h] BYREF
  DXGADAPTER *v32; // [rsp+68h] [rbp-98h] BYREF
  unsigned __int64 v33; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v34[8]; // [rsp+78h] [rbp-88h] BYREF
  __int64 v35; // [rsp+80h] [rbp-80h]
  char v36; // [rsp+88h] [rbp-78h]
  _BYTE v37[8]; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v38[64]; // [rsp+98h] [rbp-68h] BYREF
  _BYTE v39[88]; // [rsp+D8h] [rbp-28h] BYREF

  v32 = 0LL;
  v29 = 0LL;
  if ( (a3->Flags.Value & 2) != 0 )
  {
    RemoteOutputDuplMgr = FindRemoteOutputDuplMgr((__int64)a1, (__int64)a2);
  }
  else
  {
    v8 = (struct DXGADAPTER **)DXGADAPTER_REFERENCE::operator&(&v29);
    v9 = (struct DXGADAPTER **)DXGADAPTER_REFERENCE::operator&(&v32);
    OutputDuplManager = FindOutputDuplManager(a1, a3->VidPnSourceId, v9, &v33, v8, &v30, &v31);
    if ( OutputDuplManager < 0 )
      goto LABEL_19;
    RemoteOutputDuplMgr = v31;
  }
  if ( !RemoteOutputDuplMgr )
  {
    v15 = WdLogNewEntry5_WdAssertion(v11, v10);
    *(_QWORD *)(v15 + 24) = 2824LL;
    WdLogEvent5_WdAssertion(v15);
    OutputDuplManager = -1073741275;
    goto LABEL_19;
  }
  if ( a3->VidPnSourceId >= *((_DWORD *)RemoteOutputDuplMgr + 13) )
  {
    v16 = WdLogNewEntry5_WdError(v11, v10, v13);
    *(_QWORD *)(v16 + 24) = a3->VidPnSourceId;
    WdLogEvent5_WdError(v16);
    OutputDuplManager = -1073741811;
    goto LABEL_19;
  }
  v17 = *((_QWORD *)a2 + 2);
  v36 = 0;
  v35 = *(_QWORD *)(*(_QWORD *)(v17 + 16) + 16LL);
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v34);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v37, *((_QWORD *)a2 + 2), 2, v18, 0);
  OutputDuplManager = COREDEVICEACCESS::AcquireShared((__int64)v37, 0xFFFFFFFF, 0LL);
  if ( OutputDuplManager >= 0 )
  {
    Value = (struct _D3DKMT_OUTPUTDUPLPRESENTFLAGS::$A409EE896D278F5C017A650FBAD844EC::$1BE8774737E2D873D5DADE2689676029)a3->Flags.Value;
    if ( (*(_BYTE *)&Value & 2) != 0 || (*(_BYTE *)&Value & 8) != 0 )
      goto LABEL_16;
    v22 = (DXGADAPTER **)*((_QWORD *)v29 + 319);
    if ( !v22 )
    {
      v23 = WdLogNewEntry5_WdError(0LL, v19, v20);
      *(_QWORD *)(v23 + 24) = v29 != 0LL;
      WdLogEvent5_WdError(v23);
      OutputDuplManager = -1073741811;
      goto LABEL_17;
    }
    if ( ADAPTER_DISPLAY::IsVidPnSourceOwner(v22, *((const struct DXGDEVICE **)a2 + 2), a3->VidPnSourceId) )
    {
LABEL_16:
      OutputDuplManager = OUTPUTDUPL_MGR::ProcessPresent(
                            RemoteOutputDuplMgr,
                            a2,
                            a3->Flags,
                            a3->hSource,
                            a3->BroadcastContextCount,
                            &a3->PresentRegions,
                            0LL,
                            a3->VidPnSourceId,
                            a4,
                            (struct COREDEVICEACCESS *)v37);
    }
    else
    {
      v27 = WdLogNewEntry5_WdWarning(v25, v24, v26);
      *(_QWORD *)(v27 + 24) = a2;
      *(_QWORD *)(v27 + 32) = a3->VidPnSourceId;
      WdLogEvent5_WdWarning(v27);
      OutputDuplManager = -1071775744;
    }
  }
LABEL_17:
  COREACCESS::~COREACCESS((COREACCESS *)v39);
  COREACCESS::~COREACCESS((COREACCESS *)v38);
  if ( v36 )
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v34);
LABEL_19:
  DXGADAPTER_REFERENCE::Assign(&v29, 0LL);
  DXGADAPTER_REFERENCE::Assign(&v32, 0LL);
  return (unsigned int)OutputDuplManager;
}
