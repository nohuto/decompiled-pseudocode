/*
 * XREFs of DxgkGetPresentHistoryReadyEvent @ 0x1C012FC70
 * Callers:
 *     ?Initialize@CAdapter@@IEAAJAEBUCSM_TOKEN_ADAPTER_INFO@@@Z @ 0x1C0013548 (-Initialize@CAdapter@@IEAAJAEBUCSM_TOKEN_ADAPTER_INFO@@@Z.c)
 * Callees:
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0007320 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z @ 0x1C000B9D0 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C000BC9C (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ??0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z @ 0x1C000BDDC (--0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C000BFE0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000C448 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C000C580 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01008A0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z @ 0x1C0101050 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z.c)
 *     ?GetPresentHistoryTokenQueue@ADAPTER_RENDER@@QEAAPEAVDXGPRESENTHISTORYTOKENQUEUE@@PEAVDXGAUTOPUSHLOCK@@H@Z @ 0x1C012FDB0 (-GetPresentHistoryTokenQueue@ADAPTER_RENDER@@QEAAPEAVDXGPRESENTHISTORYTOKENQUEUE@@PEAVDXGAUTOPUS.c)
 */

__int64 __fastcall DxgkGetPresentHistoryReadyEvent(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rbx
  struct _KTHREAD **Current; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  struct DXGADAPTER *v11; // rdi
  int PairingAdapters; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  struct DXGADAPTER *v16; // rbx
  struct _KTHREAD **v17; // rbx
  struct DXGPRESENTHISTORYTOKENQUEUE *PresentHistoryTokenQueue; // rax
  void *v19; // rcx
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  struct DXGADAPTER *v24; // [rsp+40h] [rbp-49h] BYREF
  _BYTE v25[8]; // [rsp+48h] [rbp-41h] BYREF
  DXGPUSHLOCK *v26; // [rsp+50h] [rbp-39h]
  int v27; // [rsp+58h] [rbp-31h]
  unsigned __int64 v28; // [rsp+60h] [rbp-29h] BYREF
  DXGADAPTER *v29; // [rsp+68h] [rbp-21h] BYREF
  _BYTE v30[64]; // [rsp+80h] [rbp-9h] BYREF

  v3 = (unsigned int)a1;
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(a1, (__int64)a2);
  if ( Current )
  {
    DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)&v29, (unsigned int)v3, Current, &v24, 1);
    v11 = v24;
    if ( v24 )
    {
      PairingAdapters = DxgkpGetPairingAdapters(v24, 0LL, &v24, &v28, 0LL, 0LL, 0);
      v3 = PairingAdapters;
      if ( PairingAdapters < 0 )
      {
        v23 = WdLogNewEntry5_WdError(v14, v13, v15);
        *(_QWORD *)(v23 + 24) = v11;
        *(_QWORD *)(v23 + 32) = v3;
        WdLogEvent5_WdError(v23);
      }
      else
      {
        v16 = v24;
        COREACCESS::COREACCESS((COREACCESS *)v30, v24);
        DXGADAPTER::ReleaseReferenceNoTracking(v16);
        v17 = (struct _KTHREAD **)*((_QWORD *)v16 + 320);
        DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v25, v17 + 92, 0);
        DXGPUSHLOCK::AcquireShared(v26);
        v27 = 1;
        PresentHistoryTokenQueue = ADAPTER_RENDER::GetPresentHistoryTokenQueue(
                                     (ADAPTER_RENDER *)v17,
                                     (struct DXGAUTOPUSHLOCK *)v25,
                                     1);
        if ( PresentHistoryTokenQueue )
        {
          v19 = (void *)*((_QWORD *)PresentHistoryTokenQueue + 9);
          *a2 = v19;
          ObfReferenceObject(v19);
          LODWORD(v3) = 0;
        }
        else
        {
          *a2 = 0LL;
          LODWORD(v3) = -1073741801;
        }
        DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v25);
        COREACCESS::~COREACCESS((COREACCESS *)v30);
      }
    }
    else
    {
      v22 = WdLogNewEntry5_WdWarning(v9, v8, v10);
      *(_QWORD *)(v22 + 24) = v3;
      LODWORD(v3) = -1073741811;
      *(_QWORD *)(v22 + 32) = -1073741811LL;
      WdLogEvent5_WdWarning(v22);
    }
    if ( v29 )
      DXGADAPTER::ReleaseReferenceNoTracking(v29);
  }
  else
  {
    v21 = WdLogNewEntry5_WdError(v6, v5, v7);
    LODWORD(v3) = -1073741811;
    *(_QWORD *)(v21 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v21);
  }
  return (unsigned int)v3;
}
