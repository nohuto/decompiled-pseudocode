/*
 * XREFs of ?DxgkCddEnable@@YAJIIPEBU_CDDDXGK_INTERFACE@@IPEBU_D3DKMT_DISPLAYMODE@@PEAPEAXPEA_KPEAI@Z @ 0x1C00CAC70
 * Callers:
 *     <none>
 * Callees:
 *     ?GetCddShadowPitch@ADAPTER_DISPLAY@@QEBAII@Z @ 0x1C0001DE4 (-GetCddShadowPitch@ADAPTER_DISPLAY@@QEBAII@Z.c)
 *     ?SetCddInterface@ADAPTER_DISPLAY@@QEAAXIQEBU_CDDDXGK_INTERFACE@@@Z @ 0x1C0002148 (-SetCddInterface@ADAPTER_DISPLAY@@QEAAXIQEBU_CDDDXGK_INTERFACE@@@Z.c)
 *     ?AcquireExclusive@COREDEVICEACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@W4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C00027B0 (-AcquireExclusive@COREDEVICEACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@W4_DXGKETW_PROFILE.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0007328 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C000A3F0 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C000C1D0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000C554 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C000CBD0 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0023750 (McTemplateK0q.c)
 *     ?IsIdenticalMode@ADAPTER_DISPLAY@@QEAAEI@Z @ 0x1C0035EC0 (-IsIdenticalMode@ADAPTER_DISPLAY@@QEAAEI@Z.c)
 *     ?SetPartOfDesktop@ADAPTER_DISPLAY@@QEAAXIE@Z @ 0x1C00CAB78 (-SetPartOfDesktop@ADAPTER_DISPLAY@@QEAAXIE@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01059F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetDoDCddShadowSection@ADAPTER_DISPLAY@@QEBAPEAXIPEAI@Z @ 0x1C01F2A28 (-GetDoDCddShadowSection@ADAPTER_DISPLAY@@QEBAPEAXIPEAI@Z.c)
 */

__int64 __fastcall DxgkCddEnable(
        __int64 a1,
        int a2,
        const struct _CDDDXGK_INTERFACE *a3,
        unsigned int a4,
        const struct _D3DKMT_DISPLAYMODE *a5,
        void **a6,
        unsigned __int64 *a7,
        unsigned int *a8)
{
  __int64 v10; // r14
  __int64 v11; // rdx
  __int64 v12; // rcx
  struct DXGPROCESS *Current; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  struct DXGPROCESS *v17; // rsi
  char *v18; // rdi
  __int64 v19; // rax
  __int64 v20; // r8
  int v21; // edx
  __int64 v22; // rdx
  __int64 v23; // rbx
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  int v29; // eax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rdi
  __int64 v33; // rcx
  unsigned int CddShadowPitch; // eax
  __int64 v35; // rdx
  __int64 v36; // rcx
  const GUID *v37; // r8
  __int64 v39; // rax
  __int64 v40; // rbx
  _QWORD *v41; // rcx
  _QWORD *v42; // rax
  __int64 v43; // rax
  __int64 v44; // rax
  void *DoDCddShadowSection; // rax
  unsigned __int64 v46; // rcx
  unsigned int v47; // [rsp+30h] [rbp-D0h] BYREF
  int v48; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v49; // [rsp+40h] [rbp-C0h]
  char v50; // [rsp+48h] [rbp-B8h]
  unsigned int *v51; // [rsp+50h] [rbp-B0h]
  struct _CDDDXGK_INTERFACE *v52; // [rsp+58h] [rbp-A8h]
  _BYTE v53[8]; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v54[64]; // [rsp+68h] [rbp-98h] BYREF
  _BYTE v55[88]; // [rsp+A8h] [rbp-58h] BYREF

  v48 = -1;
  v49 = 0LL;
  v52 = a3;
  v10 = (unsigned int)a1;
  v51 = a8;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v50 = 1;
    v48 = 3002;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(a1, &EventProfilerEnter, (const GUID *)a3, 3002);
  }
  else
  {
    v50 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v48, 3002LL);
  if ( (a2 & 0x40000000) != 0 )
  {
    v39 = WdLogNewEntry5_WdAssertion(v12, v11);
    *(_QWORD *)(v39 + 24) = 429LL;
    WdLogEvent5_WdAssertion(v39);
    LODWORD(v32) = -1073741637;
    goto LABEL_21;
  }
  Current = DXGPROCESS::GetCurrent();
  v17 = Current;
  if ( !Current )
  {
    LODWORD(v32) = -1073741811;
    v40 = WdLogNewEntry5_WdError(v15, v14, v16);
    *(_QWORD *)(v40 + 24) = -1073741811LL;
    *(_QWORD *)(v40 + 32) = PsGetCurrentProcess();
    v41 = (_QWORD *)v40;
LABEL_28:
    WdLogEvent5_WdError(v41);
    goto LABEL_21;
  }
  v18 = (char *)Current + 184;
  DXGPUSHLOCK::AcquireShared((struct DXGPROCESS *)((char *)Current + 184));
  v19 = ((unsigned int)v10 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v19 < *((_DWORD *)v17 + 56) )
  {
    v20 = *((_QWORD *)v17 + 26);
    v21 = *(_DWORD *)(v20 + 16 * v19 + 8);
    if ( (((unsigned int)v10 >> 25) & 0x60) == (*(_BYTE *)(v20 + 16 * v19 + 8) & 0x60)
      && (v21 & 0x2000) == 0
      && (v21 & 0x1F) != 0 )
    {
      v22 = v21 & 0x1F;
      if ( (_BYTE)v22 == 3 )
      {
        v23 = *(_QWORD *)(v20 + 16LL * (unsigned int)v19);
        goto LABEL_13;
      }
      v24 = WdLogNewEntry5_WdError(((unsigned int)v10 >> 25) & 0x60, v22, v20);
      *(_QWORD *)(v24 + 24) = 267LL;
      WdLogEvent5_WdError(v24);
    }
  }
  v23 = 0LL;
LABEL_13:
  ExReleasePushLockSharedEx(v18, 0LL);
  KeLeaveCriticalRegion();
  if ( !v23 )
  {
    LODWORD(v32) = -1073741811;
    v41 = (_QWORD *)WdLogNewEntry5_WdError(v26, v25, v27);
    v41[3] = -1073741811LL;
    v41[4] = v10;
    v41[5] = v17;
    goto LABEL_28;
  }
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v53, v23, 1, v28, 0);
  v29 = COREDEVICEACCESS::AcquireExclusive((__int64)v53, 2LL);
  v32 = v29;
  if ( v29 < 0 )
  {
    v42 = (_QWORD *)WdLogNewEntry5_WdEvent();
    v42[3] = v32;
    v42[4] = v23;
    v42[5] = v17;
    WdLogEvent5_WdEvent(v42);
  }
  else
  {
    v32 = *(_QWORD *)(v23 + 1728);
    if ( v32 && *(_QWORD *)(v32 + 2552) )
    {
      v33 = *(_QWORD *)(v23 + 1728);
    }
    else
    {
      v43 = WdLogNewEntry5_WdAssertion(v31, v30);
      *(_QWORD *)(v43 + 24) = 465LL;
      WdLogEvent5_WdAssertion(v43);
      v33 = *(_QWORD *)(v23 + 1728);
    }
    if ( v33 != *(_QWORD *)(*(_QWORD *)(v23 + 16) + 16LL) && !*a6 && (*(_BYTE *)(v23 + 1749) & 1) == 0 )
    {
      if ( !a7 )
      {
        v44 = WdLogNewEntry5_WdAssertion(v33, v30);
        *(_QWORD *)(v44 + 24) = 483LL;
        WdLogEvent5_WdAssertion(v44);
      }
      if ( ADAPTER_DISPLAY::IsIdenticalMode(*(DXGADAPTER ***)(v32 + 2552), a4) )
      {
        DoDCddShadowSection = ADAPTER_DISPLAY::GetDoDCddShadowSection(*(ADAPTER_DISPLAY **)(v32 + 2552), a4, &v47);
        v46 = v47;
        if ( *a7 > v47 )
        {
          if ( DoDCddShadowSection )
            ObfDereferenceObject(DoDCddShadowSection);
        }
        else
        {
          *a6 = DoDCddShadowSection;
          *a7 = v46;
        }
      }
    }
    CddShadowPitch = ADAPTER_DISPLAY::GetCddShadowPitch(*(ADAPTER_DISPLAY **)(v32 + 2552), a4);
    *v51 = CddShadowPitch;
    ADAPTER_DISPLAY::SetPartOfDesktop(*(PERESOURCE ***)(v32 + 2552), a4, 1);
    ADAPTER_DISPLAY::SetCddInterface(*(DXGADAPTER ***)(v32 + 2552), a4, v52);
    LODWORD(v32) = 0;
  }
  COREACCESS::~COREACCESS((COREACCESS *)v55);
  COREACCESS::~COREACCESS((COREACCESS *)v54);
LABEL_21:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v48, v35);
  if ( v50 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v36, &EventProfilerExit, v37, v48);
  return (unsigned int)v32;
}
