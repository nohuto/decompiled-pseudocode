/*
 * XREFs of DxgkGetPresentHistoryReadyEvent @ 0x1C012EEF0
 * Callers:
 *     ?Initialize@CAdapter@@IEAAJAEBUCSM_TOKEN_ADAPTER_INFO@@@Z @ 0x1C0017C98 (-Initialize@CAdapter@@IEAAJAEBUCSM_TOKEN_ADAPTER_INFO@@@Z.c)
 * Callees:
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C00118EC (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0011A40 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C0011B30 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0011CB0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0011D10 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z @ 0x1C00124D0 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0102F10 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12@Z @ 0x1C0112E10 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12@Z.c)
 *     ?GetPresentHistoryTokenQueue@ADAPTER_RENDER@@QEAAPEAVDXGPRESENTHISTORYTOKENQUEUE@@PEAVDXGAUTOPUSHLOCK@@H@Z @ 0x1C012F020 (-GetPresentHistoryTokenQueue@ADAPTER_RENDER@@QEAAPEAVDXGPRESENTHISTORYTOKENQUEUE@@PEAVDXGAUTOPUS.c)
 */

__int64 __fastcall DxgkGetPresentHistoryReadyEvent(unsigned int a1, _QWORD *a2)
{
  __int64 v3; // rbx
  struct _KTHREAD **Current; // rax
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  struct DXGADAPTER *v9; // rdi
  int PairingAdapters; // eax
  __int64 v11; // rcx
  DXGADAPTER *v12; // rbx
  struct _KTHREAD **v13; // rbx
  struct DXGPRESENTHISTORYTOKENQUEUE *PresentHistoryTokenQueue; // rax
  void *v15; // rcx
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  unsigned __int64 v20; // [rsp+30h] [rbp-50h] BYREF
  DXGADAPTER *v21; // [rsp+38h] [rbp-48h] BYREF
  _BYTE v22[8]; // [rsp+48h] [rbp-38h] BYREF
  DXGPUSHLOCK *v23; // [rsp+50h] [rbp-30h]
  int v24; // [rsp+58h] [rbp-28h]
  _BYTE v25[8]; // [rsp+60h] [rbp-20h] BYREF
  __int64 v26; // [rsp+68h] [rbp-18h]
  DXGADAPTER *v27; // [rsp+70h] [rbp-10h]
  char v28; // [rsp+78h] [rbp-8h]
  DXGADAPTER *v29; // [rsp+B0h] [rbp+30h] BYREF
  struct DXGADAPTER *v30; // [rsp+B8h] [rbp+38h] BYREF

  v3 = a1;
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
  if ( Current )
  {
    DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)&v21, v3, Current, &v30, 1);
    v9 = v30;
    if ( v30 )
    {
      PairingAdapters = DxgkpGetPairingAdapters(v30, 0, &v29, &v20, 0LL, 0LL);
      v3 = PairingAdapters;
      if ( PairingAdapters < 0 )
      {
        v19 = WdLogNewEntry5_WdError(v11);
        *(_QWORD *)(v19 + 24) = v9;
        *(_QWORD *)(v19 + 32) = v3;
        WdLogEvent5_WdError(v19);
      }
      else
      {
        v12 = v29;
        v27 = v29;
        v28 = 0;
        if ( v29 )
        {
          _InterlockedIncrement64((volatile signed __int64 *)v29 + 3);
          v26 = -1LL;
          v12 = v29;
        }
        DXGADAPTER::ReleaseReference(v12);
        v13 = (struct _KTHREAD **)*((_QWORD *)v12 + 316);
        DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v22, v13 + 92, 0);
        DXGPUSHLOCK::AcquireShared(v23);
        v24 = 1;
        PresentHistoryTokenQueue = ADAPTER_RENDER::GetPresentHistoryTokenQueue(
                                     (ADAPTER_RENDER *)v13,
                                     (struct DXGAUTOPUSHLOCK *)v22,
                                     1);
        if ( PresentHistoryTokenQueue )
        {
          v15 = (void *)*((_QWORD *)PresentHistoryTokenQueue + 9);
          *a2 = v15;
          ObfReferenceObject(v15);
          LODWORD(v3) = 0;
        }
        else
        {
          *a2 = 0LL;
          LODWORD(v3) = -1073741801;
        }
        DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v22);
        COREACCESS::~COREACCESS((COREACCESS *)v25);
      }
    }
    else
    {
      v18 = WdLogNewEntry5_WdWarning(v7, v6, v8);
      *(_QWORD *)(v18 + 24) = v3;
      LODWORD(v3) = -1073741811;
      *(_QWORD *)(v18 + 32) = -1073741811LL;
      WdLogEvent5_WdWarning(v18);
    }
    if ( v21 )
      DXGADAPTER::ReleaseReference(v21);
  }
  else
  {
    v17 = WdLogNewEntry5_WdError(v5);
    LODWORD(v3) = -1073741811;
    *(_QWORD *)(v17 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v17);
  }
  return (unsigned int)v3;
}
