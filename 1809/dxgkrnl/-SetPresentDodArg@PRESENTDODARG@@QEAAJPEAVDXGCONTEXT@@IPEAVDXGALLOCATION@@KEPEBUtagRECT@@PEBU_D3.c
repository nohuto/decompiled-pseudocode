/*
 * XREFs of ?SetPresentDodArg@PRESENTDODARG@@QEAAJPEAVDXGCONTEXT@@IPEAVDXGALLOCATION@@KEPEBUtagRECT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0247D24
 * Callers:
 *     ?SetupPresentParameters@BLTENTRY@@QEAAJPEAVBLTQUEUE@@PEAVDXGCONTEXT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVICEACCESS@@E@Z @ 0x1C02482B4 (-SetupPresentParameters@BLTENTRY@@QEAAJPEAVBLTQUEUE@@PEAVDXGCONTEXT@@PEBU_D3DKMT_PRESENT@@PEBU_D.c)
 * Callees:
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C0011FEC (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     memmove @ 0x1C0022E80 (memmove.c)
 *     memset @ 0x1C00231C0 (memset.c)
 *     ?Get@?$CCachedData@U_D3DKMT_MOVE_RECT@@$03@@QEAAPEAU_D3DKMT_MOVE_RECT@@K@Z @ 0x1C003D25C (-Get@-$CCachedData@U_D3DKMT_MOVE_RECT@@$03@@QEAAPEAU_D3DKMT_MOVE_RECT@@K@Z.c)
 *     ?Get@?$CCachedData@UtagRECT@@$0BA@@@QEAAPEAUtagRECT@@K@Z @ 0x1C003D2E0 (-Get@-$CCachedData@UtagRECT@@$0BA@@@QEAAPEAUtagRECT@@K@Z.c)
 *     ?Lock@DXGDEVICE@@QEAAJPEAU_D3DKMT_LOCK@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0100E00 (-Lock@DXGDEVICE@@QEAAJPEAU_D3DKMT_LOCK@@PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z @ 0x1C0122420 (-DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z.c)
 *     ?Unlock@DXGDEVICE@@QEAAJPEBU_D3DKMT_UNLOCK@@E@Z @ 0x1C0124C00 (-Unlock@DXGDEVICE@@QEAAJPEBU_D3DKMT_UNLOCK@@E@Z.c)
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
  __int64 v11; // r12
  const struct _D3DKMT_PRESENT *v14; // r15
  D3DKMT_HANDLE hSource; // esi
  __int64 v16; // r9
  int v17; // edx
  PERESOURCE *v18; // r9
  int v19; // eax
  __int64 v20; // rcx
  __int64 v21; // rsi
  _QWORD *v22; // rax
  DXGDEVICE *v24; // rcx
  __int64 v25; // rax
  const GUID *v26; // r8
  int v27; // eax
  __int64 v28; // rcx
  __int64 v29; // rsi
  _QWORD *v30; // rax
  D3DDDIFORMAT Format; // eax
  unsigned int v32; // eax
  const RECT *pDirtyRects; // r14
  UINT DirtyRectCount; // ecx
  struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0 Value; // r12d
  D3DKMT_PRESENT_RGNS *pPresentRegions; // rsi
  const struct _DXGKARG_PRESENT *v37; // r15
  int v38; // r12d
  const struct tagRECT *v39; // rdi
  int left; // r9d
  int right; // r8d
  int top; // r10d
  int bottom; // r11d
  int v44; // edx
  unsigned int v45; // edx
  void *v46; // rax
  __int64 v47; // rcx
  __int64 v48; // rax
  __int64 v49; // rcx
  unsigned int MoveRectCount; // edx
  void *v51; // rax
  void *v52; // rax
  struct _D3DKMT_UNLOCK v53; // [rsp+20h] [rbp-69h] BYREF
  struct _DXGKARG_DESCRIBEALLOCATION v54; // [rsp+30h] [rbp-59h] BYREF
  struct _D3DKMT_LOCK v55; // [rsp+60h] [rbp-29h] BYREF
  D3DKMT_HANDLE v56; // [rsp+C8h] [rbp+3Fh] BYREF

  v11 = a3;
  memset(&v54, 0, sizeof(v54));
  v14 = a8;
  if ( !*((_BYTE *)a2 + 433) )
  {
    if ( (a8->Flags.Value & 4) != 0 )
      hSource = a8->hSource;
    else
      hSource = a8->hDestination;
    v56 = hSource;
    memset(&v55, 0, sizeof(v55));
    v16 = *((_QWORD *)a2 + 2);
    v55.Flags.Value |= 9u;
    v55.hAllocation = hSource;
    if ( DXGADAPTER::IsDxgmms2(*(DXGADAPTER **)(*(_QWORD *)(v16 + 16) + 16LL)) )
      v55.Flags.Value = v17 | 4;
    v19 = DXGDEVICE::Lock(v18, &v55, a10);
    v21 = v19;
    if ( v19 < 0 )
    {
      v22 = (_QWORD *)WdLogNewEntry5_WdError(v20);
      v22[3] = v21;
      v22[4] = a2;
      v22[5] = *(_QWORD *)(*((_QWORD *)a2 + 2) + 40LL);
      v22[6] = v55.hAllocation;
      v22[7] = a4;
      WdLogEvent5_WdError(v22);
      return (unsigned int)v21;
    }
    *((_QWORD *)this + 1) = v55.pData;
    v24 = (DXGDEVICE *)*((_QWORD *)a2 + 2);
    v53.hDevice = 0;
    v53.phAllocations = &v56;
    v53.NumAllocations = 1;
    DXGDEVICE::Unlock(v24, &v53, 0LL);
    v25 = *((_QWORD *)a2 + 2);
    v54.hAllocation = *(HANDLE *)(*((_QWORD *)a4 + 6) + 16LL);
    v27 = ADAPTER_RENDER::DdiDescribeAllocation(*(ADAPTER_RENDER **)(v25 + 16), &v54, v26);
    v29 = v27;
    if ( v27 < 0 )
    {
      v30 = (_QWORD *)WdLogNewEntry5_WdError(v28);
      v30[3] = v29;
      v30[4] = a2;
      v30[5] = *((unsigned int *)a4 + 4);
      v30[6] = a4;
      v30[7] = v11;
LABEL_11:
      WdLogEvent5_WdError(v30);
      return 3221225485LL;
    }
    Format = v54.Format;
    *(_DWORD *)this = v11;
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
          v32 = a5;
          goto LABEL_29;
        }
LABEL_25:
        *((_DWORD *)this + 4) = 4;
        goto LABEL_27;
      }
    }
LABEL_21:
    v30 = (_QWORD *)WdLogNewEntry5_WdError(v28);
    v30[3] = -1073741811LL;
    v30[4] = v54.Format;
    goto LABEL_11;
  }
  *((_QWORD *)this + 1) = 0LL;
  v32 = 0;
LABEL_29:
  *((_DWORD *)this + 5) = v32;
  pDirtyRects = 0LL;
  DirtyRectCount = 0;
  *((_DWORD *)this + 6) = a6 & 1;
  Value = (struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0)v14->Flags.Value;
  pPresentRegions = v14->pPresentRegions;
  v37 = a9;
  v38 = *(_BYTE *)&Value & 4;
  if ( v38 )
  {
    if ( !pPresentRegions )
    {
      v39 = 0LL;
      goto LABEL_35;
    }
    DirtyRectCount = pPresentRegions->DirtyRectCount;
    pDirtyRects = pPresentRegions->pDirtyRects;
  }
  else
  {
    DirtyRectCount = a9->SubRectCnt;
    pDirtyRects = a9->pDstSubRects;
  }
  v39 = a7;
LABEL_35:
  if ( !v39 )
    goto LABEL_50;
  left = v39->left;
  right = v39->right;
  if ( v39->left < right )
  {
    top = v39->top;
    bottom = v39->bottom;
    if ( top < bottom && right <= (int)v54.Width && bottom <= (int)v54.Height && left >= 0 && top >= 0 )
    {
      v44 = 0;
      if ( !DirtyRectCount )
        goto LABEL_50;
      while ( left < pDirtyRects[v44].left
           || right > pDirtyRects[v44].right
           || top < pDirtyRects[v44].top
           || bottom > pDirtyRects[v44].bottom )
      {
        if ( ++v44 >= DirtyRectCount )
          goto LABEL_50;
      }
    }
  }
  v39 = 0LL;
LABEL_50:
  v45 = DirtyRectCount + 1;
  if ( !v39 )
    v45 = DirtyRectCount;
  if ( v38 )
  {
    if ( pPresentRegions && (v45 || pPresentRegions->MoveRectCount) )
    {
      *((_DWORD *)this + 10) = v45;
      if ( v45 )
      {
        v46 = CCachedData<tagRECT,16>::Get((__int64)this + 176, v45);
        *((_QWORD *)this + 6) = v46;
        if ( !v46 )
        {
LABEL_58:
          v48 = WdLogNewEntry5_WdError(v47);
          *(_QWORD *)(v48 + 24) = this;
          v49 = *((unsigned int *)this + 10);
LABEL_59:
          *(_QWORD *)(v48 + 32) = v49;
          WdLogEvent5_WdError(v48);
          return 3221225495LL;
        }
        if ( pPresentRegions->DirtyRectCount )
          memmove(v46, pDirtyRects, 16LL * pPresentRegions->DirtyRectCount);
        if ( v39 )
          *(struct tagRECT *)(*((_QWORD *)this + 6) + 16LL * pPresentRegions->DirtyRectCount) = *v39;
      }
      else
      {
        *((_QWORD *)this + 6) = 0LL;
      }
      MoveRectCount = pPresentRegions->MoveRectCount;
      *((_DWORD *)this + 7) = MoveRectCount;
      if ( MoveRectCount )
      {
        v51 = CCachedData<_D3DKMT_MOVE_RECT,4>::Get((__int64)this + 64, MoveRectCount);
        *((_QWORD *)this + 4) = v51;
        if ( !v51 )
        {
          v48 = WdLogNewEntry5_WdError(0LL);
          *(_QWORD *)(v48 + 24) = this;
          v49 = *((unsigned int *)this + 7);
          goto LABEL_59;
        }
        memmove(v51, pPresentRegions->pMoveRects, 24LL * *((unsigned int *)this + 7));
        return 0LL;
      }
    }
    else
    {
      *((_DWORD *)this + 10) = 1;
      *((_QWORD *)this + 6) = (char *)this + 176;
      *((_DWORD *)this + 44) = 0;
      *(_DWORD *)(*((_QWORD *)this + 6) + 4LL) = 0;
      *(_DWORD *)(*((_QWORD *)this + 6) + 8LL) = v54.Width;
      *(_DWORD *)(*((_QWORD *)this + 6) + 12LL) = v54.Height;
      *((_DWORD *)this + 7) = 0;
    }
    *((_QWORD *)this + 4) = 0LL;
    return 0LL;
  }
  *((_DWORD *)this + 7) = 0;
  *((_QWORD *)this + 4) = 0LL;
  *((_DWORD *)this + 10) = v45;
  v52 = CCachedData<tagRECT,16>::Get((__int64)this + 176, v45);
  *((_QWORD *)this + 6) = v52;
  if ( !v52 )
    goto LABEL_58;
  memmove(v52, v37->pDstSubRects, 16LL * v37->SubRectCnt);
  if ( v39 )
    *(struct tagRECT *)(*((_QWORD *)this + 6) + 16LL * v37->SubRectCnt) = *v39;
  return 0LL;
}
