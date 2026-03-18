/*
 * XREFs of ?ValidatePresentRegions@DXGCONTEXT@@AEBAJPEBU_D3DKMT_PRESENT@@II@Z @ 0x1C012AC38
 * Callers:
 *     ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C0107E40 (-Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESET.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DXGCONTEXT::ValidatePresentRegions(
        DXGCONTEXT *this,
        const struct _D3DKMT_PRESENT *a2,
        int a3,
        int a4)
{
  D3DKMT_PRESENT_RGNS *pPresentRegions; // rcx
  __int64 v5; // rbx
  UINT v9; // r11d
  UINT MoveRectCount; // r14d
  const D3DKMT_MOVE_RECT *pMoveRects; // r10
  UINT DirtyRectCount; // r11d
  UINT v13; // r9d
  const RECT *i; // rsi
  int right; // eax
  __int64 left; // rcx
  int bottom; // edx
  int top; // r8d
  int *p_bottom; // rsi
  int v21; // eax
  int v22; // r8d
  int v23; // edx
  int v24; // r9d
  int v25; // ebp
  __int64 v26; // rax
  _QWORD *v27; // rdx
  __int64 v28; // rcx
  _QWORD *v29; // rdx
  __int64 v30; // rcx
  _QWORD *v31; // rdx
  __int64 v32; // rcx
  _DWORD v33[2]; // [rsp+20h] [rbp-38h]
  int v34; // [rsp+28h] [rbp-30h]
  int v35; // [rsp+2Ch] [rbp-2Ch]

  pPresentRegions = a2->pPresentRegions;
  v5 = 0LL;
  v9 = 0;
  MoveRectCount = pPresentRegions->MoveRectCount;
  pMoveRects = pPresentRegions->pMoveRects;
  if ( MoveRectCount )
  {
    p_bottom = &pMoveRects->DestRect.bottom;
    while ( 1 )
    {
      v21 = *(p_bottom - 1);
      v22 = *(p_bottom - 3);
      if ( v21 <= v22 )
        break;
      v23 = *p_bottom;
      v24 = *(p_bottom - 2);
      if ( *p_bottom <= v24 || v21 > a3 || v23 > a4 || v22 < 0 || v24 < 0 )
        break;
      v25 = *(p_bottom - 4);
      v33[0] = pMoveRects->SourcePoint.x;
      v33[1] = v25;
      v34 = v33[0] + v21 - v22;
      v35 = v23 - v24 + v25;
      if ( v34 > a3 || v23 - v24 + v25 > a4 || v33[0] < 0 || v25 < 0 )
      {
        v26 = WdLogNewEntry5_WdError(pPresentRegions);
        *(_QWORD *)(v26 + 24) = -1073741811LL;
        v27 = (_QWORD *)(v26 + 32);
        do
        {
          v28 = (int)v33[v5++];
          *v27++ = v28;
        }
        while ( v5 < 4 );
        goto LABEL_30;
      }
      ++v9;
      ++pMoveRects;
      p_bottom += 6;
      if ( v9 >= MoveRectCount )
        goto LABEL_2;
    }
    v26 = WdLogNewEntry5_WdError(pPresentRegions);
    *(_QWORD *)(v26 + 24) = -1073741811LL;
    v29 = (_QWORD *)(v26 + 32);
    do
    {
      v30 = p_bottom[v5++ - 3];
      *v29++ = v30;
    }
    while ( v5 < 4 );
LABEL_30:
    WdLogEvent5_WdError(v26);
    return 3221225485LL;
  }
  else
  {
LABEL_2:
    DirtyRectCount = pPresentRegions->DirtyRectCount;
    v13 = 0;
    for ( i = pPresentRegions->pDirtyRects; v13 < DirtyRectCount; ++i )
    {
      right = i->right;
      left = (unsigned int)i->left;
      if ( (a2->Flags.Value & 0x10000000) != 0 )
      {
        if ( right < (int)left || (bottom = i->bottom, top = i->top, bottom < top) )
        {
LABEL_33:
          v26 = WdLogNewEntry5_WdError(left);
          *(_QWORD *)(v26 + 24) = -1073741811LL;
          v31 = (_QWORD *)(v26 + 32);
          do
          {
            v32 = *(&i->left + v5++);
            *v31++ = v32;
          }
          while ( v5 < 4 );
          goto LABEL_30;
        }
      }
      else
      {
        if ( right <= (int)left )
          goto LABEL_33;
        bottom = i->bottom;
        top = i->top;
        if ( bottom <= top )
          goto LABEL_33;
      }
      if ( right > a3 || bottom > a4 || (int)left < 0 || top < 0 )
        goto LABEL_33;
      ++v13;
    }
    return 0LL;
  }
}
