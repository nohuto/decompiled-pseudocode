/*
 * XREFs of ?_ProcessVidPnPath@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJPEAVDXGADAPTER@@PEAVDMMVIDPNPRESENTPATH@@_N2@Z @ 0x1C00BF6E4
 * Callers:
 *     ?_ProcessVidPn@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJPEAVDMMVIDPN@@_N@Z @ 0x1C00BF624 (-_ProcessVidPn@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJPEAVDMMVIDPN@@_N@Z.c)
 *     _BtlPreAcquireSharedAccess_&CCD_BTL_ACTIVE_PATHS_COLLECTOR::_CollectAllPathsAdaptersCallback_0_1_ @ 0x1C013A7B0 (_BtlPreAcquireSharedAccess_-CCD_BTL_ACTIVE_PATHS_COLLECTOR--_CollectAllPathsAdaptersCallback_0_1.c)
 * Callees:
 *     ?IsVidPnSourceVisible@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C0002210 (-IsVidPnSourceVisible@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z @ 0x1C0003D7C (-reset@-$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z.c)
 *     ?GetDwmClipBox@ADAPTER_DISPLAY@@QEBAQEBUtagRECT@@I@Z @ 0x1C0004070 (-GetDwmClipBox@ADAPTER_DISPLAY@@QEBAQEBUtagRECT@@I@Z.c)
 *     ?GetGraphicsInfo@DMMVIDPNSOURCEMODE@@QEBAPEBU_D3DKMDT_GRAPHICS_RENDERING_FORMAT@@XZ @ 0x1C0007060 (-GetGraphicsInfo@DMMVIDPNSOURCEMODE@@QEBAPEBU_D3DKMDT_GRAPHICS_RENDERING_FORMAT@@XZ.c)
 *     ?IsSourceAndTargetPinned@DMMVIDPNPRESENTPATH@@QEBAEXZ @ 0x1C000EBD4 (-IsSourceAndTargetPinned@DMMVIDPNPRESENTPATH@@QEBAEXZ.c)
 *     ?reset@?$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x1C000F554 (-reset@-$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     ?IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C00106CC (-IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0011E50 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?AddPathDescriptor@CCD_TOPOLOGY@@QEAAJAEBU_LUID@@II_N1W4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@2W4_D3DKMT_DISPLAY_TARGET_USAGE@@PEAPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@@Z @ 0x1C00AF2B8 (-AddPathDescriptor@CCD_TOPOLOGY@@QEAAJAEBU_LUID@@II_N1W4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@2W4_D3.c)
 *     ?GetSessionViewOwner@ADAPTER_DISPLAY@@QEBAPEAVSESSION_VIEW@@I@Z @ 0x1C00BF2F4 (-GetSessionViewOwner@ADAPTER_DISPLAY@@QEBAPEAVSESSION_VIEW@@I@Z.c)
 *     DxgkIsVirtualizationDisabledForTarget @ 0x1C00C2320 (DxgkIsVirtualizationDisabledForTarget.c)
 *     ?AddingMonitorOrientation@ADAPTER_DISPLAY@@QEAA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W42@I@Z @ 0x1C00E5410 (-AddingMonitorOrientation@ADAPTER_DISPLAY@@QEAA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W42@I@Z.c)
 *     MonitorIsMonitorVirtualModeDisabled @ 0x1C0290BB0 (MonitorIsMonitorVirtualModeDisabled.c)
 */

__int64 __fastcall CCD_BTL_ACTIVE_PATHS_COLLECTOR::_ProcessVidPnPath(
        CCD_BTL_ACTIVE_PATHS_COLLECTOR *this,
        struct DXGADAPTER *a2,
        struct DMMVIDPNPRESENTPATH *a3,
        char a4,
        bool a5)
{
  __int64 v7; // rcx
  __int64 v9; // rax
  unsigned __int16 v10; // r14
  __int64 v11; // rdx
  int v12; // eax
  __int64 v13; // rcx
  _QWORD *v14; // rax
  __int64 v15; // rcx
  unsigned int v16; // ebx
  __int64 v17; // rcx
  __int64 v18; // rdi
  __int64 v19; // rax
  int IsMonitorVirtualModeDisabled; // ebx
  char v21; // al
  bool v22; // al
  __int64 v23; // rax
  _QWORD *v24; // rax
  __int64 v26; // rcx
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  _QWORD *v30; // r8
  __int64 v31; // rax
  __int64 v32; // rbx
  unsigned int *v33; // rsi
  __int64 v34; // rcx
  __int64 v35; // rax
  __int64 v36; // rcx
  __int64 v37; // rcx
  __int64 v38; // rcx
  __int64 v39; // rax
  __int64 v40; // rax
  DMMVIDPNSOURCEMODE *v41; // rcx
  enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION v42; // edx
  int **SessionViewOwner; // rax
  int **v44; // rdi
  const struct tagRECT *DwmClipBox; // rax
  int v46; // ecx
  char v47; // [rsp+50h] [rbp-20h]
  __int64 v48; // [rsp+58h] [rbp-18h] BYREF
  __int64 v49; // [rsp+60h] [rbp-10h] BYREF
  __int64 v50; // [rsp+68h] [rbp-8h] BYREF
  char v51; // [rsp+B0h] [rbp+40h] BYREF
  bool v52; // [rsp+C0h] [rbp+50h]
  char v53; // [rsp+C8h] [rbp+58h]

  v53 = a4;
  v7 = *(_QWORD *)this;
  if ( (*(_BYTE *)(v7 + 84) & 5) == 5 )
  {
    v9 = WdLogNewEntry5_WdAssertion(v7);
    WdLogEvent5_WdAssertion(v9);
    v7 = *(_QWORD *)this;
    a4 = v53;
  }
  v10 = 0;
  v11 = *(_QWORD *)(*((_QWORD *)a3 + 12) + 96LL);
  v12 = *(_DWORD *)(v7 + 84);
  if ( *(_DWORD *)(v11 + 88) )
  {
    if ( (v12 & 5) != 0 )
      goto LABEL_7;
  }
  else if ( (v12 & 4) == 0 )
  {
LABEL_7:
    if ( (v12 & 4) != 0 && !*(_QWORD *)(v11 + 528) )
      return 0LL;
    if ( a4 && !DMMVIDPNPRESENTPATH::IsSourceAndTargetPinned(a3) )
    {
      v14 = (_QWORD *)WdLogNewEntry5_WdAssertion(v13);
      v14[3] = *((int *)a2 + 70);
      v14[4] = *((unsigned int *)a2 + 69);
      v14[5] = *(unsigned int *)(*((_QWORD *)a3 + 11) + 24LL);
      v14[6] = *(unsigned int *)(*((_QWORD *)a3 + 12) + 24LL);
      v14[7] = *(_QWORD *)(*(_QWORD *)this + 64LL);
      WdLogEvent5_WdAssertion(v14);
      return 0LL;
    }
    ++*((_WORD *)this + 4);
    if ( DXGADAPTER::IsCoreResourceSharedOwner(a2) )
    {
      if ( !a2 || (v16 = *(_DWORD *)(*((_QWORD *)a3 + 12) + 24LL), v16 == -1) )
      {
        IsMonitorVirtualModeDisabled = -1073741811;
      }
      else
      {
        DXGADAPTER::IsCoreResourceSharedOwner(a2);
        v18 = *((_QWORD *)a2 + 315);
        if ( !v18 )
        {
          v19 = WdLogNewEntry5_WdError(v17);
          *(_QWORD *)(v19 + 24) = 8248LL;
          WdLogEvent5_WdError(v19);
          IsMonitorVirtualModeDisabled = -1073741811;
          goto LABEL_29;
        }
        IsMonitorVirtualModeDisabled = MonitorIsMonitorVirtualModeDisabled(a2, v16, &v51);
        if ( IsMonitorVirtualModeDisabled == -1073741632 )
        {
          v21 = 0;
          IsMonitorVirtualModeDisabled = 0;
          v51 = 0;
        }
        else
        {
          v21 = v51;
        }
        if ( IsMonitorVirtualModeDisabled < 0 )
        {
          v23 = WdLogNewEntry5_WdAssertion(v15);
          *(_QWORD *)(v23 + 24) = IsMonitorVirtualModeDisabled;
          WdLogEvent5_WdAssertion(v23);
        }
        else
        {
          if ( v21 )
          {
            v22 = 1;
            LOBYTE(v15) = 1;
          }
          else
          {
            v22 = *(_BYTE *)(v18 + 133) == 0;
            LOBYTE(v15) = *(_BYTE *)(v18 + 132) == 0;
          }
          v47 = v15;
          v52 = v22;
        }
      }
    }
    else
    {
      IsMonitorVirtualModeDisabled = DxgkIsVirtualizationDisabledForTarget(
                                       *(struct _LUID *)((char *)a2 + 276),
                                       *(_DWORD *)(*((_QWORD *)a3 + 12) + 24LL),
                                       0LL,
                                       0LL,
                                       0LL);
    }
    if ( IsMonitorVirtualModeDisabled >= 0 )
    {
      v26 = *((_QWORD *)a3 + 12);
      v48 = 0LL;
      if ( (unsigned int)CCD_TOPOLOGY::AddPathDescriptor(
                           *(_QWORD *)this,
                           (struct DXGADAPTER *)((char *)a2 + 276),
                           *(_DWORD *)(*((_QWORD *)a3 + 11) + 24LL),
                           *(_DWORD *)(v26 + 24),
                           v47 == 0,
                           !v52,
                           *(_DWORD *)(*(_QWORD *)(v26 + 96) + 80LL),
                           *(_DWORD *)(*(_QWORD *)(v26 + 96) + 84LL),
                           *(_DWORD *)(*(_QWORD *)(v26 + 96) + 88LL),
                           &v48) == -1073741789 )
      {
        v30 = (_QWORD *)WdLogNewEntry5_WdWarning(v28, v27, v29);
        v30[3] = this;
        v30[4] = *(_QWORD *)this;
        v30[5] = *(_QWORD *)(*(_QWORD *)this + 64LL);
        v31 = *(_QWORD *)(*(_QWORD *)this + 64LL);
        if ( v31 )
          v10 = *(_WORD *)(v31 + 22);
        v30[6] = v10;
        v30[7] = *((unsigned __int16 *)this + 4);
        WdLogEvent5_WdWarning(v30);
      }
      else
      {
        v32 = v48;
        *(_DWORD *)(v48 + 252) = *((unsigned __int16 *)a3 + 54);
        *(_DWORD *)(v32 + 88) = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)a3 + 12) + 96LL) + 80LL);
        *(_DWORD *)(v32 + 92) = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)a3 + 12) + 96LL) + 84LL);
        *(_QWORD *)v32 |= 0x800000000000uLL;
        if ( v53 )
        {
          v33 = (unsigned int *)(v32 + 24);
          *(_QWORD *)v32 |= 0x8000000000000000uLL;
          *(_QWORD *)v32 |= -(__int64)(ADAPTER_DISPLAY::IsVidPnSourceActive(
                                         *((ADAPTER_DISPLAY **)a2 + 315),
                                         *(_DWORD *)(v32 + 24)) != 0) & 0x20000000000LL;
          *(_QWORD *)v32 |= -(__int64)(ADAPTER_DISPLAY::IsVidPnSourceVisible(
                                         *((ADAPTER_DISPLAY **)a2 + 315),
                                         *(_DWORD *)(v32 + 24)) != 0) & 0x80000000000LL;
          v34 = *((_QWORD *)a3 + 12);
          v35 = *(_QWORD *)(v34 + 104);
          if ( v35 )
          {
            _InterlockedIncrement((volatile signed __int32 *)(v35 + 96));
            v36 = *(_QWORD *)(v34 + 104);
            v32 = v48;
          }
          else
          {
            v36 = 0LL;
          }
          v50 = v36;
          v37 = *(_QWORD *)(v36 + 144);
          if ( v37 )
          {
            *(_OWORD *)(v32 + 32) = *(_OWORD *)(v37 + 72);
            *(_OWORD *)(v32 + 48) = *(_OWORD *)(v37 + 88);
            *(_OWORD *)(v32 + 64) = *(_OWORD *)(v37 + 104);
            *(_QWORD *)(v32 + 80) = *(_QWORD *)(v37 + 120);
            *(_QWORD *)v32 |= 0x87uLL;
            *(_DWORD *)(v32 + 204) = *(_DWORD *)(v37 + 132);
            *(_DWORD *)(v32 + 208) = *(_DWORD *)(v37 + 136);
            *(_QWORD *)v32 |= 8uLL;
          }
          else
          {
            *(_DWORD *)(v32 + 204) = 0;
            *(_DWORD *)(v32 + 208) = 4;
          }
          v38 = *((_QWORD *)a3 + 11);
          v39 = *(_QWORD *)(v38 + 104);
          if ( v39 )
          {
            _InterlockedIncrement((volatile signed __int32 *)(v39 + 96));
            v40 = *(_QWORD *)(v38 + 104);
            v32 = v48;
          }
          else
          {
            v40 = 0LL;
          }
          v41 = *(DMMVIDPNSOURCEMODE **)(v40 + 144);
          v49 = v40;
          if ( v41 )
          {
            *(_BYTE *)(v32 + 128) = (unsigned int)(*((_DWORD *)v41 + 18) - 3) <= 1;
            *(struct _D3DKMDT_GRAPHICS_RENDERING_FORMAT *)(v32 + 96) = *DMMVIDPNSOURCEMODE::GetGraphicsInfo(v41);
            *(_QWORD *)v32 |= 0x100uLL;
            v42 = *((_DWORD *)a3 + 29);
            *(_DWORD *)(v32 + 132) = v42;
            if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)this + 64LL) + 24LL) & 2) != 0 )
              *(_DWORD *)(v32 + 132) = ADAPTER_DISPLAY::AddingMonitorOrientation(
                                         *((ADAPTER_DISPLAY **)a2 + 315),
                                         v42,
                                         *(_DWORD *)(*((_QWORD *)a3 + 12) + 24LL));
            *(_DWORD *)(v32 + 136) = *((_DWORD *)a3 + 28);
            *(_QWORD *)v32 |= 0x40000000200uLL;
            if ( a5 )
            {
              SessionViewOwner = ADAPTER_DISPLAY::GetSessionViewOwner(*((ADAPTER_DISPLAY **)a2 + 315), *v33);
              *(_QWORD *)(v32 + 256) = SessionViewOwner;
              v44 = SessionViewOwner;
              if ( SessionViewOwner )
              {
                DwmClipBox = ADAPTER_DISPLAY::GetDwmClipBox(*((DXGADAPTER ***)a2 + 315), *v33);
                *(_DWORD *)(v32 + 152) = *((_DWORD *)v44 + 8) - *((_DWORD *)v44 + 6);
                *(_DWORD *)(v32 + 156) = *((_DWORD *)v44 + 9) - *((_DWORD *)v44 + 7);
                *(_DWORD *)(v32 + 144) = *((_DWORD *)v44 + 6);
                *(_DWORD *)(v32 + 148) = *((_DWORD *)v44 + 7);
                *(struct tagRECT *)(v32 + 168) = *DwmClipBox;
                *(_QWORD *)v32 |= 0x820800uLL;
                *(_QWORD *)(v32 + 196) = v44[8];
              }
              *(_DWORD *)(v32 + 216) = *(_DWORD *)(3760LL * *v33 + *(_QWORD *)(*((_QWORD *)a2 + 315) + 112LL) + 3756);
              *(_QWORD *)v32 |= 0x1000000000000uLL;
              v46 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a3 + 12) + 96LL) + 520LL) + 24LL);
              if ( v46 == 12 )
              {
                *(_DWORD *)(v32 + 192) = 259;
              }
              else if ( v46 == 13 )
              {
                *(_DWORD *)(v32 + 192) = -1073741437;
              }
            }
          }
          auto_rc<DMMVIDPNSOURCEMODESET>::reset(&v49, 0LL);
          auto_rc<DMMVIDPNTARGETMODESET>::reset(&v50, 0LL);
        }
      }
      return 0LL;
    }
LABEL_29:
    v24 = (_QWORD *)WdLogNewEntry5_WdError(v15);
    v24[3] = *(unsigned int *)(*((_QWORD *)a3 + 12) + 24LL);
    v24[4] = *((int *)a2 + 70);
    v24[5] = *((unsigned int *)a2 + 69);
    WdLogEvent5_WdError(v24);
    return (unsigned int)IsMonitorVirtualModeDisabled;
  }
  return 0LL;
}
