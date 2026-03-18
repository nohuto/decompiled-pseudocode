/*
 * XREFs of ?OutputDuplPresentInternal@@YAJPEAVDXGADAPTER@@PEAVDXGCONTEXT@@PEAU_D3DKMT_OUTPUTDUPLPRESENT@@PEAPEAV2@@Z @ 0x1C023EE78
 * Callers:
 *     OutputDuplPresent @ 0x1C0241128 (OutputDuplPresent.c)
 * Callees:
 *     ??IDXGADAPTER_REFERENCE@@QEAAPEAPEAVDXGADAPTER@@XZ @ 0x1C00011EC (--IDXGADAPTER_REFERENCE@@QEAAPEAPEAVDXGADAPTER@@XZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C000D500 (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000F590 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C001071C (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0010E18 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0011CB0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0011D10 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z @ 0x1C00132A8 (-IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z.c)
 *     ?FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ @ 0x1C00E2378 (-FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ.c)
 *     ?FindOutputDuplManager@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12PEAPEAVOUTPUTDUPL_MGR@@@Z @ 0x1C00EDA28 (-FindOutputDuplManager@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12PEAPEAVOUTPUTDUPL_MGR@@@Z.c)
 *     ?ProcessPresent@OUTPUTDUPL_MGR@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_OUTPUTDUPLPRESENT@@IPEAPEAV2@PEAVCOREDEVICEACCESS@@@Z @ 0x1C023F1D0 (-ProcessPresent@OUTPUTDUPL_MGR@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_OUTPUTDUPLPRESENT@@IPEAPEAV2@PE.c)
 */

__int64 __fastcall OutputDuplPresentInternal(
        struct DXGADAPTER *a1,
        struct DXGCONTEXT *a2,
        struct _D3DKMT_OUTPUTDUPLPRESENT *a3,
        struct DXGCONTEXT **a4)
{
  struct DXGADAPTER **v8; // rbx
  struct DXGADAPTER **v9; // rax
  __int64 v10; // rcx
  int OutputDuplManager; // ebx
  struct OUTPUTDUPL_MGR *RemoteOutputDuplMgr; // rsi
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // r9
  struct _D3DKMT_OUTPUTDUPLPRESENTFLAGS::$A409EE896D278F5C017A650FBAD844EC::$1BE8774737E2D873D5DADE2689676029 Value; // eax
  DXGADAPTER **v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // rax
  DXGADAPTER *v25; // [rsp+48h] [rbp-59h] BYREF
  unsigned __int64 v26; // [rsp+50h] [rbp-51h] BYREF
  DXGADAPTER *v27; // [rsp+58h] [rbp-49h] BYREF
  unsigned __int64 v28; // [rsp+60h] [rbp-41h] BYREF
  _BYTE v29[8]; // [rsp+68h] [rbp-39h] BYREF
  __int64 v30; // [rsp+70h] [rbp-31h]
  char v31; // [rsp+78h] [rbp-29h]
  _BYTE v32[8]; // [rsp+88h] [rbp-19h] BYREF
  _BYTE v33[32]; // [rsp+90h] [rbp-11h] BYREF
  _BYTE v34[56]; // [rsp+B0h] [rbp+Fh] BYREF
  struct OUTPUTDUPL_MGR *v35; // [rsp+118h] [rbp+77h] BYREF

  v27 = 0LL;
  v25 = 0LL;
  if ( (a3->Flags.Value & 2) != 0 )
  {
    RemoteOutputDuplMgr = FindRemoteOutputDuplMgr((__int64)a1);
  }
  else
  {
    v8 = (struct DXGADAPTER **)DXGADAPTER_REFERENCE::operator&(&v25);
    v9 = (struct DXGADAPTER **)DXGADAPTER_REFERENCE::operator&(&v27);
    OutputDuplManager = FindOutputDuplManager(a1, a3->VidPnSourceId, v9, &v28, v8, &v26, &v35);
    if ( OutputDuplManager < 0 )
      goto LABEL_19;
    RemoteOutputDuplMgr = v35;
  }
  if ( !RemoteOutputDuplMgr )
  {
    v13 = WdLogNewEntry5_WdAssertion(v10);
    *(_QWORD *)(v13 + 24) = 2801LL;
    WdLogEvent5_WdAssertion(v13);
    OutputDuplManager = -1073741275;
    goto LABEL_19;
  }
  if ( a3->VidPnSourceId >= *((_DWORD *)RemoteOutputDuplMgr + 13) )
  {
    v14 = WdLogNewEntry5_WdError(v10);
    *(_QWORD *)(v14 + 24) = a3->VidPnSourceId;
    WdLogEvent5_WdError(v14);
    OutputDuplManager = -1073741811;
    goto LABEL_19;
  }
  v15 = *((_QWORD *)a2 + 2);
  v31 = 0;
  v30 = *(_QWORD *)(*(_QWORD *)(v15 + 16) + 16LL);
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v29);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v32, *((_QWORD *)a2 + 2), 2, v16, 0);
  OutputDuplManager = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v32);
  if ( OutputDuplManager >= 0 )
  {
    Value = (struct _D3DKMT_OUTPUTDUPLPRESENTFLAGS::$A409EE896D278F5C017A650FBAD844EC::$1BE8774737E2D873D5DADE2689676029)a3->Flags.Value;
    if ( (*(_BYTE *)&Value & 2) != 0 || (*(_BYTE *)&Value & 8) != 0 )
      goto LABEL_16;
    v18 = (DXGADAPTER **)*((_QWORD *)v25 + 315);
    if ( !v18 )
    {
      v19 = WdLogNewEntry5_WdError(0LL);
      *(_QWORD *)(v19 + 24) = v25 != 0LL;
      WdLogEvent5_WdError(v19);
      OutputDuplManager = -1073741811;
      goto LABEL_17;
    }
    if ( ADAPTER_DISPLAY::IsVidPnSourceOwner(v18, *((const struct DXGDEVICE **)a2 + 2), a3->VidPnSourceId) )
    {
LABEL_16:
      OutputDuplManager = OUTPUTDUPL_MGR::ProcessPresent(
                            RemoteOutputDuplMgr,
                            a2,
                            a3,
                            a3->VidPnSourceId,
                            a4,
                            (struct COREDEVICEACCESS *)v32);
    }
    else
    {
      v23 = WdLogNewEntry5_WdWarning(v21, v20, v22);
      *(_QWORD *)(v23 + 24) = a2;
      *(_QWORD *)(v23 + 32) = a3->VidPnSourceId;
      WdLogEvent5_WdWarning(v23);
      OutputDuplManager = -1071775744;
    }
  }
LABEL_17:
  COREACCESS::~COREACCESS((COREACCESS *)v34);
  COREACCESS::~COREACCESS((COREACCESS *)v33);
  if ( v31 )
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v29);
LABEL_19:
  if ( v25 )
    DXGADAPTER::ReleaseReference(v25);
  v25 = 0LL;
  if ( v27 )
    DXGADAPTER::ReleaseReference(v27);
  return (unsigned int)OutputDuplManager;
}
