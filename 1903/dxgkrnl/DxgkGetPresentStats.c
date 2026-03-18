/*
 * XREFs of DxgkGetPresentStats @ 0x1C014E780
 * Callers:
 *     ?CompleteIndendentFlipToken@CTokenManager@@IEAAJ_KAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@I@Z @ 0x1C001BFD8 (-CompleteIndendentFlipToken@CTokenManager@@IEAAJ_KAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@I@Z.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0006FF4 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007560 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007DEC (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z @ 0x1C000B9D0 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C000BC9C (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000BD80 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C000BEB0 (-AcquireShared@COREADAPTERACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C000BFE0 (--1COREACCESS@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024FA0 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01008A0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkGetPresentStats(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  __int64 v5; // rsi
  unsigned int v7; // r14d
  struct DXGPROCESS *Current; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rbx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  struct DXGADAPTER *v19; // rdi
  __int64 v20; // r8
  int v21; // eax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  struct DXGADAPTER *v31; // [rsp+30h] [rbp-A9h] BYREF
  _BYTE v32[16]; // [rsp+38h] [rbp-A1h] BYREF
  DXGADAPTER *v33; // [rsp+48h] [rbp-91h] BYREF
  _BYTE v34[8]; // [rsp+60h] [rbp-79h] BYREF
  _BYTE v35[64]; // [rsp+68h] [rbp-71h] BYREF
  _BYTE v36[72]; // [rsp+A8h] [rbp-31h] BYREF

  v5 = (unsigned int)a1;
  v7 = a2;
  Current = DXGPROCESS::GetCurrent(a1, a2);
  v12 = (__int64)Current;
  if ( !Current )
  {
    v27 = WdLogNewEntry5_WdError(v10, v9, v11);
    LODWORD(v12) = -1073741811;
    *(_QWORD *)(v27 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v27);
    return (unsigned int)v12;
  }
  if ( !(*(unsigned int (**)(void))(*((_QWORD *)Current + 12) + 216LL))() )
  {
    v28 = WdLogNewEntry5_WdWarning(v14, v13, v15);
    *(_QWORD *)(v28 + 24) = v12;
    LODWORD(v12) = -1073741790;
    *(_QWORD *)(v28 + 32) = -1073741790LL;
    WdLogEvent5_WdWarning(v28);
    return (unsigned int)v12;
  }
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v32, *(struct DXGFASTMUTEX *const *)(v12 + 104), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v32);
  DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)&v33, (unsigned int)v5, (struct _KTHREAD **)v12, &v31, 1);
  v19 = v31;
  if ( !v31 )
  {
    v29 = WdLogNewEntry5_WdError(v17, v16, v18);
    LODWORD(v12) = -1073741811;
    *(_QWORD *)(v29 + 24) = v5;
    *(_QWORD *)(v29 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v29);
    goto LABEL_9;
  }
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v34, v31, 0LL);
  v21 = COREADAPTERACCESS::AcquireShared((__int64)v34, 0xFFFFFFFFLL, v20);
  v12 = v21;
  if ( v21 < 0 )
  {
    v30 = WdLogNewEntry5_WdError(v23, v22, v24);
LABEL_19:
    *(_QWORD *)(v30 + 24) = v19;
    *(_QWORD *)(v30 + 32) = v12;
    WdLogEvent5_WdError(v30);
    goto LABEL_8;
  }
  if ( *((_BYTE *)v19 + 2465) || (v25 = *((_QWORD *)v19 + 320)) == 0 )
  {
    v30 = WdLogNewEntry5_WdError(v23, v22, v24);
    v12 = -1073741811LL;
    goto LABEL_19;
  }
  LODWORD(v12) = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64))(*(_QWORD *)(*(_QWORD *)(v25 + 520) + 8LL)
                                                                            + 496LL))(
                   *(_QWORD *)(v25 + 528),
                   v7,
                   a3,
                   a4);
LABEL_8:
  COREACCESS::~COREACCESS((COREACCESS *)v36);
  COREACCESS::~COREACCESS((COREACCESS *)v35);
LABEL_9:
  if ( v33 )
    DXGADAPTER::ReleaseReferenceNoTracking(v33);
  if ( v32[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v32);
  return (unsigned int)v12;
}
