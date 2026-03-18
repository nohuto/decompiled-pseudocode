/*
 * XREFs of ?MakeCloneGroupContentResolutionValid@CCD_TOPOLOGY@@QEAAJI@Z @ 0x1C00CE7D0
 * Callers:
 *     ?EnsureContentRegionAndDWMClipBoxAreValid@CCD_TOPOLOGY@@QEAAJXZ @ 0x1C00CE528 (-EnsureContentRegionAndDWMClipBoxAreValid@CCD_TOPOLOGY@@QEAAJXZ.c)
 * Callees:
 *     ?IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z @ 0x1C000411C (-IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z.c)
 *     DxgkIsVirtualizationDisabledForTarget @ 0x1C00C2320 (DxgkIsVirtualizationDisabledForTarget.c)
 *     ?GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z @ 0x1C00CA3D8 (-GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z.c)
 *     ?_QueryDesktopSurfaceRegionWithRotation@CCD_TOPOLOGY@@CAXAEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@_NPEAU_D3DKMDT_2DREGION@@@Z @ 0x1C00CC8D4 (-_QueryDesktopSurfaceRegionWithRotation@CCD_TOPOLOGY@@CAXAEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@_NP.c)
 */

__int64 __fastcall CCD_TOPOLOGY::MakeCloneGroupContentResolutionValid(CCD_TOPOLOGY *this, unsigned int a2)
{
  char v2; // r12
  int *v3; // rbx
  char v4; // r13
  unsigned int v6; // r15d
  unsigned __int64 v7; // rcx
  UINT v8; // edi
  UINT cy; // esi
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *PathDescriptor; // rax
  unsigned int v11; // r8d
  char cx; // al
  unsigned int v14; // r15d
  unsigned int v15; // r13d
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v16; // rax
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v17; // rbx
  struct _LUID *v18; // rcx
  int IsVirtualizationDisabledForTarget; // eax
  __int64 v20; // r12
  unsigned int v21; // r15d
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v22; // rax
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v23; // rbx
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rbx
  unsigned int v27; // r15d
  __int64 v28; // r12
  __int128 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  _QWORD *v32; // rax
  struct _D3DKMDT_2DREGION v33; // [rsp+80h] [rbp+40h] BYREF
  unsigned int v34; // [rsp+90h] [rbp+50h] BYREF
  struct _D3DKMDT_2DREGION v35; // [rsp+98h] [rbp+58h] BYREF

  v2 = 1;
  v3 = 0LL;
  LOBYTE(v33.cx) = 0;
  v4 = 1;
  v6 = 0;
  v34 = *((_DWORD *)CCD_TOPOLOGY::GetPathDescriptor(this, a2) + 46);
  v8 = 0x7FFFFFFF;
  cy = 0x7FFFFFFF;
  if ( !*(_WORD *)(*((_QWORD *)this + 8) + 20LL) )
    goto LABEL_49;
  while ( 1 )
  {
    PathDescriptor = CCD_TOPOLOGY::GetPathDescriptor(this, v6);
    v7 = v34;
    if ( *((_DWORD *)PathDescriptor + 46) == v34 )
      break;
LABEL_11:
    ++v6;
    v7 = *(unsigned __int16 *)(*((_QWORD *)this + 8) + 20LL);
    if ( v6 >= (unsigned int)v7 )
    {
      cx = v33.cx;
      goto LABEL_13;
    }
  }
  if ( (*(_QWORD *)PathDescriptor & 0x20000LL) == 0 )
  {
    v2 = 0;
    cx = 1;
LABEL_13:
    if ( !v2 )
    {
      if ( cx )
        goto LABEL_17;
      return 0LL;
    }
LABEL_49:
    v26 = 0x3FFFFFFF00000001LL;
    v27 = 0;
    if ( !*(_WORD *)(*((_QWORD *)this + 8) + 20LL) )
      goto LABEL_67;
    while ( 1 )
    {
      v28 = v26;
      v7 = (unsigned __int64)CCD_TOPOLOGY::GetPathDescriptor(this, v27);
      if ( *(_DWORD *)(v7 + 184) == v34 )
      {
        if ( v4 )
        {
          v29 = *(int *)(v7 + 152) * (__int64)*(int *)(v7 + 156) - *(int *)(v7 + 164) * (__int64)*(int *)(v7 + 160);
          v30 = (*((_QWORD *)&v29 + 1) ^ v29) - *((_QWORD *)&v29 + 1);
          if ( v30 < v26 )
          {
            v8 = *(_DWORD *)(v7 + 160);
            cy = *(_DWORD *)(v7 + 164);
          }
          v26 = v30;
          if ( v30 >= v28 )
            v26 = v28;
        }
        else if ( *(_DWORD *)(v7 + 152) == *(_DWORD *)(v7 + 160) && *(_DWORD *)(v7 + 156) == *(_DWORD *)(v7 + 164) )
        {
          v8 = *(_DWORD *)(v7 + 160);
          cy = *(_DWORD *)(v7 + 164);
LABEL_57:
          v15 = v34;
          goto LABEL_28;
        }
      }
      ++v27;
      v7 = *(unsigned __int16 *)(*((_QWORD *)this + 8) + 20LL);
      if ( v27 >= (unsigned int)v7 )
        goto LABEL_57;
    }
  }
  v11 = *((_DWORD *)PathDescriptor + 38);
  v7 = (unsigned __int64)PathDescriptor + 152;
  if ( v3 )
    v7 = (unsigned __int64)v3;
  v3 = (int *)v7;
  if ( v11 )
  {
    v7 = *((unsigned int *)PathDescriptor + 39);
    if ( (_DWORD)v7 )
    {
      if ( *(_QWORD *)v3 == __PAIR64__(v7, v11) )
      {
        if ( (*(_QWORD *)PathDescriptor & 0x20000000000000LL) != 0 )
        {
          if ( __PAIR64__(v7, v11) == *((_QWORD *)PathDescriptor + 20) )
            v4 = 0;
        }
        else
        {
          v2 = 0;
        }
        goto LABEL_11;
      }
    }
  }
  *((_DWORD *)PathDescriptor + 59) |= 0x400u;
LABEL_17:
  v14 = 0;
  if ( !*(_WORD *)(*((_QWORD *)this + 8) + 20LL) )
    goto LABEL_67;
  v15 = v34;
  while ( 2 )
  {
    v16 = CCD_TOPOLOGY::GetPathDescriptor(this, v14);
    v17 = v16;
    if ( *((_DWORD *)v16 + 46) != v15 )
    {
LABEL_27:
      ++v14;
      v7 = *(unsigned __int16 *)(*((_QWORD *)this + 8) + 20LL);
      if ( v14 >= (unsigned int)v7 )
        goto LABEL_28;
      continue;
    }
    break;
  }
  CCD_TOPOLOGY::_QueryDesktopSurfaceRegionWithRotation(v16, 1, &v35);
  IsVirtualizationDisabledForTarget = DxgkIsVirtualizationDisabledForTarget(
                                        v18[2],
                                        v18[3].HighPart,
                                        (__int64)&v33,
                                        (__int64)&v34,
                                        0LL,
                                        0LL,
                                        0LL);
  v20 = IsVirtualizationDisabledForTarget;
  if ( IsVirtualizationDisabledForTarget < 0 )
  {
    v25 = WdLogNewEntry5_WdError(v7);
    *(_QWORD *)(v25 + 24) = v20;
    WdLogEvent5_WdError(v25);
    return (unsigned int)v20;
  }
  if ( LOBYTE(v33.cx) && !(_BYTE)v34 )
    goto LABEL_47;
  if ( !IsInternalVideoOutput(*((enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *)v17 + 22)) )
  {
    if ( v35.cx < v8 )
    {
      v8 = v35.cx;
      *((_DWORD *)v17 + 59) |= 0x4000u;
    }
    if ( v35.cy < cy )
    {
      cy = v35.cy;
      *((_DWORD *)v17 + 59) |= 0x4000u;
    }
    goto LABEL_27;
  }
  if ( (*(_DWORD *)v17 & 0x20000) != 0 )
  {
    v8 = *((_DWORD *)v17 + 38);
    cy = *((_DWORD *)v17 + 39);
    goto LABEL_28;
  }
LABEL_47:
  v33 = v35;
  v8 = v35.cx;
  cy = v35.cy;
LABEL_28:
  if ( !v8 || !cy || v8 == 0x7FFFFFFF || cy == 0x7FFFFFFF )
    goto LABEL_67;
  v21 = 0;
  if ( !*(_WORD *)(*((_QWORD *)this + 8) + 20LL) )
    return 0LL;
  while ( 2 )
  {
    v22 = CCD_TOPOLOGY::GetPathDescriptor(this, v21);
    v23 = v22;
    if ( *((_DWORD *)v22 + 46) != v15
      || (v7 = *(_QWORD *)v22, (*(_QWORD *)v22 & 0x20000LL) != 0)
      && *((_DWORD *)v22 + 38) == v8
      && *((_DWORD *)v22 + 39) == cy )
    {
LABEL_38:
      if ( ++v21 >= *(unsigned __int16 *)(*((_QWORD *)this + 8) + 20LL) )
        return 0LL;
      continue;
    }
    break;
  }
  if ( (*((_DWORD *)v22 + 2) & 0x20000) == 0 )
  {
    v24 = *((_QWORD *)v22 + 28);
    *((_DWORD *)v23 + 38) = v8;
    *((_DWORD *)v23 + 39) = cy;
    *(_QWORD *)v23 = v7 & 0xFFFFFFFFFF7DFFFFuLL | 0x20000;
    if ( v24 )
    {
      *(_DWORD *)(v24 + 172) = v8;
      *(_DWORD *)(*((_QWORD *)v23 + 28) + 176LL) = cy;
    }
    goto LABEL_38;
  }
  if ( (*(_QWORD *)v22 & 0x20000LL) == 0 )
  {
    v31 = WdLogNewEntry5_WdAssertion(v7);
    WdLogEvent5_WdAssertion(v31);
  }
  *((_DWORD *)v23 + 59) |= 0x80000000;
LABEL_67:
  v32 = (_QWORD *)WdLogNewEntry5_WdError(v7);
  v32[3] = *((_QWORD *)this + 8);
  v32[4] = v8;
  v32[5] = cy;
  WdLogEvent5_WdError(v32);
  return 3221225473LL;
}
