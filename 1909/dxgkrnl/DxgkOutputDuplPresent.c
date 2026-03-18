/*
 * XREFs of DxgkOutputDuplPresent @ 0x1C025C590
 * Callers:
 *     <none>
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x1C000C530 (--_V@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000C5A0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     memmove @ 0x1C0025100 (memmove.c)
 *     memset @ 0x1C0025440 (memset.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01059F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?TranslateAndCopyDWMMoveRegionToDDAMoveRegions@@YAXKPEBU_D3DKMT_MOVE_RECT@@PEAU1@@Z @ 0x1C025C358 (-TranslateAndCopyDWMMoveRegionToDDAMoveRegions@@YAXKPEBU_D3DKMT_MOVE_RECT@@PEAU1@@Z.c)
 *     OutputDuplPresent @ 0x1C0276950 (OutputDuplPresent.c)
 */

__int64 __fastcall DxgkOutputDuplPresent(_OWORD *a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  struct DXGPROCESS *Current; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  struct DXGPROCESS *v8; // r13
  __int64 v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v14; // rax
  _D3DKMT_OUTPUTDUPLPRESENT *v15; // rcx
  __int64 v16; // rax
  unsigned __int64 v17; // r14
  unsigned __int64 v18; // rsi
  unsigned int v19; // eax
  RECT *v20; // rdi
  RECT *v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rax
  D3DKMT_MOVE_RECT *v27; // r15
  const RECT *pDirtyRects; // rdx
  const RECT *v29; // rcx
  UINT MoveRectCount; // ecx
  const D3DKMT_MOVE_RECT *v31; // r8
  unsigned int v32; // esi
  __int64 v33; // rax
  _D3DKMT_OUTPUTDUPLPRESENT v34; // [rsp+40h] [rbp-168h] BYREF

  memset(&v34, 0, sizeof(v34));
  Current = DXGPROCESS::GetCurrent(v3, v2);
  v8 = Current;
  if ( !Current )
  {
    v9 = WdLogNewEntry5_WdError(v6, v5, v7);
    *(_QWORD *)(v9 + 24) = -1073741811LL;
    *(_QWORD *)(v9 + 32) = PsGetCurrentProcess(v11, v10);
    v12 = v9;
LABEL_3:
    WdLogEvent5_WdError(v12);
    return 3221225485LL;
  }
  if ( !*((_BYTE *)Current + 298) )
  {
    v14 = WdLogNewEntry5_WdError(v6, v5, v7);
    *(_QWORD *)(v14 + 24) = 11136LL;
    v12 = v14;
    goto LABEL_3;
  }
  if ( (unsigned __int64)a1 >= MmUserProbeAddress )
    a1 = (_OWORD *)MmUserProbeAddress;
  v15 = &v34;
  v16 = 2LL;
  do
  {
    *(_OWORD *)&v15->hContext = *a1;
    *(_OWORD *)v15->BroadcastContext = a1[1];
    *(_OWORD *)&v15->BroadcastContext[4] = a1[2];
    *(_OWORD *)&v15->BroadcastContext[8] = a1[3];
    *(_OWORD *)&v15->BroadcastContext[12] = a1[4];
    *(_OWORD *)&v15->BroadcastContext[16] = a1[5];
    *(_OWORD *)&v15->BroadcastContext[20] = a1[6];
    v15 = (_D3DKMT_OUTPUTDUPLPRESENT *)((char *)v15 + 128);
    *(_OWORD *)&v15[-1].PresentRegions.pMoveRects = a1[7];
    a1 += 8;
    --v16;
  }
  while ( v16 );
  *(_OWORD *)&v15->hContext = *a1;
  *(_OWORD *)v15->BroadcastContext = a1[1];
  *(_OWORD *)&v15->BroadcastContext[4] = a1[2];
  *(_QWORD *)&v15->BroadcastContext[8] = *((_QWORD *)a1 + 6);
  v17 = 16LL * v34.PresentRegions.DirtyRectCount;
  if ( v17 > 0xFFFFFFFF )
  {
    v33 = WdLogNewEntry5_WdWarning(0xFFFFFFFFLL, 128LL, v7);
    *(_QWORD *)(v33 + 24) = 11155LL;
    goto LABEL_36;
  }
  v18 = 24LL * v34.PresentRegions.MoveRectCount;
  if ( v18 > 0xFFFFFFFF )
  {
    v33 = WdLogNewEntry5_WdWarning(0xFFFFFFFFLL, 128LL, v7);
    *(_QWORD *)(v33 + 24) = 11162LL;
    goto LABEL_36;
  }
  v19 = v18 + v17;
  if ( (int)v18 + (int)v17 < (unsigned int)v18 )
  {
    v33 = WdLogNewEntry5_WdWarning(0xFFFFFFFFLL, 128LL, v7);
    *(_QWORD *)(v33 + 24) = 11169LL;
LABEL_36:
    WdLogEvent5_WdWarning(v33);
    return 3221225621LL;
  }
  v20 = 0LL;
  if ( v19 )
  {
    v21 = (RECT *)operator new[](v19, 0x4B677844u, PagedPool);
    v20 = v21;
    if ( !v21 )
    {
      v26 = WdLogNewEntry5_WdLowResource(v23, v22, v24, v25);
      *(_QWORD *)(v26 + 24) = 11180LL;
      WdLogEvent5_WdLowResource(v26);
      return 3221225495LL;
    }
    v27 = (D3DKMT_MOVE_RECT *)&v21[v34.PresentRegions.DirtyRectCount];
    if ( v34.PresentRegions.DirtyRectCount )
    {
      pDirtyRects = v34.PresentRegions.pDirtyRects;
      v29 = (const RECT *)((char *)v34.PresentRegions.pDirtyRects + (unsigned int)v17);
      if ( v29 < v34.PresentRegions.pDirtyRects || (unsigned __int64)v29 > MmUserProbeAddress )
        *(_BYTE *)MmUserProbeAddress = 0;
      memmove(v21, pDirtyRects, (unsigned int)v17);
      v34.PresentRegions.pDirtyRects = v20;
    }
    else
    {
      v34.PresentRegions.pDirtyRects = 0LL;
    }
    MoveRectCount = v34.PresentRegions.MoveRectCount;
    if ( v34.PresentRegions.MoveRectCount )
    {
      if ( (_DWORD)v18 )
      {
        v31 = (const D3DKMT_MOVE_RECT *)((char *)v34.PresentRegions.pMoveRects + (unsigned int)v18);
        if ( (unsigned __int64)v31 > MmUserProbeAddress || v31 < v34.PresentRegions.pMoveRects )
        {
          *(_BYTE *)MmUserProbeAddress = 0;
          MoveRectCount = v34.PresentRegions.MoveRectCount;
        }
      }
      TranslateAndCopyDWMMoveRegionToDDAMoveRegions(MoveRectCount, v34.PresentRegions.pMoveRects, v27);
      v34.PresentRegions.pMoveRects = v27;
    }
    else
    {
      v34.PresentRegions.pMoveRects = 0LL;
    }
  }
  else
  {
    v34.PresentRegions.pDirtyRects = 0LL;
    v34.PresentRegions.pMoveRects = 0LL;
  }
  v32 = OutputDuplPresent(&v34, v8);
  if ( v20 )
    operator delete[](v20);
  return v32;
}
