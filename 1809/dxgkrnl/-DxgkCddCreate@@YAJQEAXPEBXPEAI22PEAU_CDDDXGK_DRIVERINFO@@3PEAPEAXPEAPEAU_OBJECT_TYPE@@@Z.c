/*
 * XREFs of ?DxgkCddCreate@@YAJQEAXPEBXPEAI22PEAU_CDDDXGK_DRIVERINFO@@3PEAPEAXPEAPEAU_OBJECT_TYPE@@@Z @ 0x1C0137AD0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetDriverVersion@DXGADAPTER@@QEBA?AW4_QAI_DRIVERVERSION@@XZ @ 0x1C000E0E8 (-GetDriverVersion@DXGADAPTER@@QEBA-AW4_QAI_DRIVERVERSION@@XZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000F428 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0012010 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C0020BA4 (McTemplateK0q.c)
 *     DxgkGetCddDeviceAndContextForCurrentSession @ 0x1C00CED80 (DxgkGetCddDeviceAndContextForCurrentSession.c)
 *     ?CreateDxgProcess@DXGPROCESS@@SAJPEAPEAV1@PEAV1@1EPEAU_EPROCESS@@PEAX@Z @ 0x1C00E97AC (-CreateDxgProcess@DXGPROCESS@@SAJPEAPEAV1@PEAV1@1EPEAU_EPROCESS@@PEAX@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0102F10 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkCddCreate(
        char *a1,
        const void *a2,
        GUID *a3,
        unsigned int *a4,
        unsigned int *a5,
        struct _CDDDXGK_DRIVERINFO *a6,
        struct _CDDDXGK_DRIVERINFO *a7,
        void **a8,
        struct _OBJECT_TYPE **a9)
{
  __int64 v13; // rcx
  struct _CDDDXGK_DRIVERINFO *v14; // rbx
  struct _CDDDXGK_DRIVERINFO *v15; // r14
  struct DXGPROCESS *Current; // rax
  int CddDeviceAndContextForCurrentSession; // eax
  __int64 v18; // rcx
  __int64 v19; // rdi
  struct DXGPROCESS *v20; // r13
  __int64 v21; // r15
  __int64 v22; // rsi
  unsigned int v23; // ecx
  __int64 v24; // rcx
  const GUID *v25; // r8
  int v27; // eax
  _QWORD *v28; // rbx
  __int64 v29; // rdx
  __int64 v30; // rcx
  _QWORD *v31; // rcx
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  struct DXGCONTEXT *v35; // [rsp+30h] [rbp-30h] BYREF
  struct DXGHWQUEUE *v36; // [rsp+38h] [rbp-28h] BYREF
  int v37; // [rsp+40h] [rbp-20h] BYREF
  __int64 v38; // [rsp+48h] [rbp-18h]
  char v39; // [rsp+50h] [rbp-10h]
  struct DXGPROCESS *v40; // [rsp+B0h] [rbp+50h] BYREF
  unsigned int *v41; // [rsp+B8h] [rbp+58h]

  v41 = a4;
  v37 = -1;
  v38 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v39 = 1;
    v37 = 3000;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q((__int64)a1, &EventProfilerEnter, a3, 3000);
  }
  else
  {
    v39 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v37, 3000);
  if ( !a3 )
    goto LABEL_31;
  if ( !a4 )
    goto LABEL_31;
  v14 = a6;
  if ( !a6 )
    goto LABEL_31;
  v15 = a7;
  if ( !a7 || !a8 )
    goto LABEL_31;
  a3->Data1 = 0;
  *(_QWORD *)v14 = 0LL;
  *((_QWORD *)v14 + 1) = 0LL;
  *((_QWORD *)v14 + 2) = 0LL;
  *(_QWORD *)v15 = 0LL;
  *((_QWORD *)v15 + 1) = 0LL;
  *((_QWORD *)v15 + 2) = 0LL;
  Current = DXGPROCESS::GetCurrent();
  v40 = Current;
  if ( !Current )
  {
    v27 = DXGPROCESS::CreateDxgProcess(&v40, 0LL, 0LL, 0, 0LL, 0LL);
    v19 = v27;
    if ( v27 < 0 )
    {
      v28 = (_QWORD *)WdLogNewEntry5_WdError(v13);
      v28[3] = v19;
      v28[4] = a1;
      v28[5] = PsGetCurrentProcess(v30, v29);
      v31 = v28;
LABEL_33:
      WdLogEvent5_WdError(v31);
      goto LABEL_21;
    }
    Current = v40;
  }
  *((_QWORD *)Current + 13) = a2;
  *((_BYTE *)Current + 320) = 1;
  if ( !a1 )
  {
LABEL_31:
    v32 = WdLogNewEntry5_WdError(v13);
    v19 = -1073741811LL;
    goto LABEL_32;
  }
  CddDeviceAndContextForCurrentSession = DxgkGetCddDeviceAndContextForCurrentSession(
                                           (struct _LUID *)(a1 + 276),
                                           &v40,
                                           &v35,
                                           &v36);
  v19 = CddDeviceAndContextForCurrentSession;
  if ( CddDeviceAndContextForCurrentSession < 0 )
  {
    v32 = WdLogNewEntry5_WdError(v18);
LABEL_32:
    *(_QWORD *)(v32 + 24) = v19;
    v31 = (_QWORD *)v32;
    goto LABEL_33;
  }
  v20 = v40;
  v21 = *(_QWORD *)(*((_QWORD *)v40 + 2) + 16LL);
  if ( !*(_QWORD *)(v21 + 2528) )
  {
    v33 = WdLogNewEntry5_WdAssertion(v18);
    *(_QWORD *)(v33 + 24) = 231LL;
    WdLogEvent5_WdAssertion(v33);
  }
  v22 = *((_QWORD *)v20 + 216);
  if ( v22 && !*(_QWORD *)(v22 + 2520) )
  {
    v34 = WdLogNewEntry5_WdAssertion(v18);
    *(_QWORD *)(v34 + 24) = 233LL;
    WdLogEvent5_WdAssertion(v34);
  }
  *a8 = (void *)v21;
  *(_DWORD *)v15 = *(_DWORD *)(v21 + 284);
  *((_DWORD *)v15 + 1) = *(_DWORD *)(v21 + 288);
  *((_DWORD *)v15 + 2) = *(_DWORD *)(v21 + 292);
  *((_DWORD *)v15 + 3) = *(_DWORD *)(v21 + 296);
  *((_DWORD *)v15 + 4) = *(_DWORD *)(v21 + 300);
  *((_DWORD *)v15 + 5) = DXGADAPTER::GetDriverVersion((DXGADAPTER *)v21);
  if ( v22 )
  {
    *(_DWORD *)v14 = *(_DWORD *)(v22 + 284);
    *((_DWORD *)v14 + 1) = *(_DWORD *)(v22 + 288);
    *((_DWORD *)v14 + 2) = *(_DWORD *)(v22 + 292);
    *((_DWORD *)v14 + 3) = *(_DWORD *)(v22 + 296);
    *((_DWORD *)v14 + 4) = *(_DWORD *)(v22 + 300);
    *((_DWORD *)v14 + 5) = DXGADAPTER::GetDriverVersion((DXGADAPTER *)v22);
  }
  else
  {
    *(_OWORD *)v14 = *(_OWORD *)v15;
    *((_QWORD *)v14 + 2) = *((_QWORD *)v15 + 2);
  }
  a3->Data1 = *((_DWORD *)v20 + 83);
  *v41 = *((_DWORD *)v35 + 6);
  if ( v36 )
    v23 = *((_DWORD *)v36 + 6);
  else
    v23 = 0;
  *a5 = v23;
  *a9 = g_pDxgkSharedAllocationObjectType;
LABEL_21:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v37);
  if ( v39 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v24, &EventProfilerExit, v25, v37);
  return (unsigned int)v19;
}
