/*
 * XREFs of ?ValidatePresentRegions@DXGCONTEXT@@AEBAJPEBU_D3DKMT_PRESENT@@II@Z @ 0x1C013C920
 * Callers:
 *     ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C010A6E0 (-Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESET.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DXGCONTEXT::ValidatePresentRegions(DXGCONTEXT *this, unsigned __int64 a2, __int64 a3, int a4)
{
  D3DKMT_PRESENT_RGNS *v4; // rcx
  __int64 v5; // rbx
  int v7; // r13d
  const struct _D3DKMT_PRESENT *v8; // r15
  UINT v9; // r11d
  UINT MoveRectCount; // r14d
  const D3DKMT_MOVE_RECT *pMoveRects; // r10
  UINT DirtyRectCount; // r11d
  UINT v13; // r9d
  unsigned int *i; // rsi
  int v15; // eax
  __int64 v16; // rcx
  LONG *p_bottom; // rsi
  int v19; // eax
  __int64 v20; // r8
  int v21; // r9d
  int v22; // ebp
  __int64 v23; // rax
  _QWORD *v24; // rdx
  __int64 v25; // rcx
  _QWORD *v26; // rdx
  __int64 v27; // rcx
  _QWORD *v28; // rdx
  __int64 v29; // rcx
  _DWORD v30[2]; // [rsp+20h] [rbp-38h]
  int v31; // [rsp+28h] [rbp-30h]
  int v32; // [rsp+2Ch] [rbp-2Ch]

  v4 = *(D3DKMT_PRESENT_RGNS **)(a2 + 1440);
  v5 = 0LL;
  v7 = a3;
  v8 = (const struct _D3DKMT_PRESENT *)a2;
  v9 = 0;
  MoveRectCount = v4->MoveRectCount;
  pMoveRects = v4->pMoveRects;
  if ( MoveRectCount )
  {
    p_bottom = &pMoveRects->DestRect.bottom;
    while ( 1 )
    {
      v19 = *(p_bottom - 1);
      v20 = (unsigned int)*(p_bottom - 3);
      if ( v19 <= (int)v20 )
        break;
      a2 = (unsigned int)*p_bottom;
      v21 = *(p_bottom - 2);
      if ( (int)a2 <= v21 || v19 > v7 || (int)a2 > a4 || (int)v20 < 0 || v21 < 0 )
        break;
      v22 = *(p_bottom - 4);
      a2 = (unsigned int)(a2 - v21);
      v30[0] = pMoveRects->SourcePoint.x;
      v30[1] = v22;
      v31 = v30[0] + v19 - v20;
      a3 = (unsigned int)(a2 + v22);
      v32 = a2 + v22;
      if ( v31 > v7 || (int)a3 > a4 || v30[0] < 0 || v22 < 0 )
      {
        v23 = WdLogNewEntry5_WdError(v4, a2, a3);
        *(_QWORD *)(v23 + 24) = -1073741811LL;
        v24 = (_QWORD *)(v23 + 32);
        do
        {
          v25 = (int)v30[v5++];
          *v24++ = v25;
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
    v23 = WdLogNewEntry5_WdError(v4, a2, v20);
    *(_QWORD *)(v23 + 24) = -1073741811LL;
    v26 = (_QWORD *)(v23 + 32);
    do
    {
      v27 = p_bottom[v5++ - 3];
      *v26++ = v27;
    }
    while ( v5 < 4 );
LABEL_30:
    WdLogEvent5_WdError(v23);
    return 3221225485LL;
  }
  else
  {
LABEL_2:
    DirtyRectCount = v4->DirtyRectCount;
    v13 = 0;
    for ( i = (unsigned int *)v4->pDirtyRects; v13 < DirtyRectCount; i += 4 )
    {
      v15 = i[2];
      v16 = *i;
      if ( (v8->Flags.Value & 0x10000000) != 0 )
      {
        if ( v15 < (int)v16 || (a2 = i[3], a3 = i[1], (int)a2 < (int)a3) )
        {
LABEL_33:
          v23 = WdLogNewEntry5_WdError(v16, a2, a3);
          *(_QWORD *)(v23 + 24) = -1073741811LL;
          v28 = (_QWORD *)(v23 + 32);
          do
          {
            v29 = (int)i[v5++];
            *v28++ = v29;
          }
          while ( v5 < 4 );
          goto LABEL_30;
        }
      }
      else
      {
        if ( v15 <= (int)v16 )
          goto LABEL_33;
        a2 = i[3];
        a3 = i[1];
        if ( (int)a2 <= (int)a3 )
          goto LABEL_33;
      }
      if ( v15 > v7 || (int)a2 > a4 || (int)v16 < 0 || (int)a3 < 0 )
        goto LABEL_33;
      ++v13;
    }
    return 0LL;
  }
}
