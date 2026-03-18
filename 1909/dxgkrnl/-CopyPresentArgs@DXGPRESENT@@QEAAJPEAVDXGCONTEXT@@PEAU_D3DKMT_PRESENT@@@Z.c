/*
 * XREFs of ?CopyPresentArgs@DXGPRESENT@@QEAAJPEAVDXGCONTEXT@@PEAU_D3DKMT_PRESENT@@@Z @ 0x1C0111E80
 * Callers:
 *     ?CopyPresentArgs@DXGCONTEXT@@QEAAJPEAU_D3DKMT_PRESENT@@PEAVDXGPROCESS@@@Z @ 0x1C0042CDC (-CopyPresentArgs@DXGCONTEXT@@QEAAJPEAU_D3DKMT_PRESENT@@PEAVDXGPROCESS@@@Z.c)
 *     DxgkPresent @ 0x1C010F1E0 (DxgkPresent.c)
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x1C000C530 (--_V@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000C5A0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     memmove @ 0x1C0025100 (memmove.c)
 *     ?TranslateAndCopyDWMMoveRegionToDDAMoveRegions@@YAXKPEBU_D3DKMT_MOVE_RECT@@PEAU1@@Z @ 0x1C025C358 (-TranslateAndCopyDWMMoveRegionToDDAMoveRegions@@YAXKPEBU_D3DKMT_MOVE_RECT@@PEAU1@@Z.c)
 */

__int64 __fastcall DXGPRESENT::CopyPresentArgs(DXGPRESENT *this, struct DXGCONTEXT *a2, struct _D3DKMT_PRESENT *a3)
{
  ULONG64 v6; // rdx
  ULONG64 pPresentRegions; // rcx
  bool v8; // di
  __int64 v9; // r8
  __int64 v10; // r9
  D3DKMT_PRESENT_RGNS *v11; // rax
  unsigned __int64 SubRectCnt; // r12
  unsigned int v13; // esi
  RECT *v14; // r14
  const RECT *pSrcSubRects; // rdx
  __int64 v16; // rcx
  D3DKMT_PRESENT_RGNS *v17; // r12
  __int64 DirtyRectCount; // rdx
  unsigned __int64 v19; // rsi
  unsigned __int64 v20; // r13
  unsigned int v21; // r14d
  struct _D3DKMT_MOVE_RECT *v22; // r11
  char *v23; // r13
  char *v24; // rdx
  unsigned int v25; // eax
  ULONG64 v26; // r8
  ULONG64 v27; // r9
  __int64 v28; // r11
  SIZE_T v30; // rax
  _QWORD *v31; // rax
  _QWORD *v32; // rax
  SIZE_T v33; // rax
  SIZE_T v34; // rax
  __int64 v35; // rax
  __int64 v36; // rax
  unsigned int v37; // [rsp+20h] [rbp-68h]
  struct _D3DKMT_MOVE_RECT *v38; // [rsp+38h] [rbp-50h]

  v8 = (unsigned __int8)PsGetCurrentThreadPreviousMode() == 1;
  if ( (a3->Flags.Value & 0x400000) != 0 )
  {
    if ( v8 )
    {
      pPresentRegions = (ULONG64)a3->pPresentRegions;
      v6 = MmUserProbeAddress;
      if ( pPresentRegions >= MmUserProbeAddress )
        pPresentRegions = MmUserProbeAddress;
      *((_OWORD *)this + 28) = *(_OWORD *)pPresentRegions;
      *((_OWORD *)this + 29) = *(_OWORD *)(pPresentRegions + 16);
    }
    else
    {
      v11 = a3->pPresentRegions;
      *((_OWORD *)this + 28) = *(_OWORD *)&v11->DirtyRectCount;
      *((_OWORD *)this + 29) = *(_OWORD *)&v11->MoveRectCount;
    }
  }
  if ( a3->pSrcSubRects )
  {
    SubRectCnt = a3->SubRectCnt;
    v13 = SubRectCnt;
    if ( 16 * SubRectCnt > 0xFFFFFFFF )
    {
      v32 = (_QWORD *)WdLogNewEntry5_WdError(pPresentRegions, v6, v9);
      v32[3] = -1073741675LL;
      v32[4] = a2;
      v32[5] = a3->SubRectCnt;
      v32[6] = 16LL;
      WdLogEvent5_WdError(v32);
      return 3221225621LL;
    }
    v14 = (RECT *)((char *)this + 480);
    if ( (unsigned int)SubRectCnt > 0x10 )
    {
      if ( (unsigned int)SubRectCnt > *((_DWORD *)this + 186) )
      {
        operator delete[](*((void **)this + 92));
        v30 = 16 * SubRectCnt;
        if ( !is_mul_ok(SubRectCnt, 0x10uLL) )
          v30 = -1LL;
        v14 = (RECT *)operator new[](v30, 0x4B677844u, PagedPool);
        *((_QWORD *)this + 92) = v14;
        pPresentRegions = 0LL;
        if ( v14 )
          pPresentRegions = (unsigned int)SubRectCnt;
        *((_DWORD *)this + 186) = pPresentRegions;
      }
      else
      {
        v14 = (RECT *)*((_QWORD *)this + 92);
      }
    }
    if ( !v14 )
    {
      v31 = (_QWORD *)WdLogNewEntry5_WdLowResource(pPresentRegions, v6, v9, v10);
      v31[3] = -1073741801LL;
      v31[4] = a2;
      v31[5] = a3->SubRectCnt;
      WdLogEvent5_WdLowResource(v31);
      return 3221225495LL;
    }
    pSrcSubRects = a3->pSrcSubRects;
    if ( v8 && (&pSrcSubRects[v13] < pSrcSubRects || (unsigned __int64)&pSrcSubRects[v13] > MmUserProbeAddress) )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(v14, pSrcSubRects, v13 * 16);
    a3->pSrcSubRects = v14;
    v16 = 0xFFFFFFFFLL;
  }
  else
  {
    v16 = 0xFFFFFFFFLL;
  }
  if ( (a3->Flags.Value & 0x400000) == 0 )
  {
    a3->pPresentRegions = 0LL;
    return 0LL;
  }
  v17 = (D3DKMT_PRESENT_RGNS *)((char *)this + 448);
  DirtyRectCount = *((unsigned int *)this + 112);
  v37 = DirtyRectCount;
  v19 = 16LL * (unsigned int)DirtyRectCount;
  if ( v19 > 0xFFFFFFFF )
  {
    v36 = WdLogNewEntry5_WdWarning(0xFFFFFFFFLL, DirtyRectCount, v9);
    *(_QWORD *)(v36 + 24) = 11017LL;
    goto LABEL_74;
  }
  v20 = *((unsigned int *)this + 116);
  v21 = 24 * v20;
  if ( 24 * v20 > 0xFFFFFFFF )
  {
    v36 = WdLogNewEntry5_WdWarning(0xFFFFFFFFLL, DirtyRectCount, v9);
    *(_QWORD *)(v36 + 24) = 11025LL;
    goto LABEL_74;
  }
  if ( v21 + (unsigned int)v19 < v21 )
  {
    v36 = WdLogNewEntry5_WdWarning(0xFFFFFFFFLL, DirtyRectCount, v9);
    *(_QWORD *)(v36 + 24) = 11033LL;
LABEL_74:
    WdLogEvent5_WdWarning(v36);
    return 3221225621LL;
  }
  if ( !(v21 + (_DWORD)v19) )
  {
    *((_QWORD *)this + 59) = 0LL;
    *((_QWORD *)this + 57) = 0LL;
LABEL_41:
    a3->pPresentRegions = v17;
    return 0LL;
  }
  v22 = (struct _D3DKMT_MOVE_RECT *)((char *)this + 752);
  v38 = (struct _D3DKMT_MOVE_RECT *)((char *)this + 752);
  if ( (unsigned int)v20 > 4 )
  {
    if ( (unsigned int)v20 > *((_DWORD *)this + 214) )
    {
      operator delete[](*((void **)this + 106));
      v33 = 24 * v20;
      if ( !is_mul_ok(v20, 0x18uLL) )
        v33 = -1LL;
      v22 = (struct _D3DKMT_MOVE_RECT *)operator new[](v33, 0x4B677844u, PagedPool);
      v38 = v22;
      *((_QWORD *)this + 106) = v22;
      v16 = 0LL;
      if ( v22 )
        v16 = (unsigned int)v20;
      *((_DWORD *)this + 214) = v16;
      DirtyRectCount = v17->DirtyRectCount;
    }
    else
    {
      v22 = (struct _D3DKMT_MOVE_RECT *)*((_QWORD *)this + 106);
      v38 = v22;
    }
    v37 = DirtyRectCount;
  }
  v23 = (char *)this + 864;
  if ( (unsigned int)DirtyRectCount > 0x10 )
  {
    if ( (unsigned int)DirtyRectCount > *((_DWORD *)this + 282) )
    {
      operator delete[](*((void **)this + 140));
      v34 = 16LL * v37;
      if ( !is_mul_ok(v37, 0x10uLL) )
        v34 = -1LL;
      v23 = (char *)operator new[](v34, 0x4B677844u, PagedPool);
      *((_QWORD *)this + 140) = v23;
      v16 = 0LL;
      if ( v23 )
        v16 = v37;
      *((_DWORD *)this + 282) = v16;
      v22 = v38;
    }
    else
    {
      v23 = (char *)*((_QWORD *)this + 140);
    }
  }
  if ( v22 && v23 )
  {
    if ( v17->DirtyRectCount )
    {
      v24 = (char *)*((_QWORD *)this + 57);
      if ( v8 && (&v24[(unsigned int)v19] < v24 || (unsigned __int64)&v24[(unsigned int)v19] > MmUserProbeAddress) )
        *(_BYTE *)MmUserProbeAddress = 0;
      memmove(v23, v24, (unsigned int)v19);
      *((_QWORD *)this + 57) = v23;
      v22 = v38;
    }
    else
    {
      *((_QWORD *)this + 57) = 0LL;
    }
    if ( *((_DWORD *)this + 116) )
    {
      v25 = *((_DWORD *)this + 116);
      if ( v8 )
      {
        if ( v21 )
        {
          v26 = *((_QWORD *)this + 59);
          v27 = v26 + v21;
          if ( v27 > MmUserProbeAddress || (v25 = *((_DWORD *)this + 116), v27 < v26) )
          {
            *(_BYTE *)MmUserProbeAddress = 0;
            v25 = *((_DWORD *)this + 116);
          }
        }
      }
      TranslateAndCopyDWMMoveRegionToDDAMoveRegions(v25, *((const struct _D3DKMT_MOVE_RECT **)this + 59), v22);
      *((_QWORD *)this + 59) = v28;
    }
    else
    {
      *((_QWORD *)this + 59) = 0LL;
    }
    goto LABEL_41;
  }
  v35 = WdLogNewEntry5_WdLowResource(v16, DirtyRectCount, v9, v10);
  *(_QWORD *)(v35 + 24) = 11046LL;
  WdLogEvent5_WdLowResource(v35);
  return 3221225495LL;
}
