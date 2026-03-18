/*
 * XREFs of ?AdjustSlateVirtualMonitorsPosition@CCD_TOPOLOGY@@AEAAJPEAUtagRECT@@AEAIAEAJ@Z @ 0x1C00C83CC
 * Callers:
 *     ?AdjustDesktopLayout@CCD_TOPOLOGY@@QEAAJXZ @ 0x1C00C9BA8 (-AdjustDesktopLayout@CCD_TOPOLOGY@@QEAAJXZ.c)
 * Callees:
 *     ?IsPrimaryClonePathByModality@CCD_TOPOLOGY@@QEBA_NI@Z @ 0x1C0005B34 (-IsPrimaryClonePathByModality@CCD_TOPOLOGY@@QEBA_NI@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C0011F20 (--_V@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0012060 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     ?IsVirtualSlate@CCD_TOPOLOGY@@AEAA_NPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@@Z @ 0x1C00C5A48 (-IsVirtualSlate@CCD_TOPOLOGY@@AEAA_NPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@@Z.c)
 *     ?GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z @ 0x1C00CA3D8 (-GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z.c)
 *     ?_QueryDesktopSurfaceRegionWithRotation@CCD_TOPOLOGY@@CAXAEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@_NPEAU_D3DKMDT_2DREGION@@@Z @ 0x1C00CC8D4 (-_QueryDesktopSurfaceRegionWithRotation@CCD_TOPOLOGY@@CAXAEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@_NP.c)
 */

__int64 __fastcall CCD_TOPOLOGY::AdjustSlateVirtualMonitorsPosition(
        CCD_TOPOLOGY *this,
        struct tagRECT *a2,
        unsigned int *a3,
        int *a4)
{
  signed int cy; // ebp
  int v5; // r14d
  unsigned int v6; // edi
  unsigned int *v7; // r10
  int v9; // r15d
  signed int cx; // ebx
  unsigned int v11; // esi
  unsigned int v12; // r12d
  __int64 v13; // rcx
  unsigned __int16 v14; // ax
  __int64 v15; // rdx
  _BYTE *v16; // rsi
  unsigned __int16 v17; // ax
  unsigned int v18; // r13d
  unsigned int v19; // r12d
  int v20; // r8d
  int v21; // edx
  UINT v22; // ecx
  signed int v23; // eax
  __int64 v24; // rax
  unsigned __int16 v25; // dx
  CCD_TOPOLOGY *v26; // rcx
  struct _LUID *v27; // r11
  __int64 v28; // rcx
  __int64 v29; // rax
  CCD_TOPOLOGY *v30; // rcx
  struct _LUID *v31; // r11
  LONG bottom; // edx
  signed int right; // r8d
  int top; // r8d
  int left; // r8d
  signed int v36; // eax
  unsigned int *v37; // r10
  struct tagRECT *v38; // rcx
  __int64 v39; // rax
  unsigned __int16 v41; // ax
  SIZE_T v42; // rax
  unsigned __int64 v43; // kr00_8
  __int64 v44; // rcx
  __int64 v45; // rax
  __int64 v46; // rcx
  unsigned int i; // edx
  struct _LUID *PathDescriptor; // r12
  __int64 v49; // rcx
  unsigned __int16 v50; // ax
  CCD_TOPOLOGY *v51; // rcx
  unsigned __int16 v52; // ax
  struct D3DKMT_PATHMODALITY_DESCRIPTOR *v53; // rcx
  __int64 v54; // r8
  UINT v55; // eax
  __int64 v56; // rdx
  signed int v57; // r10d
  bool v58; // cc
  __int64 v59; // rcx
  signed int v60; // eax
  signed int v61; // r8d
  __int64 v62; // rdx
  int v63; // r10d
  __int64 v64; // rcx
  __int64 v65; // rcx
  int v66; // r10d
  __int64 v67; // rax
  signed int v68; // [rsp+20h] [rbp-118h]
  signed int v69; // [rsp+24h] [rbp-114h]
  int v70; // [rsp+28h] [rbp-110h]
  int v71; // [rsp+2Ch] [rbp-10Ch]
  unsigned int v72; // [rsp+30h] [rbp-108h]
  struct _D3DKMDT_2DREGION v74; // [rsp+40h] [rbp-F8h] BYREF
  unsigned int *v75; // [rsp+48h] [rbp-F0h]
  int v76; // [rsp+50h] [rbp-E8h]
  int v77; // [rsp+54h] [rbp-E4h]
  UINT v78; // [rsp+58h] [rbp-E0h]
  signed int v79; // [rsp+5Ch] [rbp-DCh]
  int v80; // [rsp+60h] [rbp-D8h]
  signed int v81; // [rsp+64h] [rbp-D4h]
  int v82; // [rsp+68h] [rbp-D0h]
  signed int v83; // [rsp+6Ch] [rbp-CCh]
  int v84; // [rsp+70h] [rbp-C8h]
  int v85; // [rsp+74h] [rbp-C4h]
  signed int v86; // [rsp+78h] [rbp-C0h]
  int v87; // [rsp+7Ch] [rbp-BCh]
  struct tagRECT *v88; // [rsp+80h] [rbp-B8h]
  struct D3DKMT_PATHMODALITY_DESCRIPTOR *v89; // [rsp+88h] [rbp-B0h]
  int *v90; // [rsp+90h] [rbp-A8h]
  _BYTE v91[64]; // [rsp+A0h] [rbp-98h] BYREF

  cy = 0x80000000;
  v90 = a4;
  v5 = 0x7FFFFFFF;
  v75 = a3;
  v6 = 0;
  v88 = a2;
  v69 = 0x80000000;
  v7 = a3;
  v68 = 0x80000000;
  v9 = 0x7FFFFFFF;
  v70 = 0x7FFFFFFF;
  cx = 0x80000000;
  v71 = 0x7FFFFFFF;
  v11 = 0;
  v12 = 0;
  while ( 1 )
  {
    v13 = *((_QWORD *)this + 8);
    if ( v13 )
    {
      v14 = *(_WORD *)(v13 + 20);
      v15 = *((_QWORD *)this + 8);
    }
    else
    {
      v15 = 0LL;
      v14 = 0;
    }
    if ( v11 >= v14 || v12 >= *v7 )
      break;
    if ( (*(_DWORD *)CCD_TOPOLOGY::GetPathDescriptor(this, v11) & 0x800LL) != 0
      && CCD_TOPOLOGY::IsPrimaryClonePathByModality(this, v11)
      && !v31[26].HighPart
      && !CCD_TOPOLOGY::IsVirtualSlate(v30, v31) )
    {
      bottom = v88[v12].bottom;
      if ( bottom > cy )
      {
        right = v68;
        cy = v88[v12].bottom;
        if ( v68 < v88[v12].right )
          right = v88[v12].right;
        v68 = right;
      }
      if ( v88[v12].right > cx )
      {
        top = v70;
        cx = v88[v12].right;
        if ( v70 > v88[v12].top )
          top = v88[v12].top;
        v70 = top;
      }
      if ( v88[v12].top < v9 )
      {
        left = v71;
        v9 = v88[v12].top;
        if ( v71 > v88[v12].left )
          left = v88[v12].left;
        v71 = left;
      }
      if ( v88[v12].left < v5 )
      {
        v5 = v88[v12].left;
        v36 = v69;
        if ( v69 < bottom )
          v36 = v88[v12].bottom;
        v69 = v36;
      }
      ++v12;
    }
    v7 = v75;
    ++v11;
  }
  v16 = v91;
  if ( v13 )
    v17 = *(_WORD *)(v15 + 20);
  else
    v17 = 0;
  if ( v17 <= 4u )
  {
LABEL_8:
    v18 = 0;
    v19 = 0;
    if ( !*v7 )
    {
      for ( i = 0; ; i = v18 )
      {
        PathDescriptor = (struct _LUID *)CCD_TOPOLOGY::GetPathDescriptor(this, i);
        v49 = *((_QWORD *)this + 8);
        if ( v49 )
        {
          v50 = *(_WORD *)(v49 + 20);
        }
        else
        {
          v49 = 0LL;
          v50 = 0;
        }
        if ( v18 >= v50 )
          break;
        if ( CCD_TOPOLOGY::IsPrimaryClonePathByModality(this, v18)
          && !PathDescriptor[26].HighPart
          && CCD_TOPOLOGY::IsVirtualSlate(v51, PathDescriptor) )
        {
          v49 = *((_QWORD *)this + 8);
          break;
        }
        ++v18;
      }
      if ( v49 )
        v52 = *(_WORD *)(v49 + 20);
      else
        v52 = 0;
      if ( v18 < v52 )
      {
        *v75 = 1;
        CCD_TOPOLOGY::_QueryDesktopSurfaceRegionWithRotation(
          (const struct D3DKMT_PATHMODALITY_DESCRIPTOR *)PathDescriptor,
          0,
          &v74);
        cx = v74.cx;
        v21 = 0;
        cy = v74.cy;
        v9 = 0;
        v19 = 1;
        v22 = v74.cy;
        v70 = 0;
        v5 = 0;
        v69 = v74.cy;
        v20 = 0;
        *(_QWORD *)v16 = 0LL;
        v23 = cx;
        *((_DWORD *)v16 + 3) = cy;
        *((_DWORD *)v16 + 2) = cx;
        v71 = 0;
        v68 = cx;
LABEL_10:
        v72 = 0;
        while ( 1 )
        {
          v78 = v22;
          v81 = v23;
          v86 = cx;
          v87 = v20;
          v24 = *((_QWORD *)this + 8);
          v85 = v9;
          v83 = cy;
          v84 = v21;
          v82 = cx;
          v80 = v5;
          v79 = cy;
          v77 = v9;
          v76 = v5;
          v25 = v24 ? *(_WORD *)(v24 + 20) : 0;
          if ( v18 >= v25 )
            break;
          v89 = CCD_TOPOLOGY::GetPathDescriptor(this, v18);
          if ( CCD_TOPOLOGY::IsPrimaryClonePathByModality(this, v18) && !v27[26].HighPart )
          {
            if ( CCD_TOPOLOGY::IsVirtualSlate(v26, v27) )
            {
              v53 = v89;
              ++*v75;
              CCD_TOPOLOGY::_QueryDesktopSurfaceRegionWithRotation(v53, 0, &v74);
              v54 = v74.cy;
              v55 = v74.cx;
              if ( (__int64)(v9 - (unsigned __int64)v74.cy) < -32000 )
              {
                if ( (__int64)(v5 - (unsigned __int64)v74.cx) < -32000 )
                {
                  if ( (__int64)(cy + (unsigned __int64)v74.cy) > 32000 )
                  {
                    v64 = v74.cx + (__int64)cx;
                    if ( v64 > 32000 )
                    {
                      v67 = WdLogNewEntry5_WdAssertion(v64);
                      WdLogEvent5_WdAssertion(v67);
                    }
                    else
                    {
                      v65 = 2LL * v19;
                      *(_DWORD *)&v16[8 * v65] = cx;
                      cx += v55;
                      *(_DWORD *)&v16[8 * v65 + 8] = cx;
                      if ( v54 + v70 > cy )
                      {
                        if ( cy - v54 < -32000 )
                        {
                          cy = v54 - 32000;
                          *(_DWORD *)&v16[16 * v19 + 4] = -32000;
                          *(_DWORD *)&v16[16 * v19 + 12] = v54 - 32000;
                          v9 = -32000;
                          v68 = cx;
                        }
                        else
                        {
                          v66 = v86;
                          *(_DWORD *)&v16[16 * v19 + 12] = cy;
                          v58 = cy - (int)v54 < v85;
                          v9 = cy - v54;
                          *(_DWORD *)&v16[16 * v19 + 4] = cy - v54;
                          if ( !v58 )
                          {
                            v66 = v87;
                            v9 = v85;
                          }
                          v71 = v66;
                        }
                      }
                      else
                      {
                        *(_DWORD *)&v16[16 * v19 + 4] = v70;
                        *(_DWORD *)&v16[16 * v19 + 12] = v54 + v70;
                      }
                    }
                  }
                  else
                  {
                    v62 = 2LL * v19;
                    *(_DWORD *)&v16[8 * v62 + 4] = cy;
                    cy += v54;
                    *(_DWORD *)&v16[8 * v62 + 12] = cy;
                    if ( (__int64)(v68 - (unsigned __int64)v55) < v5 )
                    {
                      if ( (__int64)(v5 + (unsigned __int64)v55) > 32000 )
                      {
                        *(_DWORD *)&v16[16 * v19 + 8] = 32000;
                        v5 = 32000 - v55;
                        v69 = cy;
                        *(_DWORD *)&v16[16 * v19] = 32000 - v55;
                        cx = 32000;
                      }
                      else
                      {
                        v63 = v83;
                        v58 = (int)(v55 + v5) <= v82;
                        cx = v55 + v5;
                        *(_DWORD *)&v16[16 * v19] = v5;
                        if ( v58 )
                        {
                          v63 = v84;
                          cx = v82;
                        }
                        v70 = v63;
                        *(_DWORD *)&v16[16 * v19 + 8] = v55 + v5;
                      }
                    }
                    else
                    {
                      *(_DWORD *)&v16[16 * v19 + 8] = v68;
                      *(_DWORD *)&v16[16 * v19] = v68 - v55;
                    }
                  }
                }
                else
                {
                  v59 = 2LL * v19;
                  *(_DWORD *)&v16[8 * v59 + 8] = v5;
                  v5 -= v55;
                  *(_DWORD *)&v16[8 * v59] = v5;
                  if ( v69 - v54 < v9 )
                  {
                    if ( v9 + v54 > 32000 )
                    {
                      *(_DWORD *)&v16[16 * v19 + 12] = 32000;
                      v9 = 32000 - v54;
                      v71 = v5;
                      *(_DWORD *)&v16[16 * v19 + 4] = 32000 - v54;
                      cy = 32000;
                    }
                    else
                    {
                      v60 = v54 + v9;
                      *(_DWORD *)&v16[16 * v19 + 4] = v9;
                      cy = v54 + v9;
                      v61 = v80;
                      if ( v60 <= v79 )
                      {
                        v61 = v81;
                        cy = v79;
                      }
                      v68 = v61;
                      *(_DWORD *)&v16[16 * v19 + 12] = v60;
                    }
                  }
                  else
                  {
                    *(_DWORD *)&v16[16 * v19 + 12] = v69;
                    *(_DWORD *)&v16[16 * v19 + 4] = v69 - v54;
                  }
                }
              }
              else
              {
                v56 = 2LL * v19;
                *(_DWORD *)&v16[8 * v56 + 12] = v9;
                v9 -= v54;
                *(_DWORD *)&v16[8 * v56 + 4] = v9;
                if ( v55 + (__int64)v71 > cx )
                {
                  if ( (__int64)(cx - (unsigned __int64)v55) < -32000 )
                  {
                    *(_DWORD *)&v16[16 * v19] = -32000;
                    *(_DWORD *)&v16[16 * v19 + 8] = v55 - 32000;
                    cx = v55 - 32000;
                    v5 = -32000;
                    v70 = v9;
                  }
                  else
                  {
                    v57 = v77;
                    *(_DWORD *)&v16[16 * v19 + 8] = cx;
                    v58 = (int)(cx - v55) < v76;
                    v5 = cx - v55;
                    *(_DWORD *)&v16[16 * v19] = cx - v55;
                    if ( !v58 )
                    {
                      v57 = v78;
                      v5 = v76;
                    }
                    v69 = v57;
                  }
                }
                else
                {
                  *(_DWORD *)&v16[16 * v19] = v71;
                  *(_DWORD *)&v16[16 * v19 + 8] = v55 + v71;
                }
              }
              ++v19;
            }
            else
            {
              v28 = v72;
              v29 = 2LL * v19++;
              ++v72;
              *(struct tagRECT *)&v16[8 * v29] = v88[v28];
            }
          }
          v23 = v68;
          ++v18;
          v22 = v69;
          v21 = v70;
          v20 = v71;
        }
        if ( cx > *v90 )
          *v90 = cx;
        v37 = v75;
        if ( *v75 )
        {
          v38 = v88;
          do
          {
            v39 = v6++;
            v38[v39] = *(struct tagRECT *)&v16[16 * v39];
          }
          while ( v6 < *v37 );
        }
        if ( v16 != v91 )
          operator delete[](v16);
        return 0LL;
      }
      v19 = 0;
    }
    v20 = v71;
    v21 = v70;
    v22 = v69;
    v23 = v68;
    goto LABEL_10;
  }
  if ( v13 )
    v41 = *(_WORD *)(v15 + 20);
  else
    v41 = 0;
  v43 = v41;
  v42 = 16LL * v41;
  if ( !is_mul_ok(v43, 0x10uLL) )
    v42 = -1LL;
  v16 = operator new[](v42, 0x4B677844u, PagedPool);
  if ( v16 )
  {
    v7 = v75;
    goto LABEL_8;
  }
  v45 = WdLogNewEntry5_WdLowResource(v44);
  v46 = *((_QWORD *)this + 8);
  if ( v46 )
    LOWORD(v6) = *(_WORD *)(v46 + 20);
  *(_QWORD *)(v45 + 24) = (unsigned __int16)v6;
  WdLogEvent5_WdLowResource(v45);
  return 3221225495LL;
}
