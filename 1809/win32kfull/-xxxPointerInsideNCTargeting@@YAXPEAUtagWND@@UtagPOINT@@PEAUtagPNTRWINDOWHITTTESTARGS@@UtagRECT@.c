/*
 * XREFs of ?xxxPointerInsideNCTargeting@@YAXPEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@UtagRECT@@K@Z @ 0x1C01EE384
 * Callers:
 *     ?xxxTargetingHitTest@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@1PEAUtagPNTRWINDOWHITTTESTARGS@@PEAHUtagRECT@@KW4tagTARGETING_PROPERTY@@@Z @ 0x1C01EE9F4 (-xxxTargetingHitTest@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@1PEAUtagPNTRWINDOWHITTTESTARGS@@PEAHU.c)
 * Callees:
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     ?_TTCheckNCTarget@@YAHUtagRECT@@PEAUtagWND@@PEAUtagPNTRWINDOWHITTTESTARGS@@PEAU1@PEAGPEAUtagPOINT@@3K@Z @ 0x1C01EDEF4 (-_TTCheckNCTarget@@YAHUtagRECT@@PEAUtagWND@@PEAUtagPNTRWINDOWHITTTESTARGS@@PEAU1@PEAGPEAUtagPOIN.c)
 *     ?_TTUpdateBestTarget@@YAXPEAUtagPNTRWINDOWHITTTESTARGS@@PEAUtagWND@@IPEBUtagPOINT@@PEAUtagRECT@@HU4@K@Z @ 0x1C01EDFCC (-_TTUpdateBestTarget@@YAXPEAUtagPNTRWINDOWHITTTESTARGS@@PEAUtagWND@@IPEBUtagPOINT@@PEAUtagRECT@@.c)
 *     ?xxxSendNCHitTest@@YAXPEAUtagWND@@UtagPOINT@@1PEAU2@PEAHPEAUtagPNTRWINDOWHITTTESTARGS@@@Z @ 0x1C01EE7B4 (-xxxSendNCHitTest@@YAXPEAUtagWND@@UtagPOINT@@1PEAU2@PEAHPEAUtagPNTRWINDOWHITTTESTARGS@@@Z.c)
 */

void __fastcall xxxPointerInsideNCTargeting(
        struct tagWND *a1,
        struct tagPOINT a2,
        struct tagPNTRWINDOWHITTTESTARGS *a3,
        struct tagRECT *a4,
        unsigned int a5)
{
  LONG *v7; // rdx
  unsigned int v8; // r14d
  LONG v11; // ecx
  LONG v12; // r15d
  LONG v13; // r12d
  LONG v14; // eax
  __int64 v15; // r9
  int v16; // esi
  int v17; // r10d
  int v18; // edx
  __int64 v19; // r8
  struct tagRECT v20; // xmm7
  int v21; // r14d
  struct tagRECT v22; // xmm6
  __int64 v23; // rcx
  int v24; // ecx
  struct tagPOINT *v25; // rcx
  int v26; // ecx
  _DWORD *v27; // rcx
  int v28; // ecx
  struct tagPOINT *v29; // r8
  int v30; // ebx
  int v31; // eax
  unsigned __int16 v32[4]; // [rsp+48h] [rbp-91h] BYREF
  struct tagPOINT v33; // [rsp+50h] [rbp-89h] BYREF
  struct tagPOINT v34[2]; // [rsp+58h] [rbp-81h]
  struct tagRECT v35; // [rsp+68h] [rbp-71h] BYREF
  struct tagRECT *v36; // [rsp+78h] [rbp-61h]
  struct tagRECT v37; // [rsp+88h] [rbp-51h] BYREF
  __int64 v38; // [rsp+98h] [rbp-41h]
  struct tagRECT v39; // [rsp+A8h] [rbp-31h] BYREF

  v36 = a4;
  v32[0] = 4095;
  v7 = (LONG *)*((_QWORD *)a1 + 5);
  v8 = 120;
  v33 = 0LL;
  *(_OWORD *)&v34[0].x = 0uLL;
  v11 = v7[25];
  v12 = v7[26];
  v13 = v7[28];
  *(_QWORD *)&v39.left = 0LL;
  *(_QWORD *)&v39.right = 0LL;
  v35.left = v7[22];
  *(_DWORD *)&v32[2] = v7[29];
  v35.top = *(_DWORD *)&v32[2];
  v37.top = *(_DWORD *)&v32[2];
  v14 = v7[24];
  v35.bottom = v11;
  v37.bottom = v11;
  v37.right = v14;
  v35.right = v12;
  v37.left = v13;
  if ( (_WORD)a5 == 3 && HIWORD(a5) >= 0x78u )
    v8 = HIWORD(a5);
  v15 = *((_QWORD *)a3 + 5);
  v16 = 0x7FFFFFFF;
  v17 = 0x7FFFFFFF;
  v38 = 1000LL * v8 / *(int *)(v15 + 184);
  if ( (unsigned __int64)(v38 + 0x80000000LL) <= 0xFFFFFFFF )
    v17 = v38;
  v18 = 0x7FFFFFFF;
  v19 = 1000LL * v8 / *(int *)(v15 + 188);
  if ( (unsigned __int64)(v19 + 0x80000000LL) <= 0xFFFFFFFF )
    v18 = 1000LL * v8 / *(int *)(v15 + 188);
  if ( v17 <= v18 )
  {
    if ( (unsigned __int64)(v19 + 0x80000000LL) <= 0xFFFFFFFF )
      v16 = 1000LL * v8 / *(int *)(v15 + 188);
  }
  else if ( (unsigned __int64)(v38 + 0x80000000LL) <= 0xFFFFFFFF )
  {
    v16 = v38;
  }
  v20 = v37;
  v21 = (v8 << 16) + 3;
  _TTCheckNCTarget(&v37, a1, a3, a4, v32, &v33, &v39, v21);
  v22 = v35;
  _TTCheckNCTarget(&v35, a1, a3, v36, v32, &v33, &v39, v21);
  v23 = *((_QWORD *)a1 + 5);
  v34[0].x = *(_DWORD *)(v23 + 112);
  *(struct tagPOINT *)&v34[0].y = *(struct tagPOINT *)(v23 + 92);
  v34[1].y = *(_DWORD *)(v23 + 116) - 1;
  v35 = *(struct tagRECT *)&v34[0].x;
  if ( (unsigned int)_TTCheckNCTarget(&v35, a1, a3, v36, v32, &v33, &v39, v21) )
  {
    v24 = *(_DWORD *)(*((_QWORD *)a3 + 5) + 36LL);
    if ( v24 + v16 >= *(int *)&v32[2] )
    {
      v39 = v20;
      v33.y = v20.top - v24 + 1;
    }
  }
  v25 = (struct tagPOINT *)*((_QWORD *)a1 + 5);
  v34[0] = v25[11];
  v34[1].x = v25[13].x;
  v34[1].y = v25[14].y - 1;
  v35 = *(struct tagRECT *)&v34[0].x;
  if ( (unsigned int)_TTCheckNCTarget(&v35, a1, a3, v36, v32, &v33, &v39, v21) )
  {
    v26 = *(_DWORD *)(*((_QWORD *)a3 + 5) + 36LL);
    if ( v26 + v16 >= *(int *)&v32[2] )
    {
      v39 = v22;
      v33.y = v22.top - v26 + 1;
    }
  }
  v27 = (_DWORD *)*((_QWORD *)a1 + 5);
  v34[0].x = v27[26] + 1;
  v34[0].y = v27[29];
  v34[1].x = v27[28] - 1;
  v34[1].y = v27[25];
  v35 = *(struct tagRECT *)&v34[0].x;
  if ( (unsigned int)_TTCheckNCTarget(&v35, a1, a3, v36, v32, &v33, &v39, v21) )
  {
    v28 = *(_DWORD *)(*((_QWORD *)a3 + 5) + 32LL);
    if ( v28 + v16 < v13 )
    {
      if ( v28 - v16 <= v12 )
      {
        v39 = v22;
        v33.x = v12 - v28 - 1;
      }
    }
    else
    {
      v39 = v20;
      v33.x = v13 - v28 + 1;
    }
  }
  if ( v32[0] < 0xFFDu )
  {
    v29 = (struct tagPOINT *)*((_QWORD *)a3 + 5);
    *(_DWORD *)&v32[2] = 0;
    xxxSendNCHitTest((ULONG_PTR)a1, a2, v29[4], &v33, (int *)&v32[2], a3);
    v30 = *(_DWORD *)&v32[2];
    if ( *(_DWORD *)&v32[2] <= 0x11u )
    {
      v31 = 232656;
      if ( _bittest(&v31, *(unsigned int *)&v32[2]) )
      {
        v35 = *v36;
        _TTUpdateBestTarget(a3, a1, v32[0], &v33, &v39, 0, &v35, v21);
        *((_DWORD *)a3 + 8) = v30;
      }
    }
  }
}
