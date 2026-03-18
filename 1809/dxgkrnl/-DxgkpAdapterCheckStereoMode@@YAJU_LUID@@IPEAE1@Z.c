/*
 * XREFs of ?DxgkpAdapterCheckStereoMode@@YAJU_LUID@@IPEAE1@Z @ 0x1C00B1BB0
 * Callers:
 *     DxgkGetAdapterDeviceDesc @ 0x1C00DCCE0 (DxgkGetAdapterDeviceDesc.c)
 * Callees:
 *     ??IDXGADAPTER_REFERENCE@@QEAAPEAPEAVDXGADAPTER@@XZ @ 0x1C00011EC (--IDXGADAPTER_REFERENCE@@QEAAPEAPEAVDXGADAPTER@@XZ.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0005E8C (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z @ 0x1C000E0C4 (-AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000F590 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C001071C (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@COREADAPTERACCESS@@QEAAXXZ @ 0x1C0010778 (-Release@COREADAPTERACCESS@@QEAAXXZ.c)
 *     ?GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z @ 0x1C001112C (-GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z.c)
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z @ 0x1C001150C (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0011CB0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0011D10 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0011E50 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??_V@YAXPEAX@Z @ 0x1C0011F20 (--_V@YAXPEAX@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00123A4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?IsPartOfDesktop@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C0013164 (-IsPartOfDesktop@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?GetCachedStereoStates@ADAPTER_DISPLAY@@QEBAJIPEAE0@Z @ 0x1C00B1F70 (-GetCachedStereoStates@ADAPTER_DISPLAY@@QEBAJIPEAE0@Z.c)
 *     ?SetCachedStereoStates@ADAPTER_DISPLAY@@QEAAJIW4_TRISTATE@@0@Z @ 0x1C00B2004 (-SetCachedStereoStates@ADAPTER_DISPLAY@@QEAAJIW4_TRISTATE@@0@Z.c)
 *     MonitorGetLinkInfoFromTarget @ 0x1C00C2FD0 (MonitorGetLinkInfoFromTarget.c)
 *     DxgkReleaseSessionModeChangeLock @ 0x1C00DE760 (DxgkReleaseSessionModeChangeLock.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C00E2938 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0102F10 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12@Z @ 0x1C0112E10 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12@Z.c)
 *     ?DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@EAEAU_D3DKMT_GETDISPLAYMODELIST@@PEAE@Z @ 0x1C0121CCC (-DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@EAEAU_D3DKMT_GETDISPLAYMODEL.c)
 */

__int64 __fastcall DxgkpAdapterCheckStereoMode(
        struct _LUID a1,
        D3DDDI_VIDEO_PRESENT_SOURCE_ID a2,
        unsigned __int8 *a3,
        unsigned __int8 *a4)
{
  struct _LUID v7; // rbx
  struct DXGPROCESS *Current; // rax
  __int64 v9; // rcx
  struct DXGPROCESS *v10; // rsi
  DXGGLOBAL *Global; // rax
  __int64 v12; // rcx
  struct DXGADAPTER *v13; // rdi
  struct DXGADAPTER **v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  int v19; // eax
  __int64 v20; // rcx
  bool v21; // di
  unsigned int v22; // esi
  int LinkInfoFromTarget; // eax
  const struct _DXGK_DISPLAYMODE_INFO *DisplayModeInfo; // rax
  D3DKMT_DISPLAYMODE *pModeList; // rdx
  unsigned int v26; // r9d
  __int64 v27; // r8
  int v28; // eax
  __int64 v29; // rbx
  int CachedStereoStates; // eax
  _QWORD *v32; // rax
  bool v33; // zf
  __int64 v34; // rax
  __int64 v35; // rax
  _QWORD *v36; // rax
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rax
  _QWORD *v41; // rax
  unsigned __int8 v42[4]; // [rsp+30h] [rbp-99h] BYREF
  unsigned __int8 v43[4]; // [rsp+34h] [rbp-95h] BYREF
  struct DXGADAPTER *v44; // [rsp+38h] [rbp-91h] BYREF
  unsigned __int64 v45; // [rsp+40h] [rbp-89h] BYREF
  _D3DKMT_GETDISPLAYMODELIST v46; // [rsp+48h] [rbp-81h] BYREF
  __int64 v47; // [rsp+60h] [rbp-69h] BYREF
  int v48; // [rsp+68h] [rbp-61h]
  DXGADAPTER *v49; // [rsp+70h] [rbp-59h]
  unsigned __int64 v50; // [rsp+78h] [rbp-51h] BYREF
  _BYTE v51[8]; // [rsp+80h] [rbp-49h] BYREF
  struct DXGADAPTER *v52; // [rsp+88h] [rbp-41h]
  char v53; // [rsp+90h] [rbp-39h]
  __int64 v54; // [rsp+A0h] [rbp-29h] BYREF
  _BYTE v55[16]; // [rsp+A8h] [rbp-21h] BYREF
  DXGADAPTER *v56; // [rsp+B8h] [rbp-11h]
  _BYTE v57[88]; // [rsp+C8h] [rbp-1h] BYREF
  LONG HighPart; // [rsp+134h] [rbp+6Bh]
  unsigned __int8 v59; // [rsp+140h] [rbp+77h] BYREF
  char v60; // [rsp+148h] [rbp+7Fh] BYREF

  HighPart = a1.HighPart;
  v7 = a1;
  if ( !a4 || !a3 )
  {
    v34 = ((__int64 (__fastcall *)(_QWORD))WdLogNewEntry5_WdAssertion)(a1);
    *(_QWORD *)(v34 + 24) = 8390LL;
    WdLogEvent5_WdAssertion(v34);
  }
  Current = DXGPROCESS::GetCurrent();
  *a3 = 0;
  v10 = Current;
  *a4 = 0;
  if ( !Current )
  {
    v41 = (_QWORD *)WdLogNewEntry5_WdError(v9);
    v7.LowPart = -1073741811;
    v41[3] = 0LL;
    v41[4] = a3;
    v41[5] = a4;
    v41[6] = -1073741811LL;
    WdLogEvent5_WdError(v41);
    return v7.LowPart;
  }
  v46.hAdapter = 0;
  v46.VidPnSourceId = a2;
  v46.pModeList = 0LL;
  *(_QWORD *)&v46.ModeCount = 0LL;
  Global = DXGGLOBAL::GetGlobal(v9);
  v49 = DXGGLOBAL::ReferenceAdapterByLuid(Global, v7, &v50);
  v13 = v49;
  if ( !v49 )
  {
    v35 = WdLogNewEntry5_WdError(v12);
    *(_QWORD *)(v35 + 24) = HighPart;
    *(_QWORD *)(v35 + 32) = v7.LowPart;
    WdLogEvent5_WdError(v35);
    v7.LowPart = -1073741811;
    return v7.LowPart;
  }
  v44 = 0LL;
  v14 = (struct DXGADAPTER **)DXGADAPTER_REFERENCE::operator&(&v44);
  if ( (int)DxgkpGetPairingAdapters(v13, v46.VidPnSourceId, 0LL, 0LL, v14, &v45) >= 0 )
  {
    if ( !v44 )
    {
      v37 = WdLogNewEntry5_WdAssertion(v16);
      *(_QWORD *)(v37 + 24) = 8421LL;
      WdLogEvent5_WdAssertion(v37);
    }
    v60 = 0;
    v19 = DXGSESSIONMODECHANGELOCK::AcquireModeChangeLock((DXGSESSIONMODECHANGELOCK *)&v60, 0);
    v7 = (struct _LUID)v19;
    if ( v19 < 0 )
    {
      v38 = WdLogNewEntry5_WdError(v20);
      *(struct _LUID *)(v38 + 24) = v7;
      WdLogEvent5_WdError(v38);
LABEL_37:
      if ( v60 )
        DxgkReleaseSessionModeChangeLock();
      goto LABEL_39;
    }
    v52 = v44;
    v53 = 0;
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v51);
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)&v54, v44, 0LL);
    if ( *((_DWORD *)v44 + 44) == 1 )
    {
      if ( ADAPTER_DISPLAY::IsPartOfDesktop(*((DXGADAPTER ***)v44 + 315), v46.VidPnSourceId) )
      {
        v21 = 0;
        v22 = *(_DWORD *)(3760LL * v46.VidPnSourceId + *(_QWORD *)(*((_QWORD *)v44 + 315) + 112LL) + 1068);
        *(_WORD *)v42 = 0;
        v7.LowPart = ADAPTER_DISPLAY::GetCachedStereoStates(
                       *((ADAPTER_DISPLAY **)v44 + 315),
                       v46.VidPnSourceId,
                       v42,
                       &v42[1]);
        if ( v7.LowPart != -1073741275 )
          goto LABEL_22;
        if ( v22 != -1 )
        {
          v47 = 0LL;
          v48 = 0;
          LinkInfoFromTarget = MonitorGetLinkInfoFromTarget(v44, v22, &v47);
          v7 = (struct _LUID)LinkInfoFromTarget;
          if ( LinkInfoFromTarget >= 0 )
          {
            if ( (v47 & 0x100000000LL) == 0 )
              *(_WORD *)v42 = 0;
            v7.LowPart = (v47 & 0x100000000LL) != 0 ? 0xC0000225 : 0;
            v21 = !(v47 & 0x100000000LL);
          }
          else
          {
            if ( LinkInfoFromTarget == -1073741275 )
            {
LABEL_15:
              v59 = 0;
              v7.LowPart = DxgkpGetDisplayModeList(v44, (struct COREADAPTERACCESS *)&v54, 0, &v46, &v59);
              if ( (v7.LowPart & 0x80000000) != 0 )
              {
                pModeList = v46.pModeList;
              }
              else
              {
                DisplayModeInfo = ADAPTER_DISPLAY::GetDisplayModeInfo(*((DXGADAPTER ***)v44 + 315), v46.VidPnSourceId);
                pModeList = v46.pModeList;
                v26 = 0;
                if ( v46.ModeCount )
                {
                  while ( 1 )
                  {
                    v27 = v26;
                    if ( (*((_DWORD *)&v46.pModeList[v27].Flags + 1) & 0x10) != 0 )
                    {
                      v42[1] = 1;
                      if ( v46.pModeList[v27].Width == *(_DWORD *)DisplayModeInfo
                        && v46.pModeList[v27].Height == *((_DWORD *)DisplayModeInfo + 1)
                        && v46.pModeList[v27].Format == *((_DWORD *)DisplayModeInfo + 2) )
                      {
                        break;
                      }
                    }
                    if ( ++v26 >= v46.ModeCount )
                      goto LABEL_19;
                  }
                  v42[0] = 1;
                }
LABEL_19:
                v21 = 1;
              }
              if ( v59 )
              {
                operator delete[](pModeList);
                v46.pModeList = 0LL;
              }
              goto LABEL_22;
            }
            v39 = WdLogNewEntry5_WdDmmEvent();
            *(struct _LUID *)(v39 + 24) = v7;
            WdLogEvent5_WdDmmEvent(v39);
          }
          if ( v7.LowPart == -1073741275 )
            goto LABEL_15;
LABEL_22:
          if ( (v7.LowPart & 0x80000000) == 0 )
          {
            if ( v21 )
            {
              if ( !DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)v56) )
              {
                if ( DXGADAPTER::IsCoreResourceSharedOwner(v56) )
                  COREADAPTERACCESS::Release((COREADAPTERACCESS *)&v54);
                v28 = COREADAPTERACCESS::AcquireExclusive(&v54, 1LL);
                v29 = v28;
                if ( v28 < 0 )
                {
                  v40 = WdLogNewEntry5_WdDmmEvent();
                  *(_QWORD *)(v40 + 24) = v29;
                  WdLogEvent5_WdDmmEvent(v40);
                }
              }
              *(_WORD *)v43 = 0;
              CachedStereoStates = ADAPTER_DISPLAY::GetCachedStereoStates(
                                     *((ADAPTER_DISPLAY **)v44 + 315),
                                     v46.VidPnSourceId,
                                     v43,
                                     &v43[1]);
              v7.LowPart = CachedStereoStates;
              if ( CachedStereoStates >= 0 )
              {
                *(_WORD *)v42 = *(_WORD *)v43;
              }
              else if ( CachedStereoStates == -1073741275 )
              {
                v7.LowPart = ADAPTER_DISPLAY::SetCachedStereoStates(
                               *((_QWORD *)v44 + 315),
                               v46.VidPnSourceId,
                               v42[1] != 0,
                               v42[0] != 0);
              }
            }
            if ( (v7.LowPart & 0x80000000) == 0 )
            {
              *a3 = v42[0];
              *a4 = v42[1];
            }
          }
        }
LABEL_34:
        COREACCESS::~COREACCESS((COREACCESS *)v57);
        COREACCESS::~COREACCESS((COREACCESS *)v55);
        if ( v53 )
          DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v51);
        v13 = v49;
        goto LABEL_37;
      }
      v32 = (_QWORD *)WdLogNewEntry5_WdDmmEvent();
      v7.LowPart = -1071774238;
      v32[3] = v44 != 0LL;
      v32[4] = v46.VidPnSourceId;
      v32[5] = -1071774238LL;
    }
    else
    {
      v32 = (_QWORD *)WdLogNewEntry5_WdDmmEvent();
      v7.LowPart = -1073741130;
      v32[3] = v10;
      v32[4] = v46.hAdapter;
      v33 = v44 == 0LL;
      v32[6] = -1073741130LL;
      v32[5] = !v33;
    }
    WdLogEvent5_WdDmmEvent(v32);
    goto LABEL_34;
  }
  v36 = (_QWORD *)WdLogNewEntry5_WdTrace(v16, v15, v17, v18);
  v7.LowPart = 0;
  v36[3] = 1LL;
  v36[4] = v46.VidPnSourceId;
  v36[5] = 0LL;
LABEL_39:
  if ( v44 )
    DXGADAPTER::ReleaseReference(v44);
  v44 = 0LL;
  DXGADAPTER::ReleaseReference(v13);
  return v7.LowPart;
}
