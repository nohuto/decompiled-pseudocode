/*
 * XREFs of ?DxgkCddSetOrigin@@YAXQEAXIQEBUtagPOINT@@@Z @ 0x1C00F67A0
 * Callers:
 *     <none>
 * Callees:
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000F428 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?SetContentRect@ADAPTER_DISPLAY@@QEAAXIQEBUtagRECT@@@Z @ 0x1C00110C4 (-SetContentRect@ADAPTER_DISPLAY@@QEAAXIQEBUtagRECT@@@Z.c)
 *     ?GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z @ 0x1C001112C (-GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z.c)
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z @ 0x1C001150C (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0011CB0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0011D10 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0012010 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00123A4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     McTemplateK0q @ 0x1C0020BA4 (McTemplateK0q.c)
 *     ?GetSessionViewOwner@ADAPTER_DISPLAY@@QEBAPEAVSESSION_VIEW@@I@Z @ 0x1C00BF2F4 (-GetSessionViewOwner@ADAPTER_DISPLAY@@QEBAPEAVSESSION_VIEW@@I@Z.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12@Z @ 0x1C0112E10 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12@Z.c)
 */

void __fastcall DxgkCddSetOrigin(struct DXGADAPTER *a1, unsigned int a2, const GUID *a3)
{
  __int64 v5; // rsi
  int PairingAdapters; // eax
  __int64 v7; // rcx
  __int64 v8; // r14
  DXGADAPTER ***v9; // rbx
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r14
  ADAPTER_DISPLAY *v14; // rcx
  int **SessionViewOwner; // rax
  const struct _DXGK_DISPLAYMODE_INFO *DisplayModeInfo; // r14
  LONG Data1; // r9d
  LONG v18; // r10d
  __int64 v19; // rdx
  DXGADAPTER *v20; // r8
  int v21; // ecx
  int v22; // ecx
  __int64 v23; // rcx
  _QWORD *v24; // rax
  __int64 v25; // rcx
  const GUID *v26; // r8
  _QWORD *v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  _QWORD *v30; // rax
  struct tagRECT v31; // [rsp+38h] [rbp-39h] BYREF
  int v32; // [rsp+48h] [rbp-29h] BYREF
  __int64 v33; // [rsp+50h] [rbp-21h]
  char v34; // [rsp+58h] [rbp-19h]
  __int64 v35; // [rsp+68h] [rbp-9h] BYREF
  _BYTE v36[32]; // [rsp+70h] [rbp-1h] BYREF
  _BYTE v37[40]; // [rsp+90h] [rbp+1Fh] BYREF
  struct DXGADAPTER *v38; // [rsp+F0h] [rbp+7Fh] BYREF

  v32 = -1;
  v33 = 0LL;
  v5 = a2;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v34 = 1;
    v32 = 3014;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q((__int64)a1, &EventProfilerEnter, a3, 3014);
  }
  else
  {
    v34 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v32, 3014);
  PairingAdapters = DxgkpGetPairingAdapters(a1, v5, 0LL, 0LL, &v38, (unsigned __int64 *)&v31);
  v8 = PairingAdapters;
  if ( PairingAdapters < 0 )
  {
    v27 = (_QWORD *)WdLogNewEntry5_WdError(v7);
    v27[3] = a1;
    v27[4] = v5;
    v27[5] = v8;
    WdLogEvent5_WdError(v27);
  }
  else
  {
    v9 = (DXGADAPTER ***)v38;
    if ( !v38 )
    {
      v28 = WdLogNewEntry5_WdAssertion(v7);
      *(_QWORD *)(v28 + 24) = 2393LL;
      WdLogEvent5_WdAssertion(v28);
    }
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)&v35, (struct DXGADAPTER *const)v9, 0LL);
    DXGADAPTER::ReleaseReference((DXGADAPTER *)v9);
    v10 = COREADAPTERACCESS::AcquireExclusive(&v35, 1LL);
    v13 = v10;
    if ( v10 < 0 )
    {
      v30 = (_QWORD *)WdLogNewEntry5_WdEvent(v12, v11);
      v30[3] = v13;
      v30[4] = v5;
      v30[5] = v9;
      v30[6] = (int)a3->Data1;
      v30[7] = *(int *)&a3->Data2;
      WdLogEvent5_WdEvent(v30);
    }
    else
    {
      v14 = (ADAPTER_DISPLAY *)v9[315];
      if ( !v14 )
      {
        v29 = WdLogNewEntry5_WdAssertion(0LL);
        *(_QWORD *)(v29 + 24) = 2404LL;
        WdLogEvent5_WdAssertion(v29);
        v14 = (ADAPTER_DISPLAY *)v9[315];
      }
      SessionViewOwner = ADAPTER_DISPLAY::GetSessionViewOwner(v14, v5);
      if ( SessionViewOwner )
      {
        *((_DWORD *)SessionViewOwner + 8) += a3->Data1 - *((_DWORD *)SessionViewOwner + 6);
        *((_DWORD *)SessionViewOwner + 6) = a3->Data1;
        *((_DWORD *)SessionViewOwner + 9) += *(_DWORD *)&a3->Data2 - *((_DWORD *)SessionViewOwner + 7);
        *((_DWORD *)SessionViewOwner + 7) = *(_DWORD *)&a3->Data2;
      }
      DisplayModeInfo = ADAPTER_DISPLAY::GetDisplayModeInfo(v9[315], v5);
      Data1 = a3->Data1;
      v18 = *(_DWORD *)&a3->Data2;
      v19 = 3760 * v5;
      v20 = v9[315][14];
      v21 = *((_DWORD *)DisplayModeInfo + 7) - 2;
      v31.left = a3->Data1;
      v31.top = v18;
      if ( (v21 & 0xFFFFFFFD) != 0 )
      {
        v31.right = Data1 + *(_DWORD *)((char *)v20 + v19 + 644);
        v22 = *(_DWORD *)((char *)v20 + v19 + 648);
      }
      else
      {
        v31.right = Data1 + *(_DWORD *)((char *)v20 + v19 + 648);
        v22 = *(_DWORD *)((char *)v20 + v19 + 644);
      }
      v23 = (unsigned int)(v18 + v22);
      v31.bottom = v23;
      v24 = (_QWORD *)WdLogNewEntry5_WdEvent(v23, v19);
      v24[3] = v5;
      v24[4] = v9;
      v24[5] = (int)a3->Data1;
      v24[6] = *(int *)&a3->Data2;
      v24[7] = *((int *)DisplayModeInfo + 7);
      WdLogEvent5_WdEvent(v24);
      ADAPTER_DISPLAY::SetContentRect((ADAPTER_DISPLAY *)v9[315], v5, &v31);
    }
    COREACCESS::~COREACCESS((COREACCESS *)v37);
    COREACCESS::~COREACCESS((COREACCESS *)v36);
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v32);
  if ( v34 )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v25, &EventProfilerExit, v26, v32);
  }
}
