/*
 * XREFs of ?BasicTargetingHitTest@@YAHPEAUtagWND@@PEAUtagTOUCHTARGETINGCONTACT@@UtagPOINT@@PEAGPEAU3@HPEAUtagRECT@@W4tagTARGETING_PROPERTY@@HKH@Z @ 0x1C01C8A3C
 * Callers:
 *     ?BasicTargetingWindowHitTest@@YAHPEAUtagWND@@UtagPOINT@@PEBUtagPNTRWINDOWHITTTESTARGS@@PEAHUtagRECT@@3PEAIPEAU2@W4tagTARGETING_PROPERTY@@K@Z @ 0x1C01C8C84 (-BasicTargetingWindowHitTest@@YAHPEAUtagWND@@UtagPOINT@@PEBUtagPNTRWINDOWHITTTESTARGS@@PEAHUtagR.c)
 *     xxxTouchTargetWindow @ 0x1C01CC944 (xxxTouchTargetWindow.c)
 * Callees:
 *     PtInRect @ 0x1C00749C4 (PtInRect.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     ?TouchTargetingLayerHitTest@@YAHPEAUtagWND@@UtagPOINT@@HPEBUtagTOUCHTARGETINGCONTACT@@PEAUtagRECT@@PEAGPEAU2@W4tagTARGETING_PROPERTY@@@Z @ 0x1C01C9A9C (-TouchTargetingLayerHitTest@@YAHPEAUtagWND@@UtagPOINT@@HPEBUtagTOUCHTARGETINGCONTACT@@PEAUtagREC.c)
 *     GetWindowFrameRect @ 0x1C01CB7F8 (GetWindowFrameRect.c)
 *     TouchTargetingRankForRect @ 0x1C022D6E8 (TouchTargetingRankForRect.c)
 *     TouchTargetingRankForRegion @ 0x1C022DE6C (TouchTargetingRankForRegion.c)
 */

_BOOL8 __fastcall BasicTargetingHitTest(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned __int16 *a4,
        __int64 a5,
        unsigned int a6,
        _DWORD *a7,
        int a8,
        int a9,
        int a10,
        int a11)
{
  int v12; // r8d
  int v15; // r14d
  int v16; // edx
  int v17; // r12d
  __int64 v18; // r9
  unsigned __int16 v20; // ax
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // r14
  __int64 v24; // rcx
  unsigned __int16 v25; // ax
  unsigned __int16 *v26; // rcx
  __int64 v27; // rdx
  int v28; // [rsp+40h] [rbp-61h]
  __int128 v31; // [rsp+60h] [rbp-41h] BYREF
  __int128 v32; // [rsp+70h] [rbp-31h] BYREF
  __int128 v33; // [rsp+80h] [rbp-21h] BYREF

  v12 = 0;
  if ( *(_DWORD *)(a2 + 176) && (!a7 || PtInRect(a7, a3)) )
    v15 = v12;
  else
    v15 = 1;
  GetWindowFrameRect(a1, &v33);
  *a4 = 0;
  *(_QWORD *)a5 = 0LL;
  if ( a11 )
    return 1LL;
  v16 = a10;
  v17 = 0;
  if ( (_WORD)a10 != 3 )
  {
    v16 = a8;
    v17 = a9;
  }
  v28 = v16;
  if ( v15 )
    goto LABEL_12;
  if ( !PtInRect(&v33, a3) )
  {
    v16 = v28;
LABEL_12:
    if ( v17 && (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 30LL) & 4) == 0 )
      return 0LL;
    v32 = v33;
    v31 = v33;
    v20 = TouchTargetingRankForRect(&v31, &v32, a2, a7, a5, v16);
    *a4 = v20;
    if ( v20 > 0xFFDu )
      return 0LL;
    v18 = 0LL;
  }
  v21 = *(_QWORD *)(*(_QWORD *)(a1 + 40) + 168LL);
  if ( !v21 && (!a6 || *(_QWORD *)(a1 + 152) == v18) )
    goto LABEL_28;
  if ( v15 )
    goto LABEL_36;
  if ( !v21 )
    v21 = *(_QWORD *)(a1 + 152);
  if ( !(unsigned int)GrePtInRegion(
                        v21,
                        (unsigned int)(*(_DWORD *)a5 + a3),
                        (unsigned int)(*(_DWORD *)(a5 + 4) + HIDWORD(a3))) )
  {
LABEL_36:
    if ( v17 && (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 30LL) & 4) == 0 )
      return 0LL;
    v22 = *(_QWORD *)(a1 + 40);
    v23 = a2;
    v24 = *(_QWORD *)(v22 + 168);
    v31 = *(_OWORD *)(v22 + 88);
    v25 = TouchTargetingRankForRegion(v24, (unsigned int)&v31, a2, a5, v28);
    v26 = a4;
    *a4 = v25;
    if ( v25 > 0xFFDu )
      return 0LL;
  }
  else
  {
LABEL_28:
    v23 = a2;
    v26 = a4;
  }
  v27 = *(_QWORD *)(a1 + 40);
  return (*(_BYTE *)(v27 + 26) & 8) == 0
      || a6 && (*(_DWORD *)(v27 + 232) & 0x20) != 0
      || (unsigned int)TouchTargetingLayerHitTest(a1, a3, a6, v23, a7, v26, a5, a8);
}
