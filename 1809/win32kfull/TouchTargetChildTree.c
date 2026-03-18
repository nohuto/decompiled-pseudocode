/*
 * XREFs of TouchTargetChildTree @ 0x1C01EFC18
 * Callers:
 *     xxxDCompSpeedHitTest @ 0x1C006E8C8 (xxxDCompSpeedHitTest.c)
 *     xxxPointerSpeedHitTest @ 0x1C01F0534 (xxxPointerSpeedHitTest.c)
 * Callees:
 *     ?ClassicChildTreeSpeedHitTest@@YAPEAUtagWND@@PEAU1@UtagPOINT@@@Z @ 0x1C00084FC (-ClassicChildTreeSpeedHitTest@@YAPEAUtagWND@@PEAU1@UtagPOINT@@@Z.c)
 *     HMValidateHandleNoSecure @ 0x1C003730C (HMValidateHandleNoSecure.c)
 *     PtInRect @ 0x1C006EFD8 (PtInRect.c)
 *     ?TraceLoggingHitTestWindowTargeting@@YAXHHHHHHH@Z @ 0x1C01B9A5C (-TraceLoggingHitTestWindowTargeting@@YAXHHHHHHH@Z.c)
 *     ?DoesPointSnapToTopLevelWindow@@YAHPEAUtagWND@@0PEAUtagTOUCHTARGETINGCONTACT@@UtagPOINT@@@Z @ 0x1C01ED54C (-DoesPointSnapToTopLevelWindow@@YAHPEAUtagWND@@0PEAUtagTOUCHTARGETINGCONTACT@@UtagPOINT@@@Z.c)
 *     ?xxxClassicChildTreeSpeedHitTestWithDComp@@YAPEAUtagWND@@PEAU1@KW4DIT_HITTESTATTRIBUTES@@_KUtagPOINT@@3PEAHPEAIPEAUtagINPUTDEST@@@Z @ 0x1C01EE124 (-xxxClassicChildTreeSpeedHitTestWithDComp@@YAPEAUtagWND@@PEAU1@KW4DIT_HITTESTATTRIBUTES@@_KUtagP.c)
 */

struct tagWND *__fastcall TouchTargetChildTree(
        struct tagWND *a1,
        struct tagPOINT *a2,
        struct tagPOINT a3,
        _DWORD *a4,
        int a5,
        int a6,
        unsigned __int64 a7,
        _DWORD *a8,
        int *a9,
        struct tagINPUTDEST *a10)
{
  struct tagWND *v12; // rdi
  struct tagWND *v13; // r13
  _DWORD *v14; // rax
  LONG x; // ebx
  LONG y; // r15d
  unsigned __int64 v17; // r8
  int v18; // r14d
  int v19; // r9d
  int v20; // r10d
  int v21; // ecx
  char v22; // r11
  int v23; // eax
  __int64 v24; // rcx
  int v25; // eax
  int v26; // r10d
  int v27; // ecx
  char v28; // r10
  int v29; // ecx
  int v30; // r9d
  char v31; // al
  int v32; // r10d
  int v33; // r8d
  int v34; // r9d
  __int64 v35; // rdx
  int v36; // eax
  int v37; // eax
  int v38; // ecx
  int v39; // ecx
  LONG v40; // r15d
  bool v41; // zf
  struct tagPOINT v42; // rbx
  _DWORD *v43; // r15
  int v44; // eax
  int *v45; // r14
  int v46; // eax
  unsigned __int64 v47; // r13
  struct tagWND *v48; // rax
  __int64 v49; // rdx
  struct tagWND *v50; // r12
  __int64 v51; // rax
  char v53; // [rsp+50h] [rbp-20h]
  char v54[4]; // [rsp+50h] [rbp-20h]
  int v55; // [rsp+54h] [rbp-1Ch]
  __int64 v56; // [rsp+58h] [rbp-18h]
  __int64 v57; // [rsp+58h] [rbp-18h]
  __int64 v58; // [rsp+60h] [rbp-10h]
  __int64 v59; // [rsp+60h] [rbp-10h]
  int v61; // [rsp+B0h] [rbp+40h] BYREF
  struct tagPOINT v62; // [rsp+C0h] [rbp+50h]

  v62 = a3;
  v12 = a1;
  v13 = a1;
  if ( !a1 )
    return v13;
  v14 = (_DWORD *)*((_QWORD *)a1 + 5);
  x = v62.x;
  y = v62.y;
  v17 = HIDWORD(*(unsigned __int64 *)&a3);
  v18 = v14[29] - v17;
  v19 = v62.x - v14[26];
  v20 = v17 - v14[27];
  v21 = v14[28] - v62.x;
  if ( v21 < 0 || v19 < 0 || v20 < 0 || v18 < 0 )
  {
    v32 = v14[25] - v62.y;
    v59 = a2[23].x;
    v22 = -1;
    v33 = v62.x - v14[22];
    v34 = v62.y - v14[23];
    v35 = v59 * (v14[24] - v62.x) / 1000;
    v36 = 0x7FFFFFFF;
    if ( (unsigned __int64)(v35 + 0x80000000LL) <= 0xFFFFFFFF )
      v36 = v35;
    v61 = v36;
    v37 = 0x7FFFFFFF;
    if ( (unsigned __int64)(v59 * v33 / 1000 + 0x80000000LL) <= 0xFFFFFFFF )
      v37 = v59 * v33 / 1000;
    a5 = v37;
    v57 = a2[23].y;
    v38 = 0x7FFFFFFF;
    if ( (unsigned __int64)(v57 * v34 / 1000 + 0x80000000LL) <= 0xFFFFFFFF )
      v38 = v57 * v34 / 1000;
    *(_DWORD *)v54 = v38;
    v39 = 0x7FFFFFFF;
    if ( (unsigned __int64)(v57 * v32 / 1000 + 0x80000000LL) <= 0xFFFFFFFF )
      v39 = v57 * v32 / 1000;
    if ( v61 < 500 || a5 < 500 || *(int *)v54 < 500 || v39 < 500 )
    {
      v28 = -1;
      if ( (unsigned __int64)(v57 * (a2[3].y - a2[2].y) / 1000 + 0x80000000LL) <= 0xFFFFFFFF )
        v28 = v57 * (a2[3].y - a2[2].y) / 1000;
      v31 = v39;
      v30 = *(_DWORD *)v54;
      if ( (unsigned __int64)(v59 * (a2[3].x - a2[2].x) / 1000 + 0x80000000LL) <= 0xFFFFFFFF )
        v22 = v59 * (a2[3].x - a2[2].x) / 1000;
      v29 = 0;
      goto LABEL_40;
    }
  }
  else
  {
    v58 = a2[23].x;
    v22 = -1;
    v23 = 0x7FFFFFFF;
    if ( (unsigned __int64)(v58 * v21 / 1000 + 0x80000000LL) <= 0xFFFFFFFF )
      v23 = v58 * v21 / 1000;
    v61 = v23;
    v24 = v20;
    v25 = 0x7FFFFFFF;
    v26 = 0x7FFFFFFF;
    if ( (unsigned __int64)(v58 * v19 / 1000 + 0x80000000LL) <= 0xFFFFFFFF )
      v25 = v58 * v19 / 1000;
    a5 = v25;
    v56 = a2[23].y;
    if ( (unsigned __int64)(v56 * v24 / 1000 + 0x80000000LL) <= 0xFFFFFFFF )
      v26 = v56 * v24 / 1000;
    v55 = v26;
    v27 = 0x7FFFFFFF;
    if ( (unsigned __int64)(v56 * v18 / 1000 + 0x80000000LL) <= 0xFFFFFFFF )
      v27 = v56 * v18 / 1000;
    v53 = v27;
    if ( v61 < 500 || a5 < 500 || v26 < 500 || v27 < 500 )
    {
      v28 = -1;
      if ( (unsigned __int64)(v56 * (a2[3].y - a2[2].y) / 1000 + 0x80000000LL) <= 0xFFFFFFFF )
        v28 = v56 * (a2[3].y - a2[2].y) / 1000;
      v29 = 1;
      v30 = v55;
      v31 = v53;
      if ( (unsigned __int64)(v58 * (a2[3].x - a2[2].x) / 1000 + 0x80000000LL) <= 0xFFFFFFFF )
        v22 = v58 * (a2[3].x - a2[2].x) / 1000;
LABEL_40:
      TraceLoggingHitTestWindowTargeting(v29, v61, a5, v30, v31, v22, v28);
    }
  }
  v40 = a4[1] + y;
  v41 = *((_QWORD *)v12 + 11) == 0LL;
  v62.x = *a4 + x;
  v62.y = v40;
  if ( !v41 )
  {
    v42 = v62;
    if ( PtInRect((_DWORD *)(*((_QWORD *)v12 + 5) + 104LL), *(_QWORD *)&v62) )
    {
      v43 = a8;
      if ( a8 )
        v44 = *a8;
      else
        v44 = 0;
      v45 = a9;
      a5 = v44;
      if ( a9 )
        v46 = *a9;
      else
        v46 = 0;
      v61 = v46;
      if ( a6 )
      {
        v47 = *(_QWORD *)v12;
        v48 = xxxClassicChildTreeSpeedHitTestWithDComp(
                (__int64)v12,
                2u,
                0,
                a7,
                v42,
                a2[4],
                &a5,
                (unsigned int *)&v61,
                a10);
        LOBYTE(v49) = 1;
        v50 = v48;
        v51 = HMValidateHandleNoSecure(v47, v49);
        v12 = (struct tagWND *)v51;
        if ( !v51 || *(char *)(*(_QWORD *)(v51 + 40) + 19LL) < 0 )
        {
          EtwTraceDITSpeedHitTestFailedRevalidation(v47);
          return 0LL;
        }
        v13 = a1;
      }
      else
      {
        v50 = ClassicChildTreeSpeedHitTest(v12, v42);
      }
      if ( v50 && !(unsigned int)DoesPointSnapToTopLevelWindow(v12, v50, (struct tagTOUCHTARGETINGCONTACT *)a2, v42) )
      {
        v13 = v50;
        if ( v43 )
          *v43 = a5;
        if ( v45 )
          *v45 = v61;
      }
    }
  }
  return v13;
}
