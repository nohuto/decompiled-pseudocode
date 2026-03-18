/*
 * XREFs of TouchTargetChildTree @ 0x1C0206038
 * Callers:
 *     xxxDCompSpeedHitTest @ 0x1C0026864 (xxxDCompSpeedHitTest.c)
 *     xxxPointerSpeedHitTest @ 0x1C02068C4 (xxxPointerSpeedHitTest.c)
 * Callees:
 *     PtInRect @ 0x1C0026FB4 (PtInRect.c)
 *     ?TraceLoggingHitTestWindowTargeting@@YAXHHHHHHH@Z @ 0x1C01CDB84 (-TraceLoggingHitTestWindowTargeting@@YAXHHHHHHH@Z.c)
 *     ?ClassicChildTreeSpeedHitTest@@YAPEAUtagWND@@PEAU1@UtagPOINT@@@Z @ 0x1C02039A0 (-ClassicChildTreeSpeedHitTest@@YAPEAUtagWND@@PEAU1@UtagPOINT@@@Z.c)
 *     ?DoesPointSnapToTopLevelWindow@@YAHPEAUtagWND@@0PEAUtagTOUCHTARGETINGCONTACT@@UtagPOINT@@@Z @ 0x1C0203C28 (-DoesPointSnapToTopLevelWindow@@YAHPEAUtagWND@@0PEAUtagTOUCHTARGETINGCONTACT@@UtagPOINT@@@Z.c)
 */

struct tagWND *__fastcall TouchTargetChildTree(
        struct tagWND *a1,
        struct tagTOUCHTARGETINGCONTACT *a2,
        unsigned __int64 a3,
        _DWORD *a4)
{
  struct tagWND *v6; // rdi
  _DWORD *v7; // rax
  unsigned __int64 v8; // r8
  int v9; // ebp
  int v10; // r9d
  int v11; // r10d
  int v12; // ecx
  char v13; // r11
  __int64 v14; // rdx
  int v15; // ecx
  __int64 v16; // rdx
  __int64 v17; // rcx
  int v18; // r9d
  __int64 v19; // rdx
  __int64 v20; // rcx
  int v21; // r10d
  __int64 v22; // rdx
  __int64 v23; // rdx
  __int64 v24; // rcx
  int v25; // ebp
  __int64 v26; // rdx
  char v27; // r10
  char v28; // r11
  int v29; // ecx
  int v30; // r8d
  int v31; // r9d
  int v32; // ecx
  char v33; // r10
  struct tagWND *v34; // rax
  struct tagWND *v35; // rbp
  __int64 v37; // [rsp+48h] [rbp-50h]
  __int64 v38; // [rsp+50h] [rbp-48h]
  __int64 v39; // [rsp+50h] [rbp-48h]
  int v40; // [rsp+A0h] [rbp+8h]
  unsigned __int64 v41; // [rsp+B0h] [rbp+18h]
  int v44; // [rsp+C0h] [rbp+28h]
  int v45; // [rsp+C0h] [rbp+28h]

  v41 = a3;
  v6 = a1;
  if ( a1 )
  {
    v7 = (_DWORD *)*((_QWORD *)a1 + 5);
    v8 = HIDWORD(a3);
    v9 = v7[29] - v8;
    v10 = v41 - v7[26];
    v11 = v8 - v7[27];
    v12 = v7[28] - v41;
    if ( v12 < 0 || v10 < 0 || v11 < 0 || v9 < 0 )
    {
      v39 = *((int *)a2 + 46);
      v28 = -1;
      v29 = 0x7FFFFFFF;
      if ( (unsigned __int64)(v39 * (v7[24] - (int)v41) / 1000 + 0x80000000LL) <= 0xFFFFFFFF )
        v29 = v39 * (v7[24] - (int)v41) / 1000;
      v45 = v29;
      v30 = 0x7FFFFFFF;
      v31 = 0x7FFFFFFF;
      if ( (unsigned __int64)(v39 * ((int)v41 - v7[22]) / 1000 + 0x80000000LL) <= 0xFFFFFFFF )
        v30 = v39 * ((int)v41 - v7[22]) / 1000;
      if ( (unsigned __int64)(*((int *)a2 + 47) * (__int64)(HIDWORD(v41) - v7[23]) / 1000 + 0x80000000LL) <= 0xFFFFFFFF )
        v31 = *((int *)a2 + 47) * (__int64)(HIDWORD(v41) - v7[23]) / 1000;
      v32 = 0x7FFFFFFF;
      if ( (unsigned __int64)(*((int *)a2 + 47) * (__int64)(v7[25] - HIDWORD(v41)) / 1000 + 0x80000000LL) <= 0xFFFFFFFF )
        v32 = *((int *)a2 + 47) * (__int64)(v7[25] - HIDWORD(v41)) / 1000;
      if ( v45 < 500 || v30 < 500 || v31 < 500 || v32 < 500 )
      {
        v33 = -1;
        if ( (unsigned __int64)(*((int *)a2 + 47) * (__int64)(*((_DWORD *)a2 + 7) - *((_DWORD *)a2 + 5)) / 1000
                              + 0x80000000LL) <= 0xFFFFFFFF )
          v33 = *((int *)a2 + 47) * (__int64)(*((_DWORD *)a2 + 7) - *((_DWORD *)a2 + 5)) / 1000;
        if ( (unsigned __int64)(v39 * (*((_DWORD *)a2 + 6) - *((_DWORD *)a2 + 4)) / 1000 + 0x80000000LL) <= 0xFFFFFFFF )
          v28 = v39 * (*((_DWORD *)a2 + 6) - *((_DWORD *)a2 + 4)) / 1000;
        TraceLoggingHitTestWindowTargeting(0, v45, v30, v31, v32, v28, v33);
      }
    }
    else
    {
      v38 = *((int *)a2 + 46);
      v13 = -1;
      v14 = (unsigned __int128)(v38 * v12 * (__int128)0x20C49BA5E353F7CFLL) >> 64;
      v15 = 0x7FFFFFFF;
      v16 = ((unsigned __int64)v14 >> 63) + (v14 >> 7);
      if ( (unsigned __int64)(v16 + 0x80000000LL) <= 0xFFFFFFFF )
        v15 = v16;
      v44 = v15;
      v17 = v10;
      v18 = 0x7FFFFFFF;
      v19 = (unsigned __int128)(v38 * v17 * (__int128)0x20C49BA5E353F7CFLL) >> 64;
      v20 = v11;
      v21 = 0x7FFFFFFF;
      v22 = ((unsigned __int64)v19 >> 63) + (v19 >> 7);
      v37 = *((int *)a2 + 47);
      if ( (unsigned __int64)(v22 + 0x80000000LL) <= 0xFFFFFFFF )
        v18 = v22;
      v23 = (unsigned __int128)(*((int *)a2 + 47) * v20 * (__int128)0x20C49BA5E353F7CFLL) >> 64;
      v24 = v9;
      v25 = 0x7FFFFFFF;
      v26 = ((unsigned __int64)v23 >> 63) + (v23 >> 7);
      if ( (unsigned __int64)(v26 + 0x80000000LL) <= 0xFFFFFFFF )
        v21 = v26;
      v40 = v21;
      if ( (unsigned __int64)(v37 * v24 / 1000 + 0x80000000LL) <= 0xFFFFFFFF )
        v25 = v37 * v24 / 1000;
      if ( v44 < 500 || v18 < 500 || v21 < 500 || v25 < 500 )
      {
        v27 = -1;
        if ( (unsigned __int64)(v37 * (*((_DWORD *)a2 + 7) - *((_DWORD *)a2 + 5)) / 1000 + 0x80000000LL) <= 0xFFFFFFFF )
          v27 = v37 * (*((_DWORD *)a2 + 7) - *((_DWORD *)a2 + 5)) / 1000;
        if ( (unsigned __int64)(v38 * (*((_DWORD *)a2 + 6) - *((_DWORD *)a2 + 4)) / 1000 + 0x80000000LL) <= 0xFFFFFFFF )
          v13 = v38 * (*((_DWORD *)a2 + 6) - *((_DWORD *)a2 + 4)) / 1000;
        TraceLoggingHitTestWindowTargeting(1, v44, v18, v40, v25, v13, v27);
      }
    }
    LODWORD(v41) = *a4 + v41;
    HIDWORD(v41) += a4[1];
    if ( *((_QWORD *)v6 + 14) )
    {
      if ( PtInRect((_DWORD *)(*((_QWORD *)v6 + 5) + 104LL), v41) )
      {
        v34 = ClassicChildTreeSpeedHitTest(v6, (struct tagPOINT)v41);
        v35 = v34;
        if ( v34 )
        {
          if ( !(unsigned int)DoesPointSnapToTopLevelWindow(v6, v34, a2, (struct tagPOINT)v41) )
            return v35;
        }
      }
    }
  }
  return v6;
}
