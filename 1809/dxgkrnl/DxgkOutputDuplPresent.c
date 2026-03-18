/*
 * XREFs of DxgkOutputDuplPresent @ 0x1C0227430
 * Callers:
 *     <none>
 * Callees:
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0011EE0 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C0011F20 (--_V@YAXPEAX@Z.c)
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     memmove @ 0x1C0022E80 (memmove.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0102F10 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?TranslateAndCopyDWMMoveRegionToDDAMoveRegions@@YAXKPEBU_D3DKMT_MOVE_RECT@@PEAU1@@Z @ 0x1C0227214 (-TranslateAndCopyDWMMoveRegionToDDAMoveRegions@@YAXKPEBU_D3DKMT_MOVE_RECT@@PEAU1@@Z.c)
 *     OutputDuplPresent @ 0x1C0241128 (OutputDuplPresent.c)
 */

__int64 __fastcall DxgkOutputDuplPresent(_OWORD *a1)
{
  struct DXGPROCESS *Current; // rax
  __int64 v3; // rcx
  __int64 v4; // r8
  struct DXGPROCESS *v5; // r13
  __int64 v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v11; // rax
  struct _D3DKMT_OUTPUTDUPLPRESENT *v12; // rcx
  __int64 v13; // rax
  unsigned __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // r15
  __int64 v17; // rax
  unsigned __int64 v18; // rcx
  UINT v19; // r14d
  __int64 v20; // rcx
  unsigned int v21; // edi
  __int64 v22; // rax
  RECT *v23; // rdi
  RECT *v24; // rax
  __int64 v25; // rcx
  __int64 v26; // rax
  D3DKMT_MOVE_RECT *v27; // rsi
  const RECT *pDirtyRects; // rdx
  UINT MoveRectCount; // ecx
  const D3DKMT_MOVE_RECT *v30; // r8
  unsigned int v31; // esi
  struct _D3DKMT_OUTPUTDUPLPRESENT v32; // [rsp+40h] [rbp-168h] BYREF

  Current = DXGPROCESS::GetCurrent();
  v5 = Current;
  if ( !Current )
  {
    v6 = WdLogNewEntry5_WdError(v3);
    *(_QWORD *)(v6 + 24) = -1073741811LL;
    *(_QWORD *)(v6 + 32) = PsGetCurrentProcess(v8, v7);
    v9 = v6;
LABEL_3:
    WdLogEvent5_WdError(v9);
    return 3221225485LL;
  }
  if ( !*((_BYTE *)Current + 322) )
  {
    v11 = WdLogNewEntry5_WdError(v3);
    *(_QWORD *)(v11 + 24) = 10971LL;
    v9 = v11;
    goto LABEL_3;
  }
  if ( (unsigned __int64)a1 >= MmUserProbeAddress )
    a1 = (_OWORD *)MmUserProbeAddress;
  v12 = &v32;
  v13 = 2LL;
  do
  {
    *(_OWORD *)&v12->hContext = *a1;
    *(_OWORD *)v12->BroadcastContext = a1[1];
    *(_OWORD *)&v12->BroadcastContext[4] = a1[2];
    *(_OWORD *)&v12->BroadcastContext[8] = a1[3];
    *(_OWORD *)&v12->BroadcastContext[12] = a1[4];
    *(_OWORD *)&v12->BroadcastContext[16] = a1[5];
    *(_OWORD *)&v12->BroadcastContext[20] = a1[6];
    v12 = (struct _D3DKMT_OUTPUTDUPLPRESENT *)((char *)v12 + 128);
    *(_OWORD *)&v12[-1].PresentRegions.pMoveRects = a1[7];
    a1 += 8;
    --v13;
  }
  while ( v13 );
  *(_OWORD *)&v12->hContext = *a1;
  *(_OWORD *)v12->BroadcastContext = a1[1];
  *(_OWORD *)&v12->BroadcastContext[4] = a1[2];
  *(_QWORD *)&v12->BroadcastContext[8] = *((_QWORD *)a1 + 6);
  v14 = 16LL * v32.PresentRegions.DirtyRectCount;
  v15 = 0xFFFFFFFFLL;
  if ( v14 > 0xFFFFFFFF )
  {
    v17 = WdLogNewEntry5_WdWarning(v12, 0xFFFFFFFFLL, v4);
    *(_QWORD *)(v17 + 24) = 10990LL;
LABEL_13:
    WdLogEvent5_WdWarning(v17);
    return 3221225621LL;
  }
  v16 = (unsigned int)v14;
  v18 = 24LL * v32.PresentRegions.MoveRectCount;
  if ( v18 > 0xFFFFFFFF )
  {
    v17 = WdLogNewEntry5_WdWarning(v18, 0xFFFFFFFFLL, v4);
    *(_QWORD *)(v17 + 24) = 10997LL;
    goto LABEL_13;
  }
  v19 = 24 * v32.PresentRegions.MoveRectCount;
  v20 = (unsigned int)(v18 + v14);
  if ( (unsigned int)v20 >= v19 )
    v15 = (unsigned int)v20;
  v21 = (unsigned int)v20 < v19 ? 0xC0000095 : 0;
  if ( (unsigned int)v20 < v19 )
  {
    v22 = WdLogNewEntry5_WdWarning(v20, v15, v4);
    *(_QWORD *)(v22 + 24) = 11004LL;
    WdLogEvent5_WdWarning(v22);
    return v21;
  }
  v23 = 0LL;
  if ( (_DWORD)v15 )
  {
    v24 = (RECT *)operator new((unsigned int)v15, 0x4B677844u, PagedPool);
    v23 = v24;
    if ( !v24 )
    {
      v26 = WdLogNewEntry5_WdLowResource(v25);
      *(_QWORD *)(v26 + 24) = 11015LL;
      WdLogEvent5_WdLowResource(v26);
      return 3221225495LL;
    }
    v27 = (D3DKMT_MOVE_RECT *)&v24[v32.PresentRegions.DirtyRectCount];
    if ( v32.PresentRegions.DirtyRectCount )
    {
      pDirtyRects = v32.PresentRegions.pDirtyRects;
      if ( (const RECT *)((unsigned __int64)v32.PresentRegions.pDirtyRects + v16) < v32.PresentRegions.pDirtyRects
        || (const RECT *)((char *)v32.PresentRegions.pDirtyRects + v16) > (const RECT *)MmUserProbeAddress )
      {
        *(_BYTE *)MmUserProbeAddress = 0;
      }
      memmove(v24, pDirtyRects, (unsigned int)v16);
      v32.PresentRegions.pDirtyRects = v23;
    }
    else
    {
      v32.PresentRegions.pDirtyRects = 0LL;
    }
    MoveRectCount = v32.PresentRegions.MoveRectCount;
    if ( v32.PresentRegions.MoveRectCount )
    {
      if ( v19 )
      {
        v30 = &v32.PresentRegions.pMoveRects[v19 / 0x18];
        if ( (unsigned __int64)v30 > MmUserProbeAddress || v30 < v32.PresentRegions.pMoveRects )
        {
          *(_BYTE *)MmUserProbeAddress = 0;
          MoveRectCount = v32.PresentRegions.MoveRectCount;
        }
      }
      TranslateAndCopyDWMMoveRegionToDDAMoveRegions(MoveRectCount, v32.PresentRegions.pMoveRects, v27);
      v32.PresentRegions.pMoveRects = v27;
    }
    else
    {
      v32.PresentRegions.pMoveRects = 0LL;
    }
  }
  else
  {
    v32.PresentRegions.pDirtyRects = 0LL;
    v32.PresentRegions.pMoveRects = 0LL;
  }
  v31 = OutputDuplPresent(&v32, v5);
  if ( v23 )
    operator delete[](v23);
  return v31;
}
