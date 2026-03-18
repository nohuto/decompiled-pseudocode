/*
 * XREFs of _BtlPreAcquireSharedAccess_&CCD_BTL_CLONE_GROUP_RESOLVER::_ResolveAdaptersCallback_0_1_ @ 0x1C00BE0C0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsBddFallbackDriver@DXGADAPTER@@QEBAEXZ @ 0x1C00040B0 (-IsBddFallbackDriver@DXGADAPTER@@QEBAEXZ.c)
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x1C00041F4 (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C000E1D8 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000E3CC (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000F590 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C001071C (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0011CB0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0012240 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00123A4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??1?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@XZ @ 0x1C00227A8 (--1-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@XZ.c)
 *     DxgkIsMSBDDFallbackEnabled @ 0x1C004527C (DxgkIsMSBDDFallbackEnabled.c)
 *     ?_ResolveCloneGroupOnAdapter@CCD_BTL_CLONE_GROUP_RESOLVER@@AEAAJPEAVDXGADAPTER@@IPEAVDMMVIDPN@@@Z @ 0x1C00BE2F0 (-_ResolveCloneGroupOnAdapter@CCD_BTL_CLONE_GROUP_RESOLVER@@AEAAJPEAVDXGADAPTER@@IPEAVDMMVIDPN@@@.c)
 *     ?CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C00C2870 (-CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 */

__int64 __fastcall BtlPreAcquireSharedAccess__CCD_BTL_CLONE_GROUP_RESOLVER::_ResolveAdaptersCallback_0_1_(
        struct DXGADAPTER *a1,
        CCD_BTL_CLONE_GROUP_RESOLVER *this)
{
  int v4; // eax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rbx
  _QWORD *v10; // rax
  __int64 v12; // rax
  struct VIDPN_MGR *v13; // r14
  int ClientVidPnFromLastClientCommitedVidPn; // eax
  __int64 v15; // rcx
  int v16; // r15d
  unsigned int v17; // r14d
  int v18; // eax
  __int64 v19; // rcx
  int v20; // r15d
  unsigned int v21; // r14d
  int v22; // eax
  __int64 v23; // rcx
  _QWORD *v24; // rax
  __int64 v25; // rcx
  _QWORD *v26; // rax
  _BYTE v27[8]; // [rsp+20h] [rbp-49h] BYREF
  struct DXGADAPTER *v28; // [rsp+28h] [rbp-41h]
  char v29; // [rsp+30h] [rbp-39h]
  _BYTE v30[8]; // [rsp+40h] [rbp-29h] BYREF
  _BYTE v31[32]; // [rsp+48h] [rbp-21h] BYREF
  _BYTE v32[88]; // [rsp+68h] [rbp-1h] BYREF
  struct DMMVIDPN *v33; // [rsp+D0h] [rbp+67h] BYREF
  __int64 v34; // [rsp+E0h] [rbp+77h] BYREF

  v28 = a1;
  v29 = 0;
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v27);
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v27);
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v30, a1, 0LL);
  v4 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v30);
  LODWORD(v9) = v4;
  if ( v4 < 0 )
  {
    if ( v4 != -1073741130 )
      goto LABEL_5;
    v10 = (_QWORD *)WdLogNewEntry5_WdTrace(v6, v5, v7, v8);
    v10[3] = a1;
    v10[4] = *((int *)a1 + 70);
    v10[5] = *((unsigned int *)a1 + 69);
    v10[6] = this;
    goto LABEL_4;
  }
  if ( *((_BYTE *)a1 + 2429)
    || DXGADAPTER::IsBddFallbackDriver(a1) && !DxgkIsMSBDDFallbackEnabled()
    || (v12 = *((_QWORD *)a1 + 315)) == 0 )
  {
LABEL_4:
    LODWORD(v9) = 0;
    goto LABEL_5;
  }
  if ( !*((_BYTE *)this + 16) && !*(_BYTE *)(v12 + 133) )
  {
LABEL_21:
    v20 = 0;
    v21 = 0;
    if ( *(_WORD *)(*(_QWORD *)this + 32LL) )
    {
      do
      {
        if ( (*(_QWORD *)(272LL * v21 + *((_QWORD *)this + 1) + 48) & 0x200000000000LL) == 0 )
        {
          v22 = CCD_BTL_CLONE_GROUP_RESOLVER::_ResolveCloneGroupOnAdapter(this, a1, v21, 0LL);
          v9 = v22;
          if ( v22 == -1073741275 )
          {
            ++v20;
          }
          else if ( v22 < 0 )
          {
            v26 = (_QWORD *)WdLogNewEntry5_WdError(v23);
            v26[3] = v9;
            v26[4] = a1;
            v26[5] = *((_QWORD *)this + 1);
            v26[6] = *(_QWORD *)this;
            v26[7] = v21;
            WdLogEvent5_WdError(v26);
            goto LABEL_5;
          }
        }
        ++v21;
      }
      while ( v21 < *(unsigned __int16 *)(*(_QWORD *)this + 32LL) );
      LODWORD(v9) = 0;
      if ( !v20 )
        goto LABEL_20;
      goto LABEL_5;
    }
LABEL_20:
    LODWORD(v9) = -2147483622;
    goto LABEL_5;
  }
  v13 = *(struct VIDPN_MGR **)(v12 + 88);
  EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v34, (__int64)v13);
  v33 = 0LL;
  ClientVidPnFromLastClientCommitedVidPn = VIDPN_MGR::CreateClientVidPnFromLastClientCommitedVidPn(v13);
  v9 = ClientVidPnFromLastClientCommitedVidPn;
  if ( ClientVidPnFromLastClientCommitedVidPn < 0 )
  {
    v24 = (_QWORD *)WdLogNewEntry5_WdError(v15);
    v24[3] = v9;
    v24[4] = v13;
    v24[5] = *((_QWORD *)this + 1);
    v24[6] = *((int *)a1 + 70);
    v25 = *((unsigned int *)a1 + 69);
    goto LABEL_33;
  }
  v16 = 0;
  v17 = 0;
  if ( !*(_WORD *)(*(_QWORD *)this + 32LL) )
  {
LABEL_19:
    auto_rc<DMMVIDPN>::reset((__int64 *)&v33, 0LL);
    DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v34 + 40));
    if ( !v16 )
      goto LABEL_20;
    goto LABEL_21;
  }
  while ( 1 )
  {
    if ( (*(_QWORD *)(272LL * v17 + *((_QWORD *)this + 1) + 48) & 0x200000000000LL) == 0 )
    {
      v18 = CCD_BTL_CLONE_GROUP_RESOLVER::_ResolveCloneGroupOnAdapter(this, a1, v17, v33);
      v9 = v18;
      if ( v18 == -1073741275 )
      {
        ++v16;
        goto LABEL_18;
      }
      if ( v18 < 0 )
        break;
    }
LABEL_18:
    if ( ++v17 >= *(unsigned __int16 *)(*(_QWORD *)this + 32LL) )
      goto LABEL_19;
  }
  v24 = (_QWORD *)WdLogNewEntry5_WdError(v19);
  v24[3] = v9;
  v24[4] = a1;
  v24[5] = *((_QWORD *)this + 1);
  v24[6] = *(_QWORD *)this;
  v25 = v17;
LABEL_33:
  v24[7] = v25;
  WdLogEvent5_WdError(v24);
  auto_rc<DMMVIDPN>::reset((__int64 *)&v33, 0LL);
  EXCLUSIVEACCESS<VIDPN_MGR>::~EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v34);
LABEL_5:
  COREACCESS::~COREACCESS((COREACCESS *)v32);
  COREACCESS::~COREACCESS((COREACCESS *)v31);
  if ( v29 )
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v27);
  return (unsigned int)v9;
}
