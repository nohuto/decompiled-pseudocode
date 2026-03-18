/*
 * XREFs of ?SetPresentDodArg@PRESENTDODARG@@QEAAJPEAVDXGCONTEXT@@IPEAVDXGALLOCATION@@KEPEBUtagRECT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C027DE5C
 * Callers:
 *     ?SetupPresentParameters@BLTENTRY@@QEAAJPEAVBLTQUEUE@@PEAVDXGCONTEXT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVICEACCESS@@E@Z @ 0x1C027E414 (-SetupPresentParameters@BLTENTRY@@QEAAJPEAVBLTQUEUE@@PEAVDXGCONTEXT@@PEBU_D3DKMT_PRESENT@@PEBU_D.c)
 * Callees:
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C0006B5C (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     memmove @ 0x1C0025100 (memmove.c)
 *     memset @ 0x1C0025440 (memset.c)
 *     ?Get@?$CCachedData@U_D3DKMT_MOVE_RECT@@$03@@QEAAPEAU_D3DKMT_MOVE_RECT@@K@Z @ 0x1C0043C1C (-Get@-$CCachedData@U_D3DKMT_MOVE_RECT@@$03@@QEAAPEAU_D3DKMT_MOVE_RECT@@K@Z.c)
 *     ?Get@?$CCachedData@UtagRECT@@$0BA@@@QEAAPEAUtagRECT@@K@Z @ 0x1C0043CA0 (-Get@-$CCachedData@UtagRECT@@$0BA@@@QEAAPEAUtagRECT@@K@Z.c)
 *     ?Lock@DXGDEVICE@@QEAAJPEAU_D3DKMT_LOCK@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00E1460 (-Lock@DXGDEVICE@@QEAAJPEAU_D3DKMT_LOCK@@PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z @ 0x1C0104D30 (-DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z.c)
 *     ?Unlock@DXGDEVICE@@QEAAJPEBU_D3DKMT_UNLOCK@@E@Z @ 0x1C0134AC0 (-Unlock@DXGDEVICE@@QEAAJPEBU_D3DKMT_UNLOCK@@E@Z.c)
 */

__int64 __fastcall PRESENTDODARG::SetPresentDodArg(
        PRESENTDODARG *this,
        struct DXGCONTEXT *a2,
        unsigned int a3,
        struct DXGALLOCATION *a4,
        unsigned int a5,
        char a6,
        const struct tagRECT *a7,
        const struct _D3DKMT_PRESENT *a8,
        const struct _DXGKARG_PRESENT *a9,
        struct COREDEVICEACCESS *a10)
{
  __int64 v10; // r14
  const struct _D3DKMT_PRESENT *v14; // rdi
  D3DKMT_HANDLE hSource; // esi
  __int64 v16; // r9
  int v17; // edx
  PERESOURCE *v18; // r9
  int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // rsi
  _QWORD *v24; // rax
  DXGDEVICE *v26; // rcx
  __int64 v27; // rax
  const GUID *v28; // r8
  int v29; // eax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // rsi
  _QWORD *v34; // rax
  D3DDDIFORMAT Format; // eax
  unsigned int v36; // eax
  const struct _DXGKARG_PRESENT *v37; // r15
  const RECT *pDirtyRects; // r14
  unsigned int DirtyRectCount; // ecx
  D3DKMT_PRESENT_RGNS *pPresentRegions; // rsi
  int v41; // r12d
  const struct tagRECT *v42; // rdi
  int left; // r9d
  int right; // r8d
  int top; // r10d
  int bottom; // r11d
  int v47; // edx
  unsigned int v48; // edx
  void *v49; // rax
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // r8
  __int64 v53; // rax
  __int64 v54; // rcx
  unsigned int MoveRectCount; // edx
  void *v56; // rax
  __int64 v57; // rdx
  __int64 v58; // r8
  __int64 v59; // rcx
  __int64 v60; // rdx
  UINT Height; // eax
  void *v62; // rax
  struct _D3DKMT_UNLOCK v63; // [rsp+20h] [rbp-69h] BYREF
  struct _DXGKARG_DESCRIBEALLOCATION v64; // [rsp+30h] [rbp-59h] BYREF
  struct _D3DKMT_LOCK v65; // [rsp+60h] [rbp-29h] BYREF
  D3DKMT_HANDLE v66; // [rsp+D8h] [rbp+4Fh] BYREF
  struct DXGALLOCATION *v67; // [rsp+E8h] [rbp+5Fh]

  v67 = a4;
  v10 = a3;
  memset(&v64, 0, sizeof(v64));
  v14 = a8;
  if ( !*((_BYTE *)a2 + 449) )
  {
    if ( (a8->Flags.Value & 4) != 0 )
      hSource = a8->hSource;
    else
      hSource = a8->hDestination;
    v66 = hSource;
    memset(&v65, 0, sizeof(v65));
    v16 = *((_QWORD *)a2 + 2);
    v65.Flags.Value |= 9u;
    v65.hAllocation = hSource;
    if ( DXGADAPTER::IsDxgmms2(*(DXGADAPTER **)(*(_QWORD *)(v16 + 16) + 16LL)) )
      v65.Flags.Value = v17 | 4;
    v19 = DXGDEVICE::Lock(v18, &v65, a10);
    v23 = v19;
    if ( v19 < 0 )
    {
      v24 = (_QWORD *)WdLogNewEntry5_WdError(v21, v20, v22);
      v24[3] = v23;
      v24[4] = a2;
      v24[5] = *(_QWORD *)(*((_QWORD *)a2 + 2) + 40LL);
      v24[6] = v65.hAllocation;
      v24[7] = a4;
      WdLogEvent5_WdError(v24);
      return (unsigned int)v23;
    }
    v63.hDevice = 0;
    *((_QWORD *)this + 1) = v65.pData;
    v26 = (DXGDEVICE *)*((_QWORD *)a2 + 2);
    v63.phAllocations = &v66;
    v63.NumAllocations = 1;
    DXGDEVICE::Unlock(v26, &v63, 0);
    v27 = *((_QWORD *)a2 + 2);
    v64.hAllocation = *(HANDLE *)(*((_QWORD *)a4 + 6) + 16LL);
    v29 = ADAPTER_RENDER::DdiDescribeAllocation(*(ADAPTER_RENDER **)(v27 + 16), &v64, v28);
    v33 = v29;
    if ( v29 < 0 )
    {
      v34 = (_QWORD *)WdLogNewEntry5_WdError(v31, v30, v32);
      v34[3] = v33;
      v34[4] = a2;
      v34[5] = *((unsigned int *)a4 + 4);
      v34[6] = a4;
      v34[7] = v10;
LABEL_11:
      WdLogEvent5_WdError(v34);
      return 3221225485LL;
    }
    Format = v64.Format;
    *(_DWORD *)this = v10;
    if ( Format == D3DDDIFMT_R8G8B8 )
    {
      *((_DWORD *)this + 4) = 3;
      goto LABEL_27;
    }
    if ( Format > D3DDDIFMT_R8G8B8 )
    {
      if ( Format <= D3DDDIFMT_X8R8G8B8 )
        goto LABEL_25;
      if ( Format == D3DDDIFMT_R5G6B5 )
      {
        *((_DWORD *)this + 4) = 2;
        goto LABEL_27;
      }
      if ( Format > D3DDDIFMT_X4R4G4B4 )
      {
        if ( Format > D3DDDIFMT_X8B8G8R8 )
        {
          switch ( Format )
          {
            case D3DDDIFMT_P8:
              *((_DWORD *)this + 4) = 1;
              break;
            case D3DDDIFMT_A16B16G16R16F:
              *((_DWORD *)this + 4) = 8;
              break;
            case D3DDDIFMT_A2B10G10R10_XR_BIAS:
              goto LABEL_25;
            default:
              goto LABEL_21;
          }
LABEL_27:
          v36 = a5;
          goto LABEL_29;
        }
LABEL_25:
        *((_DWORD *)this + 4) = 4;
        goto LABEL_27;
      }
    }
LABEL_21:
    v34 = (_QWORD *)WdLogNewEntry5_WdError(v31, v30, v32);
    v34[3] = -1073741811LL;
    v34[4] = v64.Format;
    goto LABEL_11;
  }
  *((_QWORD *)this + 1) = 0LL;
  v36 = 0;
LABEL_29:
  v37 = a9;
  pDirtyRects = 0LL;
  *((_DWORD *)this + 5) = v36;
  DirtyRectCount = 0;
  *((_DWORD *)this + 6) = a6 & 1;
  pPresentRegions = v14->pPresentRegions;
  v41 = v14->Flags.Value & 4;
  if ( v41 )
  {
    if ( !pPresentRegions )
    {
      v42 = 0LL;
      goto LABEL_35;
    }
    DirtyRectCount = pPresentRegions->DirtyRectCount;
    pDirtyRects = pPresentRegions->pDirtyRects;
  }
  else
  {
    DirtyRectCount = v37->SubRectCnt;
    pDirtyRects = v37->pDstSubRects;
  }
  v42 = a7;
LABEL_35:
  if ( !v42 )
    goto LABEL_50;
  left = v42->left;
  right = v42->right;
  if ( v42->left < right )
  {
    top = v42->top;
    bottom = v42->bottom;
    if ( top < bottom && right <= (int)v64.Width && bottom <= (int)v64.Height && left >= 0 && top >= 0 )
    {
      v47 = 0;
      if ( !DirtyRectCount )
        goto LABEL_50;
      while ( left < pDirtyRects[v47].left
           || right > pDirtyRects[v47].right
           || top < pDirtyRects[v47].top
           || bottom > pDirtyRects[v47].bottom )
      {
        if ( ++v47 >= DirtyRectCount )
          goto LABEL_50;
      }
    }
  }
  v42 = 0LL;
LABEL_50:
  v48 = DirtyRectCount + 1;
  if ( !v42 )
    v48 = DirtyRectCount;
  if ( v41 )
  {
    if ( pPresentRegions && (v48 || pPresentRegions->MoveRectCount) )
    {
      *((_DWORD *)this + 10) = v48;
      if ( v48 )
      {
        v49 = CCachedData<tagRECT,16>::Get((__int64)this + 176, v48);
        *((_QWORD *)this + 6) = v49;
        if ( !v49 )
        {
LABEL_58:
          v53 = WdLogNewEntry5_WdError(v51, v50, v52);
          *(_QWORD *)(v53 + 24) = this;
          v54 = *((unsigned int *)this + 10);
LABEL_59:
          *(_QWORD *)(v53 + 32) = v54;
          WdLogEvent5_WdError(v53);
          return 3221225495LL;
        }
        if ( pPresentRegions->DirtyRectCount )
          memmove(v49, pDirtyRects, 16LL * pPresentRegions->DirtyRectCount);
        if ( v42 )
          *(struct tagRECT *)(*((_QWORD *)this + 6) + 16LL * pPresentRegions->DirtyRectCount) = *v42;
      }
      else
      {
        *((_QWORD *)this + 6) = 0LL;
      }
      MoveRectCount = pPresentRegions->MoveRectCount;
      *((_DWORD *)this + 7) = MoveRectCount;
      if ( MoveRectCount )
      {
        v56 = CCachedData<_D3DKMT_MOVE_RECT,4>::Get((__int64)this + 64, MoveRectCount);
        *((_QWORD *)this + 4) = v56;
        if ( !v56 )
        {
          v53 = WdLogNewEntry5_WdError(0LL, v57, v58);
          *(_QWORD *)(v53 + 24) = this;
          v54 = *((unsigned int *)this + 7);
          goto LABEL_59;
        }
        memmove(v56, pPresentRegions->pMoveRects, 24LL * *((unsigned int *)this + 7));
        return 0LL;
      }
    }
    else
    {
      *((_DWORD *)this + 10) = 1;
      *((_QWORD *)this + 6) = (char *)this + 176;
      *((_DWORD *)this + 44) = 0;
      *(_DWORD *)(*((_QWORD *)this + 6) + 4LL) = 0;
      v59 = *((_QWORD *)this + 6);
      if ( *((_BYTE *)a2 + 449) )
      {
        v60 = *((_QWORD *)v67 + 6);
        *(_DWORD *)(v59 + 8) = *(_DWORD *)(v60 + 72);
        Height = *(_DWORD *)(v60 + 76);
      }
      else
      {
        *(_DWORD *)(v59 + 8) = v64.Width;
        Height = v64.Height;
      }
      *(_DWORD *)(*((_QWORD *)this + 6) + 12LL) = Height;
      *((_DWORD *)this + 7) = 0;
    }
    *((_QWORD *)this + 4) = 0LL;
    return 0LL;
  }
  *((_DWORD *)this + 7) = 0;
  *((_QWORD *)this + 4) = 0LL;
  *((_DWORD *)this + 10) = v48;
  v62 = CCachedData<tagRECT,16>::Get((__int64)this + 176, v48);
  *((_QWORD *)this + 6) = v62;
  if ( !v62 )
    goto LABEL_58;
  memmove(v62, v37->pDstSubRects, 16LL * v37->SubRectCnt);
  if ( v42 )
    *(struct tagRECT *)(*((_QWORD *)this + 6) + 16LL * v37->SubRectCnt) = *v42;
  return 0LL;
}
