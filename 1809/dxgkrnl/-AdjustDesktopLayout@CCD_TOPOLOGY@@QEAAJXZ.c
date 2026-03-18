/*
 * XREFs of ?AdjustDesktopLayout@CCD_TOPOLOGY@@QEAAJXZ @ 0x1C00C9BA8
 * Callers:
 *     ?FunctionalizeWorker@CCD_TOPOLOGY@@AEAAJI_N@Z @ 0x1C00AF5D0 (-FunctionalizeWorker@CCD_TOPOLOGY@@AEAAJI_N@Z.c)
 *     ?ConvertVidPnToPathsModality@CCD_BTL@@QEAAJPEAVDMMVIDPN@@PEAPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C028A958 (-ConvertVidPnToPathsModality@CCD_BTL@@QEAAJPEAVDMMVIDPN@@PEAPEAUD3DKMT_GETPATHSMODALITY@@@Z.c)
 * Callees:
 *     ?IsPrimaryClonePathByModality@CCD_TOPOLOGY@@QEBA_NI@Z @ 0x1C0005B34 (-IsPrimaryClonePathByModality@CCD_TOPOLOGY@@QEBA_NI@Z.c)
 *     D3DKMDT_VPPR_GET_OFFSET_ROTATION @ 0x1C000F5FC (D3DKMDT_VPPR_GET_OFFSET_ROTATION.c)
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00231C0 (memset.c)
 *     ?IsVirtualSlate@CCD_TOPOLOGY@@AEAA_NPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@@Z @ 0x1C00C5A48 (-IsVirtualSlate@CCD_TOPOLOGY@@AEAA_NPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@@Z.c)
 *     ?AdjustSlateVirtualMonitorsPosition@CCD_TOPOLOGY@@AEAAJPEAUtagRECT@@AEAIAEAJ@Z @ 0x1C00C83CC (-AdjustSlateVirtualMonitorsPosition@CCD_TOPOLOGY@@AEAAJPEAUtagRECT@@AEAIAEAJ@Z.c)
 *     ?GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z @ 0x1C00CA3D8 (-GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z.c)
 *     ?_QueryDesktopSurfaceRegionWithRotation@CCD_TOPOLOGY@@CAXAEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@_NPEAU_D3DKMDT_2DREGION@@@Z @ 0x1C00CC8D4 (-_QueryDesktopSurfaceRegionWithRotation@CCD_TOPOLOGY@@CAXAEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@_NP.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0102F10 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall CCD_TOPOLOGY::AdjustDesktopLayout(CCD_TOPOLOGY *this)
{
  signed int v2; // esi
  unsigned int i; // r14d
  __int64 v4; // rax
  unsigned __int16 v5; // cx
  unsigned int j; // r14d
  __int64 v7; // rax
  unsigned __int16 v8; // cx
  struct DXGPROCESS *Current; // rax
  __int64 v10; // r13
  unsigned int v11; // r14d
  unsigned int v12; // esi
  __int64 v13; // rdx
  __int64 v14; // r8
  unsigned int k; // r15d
  __int64 v16; // rax
  __int64 v17; // rcx
  int v18; // eax
  __int64 v19; // rcx
  __int64 v20; // rbx
  unsigned int v21; // r14d
  unsigned int v22; // r15d
  UINT v23; // r12d
  __int64 v24; // rax
  unsigned __int16 v25; // cx
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v26; // rax
  __int64 v27; // r9
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v28; // rbx
  __int64 v29; // rcx
  unsigned int v30; // esi
  _DWORD *v31; // rax
  LONG left; // r13d
  __int64 v33; // rdx
  signed int top; // esi
  __int64 v35; // r8
  unsigned __int64 v36; // rax
  struct _D3DKMDT_2DREGION v37; // r15
  unsigned __int64 cx; // rcx
  __int64 v39; // rcx
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *PathDescriptor; // rbx
  __int64 v41; // rcx
  __int64 v42; // rcx
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v43; // rbx
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v44; // rbx
  CCD_TOPOLOGY *v45; // rcx
  __int64 v46; // rcx
  __int64 v47; // rcx
  __int64 v49; // rax
  __int64 v50; // r11
  D3DKMDT_VIDPN_PRESENT_PATH_ROTATION v51; // ecx
  __int64 v52; // rcx
  __int64 v53; // rax
  __int64 v54; // rax
  __int64 v55; // rax
  __int64 v56; // rax
  __int64 v57; // rax
  __int64 v58; // rax
  int v59; // edx
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v60; // rax
  __int64 v61; // rax
  _QWORD *v62; // rax
  _QWORD *v63; // rax
  unsigned int v64[2]; // [rsp+28h] [rbp-E0h] BYREF
  int v65[2]; // [rsp+30h] [rbp-D8h] BYREF
  struct _D3DKMDT_2DREGION v66; // [rsp+38h] [rbp-D0h] BYREF
  _D3DKMDT_2DREGION v67; // [rsp+40h] [rbp-C8h] BYREF
  struct tagRECT v68[16]; // [rsp+48h] [rbp-C0h] BYREF

  v2 = 0;
  for ( i = 0; ; ++i )
  {
    v4 = *((_QWORD *)this + 8);
    v5 = v4 ? *(_WORD *)(v4 + 20) : 0;
    if ( i >= v5 )
      break;
    PathDescriptor = CCD_TOPOLOGY::GetPathDescriptor(this, i);
    if ( (*(_DWORD *)PathDescriptor & 0x800LL) != 0 && CCD_TOPOLOGY::IsPrimaryClonePathByModality(this, i) )
    {
      if ( D3DKMDT_VPPR_GET_OFFSET_ROTATION(*((D3DKMDT_VIDPN_PRESENT_PATH_ROTATION *)PathDescriptor + 33)) != D3DKMDT_VPPR_IDENTITY )
      {
        v49 = WdLogNewEntry5_WdAssertion(v41);
        *(_QWORD *)(v49 + 24) = 4896LL;
        WdLogEvent5_WdAssertion(v49);
      }
      CCD_TOPOLOGY::_QueryDesktopSurfaceRegionWithRotation(PathDescriptor, 0, &v67);
      v42 = *((_QWORD *)PathDescriptor + 28);
      if ( v42 )
      {
        *(_QWORD *)(v42 + 76) = *((_QWORD *)PathDescriptor + 18);
        *(_DWORD *)(*((_QWORD *)PathDescriptor + 28) + 72LL) |= 0x20u;
      }
      if ( (signed int)(*((_DWORD *)PathDescriptor + 36) + v67.cx) > v2 )
        v2 = *((_DWORD *)PathDescriptor + 36) + v67.cx;
    }
  }
  for ( j = 0; ; ++j )
  {
    v7 = *((_QWORD *)this + 8);
    v8 = v7 ? *(_WORD *)(v7 + 20) : 0;
    if ( j >= v8 )
      break;
    v43 = CCD_TOPOLOGY::GetPathDescriptor(this, j);
    if ( (*(_QWORD *)v43 & 0x800LL) == 0 && CCD_TOPOLOGY::IsPrimaryClonePathByModality(this, j) )
    {
      v51 = *((_DWORD *)v43 + 33);
      *(_QWORD *)v43 = v50 | 0x800;
      *((_DWORD *)v43 + 36) = v2;
      *((_DWORD *)v43 + 37) = 0;
      if ( D3DKMDT_VPPR_GET_OFFSET_ROTATION(v51) != D3DKMDT_VPPR_IDENTITY )
      {
        v53 = WdLogNewEntry5_WdAssertion(v52);
        *(_QWORD *)(v53 + 24) = 4941LL;
        WdLogEvent5_WdAssertion(v53);
      }
      CCD_TOPOLOGY::_QueryDesktopSurfaceRegionWithRotation(v43, 0, &v67);
      v54 = *((_QWORD *)v43 + 28);
      if ( v54 )
      {
        *(_DWORD *)(v54 + 76) = v2;
        *(_DWORD *)(*((_QWORD *)v43 + 28) + 80LL) = 0;
        *(_DWORD *)(*((_QWORD *)v43 + 28) + 72LL) |= 0x20u;
      }
      v2 += v67.cx;
    }
  }
  Current = DXGPROCESS::GetCurrent();
  if ( !Current )
    return 0LL;
  v10 = *((_QWORD *)Current + 13);
  if ( !v10 )
    return 0LL;
  v11 = -1;
  v64[0] = 0;
  v12 = 0;
  memset(v68, 0, sizeof(v68));
  for ( k = 0; ; ++k )
  {
    v16 = *((_QWORD *)this + 8);
    v17 = v16 ? *(unsigned __int16 *)(v16 + 20) : 0LL;
    if ( k >= (unsigned __int16)v17 )
      break;
    v44 = CCD_TOPOLOGY::GetPathDescriptor(this, k);
    if ( CCD_TOPOLOGY::IsPrimaryClonePathByModality(this, k)
      && !*((_DWORD *)v44 + 53)
      && !CCD_TOPOLOGY::IsVirtualSlate(v45, (struct _LUID *)v44) )
    {
      if ( v12 == 16 )
      {
        v56 = WdLogNewEntry5_WdError(v46);
        *(_QWORD *)(v56 + 24) = 16LL;
        WdLogEvent5_WdError(v56);
        break;
      }
      if ( D3DKMDT_VPPR_GET_OFFSET_ROTATION(*((D3DKMDT_VIDPN_PRESENT_PATH_ROTATION *)v44 + 33)) != D3DKMDT_VPPR_IDENTITY )
      {
        v55 = WdLogNewEntry5_WdAssertion(v47);
        *(_QWORD *)(v55 + 24) = 5006LL;
        WdLogEvent5_WdAssertion(v55);
      }
      CCD_TOPOLOGY::_QueryDesktopSurfaceRegionWithRotation(v44, 0, &v66);
      v13 = v12;
      v68[v13].left = *((_DWORD *)v44 + 36);
      v68[v13].top = *((_DWORD *)v44 + 37);
      v68[v13].right = v66.cx + *((_DWORD *)v44 + 36);
      v68[v13].bottom = v66.cy + *((_DWORD *)v44 + 37);
      if ( v11 == -1 && !*((_DWORD *)v44 + 36) && !*((_DWORD *)v44 + 37) )
        v11 = v12;
      v64[0] = ++v12;
    }
  }
  if ( v11 == -1 )
  {
    v57 = WdLogNewEntry5_WdWarning(v17, v13 * 2, v14);
    WdLogEvent5_WdWarning(v57);
    v11 = 0;
  }
  (*(void (__fastcall **)(struct tagRECT *, _QWORD, _QWORD))(v10 + 328))(v68, v12, v11);
  v65[0] = 0;
  v18 = CCD_TOPOLOGY::AdjustSlateVirtualMonitorsPosition(this, v68, v64, v65);
  v20 = v18;
  if ( v18 >= 0 )
  {
    v21 = 0;
    v64[0] = 0;
    v22 = 0;
    v23 = v65[0];
    while ( 1 )
    {
      v24 = *((_QWORD *)this + 8);
      v25 = v24 ? *(_WORD *)(v24 + 20) : 0;
      if ( v21 >= v25 || v22 >= 0x10 )
        return 0LL;
      v26 = CCD_TOPOLOGY::GetPathDescriptor(this, v21);
      v28 = v26;
      if ( *((_DWORD *)v26 + 53) )
      {
        v67.cy = 0;
        v59 = *((_DWORD *)v26 + 24);
        *(_QWORD *)v26 |= 0x800uLL;
        v67.cx = v23;
        v23 += v59;
        *((_D3DKMDT_2DREGION *)v26 + 18) = v67;
        *((_DWORD *)v26 + 39) = *((_DWORD *)v26 + 25);
        *((_DWORD *)v26 + 38) = v59;
      }
      else
      {
        v29 = *((_QWORD *)this + 8);
        v30 = 0;
        if ( *(_WORD *)(v29 + 20) )
        {
          v31 = (_DWORD *)(v29 + 232);
          while ( *v31 != *(_DWORD *)(272LL * v21 + v29 + 232) )
          {
            ++v30;
            v31 += 68;
            if ( v30 >= *(unsigned __int16 *)(v29 + 20) )
              goto LABEL_76;
          }
        }
        else
        {
LABEL_76:
          v30 = -559038737;
        }
        if ( v30 == v21 )
        {
          left = v68[v22].left;
          v33 = (unsigned int)(v68[v22].right - left);
          top = v68[v22].top;
          v35 = (unsigned int)(v68[v22].bottom - top);
          v66.cx = v35;
          v64[0] = v22 + 1;
          LODWORD(v36) = v33;
          v37.cx = left;
          cx = (unsigned int)v35;
        }
        else
        {
          v37 = (struct _D3DKMDT_2DREGION)*((_QWORD *)CCD_TOPOLOGY::GetPathDescriptor(this, v30) + 18);
          v66 = v37;
          v60 = CCD_TOPOLOGY::GetPathDescriptor(this, v30);
          top = v66.cy;
          left = v37.cx;
          v36 = *((_QWORD *)v60 + 19);
          *(_QWORD *)v65 = v36;
          v66.cx = HIDWORD(v36);
          v33 = (unsigned int)v36;
          cx = HIDWORD(v36);
        }
        v65[0] = v33;
        if ( *((_DWORD *)v28 + 38) != (_DWORD)v36 || *((_DWORD *)v28 + 39) != (_DWORD)cx )
        {
          v61 = WdLogNewEntry5_WdAssertion(cx);
          WdLogEvent5_WdAssertion(v61);
        }
        if ( *((_DWORD *)v28 + 36) != v37.cx )
        {
          v62 = (_QWORD *)WdLogNewEntry5_WdTrace(cx, v33, v35, v27);
          v62[3] = v21;
          v62[4] = *((int *)v28 + 36);
          cx = (int)v37.cx;
          v62[5] = (int)v37.cx;
        }
        *((_DWORD *)v28 + 36) = left;
        if ( *((_DWORD *)v28 + 37) != top )
        {
          v63 = (_QWORD *)WdLogNewEntry5_WdTrace(cx, v33, v35, v27);
          v63[3] = v21;
          v63[4] = *((int *)v28 + 37);
          v63[5] = top;
        }
        *(_QWORD *)v28 |= 0x800uLL;
        v39 = *((_QWORD *)v28 + 28);
        v22 = v64[0];
        *((_DWORD *)v28 + 37) = top;
        if ( v39 )
        {
          *(_QWORD *)(v39 + 76) = *((_QWORD *)v28 + 18);
          *(_DWORD *)(*((_QWORD *)v28 + 28) + 172LL) = v65[0];
          *(_DWORD *)(*((_QWORD *)v28 + 28) + 176LL) = v66.cx;
          *(_DWORD *)(*((_QWORD *)v28 + 28) + 72LL) |= 0x180020u;
        }
      }
      ++v21;
    }
  }
  v58 = WdLogNewEntry5_WdError(v19);
  *(_QWORD *)(v58 + 24) = *((_QWORD *)this + 8);
  *(_QWORD *)(v58 + 32) = v20;
  WdLogEvent5_WdError(v58);
  return (unsigned int)v20;
}
