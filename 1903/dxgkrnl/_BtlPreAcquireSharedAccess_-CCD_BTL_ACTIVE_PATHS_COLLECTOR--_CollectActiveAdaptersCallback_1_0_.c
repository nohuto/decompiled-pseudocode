/*
 * XREFs of _BtlPreAcquireSharedAccess_&CCD_BTL_ACTIVE_PATHS_COLLECTOR::_CollectActiveAdaptersCallback_1_0_ @ 0x1C0143F20
 * Callers:
 *     <none>
 * Callees:
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x1C0004418 (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     ?IsBddFallbackDriver@DXGADAPTER@@QEBAEXZ @ 0x1C00062E4 (-IsBddFallbackDriver@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0006DA8 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0006E04 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C00076BC (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000874C (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?reset@?$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z @ 0x1C000968C (-reset@-$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000BD80 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C000BEB0 (-AcquireShared@COREADAPTERACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C000BFE0 (--1COREACCESS@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     ??1?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@XZ @ 0x1C0024A90 (--1-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@XZ.c)
 *     DxgkIsMSBDDFallbackEnabled @ 0x1C004B918 (DxgkIsMSBDDFallbackEnabled.c)
 *     ?_ProcessVidPn@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJPEAVDMMVIDPN@@_N@Z @ 0x1C00D7AEC (-_ProcessVidPn@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJPEAVDMMVIDPN@@_N@Z.c)
 *     ?CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C00E2F48 (-CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 */

__int64 __fastcall BtlPreAcquireSharedAccess__CCD_BTL_ACTIVE_PATHS_COLLECTOR::_CollectActiveAdaptersCallback_1_0_(
        struct DXGADAPTER *a1,
        CCD_BTL_ACTIVE_PATHS_COLLECTOR *this)
{
  __int64 v4; // rax
  __int64 v5; // rbx
  __int64 v6; // r8
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // r8
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rbx
  __int64 v14; // rdi
  struct VIDPN_MGR *v15; // rdi
  int ClientVidPnFromLastClientCommitedVidPn; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  _QWORD *v21; // rax
  _QWORD *v22; // rsi
  __int64 v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // rax
  __int64 v29; // rax
  struct DMMVIDPN *v30; // [rsp+20h] [rbp-99h] BYREF
  __int64 v31; // [rsp+28h] [rbp-91h] BYREF
  __int64 v32; // [rsp+30h] [rbp-89h] BYREF
  __int64 v33; // [rsp+38h] [rbp-81h] BYREF
  _BYTE v34[8]; // [rsp+40h] [rbp-79h] BYREF
  struct DXGADAPTER *v35; // [rsp+48h] [rbp-71h]
  char v36; // [rsp+50h] [rbp-69h]
  _BYTE v37[8]; // [rsp+60h] [rbp-59h] BYREF
  _BYTE v38[64]; // [rsp+68h] [rbp-51h] BYREF
  _BYTE v39[72]; // [rsp+A8h] [rbp-11h] BYREF

  v35 = a1;
  v36 = 0;
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v34);
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v34);
  v4 = *((_QWORD *)a1 + 319);
  if ( v4 && *(_DWORD *)(v4 + 80) && *((_DWORD *)a1 + 44) == 1 )
  {
    v5 = *(_QWORD *)(*((_QWORD *)a1 + 319) + 88LL);
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v33, v5);
    v7 = *(_QWORD *)(v5 + 88);
    if ( v7 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v7 + 32));
      v8 = *(_QWORD *)(v5 + 88);
      v32 = v8;
      if ( v8 && *(_QWORD *)(v8 + 136) )
      {
        auto_rc<DMMVIDPN const>::reset(&v32, 0LL, v6);
        DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v33 + 40));
        COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v37, a1, 0LL);
        v10 = COREADAPTERACCESS::AcquireShared((__int64)v37, 0xFFFFFFFFLL, v9);
        LODWORD(v13) = v10;
        if ( v10 < 0 )
        {
          if ( v10 != -1073741130 )
            goto LABEL_13;
          v21 = (_QWORD *)WdLogNewEntry5_WdTrace(v12, v11);
          v21[3] = a1;
          v21[4] = *((int *)a1 + 70);
          v21[5] = *((unsigned int *)a1 + 69);
          v21[6] = this;
        }
        else if ( !DXGADAPTER::IsBddFallbackDriver(a1) || DxgkIsMSBDDFallbackEnabled() )
        {
          v14 = *((_QWORD *)a1 + 319);
          if ( v14 )
          {
            v15 = *(struct VIDPN_MGR **)(v14 + 88);
            EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v31, (__int64)v15);
            v30 = 0LL;
            ClientVidPnFromLastClientCommitedVidPn = VIDPN_MGR::CreateClientVidPnFromLastClientCommitedVidPn(
                                                       v15,
                                                       (__int64 *)&v30);
            v13 = ClientVidPnFromLastClientCommitedVidPn;
            if ( ClientVidPnFromLastClientCommitedVidPn < 0 )
            {
              v22 = (_QWORD *)WdLogNewEntry5_WdError(v18, v17, v19);
              v22[3] = v13;
              v22[4] = v15;
              v23 = *(_QWORD *)this;
              v24 = *(_QWORD *)(*(_QWORD *)this + 64LL);
              v22[5] = v24;
              v25 = *((_QWORD *)v15 + 1);
              if ( !v25 )
              {
                v26 = WdLogNewEntry5_WdAssertion(v23, v24);
                WdLogEvent5_WdAssertion(v26);
                v25 = *((_QWORD *)v15 + 1);
              }
              v27 = *(int *)(*(_QWORD *)(v25 + 16) + 280LL);
              v22[6] = v27;
              v28 = *((_QWORD *)v15 + 1);
              if ( !v28 )
              {
                v29 = WdLogNewEntry5_WdAssertion(v27, v24);
                WdLogEvent5_WdAssertion(v29);
                v28 = *((_QWORD *)v15 + 1);
              }
              v22[7] = *(unsigned int *)(*(_QWORD *)(v28 + 16) + 276LL);
              WdLogEvent5_WdError(v22);
              auto_rc<DMMVIDPN>::reset((__int64 *)&v30, 0LL);
            }
            else
            {
              LODWORD(v13) = CCD_BTL_ACTIVE_PATHS_COLLECTOR::_ProcessVidPn(this, v30, 1);
              auto_rc<DMMVIDPN>::reset((__int64 *)&v30, 0LL);
              if ( (int)v13 >= 0 )
              {
                DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v31 + 40));
LABEL_13:
                COREACCESS::~COREACCESS((COREACCESS *)v39);
                COREACCESS::~COREACCESS((COREACCESS *)v38);
                goto LABEL_17;
              }
            }
            EXCLUSIVEACCESS<VIDPN_MGR>::~EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v31);
            goto LABEL_13;
          }
        }
        LODWORD(v13) = 0;
        goto LABEL_13;
      }
    }
    else
    {
      v32 = 0LL;
    }
    auto_rc<DMMVIDPN const>::reset(&v32, 0LL, v6);
    DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v33 + 40));
  }
  LODWORD(v13) = 0;
LABEL_17:
  if ( v36 )
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v34);
  return (unsigned int)v13;
}
