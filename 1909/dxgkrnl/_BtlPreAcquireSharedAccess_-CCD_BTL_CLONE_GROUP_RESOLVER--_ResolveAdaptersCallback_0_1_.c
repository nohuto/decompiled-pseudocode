/*
 * XREFs of _BtlPreAcquireSharedAccess_&CCD_BTL_CLONE_GROUP_RESOLVER::_ResolveAdaptersCallback_0_1_ @ 0x1C00DD090
 * Callers:
 *     <none>
 * Callees:
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x1C0004518 (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     ?IsBddFallbackDriver@DXGADAPTER@@QEBAEXZ @ 0x1C0006854 (-IsBddFallbackDriver@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000700C (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0007068 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C00078E0 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000897C (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000BF70 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C000C0A0 (-AcquireShared@COREADAPTERACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C000C1D0 (--1COREACCESS@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     ??1?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@XZ @ 0x1C0024AE0 (--1-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@XZ.c)
 *     DxgkIsMSBDDFallbackEnabled @ 0x1C004B958 (DxgkIsMSBDDFallbackEnabled.c)
 *     ?_ResolveCloneGroupOnAdapter@CCD_BTL_CLONE_GROUP_RESOLVER@@AEAAJPEAVDXGADAPTER@@IPEAVDMMVIDPN@@@Z @ 0x1C00DC944 (-_ResolveCloneGroupOnAdapter@CCD_BTL_CLONE_GROUP_RESOLVER@@AEAAJPEAVDXGADAPTER@@IPEAVDMMVIDPN@@@.c)
 *     ?CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C00E3588 (-CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 */

__int64 __fastcall BtlPreAcquireSharedAccess__CCD_BTL_CLONE_GROUP_RESOLVER::_ResolveAdaptersCallback_0_1_(
        struct DXGADAPTER *a1,
        CCD_SET_STRING_ID **this)
{
  __int64 v4; // r8
  int v5; // eax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rbx
  _QWORD *v9; // rax
  __int64 v11; // rax
  struct VIDPN_MGR *v12; // r14
  int ClientVidPnFromLastClientCommitedVidPn; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  int v17; // r15d
  unsigned int v18; // r14d
  int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  int v23; // r15d
  unsigned int v24; // r14d
  int v25; // eax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  _QWORD *v29; // rax
  __int64 v30; // rcx
  _QWORD *v31; // rax
  struct DMMVIDPN *v32; // [rsp+20h] [rbp-A9h] BYREF
  __int64 v33; // [rsp+28h] [rbp-A1h] BYREF
  _BYTE v34[8]; // [rsp+30h] [rbp-99h] BYREF
  struct DXGADAPTER *v35; // [rsp+38h] [rbp-91h]
  char v36; // [rsp+40h] [rbp-89h]
  _BYTE v37[8]; // [rsp+50h] [rbp-79h] BYREF
  _BYTE v38[64]; // [rsp+58h] [rbp-71h] BYREF
  _BYTE v39[72]; // [rsp+98h] [rbp-31h] BYREF

  v35 = a1;
  v36 = 0;
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v34);
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v34);
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v37, a1, 0LL);
  v5 = COREADAPTERACCESS::AcquireShared((__int64)v37, 0xFFFFFFFFLL, v4);
  LODWORD(v8) = v5;
  if ( v5 < 0 )
  {
    if ( v5 != -1073741130 )
      goto LABEL_5;
    v9 = (_QWORD *)WdLogNewEntry5_WdTrace(v7, v6);
    v9[3] = a1;
    v9[4] = *((int *)a1 + 70);
    v9[5] = *((unsigned int *)a1 + 69);
    v9[6] = this;
    goto LABEL_4;
  }
  if ( *((_BYTE *)a1 + 2465)
    || DXGADAPTER::IsBddFallbackDriver(a1) && !DxgkIsMSBDDFallbackEnabled()
    || (v11 = *((_QWORD *)a1 + 319)) == 0 )
  {
LABEL_4:
    LODWORD(v8) = 0;
    goto LABEL_5;
  }
  if ( !*((_BYTE *)this + 16) && !*(_BYTE *)(v11 + 234) )
  {
LABEL_21:
    v23 = 0;
    v24 = 0;
    if ( *((_WORD *)*this + 16) )
    {
      do
      {
        if ( (*((_QWORD *)this[1] + 34 * v24 + 6) & 0x200000000000LL) == 0 )
        {
          v25 = CCD_BTL_CLONE_GROUP_RESOLVER::_ResolveCloneGroupOnAdapter(this, a1, v24, 0LL);
          v8 = v25;
          if ( v25 == -1073741275 )
          {
            ++v23;
          }
          else if ( v25 < 0 )
          {
            v31 = (_QWORD *)WdLogNewEntry5_WdError(v27, v26, v28);
            v31[3] = v8;
            v31[4] = a1;
            v31[5] = this[1];
            v31[6] = *this;
            v31[7] = v24;
            WdLogEvent5_WdError(v31);
            goto LABEL_5;
          }
        }
        ++v24;
      }
      while ( v24 < *((unsigned __int16 *)*this + 16) );
      LODWORD(v8) = 0;
      if ( !v23 )
        goto LABEL_20;
      goto LABEL_5;
    }
LABEL_20:
    LODWORD(v8) = -2147483622;
    goto LABEL_5;
  }
  v12 = *(struct VIDPN_MGR **)(v11 + 88);
  EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v33, (__int64)v12);
  v32 = 0LL;
  ClientVidPnFromLastClientCommitedVidPn = VIDPN_MGR::CreateClientVidPnFromLastClientCommitedVidPn(v12);
  v8 = ClientVidPnFromLastClientCommitedVidPn;
  if ( ClientVidPnFromLastClientCommitedVidPn < 0 )
  {
    v29 = (_QWORD *)WdLogNewEntry5_WdError(v15, v14, v16);
    v29[3] = v8;
    v29[4] = v12;
    v29[5] = this[1];
    v29[6] = *((int *)a1 + 70);
    v30 = *((unsigned int *)a1 + 69);
    goto LABEL_33;
  }
  v17 = 0;
  v18 = 0;
  if ( !*((_WORD *)*this + 16) )
  {
LABEL_19:
    auto_rc<DMMVIDPN>::reset((__int64 *)&v32, 0LL);
    DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v33 + 40));
    if ( !v17 )
      goto LABEL_20;
    goto LABEL_21;
  }
  while ( 1 )
  {
    if ( (*((_QWORD *)this[1] + 34 * v18 + 6) & 0x200000000000LL) == 0 )
    {
      v19 = CCD_BTL_CLONE_GROUP_RESOLVER::_ResolveCloneGroupOnAdapter(this, a1, v18, v32);
      v8 = v19;
      if ( v19 == -1073741275 )
      {
        ++v17;
        goto LABEL_18;
      }
      if ( v19 < 0 )
        break;
    }
LABEL_18:
    if ( ++v18 >= *((unsigned __int16 *)*this + 16) )
      goto LABEL_19;
  }
  v29 = (_QWORD *)WdLogNewEntry5_WdError(v21, v20, v22);
  v29[3] = v8;
  v29[4] = a1;
  v29[5] = this[1];
  v29[6] = *this;
  v30 = v18;
LABEL_33:
  v29[7] = v30;
  WdLogEvent5_WdError(v29);
  auto_rc<DMMVIDPN>::reset((__int64 *)&v32, 0LL);
  EXCLUSIVEACCESS<VIDPN_MGR>::~EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v33);
LABEL_5:
  COREACCESS::~COREACCESS((COREACCESS *)v39);
  COREACCESS::~COREACCESS((COREACCESS *)v38);
  if ( v36 )
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v34);
  return (unsigned int)v8;
}
