/*
 * XREFs of DrawEdge @ 0x1C012B8CC
 * Callers:
 *     xxxDrawWindowFrame @ 0x1C002E4B0 (xxxDrawWindowFrame.c)
 *     ?DrawGroove@@YAXPEAUHDC__@@PEAUHBRUSH__@@PEAUtagRECT@@H@Z @ 0x1C00EB068 (-DrawGroove@@YAXPEAUHDC__@@PEAUHBRUSH__@@PEAUtagRECT@@H@Z.c)
 *     xxxMenuDraw @ 0x1C01294A0 (xxxMenuDraw.c)
 *     DrawPushButton @ 0x1C012B5C8 (DrawPushButton.c)
 *     xxxDrawCaptionBar @ 0x1C012F140 (xxxDrawCaptionBar.c)
 *     ?xxxPaintSwitchWindow@@YAXPEAUtagWND@@@Z @ 0x1C01F4800 (-xxxPaintSwitchWindow@@YAXPEAUtagWND@@@Z.c)
 *     xxxMNDrawFullNC @ 0x1C0249F5C (xxxMNDrawFullNC.c)
 * Callees:
 *     FillRect @ 0x1C012BF54 (FillRect.c)
 *     GrePolyPatBlt @ 0x1C012BFB4 (GrePolyPatBlt.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     ?DrawDiagonal@@YAHPEAUHDC__@@PEAUtagRECT@@PEAUHBRUSH__@@2I@Z @ 0x1C0259A3C (-DrawDiagonal@@YAHPEAUHDC__@@PEAUtagRECT@@PEAUHBRUSH__@@2I@Z.c)
 *     ?FillTriangle@@YAHPEAUHDC__@@PEAUtagRECT@@PEAUHBRUSH__@@I@Z @ 0x1C0259D74 (-FillTriangle@@YAHPEAUHDC__@@PEAUtagRECT@@PEAUHBRUSH__@@I@Z.c)
 */

__int64 __fastcall DrawEdge(HDC a1, RECT *a2, char a3, int a4)
{
  RECT v5; // xmm0
  char v6; // r13
  unsigned int v7; // r10d
  LONG bottom; // r15d
  LONG right; // r14d
  LONG top; // edi
  int v11; // ecx
  LONG left; // esi
  unsigned int v13; // ebx
  int v14; // eax
  int v15; // eax
  int v16; // eax
  int v17; // eax
  HBRUSH v18; // r8
  HBRUSH v19; // rdx
  unsigned int v20; // r9d
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rax
  __int64 v25; // rcx
  unsigned int v26; // eax
  int v28; // eax
  HBRUSH v29; // r8
  int v30; // eax
  HBRUSH v31; // r8
  RECT v32; // [rsp+30h] [rbp-69h] BYREF
  RECT *v33; // [rsp+40h] [rbp-59h]
  LONG v34; // [rsp+50h] [rbp-49h] BYREF
  LONG v35; // [rsp+54h] [rbp-45h]
  int v36; // [rsp+58h] [rbp-41h]
  int v37; // [rsp+5Ch] [rbp-3Dh]
  _QWORD v38[10]; // [rsp+60h] [rbp-39h]

  v5 = *a2;
  v6 = a3;
  v33 = a2;
  v7 = 1;
  v32 = v5;
  bottom = v5.bottom;
  right = v5.right;
  top = v5.top;
  v11 = a4 | 0x8000;
  left = v5.left;
  if ( *(_WORD *)(gpsi + 6996LL) != 1 )
    v11 = a4;
  v13 = v11 | 0x4000;
  if ( (v11 & 0x8000) == 0 )
    v13 = v11;
  v14 = a3 & 3;
  if ( (a3 & 3) == 0 )
    goto LABEL_24;
  while ( 1 )
  {
    if ( (v13 & 0x4000) != 0 )
    {
      v28 = v14 & 3;
      if ( (v13 & 0x8000) != 0 )
        v19 = v28 ? *(HBRUSH *)(gpsi + 4744LL) : *(HBRUSH *)(gpsi + 4736LL);
      else
        v19 = v28 ? *(HBRUSH *)(gpsi + 4824LL) : *(HBRUSH *)(gpsi + 4816LL);
      v18 = v19;
    }
    else
    {
      v15 = v14 - 1;
      if ( v15 )
      {
        v16 = v15 - 1;
        if ( v16 )
        {
          v17 = v16 - 2;
          if ( v17 )
          {
            if ( v17 != 4 )
              return 0LL;
            v18 = (v13 & 0x1000) != 0 ? *(HBRUSH *)(gpsi + 4824LL) : *(HBRUSH *)(gpsi + 4864LL);
            v19 = *(HBRUSH *)(gpsi + 4872LL);
          }
          else
          {
            v18 = (v13 & 0x1000) != 0 ? *(HBRUSH *)(gpsi + 4872LL) : *(HBRUSH *)(gpsi + 4856LL);
            v19 = *(HBRUSH *)(gpsi + 4824LL);
          }
        }
        else
        {
          v18 = (v13 & 0x1000) != 0 ? *(HBRUSH *)(gpsi + 4864LL) : *(HBRUSH *)(gpsi + 4824LL);
          v19 = *(HBRUSH *)(gpsi + 4856LL);
        }
      }
      else
      {
        v18 = (v13 & 0x1000) != 0 ? *(HBRUSH *)(gpsi + 4856LL) : *(HBRUSH *)(gpsi + 4872LL);
        v19 = *(HBRUSH *)(gpsi + 4864LL);
      }
    }
    if ( (v13 & 0x10) != 0 )
    {
      v26 = DrawDiagonal(a1, &v32, v18, v19, v13);
      bottom = v32.bottom;
      right = v32.right;
      top = v32.top;
      left = v32.left;
    }
    else
    {
      v20 = 0;
      if ( (v13 & 4) != 0 )
      {
        --right;
        v35 = top;
        v32.right = right;
        v34 = right;
        v37 = bottom - top;
        v20 = 1;
        v36 = 1;
        v38[0] = v19;
      }
      if ( (v13 & 8) != 0 )
      {
        v32.bottom = --bottom;
        v21 = 3LL * v20;
        *(&v34 + 2 * v21) = left;
        *(&v36 + 2 * v21) = right - left;
        ++v20;
        *(&v35 + 2 * v21) = bottom;
        *(&v37 + 2 * v21) = 1;
        v38[v21] = v19;
      }
      if ( (v13 & 1) != 0 )
      {
        v22 = v20++;
        v23 = 3 * v22;
        *(&v34 + 2 * v23) = left++;
        *(&v35 + 2 * v23) = top;
        v32.left = left;
        *(&v36 + 2 * v23) = 1;
        *(&v37 + 2 * v23) = bottom - top;
        v38[v23] = v18;
      }
      if ( (v13 & 2) != 0 )
      {
        v24 = v20++;
        v25 = 3 * v24;
        *(&v35 + 2 * v25) = top++;
        *(&v34 + 2 * v25) = left;
        v32.top = top;
        *(&v36 + 2 * v25) = right - left;
        *(&v37 + 2 * v25) = 1;
        v38[v25] = v18;
      }
      v26 = GrePolyPatBlt(a1, 0xF00021u, (struct _POLYPATBLT *)&v34, v20);
    }
    v7 = v26;
LABEL_24:
    v14 = v6 & 0xC;
    if ( (v6 & 0xC) == 0 )
      break;
    v6 &= 0xF3u;
  }
  if ( (v13 & 0x800) != 0 )
  {
    if ( (v13 & 0x10) != 0 )
    {
      if ( (v13 & 0x8000) != 0 )
        v29 = *(HBRUSH *)(gpsi + 4736LL);
      else
        v29 = *(HBRUSH *)(gpsi + 4816LL);
      v30 = FillTriangle(a1, &v32, v29, v13);
    }
    else
    {
      if ( (v13 & 0x8000) != 0 )
        v31 = *(HBRUSH *)(gpsi + 4736LL);
      else
        v31 = *(HBRUSH *)(gpsi + 4816LL);
      v30 = FillRect(a1, &v32, v31);
    }
    v7 = v30;
  }
  if ( (v13 & 0x2000) != 0 )
    *v33 = v32;
  return v7;
}
