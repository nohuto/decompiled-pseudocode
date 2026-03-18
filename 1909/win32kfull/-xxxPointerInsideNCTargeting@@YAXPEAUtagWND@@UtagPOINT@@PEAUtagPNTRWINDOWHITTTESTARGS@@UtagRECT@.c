/*
 * XREFs of ?xxxPointerInsideNCTargeting@@YAXPEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@UtagRECT@@K@Z @ 0x1C0204490
 * Callers:
 *     ?xxxTargetingHitTest@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@1PEAUtagPNTRWINDOWHITTTESTARGS@@PEAHUtagRECT@@KW4tagTARGETING_PROPERTY@@@Z @ 0x1C0204AE0 (-xxxTargetingHitTest@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@1PEAUtagPNTRWINDOWHITTTESTARGS@@PEAHU.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     ?_TTCheckNCTarget@@YAHUtagRECT@@PEAUtagWND@@PEAUtagPNTRWINDOWHITTTESTARGS@@PEAU1@PEAGPEAUtagPOINT@@3K@Z @ 0x1C0204260 (-_TTCheckNCTarget@@YAHUtagRECT@@PEAUtagWND@@PEAUtagPNTRWINDOWHITTTESTARGS@@PEAU1@PEAGPEAUtagPOIN.c)
 *     ?_TTUpdateBestTarget@@YAXPEAUtagPNTRWINDOWHITTTESTARGS@@PEAUtagWND@@IPEBUtagPOINT@@PEAUtagRECT@@HU4@K@Z @ 0x1C0204340 (-_TTUpdateBestTarget@@YAXPEAUtagPNTRWINDOWHITTTESTARGS@@PEAUtagWND@@IPEBUtagPOINT@@PEAUtagRECT@@.c)
 *     ?xxxSendNCHitTest@@YAXPEAUtagWND@@UtagPOINT@@1PEAU2@PEAHPEAUtagPNTRWINDOWHITTTESTARGS@@@Z @ 0x1C020489C (-xxxSendNCHitTest@@YAXPEAUtagWND@@UtagPOINT@@1PEAU2@PEAHPEAUtagPNTRWINDOWHITTTESTARGS@@@Z.c)
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
  int left; // r10d
  int v18; // edx
  __int64 v19; // r8
  struct tagRECT v20; // xmm7
  int v21; // r14d
  struct tagRECT v22; // xmm6
  __int64 v23; // rcx
  int v24; // ecx
  __int64 v25; // rcx
  int v26; // ecx
  _DWORD *v27; // rcx
  int v28; // ecx
  struct tagPOINT *v29; // r8
  int v30; // ebx
  int v31; // eax
  unsigned __int16 v32[2]; // [rsp+48h] [rbp-81h] BYREF
  int v33; // [rsp+4Ch] [rbp-7Dh] BYREF
  struct tagPOINT v34; // [rsp+50h] [rbp-79h] BYREF
  struct tagRECT v35; // [rsp+58h] [rbp-71h]
  struct tagRECT v36; // [rsp+68h] [rbp-61h] BYREF
  struct tagRECT *v37; // [rsp+78h] [rbp-51h]
  struct tagRECT v38; // [rsp+88h] [rbp-41h] BYREF
  struct tagRECT v39; // [rsp+98h] [rbp-31h] BYREF

  v34 = 0LL;
  v32[0] = 4095;
  v37 = a4;
  *(_QWORD *)&v39.left = 0LL;
  v7 = (LONG *)*((_QWORD *)a1 + 5);
  v8 = 120;
  *(_QWORD *)&v39.right = 0LL;
  v11 = v7[25];
  v12 = v7[26];
  v13 = v7[28];
  v36.left = v7[22];
  v33 = v7[29];
  v36.top = v33;
  v38.top = v33;
  v14 = v7[24];
  v36.bottom = v11;
  v38.bottom = v11;
  v38.right = v14;
  v36.right = v12;
  v38.left = v13;
  if ( (_WORD)a5 == 3 && HIWORD(a5) >= 0x78u )
    v8 = HIWORD(a5);
  v15 = *((_QWORD *)a3 + 5);
  v16 = 0x7FFFFFFF;
  left = 0x7FFFFFFF;
  *(_QWORD *)&v35.left = 1000LL * v8 / *(int *)(v15 + 184);
  if ( (unsigned __int64)(*(_QWORD *)&v35.left + 0x80000000LL) <= 0xFFFFFFFF )
    left = v35.left;
  v18 = 0x7FFFFFFF;
  v19 = 1000LL * v8 / *(int *)(v15 + 188);
  if ( (unsigned __int64)(v19 + 0x80000000LL) <= 0xFFFFFFFF )
    v18 = 1000LL * v8 / *(int *)(v15 + 188);
  if ( left <= v18 )
  {
    if ( (unsigned __int64)(v19 + 0x80000000LL) <= 0xFFFFFFFF )
      v16 = 1000LL * v8 / *(int *)(v15 + 188);
  }
  else if ( (unsigned __int64)(*(_QWORD *)&v35.left + 0x80000000LL) <= 0xFFFFFFFF )
  {
    v16 = v35.left;
  }
  v20 = v38;
  v21 = (v8 << 16) + 3;
  _TTCheckNCTarget(&v38, a1, a3, a4, v32, &v34, &v39, v21);
  v22 = v36;
  _TTCheckNCTarget(&v36, a1, a3, v37, v32, &v34, &v39, v21);
  v23 = *((_QWORD *)a1 + 5);
  v35.left = *(_DWORD *)(v23 + 112);
  *(_QWORD *)&v35.top = *(_QWORD *)(v23 + 92);
  v35.bottom = *(_DWORD *)(v23 + 116) - 1;
  v36 = v35;
  if ( (unsigned int)_TTCheckNCTarget(&v36, a1, a3, v37, v32, &v34, &v39, v21) )
  {
    v24 = *(_DWORD *)(*((_QWORD *)a3 + 5) + 36LL);
    if ( v24 + v16 >= v33 )
    {
      v39 = v20;
      v34.y = v20.top - v24 + 1;
    }
  }
  v25 = *((_QWORD *)a1 + 5);
  *(_QWORD *)&v35.left = *(_QWORD *)(v25 + 88);
  v35.right = *(_DWORD *)(v25 + 104);
  v35.bottom = *(_DWORD *)(v25 + 116) - 1;
  v36 = v35;
  if ( (unsigned int)_TTCheckNCTarget(&v36, a1, a3, v37, v32, &v34, &v39, v21) )
  {
    v26 = *(_DWORD *)(*((_QWORD *)a3 + 5) + 36LL);
    if ( v26 + v16 >= v33 )
    {
      v39 = v22;
      v34.y = v22.top - v26 + 1;
    }
  }
  v27 = (_DWORD *)*((_QWORD *)a1 + 5);
  v35.left = v27[26] + 1;
  v35.top = v27[29];
  v35.right = v27[28] - 1;
  v35.bottom = v27[25];
  v36 = v35;
  if ( (unsigned int)_TTCheckNCTarget(&v36, a1, a3, v37, v32, &v34, &v39, v21) )
  {
    v28 = *(_DWORD *)(*((_QWORD *)a3 + 5) + 32LL);
    if ( v28 + v16 < v13 )
    {
      if ( v28 - v16 <= v12 )
      {
        v39 = v22;
        v34.x = v12 - v28 - 1;
      }
    }
    else
    {
      v39 = v20;
      v34.x = v13 - v28 + 1;
    }
  }
  if ( v32[0] < 0xFFDu )
  {
    v29 = (struct tagPOINT *)*((_QWORD *)a3 + 5);
    v33 = 0;
    xxxSendNCHitTest((ULONG_PTR)a1, a2, v29[4], &v34, &v33, a3);
    v30 = v33;
    if ( (unsigned int)v33 <= 0x11 )
    {
      v31 = 232656;
      if ( _bittest(&v31, v33) )
      {
        v36 = *v37;
        _TTUpdateBestTarget(a3, a1, v32[0], &v34, &v39, 0, &v36, v21);
        *((_DWORD *)a3 + 8) = v30;
      }
    }
  }
}
