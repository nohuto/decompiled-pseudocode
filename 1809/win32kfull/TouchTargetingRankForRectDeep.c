/*
 * XREFs of TouchTargetingRankForRectDeep @ 0x1C0243C00
 * Callers:
 *     ?TouchTargetingLayerHitTest@@YAHPEAUtagWND@@UtagPOINT@@HPEBUtagTOUCHTARGETINGCONTACT@@PEAUtagRECT@@PEAGPEAU2@W4tagTARGETING_PROPERTY@@@Z @ 0x1C01EDDB4 (-TouchTargetingLayerHitTest@@YAHPEAUtagWND@@UtagPOINT@@HPEBUtagTOUCHTARGETINGCONTACT@@PEAUtagREC.c)
 *     ?xxxTargetingHitTest@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@1PEAUtagPNTRWINDOWHITTTESTARGS@@PEAHUtagRECT@@KW4tagTARGETING_PROPERTY@@@Z @ 0x1C01EE9F4 (-xxxTargetingHitTest@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@1PEAUtagPNTRWINDOWHITTTESTARGS@@PEAHU.c)
 * Callees:
 *     IntersectRect @ 0x1C003D900 (IntersectRect.c)
 *     PtInRect @ 0x1C006EFD8 (PtInRect.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     ?_TTIntersectLine@@YAHUtagPOINT@@0PEBUtagTOUCHTARGETINGCONTACT@@PEAU1@2@Z @ 0x1C024294C (-_TTIntersectLine@@YAHUtagPOINT@@0PEBUtagTOUCHTARGETINGCONTACT@@PEAU1@2@Z.c)
 *     ?_TTLimitDeepTargetingPoint@@YAXJJPEAJ@Z @ 0x1C0242BF8 (-_TTLimitDeepTargetingPoint@@YAXJJPEAJ@Z.c)
 *     TouchTargetingRank @ 0x1C02435C8 (TouchTargetingRank.c)
 *     TouchTargetingSnapToSegment @ 0x1C0243EE8 (TouchTargetingSnapToSegment.c)
 */

__int64 __fastcall TouchTargetingRankForRectDeep(_OWORD *a1, __int64 a2, int *a3, _DWORD *a4, int a5)
{
  bool v5; // zf
  _DWORD *v8; // rdi
  unsigned __int16 v9; // r12
  int v10; // esi
  int v11; // r14d
  int v12; // ebx
  int v13; // edi
  __int64 v14; // rbx
  __int64 v15; // rcx
  unsigned __int16 v16; // ax
  int v17; // ebx
  struct tagPOINT v19; // [rsp+30h] [rbp-40h]
  __int64 v20; // [rsp+30h] [rbp-40h]
  _DWORD *v21; // [rsp+38h] [rbp-38h] BYREF
  __int128 v22; // [rsp+40h] [rbp-30h] BYREF
  struct tagPOINT v23; // [rsp+50h] [rbp-20h] BYREF
  struct tagPOINT v24; // [rsp+58h] [rbp-18h] BYREF

  v5 = *(_DWORD *)(a2 + 180) == 0;
  v22 = *a1;
  v8 = a1;
  v21 = a1;
  v9 = 4094;
  if ( !v5
    && (!a3 || (unsigned int)IntersectRect(&v22, (int *)&v22, a3))
    && (_DWORD)v22 != DWORD2(v22)
    && DWORD1(v22) != HIDWORD(v22) )
  {
    v19.x = *(_DWORD *)(a2 + 32) + *a4;
    v19.y = a4[1] + *(_DWORD *)(a2 + 36);
    if ( (unsigned int)_TTIntersectLine(
                         *(struct tagPOINT *)(a2 + 32),
                         v19,
                         (const struct tagTOUCHTARGETINGCONTACT *)a2,
                         &v24,
                         &v23) )
    {
      if ( !a5 )
      {
        v10 = *(_DWORD *)(a2 + 184);
        v11 = *(_DWORD *)(a2 + 32);
        _TTLimitDeepTargetingPoint(v11, v10, (int *)&v24);
        v12 = *(_DWORD *)(a2 + 188);
        v13 = *(_DWORD *)(a2 + 36);
        _TTLimitDeepTargetingPoint(v13, v12, &v24.y);
        _TTLimitDeepTargetingPoint(v11, v10, (int *)&v23);
        _TTLimitDeepTargetingPoint(v13, v12, &v23.y);
        v8 = v21;
      }
      LODWORD(v20) = (*v8 + v8[2]) / 2;
      HIDWORD(v20) = (v8[1] + v8[3]) / 2;
      ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))TouchTargetingSnapToSegment)(v24, v23, v20, &v21);
      v14 = (__int64)v21;
      if ( PtInRect(&v22, (unsigned __int64)v21) )
      {
        v15 = *(_QWORD *)(a2 + 32);
        v22 = *(_OWORD *)v8;
        v16 = TouchTargetingRank(v15, v14, &v22, v20);
        v17 = v14 - *(_DWORD *)(a2 + 32);
        v9 = v16;
        a4[1] = HIDWORD(v21) - *(_DWORD *)(a2 + 36);
        *a4 = v17;
      }
    }
  }
  return v9;
}
