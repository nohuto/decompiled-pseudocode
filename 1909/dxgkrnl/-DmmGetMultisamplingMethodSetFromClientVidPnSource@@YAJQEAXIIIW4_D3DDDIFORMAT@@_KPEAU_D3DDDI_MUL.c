/*
 * XREFs of ?DmmGetMultisamplingMethodSetFromClientVidPnSource@@YAJQEAXIIIW4_D3DDDIFORMAT@@_KPEAU_D3DDDI_MULTISAMPLINGMETHOD@@PEA_K@Z @ 0x1C02B398C
 * Callers:
 *     DxgkGetMultisampleMethodList @ 0x1C02381A0 (DxgkGetMultisampleMethodList.c)
 * Callees:
 *     ?FindBestMatch@DMMVIDPNSOURCEMODESET@@QEAAPEBVDMMVIDPNSOURCEMODE@@IIW4_D3DDDIFORMAT@@W4_D3DKMDT_VIDPN_SOURCE_MODE_TYPE@@@Z @ 0x1C0003A50 (-FindBestMatch@DMMVIDPNSOURCEMODESET@@QEAAPEBVDMMVIDPNSOURCEMODE@@IIW4_D3DDDIFORMAT@@W4_D3DKMDT_.c)
 *     ?reset@?$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x1C00044DC (-reset@-$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x1C0004518 (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     ?FindById@?$IndexedSet@VDMMVIDPNTARGET@@@@QEBAPEAVDMMVIDPNTARGET@@I@Z @ 0x1C00054F0 (-FindById@-$IndexedSet@VDMMVIDPNTARGET@@@@QEBAPEAVDMMVIDPNTARGET@@I@Z.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000753C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C00078E0 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000897C (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     memmove @ 0x1C0025100 (memmove.c)
 *     memset @ 0x1C0025440 (memset.c)
 *     ?CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C00E3588 (-CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 *     ?FormalizeVidPnChange@VIDPN_MGR@@QEBAJPEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@EQEBU_DXGK_ENUM_PIVOT@@@Z @ 0x1C00E471C (-FormalizeVidPnChange@VIDPN_MGR@@QEBAJPEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@EQEBU_DXGK_ENUM_PIV.c)
 *     ?PinMode@DMMVIDPNSOURCEMODESET@@QEAAJI@Z @ 0x1C01321DC (-PinMode@DMMVIDPNSOURCEMODESET@@QEAAJI@Z.c)
 */

__int64 __fastcall DmmGetMultisamplingMethodSetFromClientVidPnSource(
        DXGADAPTER *this,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        enum _D3DDDIFORMAT a5,
        unsigned __int64 a6,
        struct _D3DDDI_MULTISAMPLINGMETHOD *a7,
        unsigned __int64 *a8)
{
  __int64 v8; // r12
  unsigned __int64 *v10; // r15
  __int64 v11; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rax
  __int64 v17; // rax
  struct VIDPN_MGR *v18; // r13
  __int64 v19; // rax
  int ClientVidPnFromLastClientCommitedVidPn; // eax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rdi
  __int64 v24; // rax
  unsigned __int64 v25; // rbx
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r14
  __int64 v31; // rax
  __int64 v32; // rax
  DMMVIDPNSOURCEMODESET *v33; // rdi
  __int64 v34; // rax
  __int64 v35; // rax
  const struct DMMVIDPNSOURCEMODE *BestMatch; // rax
  __int64 v37; // rdx
  __int64 v38; // rcx
  _QWORD *v39; // rax
  int v40; // eax
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  _QWORD *v44; // rax
  int v45; // eax
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v49; // r13
  _QWORD *v50; // rax
  _QWORD *v51; // rax
  unsigned __int64 v52; // rbx
  size_t v53; // r8
  unsigned __int64 v54; // rdi
  __int64 v55; // rax
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // rax
  DMMVIDPNSOURCEMODESET *v59; // [rsp+30h] [rbp-10h] BYREF
  __int64 v60; // [rsp+38h] [rbp-8h] BYREF
  DXGK_ENUM_PIVOT v61; // [rsp+80h] [rbp+40h] BYREF
  unsigned int v62; // [rsp+90h] [rbp+50h]
  unsigned int v63; // [rsp+98h] [rbp+58h]

  v63 = a4;
  v62 = a3;
  v8 = (unsigned int)a2;
  if ( a7 )
    memset(a7, 0, 8 * a6);
  v10 = a8;
  if ( a8 )
    *a8 = 0LL;
  if ( !this )
  {
    v11 = WdLogNewEntry5_WdError(this, a2, a3);
    *(_QWORD *)(v11 + 24) = 0LL;
LABEL_7:
    WdLogEvent5_WdError(v11);
    return 3223191554LL;
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(this) )
  {
    v16 = WdLogNewEntry5_WdAssertion(v14, v13);
    WdLogEvent5_WdAssertion(v16);
  }
  v17 = *((_QWORD *)this + 319);
  if ( !v17 )
  {
    v11 = WdLogNewEntry5_WdError(v14, v13, v15);
    *(_QWORD *)(v11 + 24) = this;
    goto LABEL_7;
  }
  v18 = *(struct VIDPN_MGR **)(v17 + 88);
  if ( v18 )
  {
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v60, *(_QWORD *)(v17 + 88));
    a8 = 0LL;
    ClientVidPnFromLastClientCommitedVidPn = VIDPN_MGR::CreateClientVidPnFromLastClientCommitedVidPn(
                                               v18,
                                               (__int64 *)&a8);
    v23 = ClientVidPnFromLastClientCommitedVidPn;
    if ( ClientVidPnFromLastClientCommitedVidPn >= 0 )
    {
      v25 = (unsigned __int64)a8;
      v26 = IndexedSet<DMMVIDPNTARGET>::FindById(a8[38], v8);
      v30 = v26;
      if ( v26 )
      {
        v32 = *(_QWORD *)(v26 + 104);
        if ( v32 )
        {
          _InterlockedIncrement((volatile signed __int32 *)(v32 + 96));
          v33 = *(DMMVIDPNSOURCEMODESET **)(v30 + 104);
          v25 = (unsigned __int64)a8;
        }
        else
        {
          v33 = 0LL;
        }
        v34 = *((_QWORD *)v33 + 18);
        v59 = v33;
        if ( v34 )
        {
          BestMatch = DMMVIDPNSOURCEMODESET::FindBestMatch(
                        v33,
                        v62,
                        v63,
                        a5,
                        (enum _D3DKMDT_VIDPN_SOURCE_MODE_TYPE)*(_DWORD *)(v34 + 72));
          if ( BestMatch )
          {
            v40 = DMMVIDPNSOURCEMODESET::PinMode(v33, *((unsigned int *)BestMatch + 6));
            v23 = v40;
            if ( v40 >= 0 )
            {
              v61.VidPnTargetId = -1;
              v61.VidPnSourceId = v8;
              v45 = VIDPN_MGR::FormalizeVidPnChange(
                      (unsigned __int64)v18,
                      (struct D3DKMDT_HVIDPN__ *)(v25 & -(__int64)(v25 != -88LL)),
                      3LL,
                      1,
                      &v61);
              v49 = v45;
              if ( v45 >= 0 )
              {
                v52 = *(_QWORD *)(v30 + 168) >> 3;
                v53 = 8 * v52;
                if ( v10 )
                  *v10 = v53;
                v54 = a6;
                if ( a6 >= v52 )
                {
                  if ( a7 )
                    memmove(a7, *(const void **)(v30 + 160), v53);
                  LODWORD(v23) = 0;
                }
                else
                {
                  v55 = WdLogNewEntry5_WdDmmEvent(v47, v46);
                  *(_QWORD *)(v55 + 24) = v54;
                  *(_QWORD *)(v55 + 32) = v52;
                  WdLogEvent5_WdDmmEvent(v55);
                  if ( !v10 )
                  {
                    v58 = WdLogNewEntry5_WdAssertion(v57, v56);
                    WdLogEvent5_WdAssertion(v58);
                  }
                  LODWORD(v23) = -1073741789;
                }
              }
              else
              {
                if ( v45 == -1071774970 )
                {
                  v50 = (_QWORD *)WdLogNewEntry5_WdWarning(v47, v46, v48);
                  v50[3] = v25;
                  v50[4] = v8;
                  v50[5] = this;
                  WdLogEvent5_WdWarning(v50);
                }
                else
                {
                  v51 = (_QWORD *)WdLogNewEntry5_WdError(v47, v46, v48);
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
              v44 = (_QWORD *)WdLogNewEntry5_WdError(v42, v41, v43);
              v44[4] = v62;
              v44[5] = v63;
              v44[6] = a5;
              v44[3] = v8;
              v44[7] = v23;
              WdLogEvent5_WdError(v44);
            }
          }
          else
          {
            v39 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v38, v37);
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
          v35 = WdLogNewEntry5_WdError(v28, v27, v29);
          *(_QWORD *)(v35 + 24) = v30;
          WdLogEvent5_WdError(v35);
          LODWORD(v23) = 1075708679;
        }
        auto_rc<DMMVIDPNTARGETMODESET>::reset((__int64 *)&v59, 0LL);
      }
      else
      {
        v31 = WdLogNewEntry5_WdError(v28, v27, v29);
        *(_QWORD *)(v31 + 24) = v8;
        WdLogEvent5_WdError(v31);
        LODWORD(v23) = -1071774972;
      }
    }
    else
    {
      v24 = WdLogNewEntry5_WdDmmEvent(v22, v21);
      *(_QWORD *)(v24 + 24) = v23;
      WdLogEvent5_WdDmmEvent(v24);
    }
    auto_rc<DMMVIDPN>::reset((__int64 *)&a8, 0LL);
    DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v60 + 40));
    return (unsigned int)v23;
  }
  else
  {
    v19 = WdLogNewEntry5_WdError(v14, v13, v15);
    *(_QWORD *)(v19 + 24) = this;
    WdLogEvent5_WdError(v19);
    return 3223192373LL;
  }
}
