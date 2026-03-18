/*
 * XREFs of _BtlPreAcquireSharedAccess_&CCD_BTL_ACTIVE_PATHS_COLLECTOR::_CollectActiveAdaptersCallback_1_0_ @ 0x1C01347C0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsBddFallbackDriver@DXGADAPTER@@QEBAEXZ @ 0x1C00040B0 (-IsBddFallbackDriver@DXGADAPTER@@QEBAEXZ.c)
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x1C00041F4 (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C000E1D8 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000E3CC (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?reset@?$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z @ 0x1C000EAA4 (-reset@-$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000F590 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C001071C (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0011CB0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0012240 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00123A4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??1?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@XZ @ 0x1C00227A8 (--1-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@XZ.c)
 *     DxgkIsMSBDDFallbackEnabled @ 0x1C004527C (DxgkIsMSBDDFallbackEnabled.c)
 *     ?_ProcessVidPn@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJPEAVDMMVIDPN@@_N@Z @ 0x1C00BF624 (-_ProcessVidPn@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJPEAVDMMVIDPN@@_N@Z.c)
 *     ?CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C00C2870 (-CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 */

__int64 __fastcall BtlPreAcquireSharedAccess__CCD_BTL_ACTIVE_PATHS_COLLECTOR::_CollectActiveAdaptersCallback_1_0_(
        struct DXGADAPTER *a1,
        CCD_BTL_ACTIVE_PATHS_COLLECTOR *this)
{
  __int64 v4; // rax
  __int64 v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rax
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rbx
  __int64 v14; // rdi
  struct VIDPN_MGR *v15; // rdi
  int ClientVidPnFromLastClientCommitedVidPn; // eax
  __int64 v17; // rcx
  _QWORD *v19; // rax
  _QWORD *v20; // rsi
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // [rsp+20h] [rbp-39h] BYREF
  _BYTE v28[8]; // [rsp+28h] [rbp-31h] BYREF
  struct DXGADAPTER *v29; // [rsp+30h] [rbp-29h]
  char v30; // [rsp+38h] [rbp-21h]
  _BYTE v31[8]; // [rsp+40h] [rbp-19h] BYREF
  _BYTE v32[32]; // [rsp+48h] [rbp-11h] BYREF
  _BYTE v33[72]; // [rsp+68h] [rbp+Fh] BYREF
  struct DMMVIDPN *v34; // [rsp+C0h] [rbp+67h] BYREF
  __int64 v35; // [rsp+D0h] [rbp+77h] BYREF
  __int64 v36; // [rsp+D8h] [rbp+7Fh] BYREF

  v29 = a1;
  v30 = 0;
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v28);
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v28);
  v4 = *((_QWORD *)a1 + 315);
  if ( v4 && *(_DWORD *)(v4 + 80) && *((_DWORD *)a1 + 44) == 1 )
  {
    v5 = *(_QWORD *)(*((_QWORD *)a1 + 315) + 88LL);
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v27, v5);
    v6 = *(_QWORD *)(v5 + 88);
    if ( v6 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v6 + 32));
      v7 = *(_QWORD *)(v5 + 88);
      v36 = v7;
      if ( v7 && *(_QWORD *)(v7 + 136) )
      {
        auto_rc<DMMVIDPN const>::reset(&v36, 0LL);
        DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v27 + 40));
        COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v31, a1, 0LL);
        v8 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v31);
        LODWORD(v13) = v8;
        if ( v8 < 0 )
        {
          if ( v8 != -1073741130 )
            goto LABEL_13;
          v19 = (_QWORD *)WdLogNewEntry5_WdTrace(v10, v9, v11, v12);
          v19[3] = a1;
          v19[4] = *((int *)a1 + 70);
          v19[5] = *((unsigned int *)a1 + 69);
          v19[6] = this;
        }
        else if ( !DXGADAPTER::IsBddFallbackDriver(a1) || DxgkIsMSBDDFallbackEnabled() )
        {
          v14 = *((_QWORD *)a1 + 315);
          if ( v14 )
          {
            v15 = *(struct VIDPN_MGR **)(v14 + 88);
            EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v35, (__int64)v15);
            v34 = 0LL;
            ClientVidPnFromLastClientCommitedVidPn = VIDPN_MGR::CreateClientVidPnFromLastClientCommitedVidPn(
                                                       v15,
                                                       (__int64 *)&v34);
            v13 = ClientVidPnFromLastClientCommitedVidPn;
            if ( ClientVidPnFromLastClientCommitedVidPn < 0 )
            {
              v20 = (_QWORD *)WdLogNewEntry5_WdError(v17);
              v20[3] = v13;
              v20[4] = v15;
              v21 = *(_QWORD *)this;
              v20[5] = *(_QWORD *)(*(_QWORD *)this + 64LL);
              v22 = *((_QWORD *)v15 + 1);
              if ( !v22 )
              {
                v23 = WdLogNewEntry5_WdAssertion(v21);
                WdLogEvent5_WdAssertion(v23);
                v22 = *((_QWORD *)v15 + 1);
              }
              v24 = *(int *)(*(_QWORD *)(v22 + 16) + 280LL);
              v20[6] = v24;
              v25 = *((_QWORD *)v15 + 1);
              if ( !v25 )
              {
                v26 = WdLogNewEntry5_WdAssertion(v24);
                WdLogEvent5_WdAssertion(v26);
                v25 = *((_QWORD *)v15 + 1);
              }
              v20[7] = *(unsigned int *)(*(_QWORD *)(v25 + 16) + 276LL);
              WdLogEvent5_WdError(v20);
              auto_rc<DMMVIDPN>::reset((__int64 *)&v34, 0LL);
            }
            else
            {
              LODWORD(v13) = CCD_BTL_ACTIVE_PATHS_COLLECTOR::_ProcessVidPn(this, v34, 1);
              auto_rc<DMMVIDPN>::reset((__int64 *)&v34, 0LL);
              if ( (int)v13 >= 0 )
              {
                DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v35 + 40));
LABEL_13:
                COREACCESS::~COREACCESS((COREACCESS *)v33);
                COREACCESS::~COREACCESS((COREACCESS *)v32);
                goto LABEL_17;
              }
            }
            EXCLUSIVEACCESS<VIDPN_MGR>::~EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v35);
            goto LABEL_13;
          }
        }
        LODWORD(v13) = 0;
        goto LABEL_13;
      }
    }
    else
    {
      v36 = 0LL;
    }
    auto_rc<DMMVIDPN const>::reset(&v36, 0LL);
    DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v27 + 40));
  }
  LODWORD(v13) = 0;
LABEL_17:
  if ( v30 )
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v28);
  return (unsigned int)v13;
}
