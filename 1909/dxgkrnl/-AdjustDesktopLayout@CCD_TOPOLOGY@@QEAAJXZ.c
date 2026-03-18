/*
 * XREFs of ?AdjustDesktopLayout@CCD_TOPOLOGY@@QEAAJXZ @ 0x1C00D844C
 * Callers:
 *     ?FunctionalizeWorker@CCD_TOPOLOGY@@AEAAJI_N@Z @ 0x1C00D4018 (-FunctionalizeWorker@CCD_TOPOLOGY@@AEAAJI_N@Z.c)
 *     ?ConvertVidPnToPathsModality@CCD_BTL@@QEAAJPEAVDMMVIDPN@@PEAPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C02C2DA4 (-ConvertVidPnToPathsModality@CCD_BTL@@QEAAJPEAVDMMVIDPN@@PEAPEAUD3DKMT_GETPATHSMODALITY@@@Z.c)
 * Callees:
 *     ?IsPrimaryClonePathByModality@CCD_TOPOLOGY@@QEBA_NI@Z @ 0x1C0002C28 (-IsPrimaryClonePathByModality@CCD_TOPOLOGY@@QEBA_NI@Z.c)
 *     ?D3DKMDT_VPPR_GET_OFFSET_ROTATION@@YA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W41@@Z @ 0x1C0003D9C (-D3DKMDT_VPPR_GET_OFFSET_ROTATION@@YA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W41@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C000C530 (--_V@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000C5A0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00250D0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0025440 (memset.c)
 *     ?IsVirtualSlate@CCD_TOPOLOGY@@AEAA_NPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@@Z @ 0x1C00D540C (-IsVirtualSlate@CCD_TOPOLOGY@@AEAA_NPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@@Z.c)
 *     ?AdjustSlateVirtualMonitorsPosition@CCD_TOPOLOGY@@AEAAJPEAUtagRECT@@AEAIAEAJ@Z @ 0x1C00D5C58 (-AdjustSlateVirtualMonitorsPosition@CCD_TOPOLOGY@@AEAAJPEAUtagRECT@@AEAIAEAJ@Z.c)
 *     ?GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z @ 0x1C00D8CB8 (-GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01059F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?_QueryDesktopSurfaceRegionWithRotation@CCD_TOPOLOGY@@CAXAEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@_NPEAU_D3DKMDT_2DREGION@@@Z @ 0x1C012F8F0 (-_QueryDesktopSurfaceRegionWithRotation@CCD_TOPOLOGY@@CAXAEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@_NP.c)
 */

__int64 __fastcall CCD_TOPOLOGY::AdjustDesktopLayout(CCD_TOPOLOGY *this)
{
  signed int v1; // edi
  unsigned int i; // r14d
  __int64 v4; // rax
  unsigned __int16 v5; // cx
  unsigned int j; // r14d
  __int64 v7; // rax
  unsigned __int16 v8; // cx
  struct DXGPROCESS *Current; // rax
  unsigned int v10; // r15d
  unsigned int v11; // r14d
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // rax
  struct tagRECT *v15; // r13
  struct tagRECT *v16; // rbx
  unsigned __int16 v17; // cx
  unsigned int k; // r12d
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  int v24; // eax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // rdi
  int v29; // r14d
  unsigned int v30; // r15d
  unsigned int v31; // ebx
  __int64 v32; // rax
  unsigned __int16 v33; // cx
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v34; // rax
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v35; // rdi
  __int64 v36; // rcx
  unsigned int v37; // r14d
  __int64 v38; // rdx
  _DWORD *v39; // rax
  int left; // r14d
  UINT cx; // r12d
  int top; // r13d
  __int64 cy; // rcx
  struct _D3DKMDT_2DREGION v44; // rax
  __int64 v45; // rcx
  int v46; // ecx
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *PathDescriptor; // rbx
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // rcx
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v51; // rbx
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v52; // rdi
  CCD_TOPOLOGY *v53; // rcx
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v57; // rax
  __int64 v58; // r11
  unsigned int v59; // ecx
  __int64 v60; // rdx
  __int64 v61; // rcx
  __int64 v62; // rax
  __int64 v63; // rax
  unsigned __int16 v64; // cx
  SIZE_T v65; // rax
  struct tagRECT *v66; // rax
  __int64 v67; // rcx
  __int64 v68; // rax
  __int64 v69; // rax
  __int64 v70; // rax
  __int64 v71; // rax
  int v72; // edx
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v73; // rax
  __int64 v74; // rax
  _QWORD *v75; // rax
  _QWORD *v76; // rax
  unsigned int v77; // [rsp+28h] [rbp-49h] BYREF
  struct _D3DKMDT_2DREGION v78; // [rsp+30h] [rbp-41h] BYREF
  struct _D3DKMDT_2DREGION v79; // [rsp+38h] [rbp-39h] BYREF
  int v80[2]; // [rsp+40h] [rbp-31h] BYREF
  __int64 v81; // [rsp+48h] [rbp-29h]
  void *v82; // [rsp+50h] [rbp-21h]
  struct tagRECT v83[4]; // [rsp+58h] [rbp-19h] BYREF

  v1 = 0;
  for ( i = 0; ; ++i )
  {
    v4 = *((_QWORD *)this + 8);
    v5 = v4 ? *(_WORD *)(v4 + 20) : 0;
    if ( i >= v5 )
      break;
    PathDescriptor = CCD_TOPOLOGY::GetPathDescriptor(this, i);
    if ( (*(_DWORD *)PathDescriptor & 0x800LL) != 0 && CCD_TOPOLOGY::IsPrimaryClonePathByModality(this, i) )
    {
      if ( (unsigned int)D3DKMDT_VPPR_GET_OFFSET_ROTATION(*((_DWORD *)PathDescriptor + 33)) != 1 )
      {
        v57 = WdLogNewEntry5_WdAssertion(v49, v48);
        *(_QWORD *)(v57 + 24) = 4924LL;
        WdLogEvent5_WdAssertion(v57);
      }
      v78 = 0LL;
      CCD_TOPOLOGY::_QueryDesktopSurfaceRegionWithRotation(PathDescriptor, 0, &v78);
      v50 = *((_QWORD *)PathDescriptor + 28);
      if ( v50 )
      {
        *(_QWORD *)(v50 + 76) = *((_QWORD *)PathDescriptor + 18);
        *(_DWORD *)(*((_QWORD *)PathDescriptor + 28) + 72LL) |= 0x20u;
      }
      if ( (signed int)(*((_DWORD *)PathDescriptor + 36) + v78.cx) > v1 )
        v1 = *((_DWORD *)PathDescriptor + 36) + v78.cx;
    }
  }
  for ( j = 0; ; ++j )
  {
    v7 = *((_QWORD *)this + 8);
    v8 = v7 ? *(_WORD *)(v7 + 20) : 0;
    if ( j >= v8 )
      break;
    v51 = CCD_TOPOLOGY::GetPathDescriptor(this, j);
    if ( (*(_QWORD *)v51 & 0x800LL) == 0 && CCD_TOPOLOGY::IsPrimaryClonePathByModality(this, j) )
    {
      v59 = *((_DWORD *)v51 + 33);
      *((_DWORD *)v51 + 37) = 0;
      *(_QWORD *)v51 = v58 | 0x800;
      *((_DWORD *)v51 + 36) = v1;
      if ( (unsigned int)D3DKMDT_VPPR_GET_OFFSET_ROTATION(v59) != 1 )
      {
        v62 = WdLogNewEntry5_WdAssertion(v61, v60);
        *(_QWORD *)(v62 + 24) = 4969LL;
        WdLogEvent5_WdAssertion(v62);
      }
      v78 = 0LL;
      CCD_TOPOLOGY::_QueryDesktopSurfaceRegionWithRotation(v51, 0, &v78);
      v63 = *((_QWORD *)v51 + 28);
      if ( v63 )
      {
        *(_DWORD *)(v63 + 76) = v1;
        *(_DWORD *)(*((_QWORD *)v51 + 28) + 80LL) = 0;
        *(_DWORD *)(*((_QWORD *)v51 + 28) + 72LL) |= 0x20u;
      }
      v1 += v78.cx;
    }
  }
  Current = DXGPROCESS::GetCurrent();
  if ( !Current )
    return 0LL;
  v81 = *((_QWORD *)Current + 12);
  if ( !v81 )
    return 0LL;
  v10 = 0;
  v77 = 0;
  v11 = -1;
  memset(v83, 0, sizeof(v83));
  v14 = *((_QWORD *)this + 8);
  v15 = v83;
  v16 = 0LL;
  v78 = (struct _D3DKMDT_2DREGION)v83;
  v82 = 0LL;
  if ( v14 )
    v17 = *(_WORD *)(v14 + 20);
  else
    v17 = 0;
  if ( v17 > 4u )
  {
    if ( v14 )
      v64 = *(_WORD *)(v14 + 20);
    else
      v64 = 0;
    v65 = 16LL * v64;
    if ( !is_mul_ok(v64, 0x10uLL) )
      v65 = -1LL;
    v66 = (struct tagRECT *)operator new[](v65, 0x4B677844u, PagedPool);
    v82 = v66;
    v16 = v66;
    if ( !v66 )
    {
      v68 = WdLogNewEntry5_WdError(v67, v12 * 2, v13);
LABEL_85:
      WdLogEvent5_WdError(v68);
      LODWORD(v28) = -1073741801;
      goto LABEL_87;
    }
    v15 = v66;
    v78 = (struct _D3DKMDT_2DREGION)v66;
  }
  for ( k = 0; ; ++k )
  {
    v19 = *((_QWORD *)this + 8);
    v20 = v19 ? *(unsigned __int16 *)(v19 + 20) : 0LL;
    if ( k >= (unsigned __int16)v20 )
      break;
    v52 = CCD_TOPOLOGY::GetPathDescriptor(this, k);
    if ( CCD_TOPOLOGY::IsPrimaryClonePathByModality(this, k)
      && !*((_DWORD *)v52 + 53)
      && !CCD_TOPOLOGY::IsVirtualSlate(v53, (struct _LUID *)v52) )
    {
      if ( (unsigned int)D3DKMDT_VPPR_GET_OFFSET_ROTATION(*((_DWORD *)v52 + 33)) != 1 )
      {
        v69 = WdLogNewEntry5_WdAssertion(v55, v54);
        *(_QWORD *)(v69 + 24) = 5039LL;
        WdLogEvent5_WdAssertion(v69);
      }
      v79 = 0LL;
      CCD_TOPOLOGY::_QueryDesktopSurfaceRegionWithRotation(v52, 0, &v79);
      v12 = v10;
      v15[v12].left = *((_DWORD *)v52 + 36);
      v15[v12].top = *((_DWORD *)v52 + 37);
      v15[v12].right = v79.cx + *((_DWORD *)v52 + 36);
      v15[v12].bottom = v79.cy + *((_DWORD *)v52 + 37);
      if ( v11 == -1 && !*((_DWORD *)v52 + 36) && !*((_DWORD *)v52 + 37) )
        v11 = v10;
      ++v10;
    }
  }
  v77 = v10;
  if ( v11 == -1 )
  {
    v70 = WdLogNewEntry5_WdWarning(v20, v12 * 2, v13);
    WdLogEvent5_WdWarning(v70);
    v11 = 0;
  }
  if ( !(*(unsigned int (__fastcall **)(struct tagRECT *, _QWORD, _QWORD))(v81 + 320))(v15, v10, v11) )
  {
    v68 = WdLogNewEntry5_WdError(v22, v21, v23);
    *(_QWORD *)(v68 + 24) = *((_QWORD *)this + 8);
    goto LABEL_85;
  }
  v80[0] = 0;
  v24 = CCD_TOPOLOGY::AdjustSlateVirtualMonitorsPosition(this, v15, &v77, v80);
  v28 = v24;
  if ( v24 >= 0 )
  {
    v29 = v80[0];
    v30 = 0;
    v31 = 0;
    v77 = v80[0];
    while ( 1 )
    {
      v32 = *((_QWORD *)this + 8);
      v33 = v32 ? *(_WORD *)(v32 + 20) : 0;
      if ( v30 >= v33 )
        break;
      v34 = CCD_TOPOLOGY::GetPathDescriptor(this, v30);
      v35 = v34;
      if ( *((_DWORD *)v34 + 53) )
      {
        HIDWORD(v81) = 0;
        v72 = *((_DWORD *)v34 + 24);
        *(_QWORD *)v34 |= 0x800uLL;
        LODWORD(v81) = v29;
        v29 += v72;
        *((_QWORD *)v34 + 18) = v81;
        *((_DWORD *)v34 + 39) = *((_DWORD *)v34 + 25);
        *((_DWORD *)v34 + 38) = v72;
        v77 = v29;
      }
      else
      {
        v36 = *((_QWORD *)this + 8);
        v37 = 0;
        v38 = *(unsigned __int16 *)(v36 + 20);
        if ( *(_WORD *)(v36 + 20) )
        {
          v39 = (_DWORD *)(v36 + 232);
          while ( *v39 != *(_DWORD *)(272LL * v30 + v36 + 232) )
          {
            ++v37;
            v39 += 68;
            if ( v37 >= (unsigned int)v38 )
              goto LABEL_93;
          }
        }
        else
        {
LABEL_93:
          v37 = -559038737;
        }
        if ( v37 == v30 )
        {
          left = v15[v31].left;
          cx = *(_DWORD *)(*(_QWORD *)&v78 + 16LL * v31 + 8) - left;
          top = v15[v31].top;
          cy = (unsigned int)(*(_DWORD *)(*(_QWORD *)&v78 + 16LL * v31++ + 12) - top);
          v79 = (struct _D3DKMDT_2DREGION)__PAIR64__(cy, cx);
          v44.cy = cy;
        }
        else
        {
          *(_QWORD *)v80 = *((_QWORD *)CCD_TOPOLOGY::GetPathDescriptor(this, v37) + 18);
          v73 = CCD_TOPOLOGY::GetPathDescriptor(this, v37);
          top = v80[1];
          left = v80[0];
          v44 = (struct _D3DKMDT_2DREGION)*((_QWORD *)v73 + 19);
          v79 = v44;
          cy = v44.cy;
          cx = v44.cx;
        }
        v80[0] = cy;
        if ( *((_QWORD *)v35 + 19) != __PAIR64__(v44.cy, cx) )
        {
          v74 = WdLogNewEntry5_WdAssertion(cy, v38);
          WdLogEvent5_WdAssertion(v74);
        }
        if ( *((_DWORD *)v35 + 36) != left )
        {
          v75 = (_QWORD *)WdLogNewEntry5_WdTrace(cy, v38);
          v75[3] = v30;
          v75[4] = *((int *)v35 + 36);
          cy = left;
          v75[5] = left;
        }
        *((_DWORD *)v35 + 36) = left;
        if ( *((_DWORD *)v35 + 37) != top )
        {
          v76 = (_QWORD *)WdLogNewEntry5_WdTrace(cy, v38);
          v76[3] = v30;
          v76[4] = *((int *)v35 + 37);
          v76[5] = top;
        }
        *(_QWORD *)v35 |= 0x800uLL;
        v45 = *((_QWORD *)v35 + 28);
        v29 = v77;
        *((_DWORD *)v35 + 37) = top;
        v15 = (struct tagRECT *)v78;
        if ( v45 )
        {
          *(_QWORD *)(v45 + 76) = *((_QWORD *)v35 + 18);
          v46 = v80[0];
          *(_DWORD *)(*((_QWORD *)v35 + 28) + 172LL) = cx;
          *(_DWORD *)(*((_QWORD *)v35 + 28) + 176LL) = v46;
          *(_DWORD *)(*((_QWORD *)v35 + 28) + 72LL) |= 0x180020u;
        }
      }
      ++v30;
    }
    if ( v82 )
      operator delete[](v82);
    return 0LL;
  }
  v71 = WdLogNewEntry5_WdError(v26, v25, v27);
  *(_QWORD *)(v71 + 24) = *((_QWORD *)this + 8);
  *(_QWORD *)(v71 + 32) = v28;
  WdLogEvent5_WdError(v71);
LABEL_87:
  if ( v16 )
    operator delete[](v16);
  return (unsigned int)v28;
}
