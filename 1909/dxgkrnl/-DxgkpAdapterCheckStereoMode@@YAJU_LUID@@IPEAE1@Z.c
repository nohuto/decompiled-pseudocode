/*
 * XREFs of ?DxgkpAdapterCheckStereoMode@@YAJU_LUID@@IPEAE1@Z @ 0x1C00C806C
 * Callers:
 *     DxgkGetAdapterDeviceDesc @ 0x1C00E7E10 (DxgkGetAdapterDeviceDesc.c)
 * Callees:
 *     ?GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z @ 0x1C0001B30 (-GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z.c)
 *     ?IsPartOfDesktop@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C0001F64 (-IsPartOfDesktop@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0002778 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C000281C (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IW4_DXGKETW_PROFI.c)
 *     ?Release@COREADAPTERACCESS@@QEAAXXZ @ 0x1C00037E8 (-Release@COREADAPTERACCESS@@QEAAXXZ.c)
 *     ?AssignByLuid@DXGADAPTER_REFERENCE@@QEAA_NAEAU_LUID@@@Z @ 0x1C00038C0 (-AssignByLuid@DXGADAPTER_REFERENCE@@QEAA_NAEAU_LUID@@@Z.c)
 *     ??1DXGSESSIONMODECHANGELOCK@@QEAA@XZ @ 0x1C000391C (--1DXGSESSIONMODECHANGELOCK@@QEAA@XZ.c)
 *     ?AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z @ 0x1C0003974 (-AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z.c)
 *     ??IDXGADAPTER_REFERENCE@@QEAAPEAPEAVDXGADAPTER@@XZ @ 0x1C00041EC (--IDXGADAPTER_REFERENCE@@QEAAPEAPEAVDXGADAPTER@@XZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0007068 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000753C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000BF70 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x1C000C174 (--1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C000C240 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??_V@YAXPEAX@Z @ 0x1C000C530 (--_V@YAXPEAX@Z.c)
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     ??1DXGADAPTER_REFERENCE@@QEAA@XZ @ 0x1C0032678 (--1DXGADAPTER_REFERENCE@@QEAA@XZ.c)
 *     ?DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@EAEAU_D3DKMT_GETDISPLAYMODELIST@@PEAE@Z @ 0x1C00C7B08 (-DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@EAEAU_D3DKMT_GETDISPLAYMODEL.c)
 *     ?GetCachedStereoStates@ADAPTER_DISPLAY@@QEBAJIPEAE0@Z @ 0x1C00C85D0 (-GetCachedStereoStates@ADAPTER_DISPLAY@@QEBAJIPEAE0@Z.c)
 *     ?SetCachedStereoStates@ADAPTER_DISPLAY@@QEAAJIW4_TRISTATE@@0@Z @ 0x1C00C8688 (-SetCachedStereoStates@ADAPTER_DISPLAY@@QEAAJIW4_TRISTATE@@0@Z.c)
 *     ?DmmEnumClientVidPnPathTargetsFromSource@@YAJQEAXI_KQEAI@Z @ 0x1C00EDA60 (-DmmEnumClientVidPnPathTargetsFromSource@@YAJQEAXI_KQEAI@Z.c)
 *     MonitorGetLinkInfoFromTarget @ 0x1C00EDC78 (MonitorGetLinkInfoFromTarget.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01059F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z @ 0x1C01061A0 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z.c)
 */

__int64 __fastcall DxgkpAdapterCheckStereoMode(struct _LUID a1, __int64 a2, unsigned __int8 *a3, unsigned __int8 *a4)
{
  __int64 v4; // rdi
  D3DDDI_VIDEO_PRESENT_SOURCE_ID v7; // r14d
  DWORD LowPart; // ebx
  __int64 v9; // rax
  struct DXGPROCESS *Current; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  struct DXGPROCESS *v14; // rsi
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // rax
  struct DXGADAPTER **v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  _QWORD *v22; // rax
  __int64 v23; // rax
  int v24; // eax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // rbx
  __int64 v29; // rax
  int v30; // r8d
  unsigned int v31; // r14d
  _QWORD *v32; // rax
  char v33; // si
  __int64 v34; // rbx
  int v35; // eax
  int LinkInfoFromTarget; // eax
  int v37; // esi
  __int64 v38; // rax
  const struct _DXGK_DISPLAYMODE_INFO *DisplayModeInfo; // r10
  D3DKMT_DISPLAYMODE *pModeList; // rdx
  UINT v41; // r9d
  __int64 v42; // r8
  int v43; // eax
  __int64 v44; // rbx
  __int64 v45; // rax
  int CachedStereoStates; // eax
  _QWORD *v47; // rax
  unsigned __int8 v49[4]; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int8 v50; // [rsp+44h] [rbp-BCh] BYREF
  _BYTE v51[3]; // [rsp+45h] [rbp-BBh] BYREF
  unsigned __int8 v52[8]; // [rsp+48h] [rbp-B8h] BYREF
  struct DXGADAPTER *v53; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int64 v54; // [rsp+58h] [rbp-A8h] BYREF
  struct _D3DKMT_GETDISPLAYMODELIST v55; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v56; // [rsp+78h] [rbp-88h] BYREF
  struct _LUID v57; // [rsp+80h] [rbp-80h] BYREF
  __int64 v58; // [rsp+88h] [rbp-78h] BYREF
  int v59; // [rsp+90h] [rbp-70h]
  struct DXGADAPTER *v60[2]; // [rsp+98h] [rbp-68h] BYREF
  _BYTE v61[8]; // [rsp+A8h] [rbp-58h] BYREF
  struct DXGADAPTER *v62; // [rsp+B0h] [rbp-50h]
  char v63; // [rsp+B8h] [rbp-48h]
  DXGADAPTER *v64[3]; // [rsp+C0h] [rbp-40h] BYREF
  DXGADAPTER *v65; // [rsp+D8h] [rbp-28h]

  v4 = 0LL;
  v57 = a1;
  v7 = a2;
  LowPart = a1.LowPart;
  if ( !a4 || !a3 )
  {
    v9 = ((__int64 (__fastcall *)(_QWORD, _QWORD))WdLogNewEntry5_WdAssertion)(a1, a2);
    *(_QWORD *)(v9 + 24) = 8576LL;
    WdLogEvent5_WdAssertion(v9);
  }
  Current = DXGPROCESS::GetCurrent();
  *a3 = 0;
  v14 = Current;
  *a4 = 0;
  if ( !Current )
  {
    v47 = (_QWORD *)WdLogNewEntry5_WdError(v12, v11, v13);
    v47[3] = 0LL;
    LODWORD(v4) = -1073741811;
    v47[6] = -1073741811LL;
    v47[4] = a3;
    v47[5] = a4;
    WdLogEvent5_WdError(v47);
    return (unsigned int)v4;
  }
  v60[0] = 0LL;
  v55.hAdapter = 0;
  v55.VidPnSourceId = v7;
  v55.pModeList = 0LL;
  *(_QWORD *)&v55.ModeCount = 0LL;
  if ( DXGADAPTER_REFERENCE::AssignByLuid((DXGADAPTER_REFERENCE *)v60, &v57) )
  {
    v53 = 0LL;
    v19 = (struct DXGADAPTER **)DXGADAPTER_REFERENCE::operator&(&v53);
    if ( (int)DxgkpGetPairingAdapters(v60[0], v55.VidPnSourceId, 0LL, 0LL, v19, &v54, 0) < 0 )
    {
      v22 = (_QWORD *)WdLogNewEntry5_WdTrace(v21, v20);
      v22[3] = v60[0] != 0LL;
      v22[4] = v55.VidPnSourceId;
      v22[5] = 0LL;
LABEL_56:
      DXGADAPTER_REFERENCE::~DXGADAPTER_REFERENCE(&v53);
      goto LABEL_57;
    }
    if ( !v53 )
    {
      v23 = WdLogNewEntry5_WdAssertion(v21, v20);
      *(_QWORD *)(v23 + 24) = 8607LL;
      WdLogEvent5_WdAssertion(v23);
    }
    v51[0] = 0;
    v24 = DXGSESSIONMODECHANGELOCK::AcquireModeChangeLock((DXGSESSIONMODECHANGELOCK *)v51, 0);
    v28 = v24;
    if ( v24 < 0 )
    {
      v29 = WdLogNewEntry5_WdError(v26, v25, v27);
      *(_QWORD *)(v29 + 24) = v28;
      WdLogEvent5_WdError(v29);
      LODWORD(v4) = v28;
LABEL_55:
      DXGSESSIONMODECHANGELOCK::~DXGSESSIONMODECHANGELOCK((DXGSESSIONMODECHANGELOCK *)v51);
      goto LABEL_56;
    }
    v62 = v53;
    v63 = 0;
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v61);
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v64, v53, 0LL);
    v31 = v30 + 1;
    if ( *((_DWORD *)v53 + 44) != v30 + 1 )
    {
      v32 = (_QWORD *)WdLogNewEntry5_WdDmmEvent();
      v32[3] = v14;
      v32[4] = v55.hAdapter;
      LOBYTE(v4) = v53 != 0LL;
      v32[5] = v4;
      LODWORD(v4) = -1073741130;
      v32[6] = -1073741130LL;
LABEL_17:
      WdLogEvent5_WdDmmEvent(v32);
LABEL_54:
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v64);
      DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v61);
      goto LABEL_55;
    }
    if ( !ADAPTER_DISPLAY::IsPartOfDesktop(*((DXGADAPTER ***)v53 + 319), v55.VidPnSourceId) )
    {
      v32 = (_QWORD *)WdLogNewEntry5_WdDmmEvent();
      LOBYTE(v4) = v53 != 0LL;
      v32[3] = v4;
      LODWORD(v4) = -1071774238;
      v32[4] = v55.VidPnSourceId;
      v32[5] = -1071774238LL;
      goto LABEL_17;
    }
    *(_WORD *)v49 = 0;
    v33 = 0;
    LODWORD(v34) = ADAPTER_DISPLAY::GetCachedStereoStates(
                     *((ADAPTER_DISPLAY **)v53 + 319),
                     v55.VidPnSourceId,
                     v49,
                     &v49[1]);
    if ( (_DWORD)v34 != -1073741275 )
      goto LABEL_40;
    v56 = -1;
    v35 = DmmEnumClientVidPnPathTargetsFromSource(v53, v55.VidPnSourceId, 0LL, &v56);
    v34 = v35;
    if ( v35 >= 0 )
    {
      v58 = 0LL;
      v59 = 0;
      LinkInfoFromTarget = MonitorGetLinkInfoFromTarget(v53, v56, &v58);
      v34 = LinkInfoFromTarget;
      if ( LinkInfoFromTarget >= 0 )
      {
        v37 = v31 & HIDWORD(v58);
        if ( (v31 & HIDWORD(v58)) == 0 )
          *(_WORD *)v49 = 0;
        LODWORD(v34) = v37 != 0 ? 0xC0000225 : 0;
        v33 = v31 ^ v37;
LABEL_26:
        if ( (_DWORD)v34 == -1073741275 )
          goto LABEL_27;
LABEL_40:
        if ( (int)v34 >= 0 )
        {
          if ( v33 )
          {
            if ( !DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)v65) )
            {
              if ( DXGADAPTER::IsCoreResourceSharedOwner(v65) )
                COREADAPTERACCESS::Release((COREADAPTERACCESS *)v64);
              v43 = COREADAPTERACCESS::AcquireExclusive(v64, v31);
              v44 = v43;
              if ( v43 < 0 )
              {
                v45 = WdLogNewEntry5_WdDmmEvent();
                *(_QWORD *)(v45 + 24) = v44;
                WdLogEvent5_WdDmmEvent(v45);
              }
            }
            *(_WORD *)v52 = 0;
            CachedStereoStates = ADAPTER_DISPLAY::GetCachedStereoStates(
                                   *((ADAPTER_DISPLAY **)v53 + 319),
                                   v55.VidPnSourceId,
                                   v52,
                                   &v52[1]);
            LODWORD(v34) = CachedStereoStates;
            if ( CachedStereoStates < 0 )
            {
              if ( CachedStereoStates == -1073741275 )
                LODWORD(v34) = ADAPTER_DISPLAY::SetCachedStereoStates(
                                 *((_QWORD *)v53 + 319),
                                 v55.VidPnSourceId,
                                 v49[1] != 0,
                                 v49[0] != 0);
            }
            else
            {
              *(_WORD *)v49 = *(_WORD *)v52;
            }
          }
          if ( (int)v34 >= 0 )
          {
            *a3 = v49[0];
            *a4 = v49[1];
          }
        }
        LODWORD(v4) = v34;
        goto LABEL_54;
      }
      if ( LinkInfoFromTarget == -1073741275 )
      {
LABEL_27:
        v50 = 0;
        LODWORD(v34) = DxgkpGetDisplayModeList(v53, v64, 0, &v55, &v50);
        if ( (int)v34 < 0 )
        {
          pModeList = v55.pModeList;
        }
        else
        {
          DisplayModeInfo = ADAPTER_DISPLAY::GetDisplayModeInfo(*((DXGADAPTER ***)v53 + 319), v55.VidPnSourceId);
          pModeList = v55.pModeList;
          v41 = 0;
          if ( v55.ModeCount )
          {
            while ( 1 )
            {
              v42 = v41;
              if ( (*((_DWORD *)&v55.pModeList[v42].Flags + 1) & 0x10) != 0 )
              {
                v49[1] = v31;
                if ( v55.pModeList[v42].Width == *(_DWORD *)DisplayModeInfo
                  && v55.pModeList[v42].Height == *((_DWORD *)DisplayModeInfo + 1)
                  && v55.pModeList[v42].Format == *((_DWORD *)DisplayModeInfo + 2) )
                {
                  break;
                }
              }
              v41 += v31;
              if ( v41 >= v55.ModeCount )
                goto LABEL_36;
            }
            v49[0] = v31;
          }
LABEL_36:
          v33 = v31;
        }
        if ( v50 )
        {
          operator delete[](pModeList);
          v55.pModeList = 0LL;
        }
        goto LABEL_40;
      }
    }
    v38 = WdLogNewEntry5_WdDmmEvent();
    *(_QWORD *)(v38 + 24) = v34;
    WdLogEvent5_WdDmmEvent(v38);
    goto LABEL_26;
  }
  v18 = WdLogNewEntry5_WdError(v16, v15, v17);
  *(_QWORD *)(v18 + 24) = v57.HighPart;
  *(_QWORD *)(v18 + 32) = LowPart;
  WdLogEvent5_WdError(v18);
  LODWORD(v4) = -1073741811;
LABEL_57:
  DXGADAPTER_REFERENCE::~DXGADAPTER_REFERENCE(v60);
  return (unsigned int)v4;
}
