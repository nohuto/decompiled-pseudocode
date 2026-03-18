/*
 * XREFs of ?DxgkCddEnable@@YAJIIPEBU_CDDDXGK_INTERFACE@@IPEBU_D3DKMT_DISPLAYMODE@@PEAPEAXPEA_KPEAI@Z @ 0x1C0121160
 * Callers:
 *     <none>
 * Callees:
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000F428 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0010E18 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?SetCddInterface@ADAPTER_DISPLAY@@QEAAXIQEBU_CDDDXGK_INTERFACE@@@Z @ 0x1C001106C (-SetCddInterface@ADAPTER_DISPLAY@@QEAAXIQEBU_CDDDXGK_INTERFACE@@@Z.c)
 *     ?AcquireExclusive@COREDEVICEACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z @ 0x1C00114A8 (-AcquireExclusive@COREDEVICEACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C00118EC (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0011CB0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0012010 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?GetCddShadowPitch@ADAPTER_DISPLAY@@QEBAII@Z @ 0x1C0013870 (-GetCddShadowPitch@ADAPTER_DISPLAY@@QEBAII@Z.c)
 *     McTemplateK0q @ 0x1C0020BA4 (McTemplateK0q.c)
 *     ?IsIdenticalMode@ADAPTER_DISPLAY@@QEAAEI@Z @ 0x1C0030580 (-IsIdenticalMode@ADAPTER_DISPLAY@@QEAAEI@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0102F10 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?SetPartOfDesktop@ADAPTER_DISPLAY@@QEAAXIE@Z @ 0x1C012134C (-SetPartOfDesktop@ADAPTER_DISPLAY@@QEAAXIE@Z.c)
 *     ?GetDoDCddShadowSession@ADAPTER_DISPLAY@@QEBAPEAXIPEAI@Z @ 0x1C01C30DC (-GetDoDCddShadowSession@ADAPTER_DISPLAY@@QEBAPEAXIPEAI@Z.c)
 */

__int64 __fastcall DxgkCddEnable(
        __int64 a1,
        int a2,
        const GUID *a3,
        unsigned int a4,
        const struct _D3DKMT_DISPLAYMODE *a5,
        void **a6,
        unsigned __int64 *a7,
        unsigned int *a8)
{
  __int64 v11; // r14
  __int64 v12; // rcx
  struct DXGPROCESS *Current; // rax
  __int64 v14; // rcx
  struct DXGPROCESS *v15; // rsi
  char *v16; // rdi
  __int64 v17; // rax
  __int64 v18; // r8
  int v19; // edx
  __int64 v20; // rbx
  __int64 v21; // rcx
  __int64 v22; // r9
  int v23; // eax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rdi
  unsigned int CddShadowPitch; // eax
  __int64 v28; // rcx
  const GUID *v29; // r8
  __int64 v31; // rax
  __int64 v32; // rbx
  _QWORD *v33; // rcx
  __int64 v34; // rax
  _QWORD *v35; // rax
  __int64 v36; // rax
  void **v37; // rsi
  unsigned __int64 *v38; // rbx
  __int64 v39; // rax
  void *DoDCddShadowSession; // rax
  unsigned __int64 v41; // rcx
  int v42; // [rsp+30h] [rbp-69h] BYREF
  __int64 v43; // [rsp+38h] [rbp-61h]
  char v44; // [rsp+40h] [rbp-59h]
  _BYTE v45[8]; // [rsp+50h] [rbp-49h] BYREF
  _BYTE v46[32]; // [rsp+58h] [rbp-41h] BYREF
  _BYTE v47[56]; // [rsp+78h] [rbp-21h] BYREF
  unsigned int v48; // [rsp+E8h] [rbp+4Fh] BYREF

  v42 = -1;
  v43 = 0LL;
  v11 = (unsigned int)a1;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v44 = 1;
    v42 = 3002;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(a1, &EventProfilerEnter, a3, 3002);
  }
  else
  {
    v44 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v42, 3002);
  if ( (a2 & 0x40000000) != 0 )
  {
    v31 = WdLogNewEntry5_WdAssertion(v12);
    *(_QWORD *)(v31 + 24) = 417LL;
    WdLogEvent5_WdAssertion(v31);
    LODWORD(v26) = -1073741637;
    goto LABEL_18;
  }
  Current = DXGPROCESS::GetCurrent();
  v15 = Current;
  if ( !Current )
  {
    LODWORD(v26) = -1073741811;
    v32 = WdLogNewEntry5_WdError(v14);
    *(_QWORD *)(v32 + 24) = -1073741811LL;
    *(_QWORD *)(v32 + 32) = PsGetCurrentProcess();
    v33 = (_QWORD *)v32;
LABEL_27:
    WdLogEvent5_WdError(v33);
    goto LABEL_18;
  }
  v16 = (char *)Current + 208;
  DXGPUSHLOCK::AcquireShared((struct DXGPROCESS *)((char *)Current + 208));
  v17 = ((unsigned int)v11 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v17 < *((_DWORD *)v15 + 62) )
  {
    v18 = *((_QWORD *)v15 + 29);
    v19 = *(_DWORD *)(v18 + 16 * v17 + 8);
    if ( (((unsigned int)v11 >> 25) & 0x60) == (*(_BYTE *)(v18 + 16 * v17 + 8) & 0x60)
      && (v19 & 0x2000) == 0
      && (v19 & 0x1F) != 0 )
    {
      if ( (v19 & 0x1F) == 3 )
      {
        v20 = *(_QWORD *)(v18 + 16LL * (unsigned int)v17);
        goto LABEL_11;
      }
      v34 = WdLogNewEntry5_WdError(((unsigned int)v11 >> 25) & 0x60);
      *(_QWORD *)(v34 + 24) = 316LL;
      WdLogEvent5_WdError(v34);
    }
  }
  v20 = 0LL;
LABEL_11:
  ExReleasePushLockSharedEx(v16, 0LL);
  KeLeaveCriticalRegion();
  if ( !v20 )
  {
    LODWORD(v26) = -1073741811;
    v33 = (_QWORD *)WdLogNewEntry5_WdError(v21);
    v33[3] = -1073741811LL;
    v33[4] = v11;
    v33[5] = v15;
    goto LABEL_27;
  }
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v45, v20, 1, v22, 0);
  v23 = COREDEVICEACCESS::AcquireExclusive((__int64)v45, 2LL);
  v26 = v23;
  if ( v23 < 0 )
  {
    v35 = (_QWORD *)WdLogNewEntry5_WdEvent(v25, v24);
    v35[3] = v26;
    v35[4] = v20;
    v35[5] = v15;
    WdLogEvent5_WdEvent(v35);
  }
  else
  {
    v26 = *(_QWORD *)(v20 + 1728);
    if ( !v26 || (v25 = *(_QWORD *)(v20 + 1728), !*(_QWORD *)(v26 + 2520)) )
    {
      v36 = WdLogNewEntry5_WdAssertion(v25);
      *(_QWORD *)(v36 + 24) = 453LL;
      WdLogEvent5_WdAssertion(v36);
      v25 = *(_QWORD *)(v20 + 1728);
    }
    if ( v25 != *(_QWORD *)(*(_QWORD *)(v20 + 16) + 16LL) )
    {
      v37 = a6;
      if ( !*a6 && (*(_BYTE *)(v20 + 1749) & 1) == 0 )
      {
        v38 = a7;
        if ( !a7 )
        {
          v39 = WdLogNewEntry5_WdAssertion(v25);
          *(_QWORD *)(v39 + 24) = 471LL;
          WdLogEvent5_WdAssertion(v39);
        }
        if ( ADAPTER_DISPLAY::IsIdenticalMode(*(DXGADAPTER ***)(v26 + 2520), a4) )
        {
          DoDCddShadowSession = ADAPTER_DISPLAY::GetDoDCddShadowSession(*(ADAPTER_DISPLAY **)(v26 + 2520), a4, &v48);
          v41 = v48;
          if ( *v38 > v48 )
          {
            if ( DoDCddShadowSession )
              ObfDereferenceObject(DoDCddShadowSession);
          }
          else
          {
            *v37 = DoDCddShadowSession;
            *v38 = v41;
          }
        }
      }
    }
    CddShadowPitch = ADAPTER_DISPLAY::GetCddShadowPitch(*(ADAPTER_DISPLAY **)(v26 + 2520), a4);
    *a8 = CddShadowPitch;
    ADAPTER_DISPLAY::SetPartOfDesktop(*(ADAPTER_DISPLAY **)(v26 + 2520), a4, 1u);
    ADAPTER_DISPLAY::SetCddInterface(*(DXGADAPTER ***)(v26 + 2520), a4, (const struct _CDDDXGK_INTERFACE *const)a3);
    LODWORD(v26) = 0;
  }
  COREACCESS::~COREACCESS((COREACCESS *)v47);
  COREACCESS::~COREACCESS((COREACCESS *)v46);
LABEL_18:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v42);
  if ( v44 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v28, &EventProfilerExit, v29, v42);
  return (unsigned int)v26;
}
