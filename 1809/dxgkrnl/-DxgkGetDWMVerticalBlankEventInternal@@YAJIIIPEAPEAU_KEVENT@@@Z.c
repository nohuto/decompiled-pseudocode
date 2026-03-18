/*
 * XREFs of ?DxgkGetDWMVerticalBlankEventInternal@@YAJIIIPEAPEAU_KEVENT@@@Z @ 0x1C0138524
 * Callers:
 *     DxgkGetDWMVerticalBlankEvent @ 0x1C0138400 (DxgkGetDWMVerticalBlankEvent.c)
 * Callees:
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000F428 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C00101B4 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ?Release@COREADAPTERACCESS@@QEAAXXZ @ 0x1C0010778 (-Release@COREADAPTERACCESS@@QEAAXXZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0011CB0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0011D10 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0012010 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0012240 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00123A4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z @ 0x1C00124D0 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z.c)
 *     McTemplateK0q @ 0x1C0020BA4 (McTemplateK0q.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00EF4FC (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0102F10 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12@Z @ 0x1C0112E10 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12@Z.c)
 *     ?GetVBlankEvent@ADAPTER_DISPLAY@@QEAAJIPEAPEAU_KEVENT@@@Z @ 0x1C0138710 (-GetVBlankEvent@ADAPTER_DISPLAY@@QEAAJIPEAPEAU_KEVENT@@@Z.c)
 */

__int64 __fastcall DxgkGetDWMVerticalBlankEventInternal(
        __int64 a1,
        unsigned int a2,
        const GUID *a3,
        struct _KEVENT **a4)
{
  __int64 v4; // r13
  __int64 v5; // r12
  __int64 v6; // rdi
  struct DXGDEVICE *v7; // r14
  struct DXGPROCESS *Current; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  struct _KTHREAD **v12; // rbx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  struct DXGADAPTER *v16; // rsi
  struct DXGDEVICE *v17; // rdi
  int PairingAdapters; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // rbx
  struct DXGADAPTER *v23; // r15
  ADAPTER_DISPLAY **v24; // rbx
  __int64 v25; // rcx
  int v26; // esi
  __int64 v27; // rcx
  const GUID *v28; // r8
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // rax
  _QWORD *v37; // rax
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // rax
  struct DXGDEVICE *v42; // [rsp+38h] [rbp-89h] BYREF
  struct DXGDEVICE *v43; // [rsp+40h] [rbp-81h] BYREF
  struct DXGADAPTER *v44; // [rsp+48h] [rbp-79h] BYREF
  struct DXGADAPTER *v45; // [rsp+50h] [rbp-71h] BYREF
  int v46; // [rsp+58h] [rbp-69h] BYREF
  __int64 v47; // [rsp+60h] [rbp-61h]
  char v48; // [rsp+68h] [rbp-59h]
  struct DXGADAPTER *v49; // [rsp+70h] [rbp-51h] BYREF
  unsigned __int64 v50; // [rsp+78h] [rbp-49h] BYREF
  unsigned __int64 v51; // [rsp+88h] [rbp-39h] BYREF
  DXGADAPTER *v52; // [rsp+90h] [rbp-31h] BYREF
  _BYTE v53[8]; // [rsp+A8h] [rbp-19h] BYREF
  _BYTE v54[32]; // [rsp+B0h] [rbp-11h] BYREF
  _BYTE v55[40]; // [rsp+D0h] [rbp+Fh] BYREF

  v47 = 0LL;
  v4 = (unsigned int)a3;
  v5 = a2;
  v6 = (unsigned int)a1;
  v46 = -1;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v48 = 1;
    v46 = 2192;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(a1, &EventProfilerEnter, a3, 2192);
  }
  else
  {
    v48 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v46, 2192);
  v7 = 0LL;
  v42 = 0LL;
  Current = DXGPROCESS::GetCurrent();
  v12 = (struct _KTHREAD **)Current;
  if ( !Current )
  {
    v30 = WdLogNewEntry5_WdError(v10);
    LODWORD(v22) = -1073741811;
    *(_QWORD *)(v30 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v30);
    goto LABEL_23;
  }
  if ( !*((_BYTE *)Current + 322) )
  {
    v31 = WdLogNewEntry5_WdWarning(v10, v9, v11);
    LODWORD(v22) = -1073741790;
    *(_QWORD *)(v31 + 24) = -1073741790LL;
    WdLogEvent5_WdWarning(v31);
    goto LABEL_23;
  }
  DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)&v52, v6, (struct _KTHREAD **)Current, &v44, 1);
  v16 = v44;
  if ( v44 )
  {
    v17 = 0LL;
    if ( (_DWORD)v5 )
    {
      DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v43, v5, v12, &v42);
      if ( !v42 )
      {
        v36 = WdLogNewEntry5_WdWarning(v34, v33, v35);
        *(_QWORD *)(v36 + 24) = v16;
        *(_QWORD *)(v36 + 32) = v5;
        WdLogEvent5_WdWarning(v36);
        if ( v43 && _InterlockedExchangeAdd64((volatile signed __int64 *)v43 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
          ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v43 + 2), v43);
        LODWORD(v22) = -1073741811;
        goto LABEL_21;
      }
      _InterlockedIncrement64((volatile signed __int64 *)v42 + 8);
      v7 = v42;
      v17 = v42;
      if ( v43 )
      {
        if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v43 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
          ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v43 + 2), v43);
        v7 = v42;
      }
      v16 = v44;
    }
    PairingAdapters = DxgkpGetPairingAdapters(v16, v4, &v45, &v50, &v49, &v51);
    v22 = PairingAdapters;
    if ( PairingAdapters < 0 )
    {
      v37 = (_QWORD *)WdLogNewEntry5_WdError(v20);
      v37[3] = v16;
      v37[4] = v4;
      v37[5] = v22;
    }
    else
    {
      v23 = v45;
      v24 = (ADAPTER_DISPLAY **)v49;
      if ( !v45 || !v49 )
      {
        v38 = WdLogNewEntry5_WdAssertion(v20);
        *(_QWORD *)(v38 + 24) = 5632LL;
        WdLogEvent5_WdAssertion(v38);
      }
      if ( (unsigned int)v4 < *((_DWORD *)v24[315] + 20) )
      {
        if ( !v17
          || v23 == *(struct DXGADAPTER **)(*((_QWORD *)v7 + 2) + 16LL) && v24 == *((ADAPTER_DISPLAY ***)v7 + 216) )
        {
          COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v53, v23, (struct DXGADAPTER *const)v24);
          DXGADAPTER::ReleaseReference(v23);
          DXGADAPTER::ReleaseReference((DXGADAPTER *)v24);
          v26 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v53);
          if ( v26 >= 0 )
          {
            if ( !*((_QWORD *)v23 + 316) )
            {
              v40 = WdLogNewEntry5_WdAssertion(v25);
              *(_QWORD *)(v40 + 24) = 5667LL;
              WdLogEvent5_WdAssertion(v40);
            }
            if ( !v24[315] )
            {
              v41 = WdLogNewEntry5_WdAssertion(v25);
              *(_QWORD *)(v41 + 24) = 5668LL;
              WdLogEvent5_WdAssertion(v41);
            }
            if ( !(_DWORD)v5 || *((_DWORD *)v7 + 116) == 1 )
            {
              ADAPTER_DISPLAY::GetVBlankEvent(v24[315], v4, a4);
              COREADAPTERACCESS::Release((COREADAPTERACCESS *)v53);
            }
            else
            {
              v26 = -1073741130;
            }
          }
          LODWORD(v22) = v26;
          COREACCESS::~COREACCESS((COREACCESS *)v55);
          COREACCESS::~COREACCESS((COREACCESS *)v54);
        }
        else
        {
          v39 = WdLogNewEntry5_WdWarning(v20, v19, v21);
          *(_QWORD *)(v39 + 24) = v16;
          *(_QWORD *)(v39 + 32) = v5;
          WdLogEvent5_WdWarning(v39);
          LODWORD(v22) = -1073741811;
        }
        goto LABEL_20;
      }
      v37 = (_QWORD *)WdLogNewEntry5_WdError(v20);
      LODWORD(v22) = -1073741811;
      v37[3] = v4;
      v37[4] = -1073741811LL;
    }
    WdLogEvent5_WdError(v37);
LABEL_20:
    if ( v17 && _InterlockedExchangeAdd64((volatile signed __int64 *)v17 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v17 + 2), v17);
    goto LABEL_21;
  }
  v32 = WdLogNewEntry5_WdWarning(v14, v13, v15);
  LODWORD(v22) = -1073741811;
  *(_QWORD *)(v32 + 24) = v6;
  *(_QWORD *)(v32 + 32) = -1073741811LL;
  WdLogEvent5_WdWarning(v32);
LABEL_21:
  if ( v52 )
    DXGADAPTER::ReleaseReference(v52);
LABEL_23:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v46);
  if ( v48 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v27, &EventProfilerExit, v28, v46);
  return (unsigned int)v22;
}
