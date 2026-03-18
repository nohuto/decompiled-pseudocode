/*
 * XREFs of ?MakeCloneGroupContentResolutionValid@CCD_TOPOLOGY@@QEAAJI@Z @ 0x1C00D12E0
 * Callers:
 *     ?EnsureContentRegionAndDWMClipBoxAreValid@CCD_TOPOLOGY@@QEAAJXZ @ 0x1C00D1038 (-EnsureContentRegionAndDWMClipBoxAreValid@CCD_TOPOLOGY@@QEAAJXZ.c)
 * Callees:
 *     ?IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z @ 0x1C0003D4C (-IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z.c)
 *     ?GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z @ 0x1C00D8678 (-GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z.c)
 *     ?_QueryDesktopSurfaceRegionWithRotation@CCD_TOPOLOGY@@CAXAEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@_NPEAU_D3DKMDT_2DREGION@@@Z @ 0x1C012BE88 (-_QueryDesktopSurfaceRegionWithRotation@CCD_TOPOLOGY@@CAXAEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@_NP.c)
 *     DxgkIsVirtualizationDisabledForTarget @ 0x1C0148D00 (DxgkIsVirtualizationDisabledForTarget.c)
 */

__int64 __fastcall CCD_TOPOLOGY::MakeCloneGroupContentResolutionValid(CCD_TOPOLOGY *this, unsigned int a2)
{
  char v2; // r12
  int *v3; // rbx
  char v4; // r13
  unsigned int v6; // r15d
  __int128 v7; // rax
  unsigned __int64 PathDescriptor; // rcx
  __int64 v9; // r8
  UINT cx; // edi
  UINT cy; // esi
  char v12; // al
  unsigned int v14; // r15d
  unsigned int v15; // r13d
  __int64 v16; // rbx
  struct _LUID *v17; // rcx
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *v18; // r11
  int IsVirtualizationDisabledForTarget; // eax
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r12
  unsigned int v23; // r15d
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v24; // rax
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v25; // rbx
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rbx
  unsigned int v29; // r15d
  __int64 v30; // r12
  __int64 v31; // rax
  _QWORD *v32; // rax
  unsigned int v33; // [rsp+90h] [rbp+50h]
  struct _D3DKMDT_2DREGION v34; // [rsp+98h] [rbp+58h] BYREF

  v2 = 1;
  v3 = 0LL;
  v4 = 1;
  v6 = 0;
  v33 = *((_DWORD *)CCD_TOPOLOGY::GetPathDescriptor(this, a2) + 46);
  cx = 0x7FFFFFFF;
  cy = 0x7FFFFFFF;
  if ( !*(_WORD *)(*((_QWORD *)this + 8) + 20LL) )
    goto LABEL_46;
  while ( 1 )
  {
    *(_QWORD *)&v7 = CCD_TOPOLOGY::GetPathDescriptor(this, v6);
    PathDescriptor = v33;
    if ( *(_DWORD *)(v7 + 184) == v33 )
      break;
LABEL_11:
    ++v6;
    PathDescriptor = *(unsigned __int16 *)(*((_QWORD *)this + 8) + 20LL);
    if ( v6 >= (unsigned int)PathDescriptor )
    {
      v12 = 0;
      goto LABEL_13;
    }
  }
  if ( (*(_QWORD *)v7 & 0x20000LL) == 0 )
  {
    v2 = 0;
    v12 = 1;
LABEL_13:
    if ( !v2 )
    {
      if ( v12 )
        goto LABEL_17;
      return 0LL;
    }
LABEL_46:
    v28 = 0x3FFFFFFF00000001LL;
    v29 = 0;
    if ( !*(_WORD *)(*((_QWORD *)this + 8) + 20LL) )
      goto LABEL_63;
    while ( 1 )
    {
      v30 = v28;
      PathDescriptor = (unsigned __int64)CCD_TOPOLOGY::GetPathDescriptor(this, v29);
      if ( *(_DWORD *)(PathDescriptor + 184) == v33 )
      {
        if ( v4 )
        {
          v9 = *(int *)(PathDescriptor + 164);
          v7 = *(int *)(PathDescriptor + 152) * (__int64)*(int *)(PathDescriptor + 156)
             - v9 * *(int *)(PathDescriptor + 160);
          *(_QWORD *)&v7 = (*((_QWORD *)&v7 + 1) ^ v7) - *((_QWORD *)&v7 + 1);
          if ( (__int64)v7 < v28 )
          {
            cx = *(_DWORD *)(PathDescriptor + 160);
            cy = *(_DWORD *)(PathDescriptor + 164);
          }
          v28 = v7;
          if ( (__int64)v7 >= v30 )
            v28 = v30;
        }
        else
        {
          *((_QWORD *)&v7 + 1) = *(unsigned int *)(PathDescriptor + 160);
          if ( *(_QWORD *)(PathDescriptor + 152) == *(_QWORD *)(PathDescriptor + 160) )
          {
            cx = *(_DWORD *)(PathDescriptor + 160);
            cy = *(_DWORD *)(PathDescriptor + 164);
LABEL_54:
            v15 = v33;
            goto LABEL_27;
          }
        }
      }
      ++v29;
      PathDescriptor = *(unsigned __int16 *)(*((_QWORD *)this + 8) + 20LL);
      if ( v29 >= (unsigned int)PathDescriptor )
        goto LABEL_54;
    }
  }
  *((_QWORD *)&v7 + 1) = v7 + 152;
  v9 = *(unsigned int *)(v7 + 152);
  PathDescriptor = v7 + 152;
  if ( v3 )
    PathDescriptor = (unsigned __int64)v3;
  v3 = (int *)PathDescriptor;
  if ( (_DWORD)v9 )
  {
    PathDescriptor = *(unsigned int *)(v7 + 156);
    if ( (_DWORD)PathDescriptor )
    {
      if ( *(_QWORD *)v3 == __PAIR64__(PathDescriptor, v9) )
      {
        *((_QWORD *)&v7 + 1) = 0x20000000000000LL;
        if ( (*(_QWORD *)v7 & 0x20000000000000LL) != 0 )
        {
          if ( __PAIR64__(PathDescriptor, v9) == *(_QWORD *)(v7 + 160) )
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
  *(_DWORD *)(v7 + 236) |= 0x400u;
LABEL_17:
  v14 = 0;
  if ( !*(_WORD *)(*((_QWORD *)this + 8) + 20LL) )
    goto LABEL_63;
  v15 = v33;
  while ( 2 )
  {
    *(_QWORD *)&v7 = CCD_TOPOLOGY::GetPathDescriptor(this, v14);
    v16 = v7;
    if ( *(_DWORD *)(v7 + 184) != v33 )
    {
LABEL_26:
      ++v14;
      PathDescriptor = *(unsigned __int16 *)(*((_QWORD *)this + 8) + 20LL);
      if ( v14 >= (unsigned int)PathDescriptor )
        goto LABEL_27;
      continue;
    }
    break;
  }
  v34 = 0LL;
  CCD_TOPOLOGY::_QueryDesktopSurfaceRegionWithRotation((const struct D3DKMT_PATHMODALITY_DESCRIPTOR *)v7, 1, &v34);
  IsVirtualizationDisabledForTarget = DxgkIsVirtualizationDisabledForTarget(
                                        v17[2],
                                        v17[3].HighPart,
                                        v18,
                                        v18,
                                        (__int64)v18);
  v22 = IsVirtualizationDisabledForTarget;
  if ( IsVirtualizationDisabledForTarget < 0 )
  {
    v27 = WdLogNewEntry5_WdError(v20, 0LL, v21);
    *(_QWORD *)(v27 + 24) = v22;
    WdLogEvent5_WdError(v27);
    return (unsigned int)v22;
  }
  if ( !IsInternalVideoOutput(*(enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *)(v16 + 88)) )
  {
    if ( v34.cx < cx )
    {
      cx = v34.cx;
      *(_DWORD *)(v16 + 236) |= 0x4000u;
    }
    if ( v34.cy < cy )
    {
      cy = v34.cy;
      *(_DWORD *)(v16 + 236) |= 0x4000u;
    }
    goto LABEL_26;
  }
  if ( (*(_DWORD *)v16 & 0x20000) != 0 )
  {
    cx = *(_DWORD *)(v16 + 152);
    cy = *(_DWORD *)(v16 + 156);
  }
  else
  {
    cx = v34.cx;
    cy = v34.cy;
  }
LABEL_27:
  if ( !cx || !cy || cx == 0x7FFFFFFF || cy == 0x7FFFFFFF )
    goto LABEL_63;
  v23 = 0;
  if ( !*(_WORD *)(*((_QWORD *)this + 8) + 20LL) )
    return 0LL;
  while ( 2 )
  {
    v24 = CCD_TOPOLOGY::GetPathDescriptor(this, v23);
    v25 = v24;
    if ( *((_DWORD *)v24 + 46) != v15
      || (PathDescriptor = *(_QWORD *)v24, v9 = 0x20000LL, (*((_QWORD *)&v7 + 1) = *(_QWORD *)v24 & 0x20000LL) != 0LL)
      && *((_DWORD *)v24 + 38) == cx
      && *((_DWORD *)v24 + 39) == cy )
    {
LABEL_37:
      if ( ++v23 >= *(unsigned __int16 *)(*((_QWORD *)this + 8) + 20LL) )
        return 0LL;
      continue;
    }
    break;
  }
  if ( (*((_DWORD *)v24 + 2) & 0x20000) == 0 )
  {
    v26 = *((_QWORD *)v24 + 28);
    *((_DWORD *)v25 + 38) = cx;
    *((_DWORD *)v25 + 39) = cy;
    *(_QWORD *)v25 = PathDescriptor & 0xFFFFFFFFFF7DFFFFuLL | 0x20000;
    if ( v26 )
    {
      *(_DWORD *)(v26 + 172) = cx;
      *(_DWORD *)(*((_QWORD *)v25 + 28) + 176LL) = cy;
    }
    goto LABEL_37;
  }
  if ( !*((_QWORD *)&v7 + 1) )
  {
    v31 = WdLogNewEntry5_WdAssertion(PathDescriptor, 0LL);
    WdLogEvent5_WdAssertion(v31);
  }
  *((_DWORD *)v25 + 59) |= 0x80000000;
LABEL_63:
  v32 = (_QWORD *)WdLogNewEntry5_WdError(PathDescriptor, *((_QWORD *)&v7 + 1), v9);
  v32[3] = *((_QWORD *)this + 8);
  v32[4] = cx;
  v32[5] = cy;
  WdLogEvent5_WdError(v32);
  return 3221225473LL;
}
