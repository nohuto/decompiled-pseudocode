/*
 * XREFs of ?DmmGetMultisamplingMethodSetFromClientVidPnSource@@YAJQEAXIIIW4_D3DDDIFORMAT@@_KPEAU_D3DDDI_MULTISAMPLINGMETHOD@@PEA_K@Z @ 0x1C027B194
 * Callers:
 *     DxgkGetMultisampleMethodList @ 0x1C02061A0 (DxgkGetMultisampleMethodList.c)
 * Callees:
 *     ?reset@?$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z @ 0x1C0003D7C (-reset@-$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x1C00041F4 (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     ?FindBestMatch@DMMVIDPNSOURCEMODESET@@QEAAPEBVDMMVIDPNSOURCEMODE@@IIW4_D3DDDIFORMAT@@W4_D3DKMDT_VIDPN_SOURCE_MODE_TYPE@@@Z @ 0x1C0006F28 (-FindBestMatch@DMMVIDPNSOURCEMODESET@@QEAAPEBVDMMVIDPNSOURCEMODE@@IIW4_D3DDDIFORMAT@@W4_D3DKMDT_.c)
 *     ?FindById@?$IndexedSet@VDMMVIDPNSOURCE@@@@QEBAPEAVDMMVIDPNSOURCE@@I@Z @ 0x1C000B2E8 (-FindById@-$IndexedSet@VDMMVIDPNSOURCE@@@@QEBAPEAVDMMVIDPNSOURCE@@I@Z.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C000E1D8 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000E3CC (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0011E50 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     memmove @ 0x1C0022E80 (memmove.c)
 *     memset @ 0x1C00231C0 (memset.c)
 *     ?CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C00C2870 (-CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 *     ?PinMode@DMMVIDPNSOURCEMODESET@@QEAAJI@Z @ 0x1C00D8960 (-PinMode@DMMVIDPNSOURCEMODESET@@QEAAJI@Z.c)
 *     ?FormalizeVidPnChange@VIDPN_MGR@@QEBAJPEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@EQEBU_DXGK_ENUM_PIVOT@@@Z @ 0x1C00E491C (-FormalizeVidPnChange@VIDPN_MGR@@QEBAJPEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@EQEBU_DXGK_ENUM_PIV.c)
 */

__int64 __fastcall DmmGetMultisamplingMethodSetFromClientVidPnSource(
        DXGADAPTER *this,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        enum _D3DDDIFORMAT a5,
        unsigned __int64 a6,
        struct _D3DDDI_MULTISAMPLINGMETHOD *a7,
        unsigned __int64 *a8)
{
  __int64 v8; // r12
  unsigned __int64 *v10; // r15
  __int64 v11; // rax
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rax
  struct VIDPN_MGR *v16; // r13
  __int64 v17; // rax
  int ClientVidPnFromLastClientCommitedVidPn; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rdi
  __int64 v24; // rax
  unsigned __int64 v25; // rbx
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // r14
  __int64 v29; // rax
  __int64 v30; // rax
  DMMVIDPNSOURCEMODESET *v31; // rdi
  __int64 v32; // rax
  __int64 v33; // rax
  const struct DMMVIDPNSOURCEMODE *BestMatch; // rax
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  _QWORD *v39; // rax
  int v40; // eax
  __int64 v41; // rcx
  __int64 v42; // r9
  _QWORD *v43; // rax
  int v44; // eax
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r8
  __int64 v48; // r9
  __int64 v49; // r13
  _QWORD *v50; // rax
  _QWORD *v51; // rax
  unsigned __int64 v52; // rbx
  size_t v53; // r8
  unsigned __int64 v54; // rdi
  __int64 v55; // rax
  __int64 v56; // rcx
  __int64 v57; // rax
  DMMVIDPNSOURCEMODESET *v58; // [rsp+30h] [rbp-10h] BYREF
  __int64 v59; // [rsp+38h] [rbp-8h] BYREF
  unsigned int v60; // [rsp+80h] [rbp+40h] BYREF
  int v61; // [rsp+84h] [rbp+44h]
  unsigned int v62; // [rsp+90h] [rbp+50h]
  unsigned int v63; // [rsp+98h] [rbp+58h]

  v63 = a4;
  v62 = a3;
  v8 = a2;
  if ( a7 )
    memset(a7, 0, 8 * a6);
  v10 = a8;
  if ( a8 )
    *a8 = 0LL;
  if ( !this )
  {
    v11 = WdLogNewEntry5_WdError(this);
    *(_QWORD *)(v11 + 24) = 0LL;
LABEL_7:
    WdLogEvent5_WdError(v11);
    return 3223191554LL;
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(this) )
  {
    v14 = WdLogNewEntry5_WdAssertion(v13);
    WdLogEvent5_WdAssertion(v14);
  }
  v15 = *((_QWORD *)this + 315);
  if ( !v15 )
  {
    v11 = WdLogNewEntry5_WdError(v13);
    *(_QWORD *)(v11 + 24) = this;
    goto LABEL_7;
  }
  v16 = *(struct VIDPN_MGR **)(v15 + 88);
  if ( v16 )
  {
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v59, *(_QWORD *)(v15 + 88));
    a8 = 0LL;
    ClientVidPnFromLastClientCommitedVidPn = VIDPN_MGR::CreateClientVidPnFromLastClientCommitedVidPn(
                                               v16,
                                               (__int64 *)&a8);
    v23 = ClientVidPnFromLastClientCommitedVidPn;
    if ( ClientVidPnFromLastClientCommitedVidPn >= 0 )
    {
      v25 = (unsigned __int64)a8;
      v26 = IndexedSet<DMMVIDPNSOURCE>::FindById(a8[38], v8);
      v28 = v26;
      if ( v26 )
      {
        v30 = *(_QWORD *)(v26 + 104);
        if ( v30 )
        {
          _InterlockedIncrement((volatile signed __int32 *)(v30 + 96));
          v31 = *(DMMVIDPNSOURCEMODESET **)(v28 + 104);
          v25 = (unsigned __int64)a8;
        }
        else
        {
          v31 = 0LL;
        }
        v32 = *((_QWORD *)v31 + 18);
        v58 = v31;
        if ( v32 )
        {
          BestMatch = DMMVIDPNSOURCEMODESET::FindBestMatch(
                        v31,
                        v62,
                        v63,
                        a5,
                        (enum _D3DKMDT_VIDPN_SOURCE_MODE_TYPE)*(_DWORD *)(v32 + 72));
          if ( BestMatch )
          {
            v40 = DMMVIDPNSOURCEMODESET::PinMode(v31, *((unsigned int *)BestMatch + 6), v37, v38);
            v23 = v40;
            if ( v40 >= 0 )
            {
              v61 = -1;
              v60 = v8;
              LOBYTE(v42) = 1;
              v44 = VIDPN_MGR::FormalizeVidPnChange(
                      (__int64)v16,
                      (D3DKMDT_HVIDPN)(v25 & -(__int64)(v25 != -88LL)),
                      3LL,
                      v42,
                      &v60);
              v49 = v44;
              if ( v44 >= 0 )
              {
                v52 = *(_QWORD *)(v28 + 168) >> 3;
                v53 = 8 * v52;
                if ( v10 )
                  *v10 = v53;
                v54 = a6;
                if ( a6 >= v52 )
                {
                  if ( a7 )
                    memmove(a7, *(const void **)(v28 + 160), v53);
                  LODWORD(v23) = 0;
                }
                else
                {
                  v55 = WdLogNewEntry5_WdDmmEvent(v46, v45, v53, v48);
                  *(_QWORD *)(v55 + 24) = v54;
                  *(_QWORD *)(v55 + 32) = v52;
                  WdLogEvent5_WdDmmEvent(v55);
                  if ( !v10 )
                  {
                    v57 = WdLogNewEntry5_WdAssertion(v56);
                    WdLogEvent5_WdAssertion(v57);
                  }
                  LODWORD(v23) = -1073741789;
                }
              }
              else
              {
                if ( v44 == -1071774970 )
                {
                  v50 = (_QWORD *)WdLogNewEntry5_WdWarning(v46, v45, v47);
                  v50[3] = v25;
                  v50[4] = v8;
                  v50[5] = this;
                  WdLogEvent5_WdWarning(v50);
                }
                else
                {
                  v51 = (_QWORD *)WdLogNewEntry5_WdError(v46);
                  v51[3] = v62;
                  v51[4] = v63;
                  v51[5] = a5;
                  v51[6] = v8;
                  v51[7] = v49;
                  WdLogEvent5_WdError(v51);
                }
                LODWORD(v23) = v49;
              }
            }
            else
            {
              v43 = (_QWORD *)WdLogNewEntry5_WdError(v41);
              v43[4] = v62;
              v43[5] = v63;
              v43[6] = a5;
              v43[3] = v8;
              v43[7] = v23;
              WdLogEvent5_WdError(v43);
            }
          }
          else
          {
            v39 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v36, v35, v37, v38);
            v39[3] = v62;
            v39[4] = v63;
            v39[5] = a5;
            v39[6] = v8;
            v39[7] = this;
            WdLogEvent5_WdDmmEvent(v39);
            LODWORD(v23) = -1071774970;
          }
        }
        else
        {
          v33 = WdLogNewEntry5_WdError(v27);
          *(_QWORD *)(v33 + 24) = v28;
          WdLogEvent5_WdError(v33);
          LODWORD(v23) = 1075708679;
        }
        auto_rc<DMMVIDPNSOURCEMODESET>::reset((__int64 *)&v58, 0LL);
      }
      else
      {
        v29 = WdLogNewEntry5_WdError(v27);
        *(_QWORD *)(v29 + 24) = v8;
        WdLogEvent5_WdError(v29);
        LODWORD(v23) = -1071774972;
      }
    }
    else
    {
      v24 = WdLogNewEntry5_WdDmmEvent(v20, v19, v21, v22);
      *(_QWORD *)(v24 + 24) = v23;
      WdLogEvent5_WdDmmEvent(v24);
    }
    auto_rc<DMMVIDPN>::reset((__int64 *)&a8, 0LL);
    DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v59 + 40));
    return (unsigned int)v23;
  }
  else
  {
    v17 = WdLogNewEntry5_WdError(v13);
    *(_QWORD *)(v17 + 24) = this;
    WdLogEvent5_WdError(v17);
    return 3223192373LL;
  }
}
