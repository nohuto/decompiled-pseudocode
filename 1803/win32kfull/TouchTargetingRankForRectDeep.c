/*
 * XREFs of TouchTargetingRankForRectDeep @ 0x1C022DCA8
 * Callers:
 *     ?TouchTargetingLayerHitTest@@YAHPEAUtagWND@@UtagPOINT@@HPEBUtagTOUCHTARGETINGCONTACT@@PEAUtagRECT@@PEAGPEAU2@W4tagTARGETING_PROPERTY@@@Z @ 0x1C01C9A9C (-TouchTargetingLayerHitTest@@YAHPEAUtagWND@@UtagPOINT@@HPEBUtagTOUCHTARGETINGCONTACT@@PEAUtagREC.c)
 *     ?xxxTargetingHitTest@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@1PEAUtagPNTRWINDOWHITTTESTARGS@@PEAHUtagRECT@@KW4tagTARGETING_PROPERTY@@@Z @ 0x1C01CA6C8 (-xxxTargetingHitTest@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@1PEAUtagPNTRWINDOWHITTTESTARGS@@PEAHU.c)
 * Callees:
 *     IntersectRect @ 0x1C002D204 (IntersectRect.c)
 *     PtInRect @ 0x1C00749C4 (PtInRect.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     ?_TTIntersectLine@@YAHUtagPOINT@@0PEBUtagTOUCHTARGETINGCONTACT@@PEAU1@2@Z @ 0x1C022C9E4 (-_TTIntersectLine@@YAHUtagPOINT@@0PEBUtagTOUCHTARGETINGCONTACT@@PEAU1@2@Z.c)
 *     ?_TTLimitDeepTargetingPoint@@YAXJJPEAJ@Z @ 0x1C022CC90 (-_TTLimitDeepTargetingPoint@@YAXJJPEAJ@Z.c)
 *     TouchTargetingRank @ 0x1C022D65C (TouchTargetingRank.c)
 *     TouchTargetingSnapToSegment @ 0x1C022DF78 (TouchTargetingSnapToSegment.c)
 */

__int64 __fastcall TouchTargetingRankForRectDeep(_OWORD *a1, __int64 a2, int *a3, _DWORD *a4, int a5)
{
  bool v5; // zf
  _DWORD *v8; // rbx
  unsigned __int16 v9; // r12
  int v10; // esi
  int v11; // r14d
  int v12; // ebx
  int v13; // edi
  __int64 v14; // r11
  __int64 v15; // rcx
  unsigned __int16 v16; // ax
  int v17; // r11d
  int v18; // r11d
  struct tagPOINT v20; // [rsp+30h] [rbp-40h]
  __int64 v21; // [rsp+30h] [rbp-40h]
  _DWORD *v22; // [rsp+38h] [rbp-38h] BYREF
  __int128 v23; // [rsp+40h] [rbp-30h] BYREF
  struct tagPOINT v24; // [rsp+50h] [rbp-20h] BYREF
  struct tagPOINT v25; // [rsp+58h] [rbp-18h] BYREF

  v5 = *(_DWORD *)(a2 + 180) == 0;
  v23 = *a1;
  v8 = a1;
  v22 = a1;
  v9 = 4094;
  if ( !v5
    && (!a3 || (unsigned int)IntersectRect(&v23, (int *)&v23, a3))
    && (_DWORD)v23 != DWORD2(v23)
    && DWORD1(v23) != HIDWORD(v23) )
  {
    v20.x = *(_DWORD *)(a2 + 32) + *a4;
    v20.y = a4[1] + *(_DWORD *)(a2 + 36);
    if ( (unsigned int)_TTIntersectLine(
                         *(struct tagPOINT *)(a2 + 32),
                         v20,
                         (const struct tagTOUCHTARGETINGCONTACT *)a2,
                         &v25,
                         &v24) )
    {
      if ( !a5 )
      {
        v10 = *(_DWORD *)(a2 + 184);
        v11 = *(_DWORD *)(a2 + 32);
        _TTLimitDeepTargetingPoint(v11, v10, (int *)&v25);
        v12 = *(_DWORD *)(a2 + 188);
        v13 = *(_DWORD *)(a2 + 36);
        _TTLimitDeepTargetingPoint(v13, v12, &v25.y);
        _TTLimitDeepTargetingPoint(v11, v10, (int *)&v24);
        _TTLimitDeepTargetingPoint(v13, v12, &v24.y);
        v8 = v22;
      }
      LODWORD(v21) = (*v8 + v8[2]) / 2;
      HIDWORD(v21) = (v8[1] + v8[3]) / 2;
      ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))TouchTargetingSnapToSegment)(v25, v24, v21, &v22);
      if ( PtInRect(&v23, (unsigned __int64)v22) )
      {
        v15 = *(_QWORD *)(a2 + 32);
        v23 = *(_OWORD *)v8;
        v16 = TouchTargetingRank(v15, v14, &v23, v21);
        v18 = v17 - *(_DWORD *)(a2 + 32);
        v9 = v16;
        a4[1] = HIDWORD(v22) - *(_DWORD *)(a2 + 36);
        *a4 = v18;
      }
    }
  }
  return v9;
}
