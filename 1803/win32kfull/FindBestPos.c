/*
 * XREFs of FindBestPos @ 0x1C020A72C
 * Callers:
 *     xxxMenuWindowProc @ 0x1C01E96E0 (xxxMenuWindowProc.c)
 *     NtUserCalculatePopupWindowPosition @ 0x1C01EBDB0 (NtUserCalculatePopupWindowPosition.c)
 *     xxxTrackPopupMenuEx @ 0x1C020ABF4 (xxxTrackPopupMenuEx.c)
 * Callees:
 *     IntersectRect @ 0x1C002D204 (IntersectRect.c)
 *     GetMonitorWorkRectForWindow @ 0x1C0035A78 (GetMonitorWorkRectForWindow.c)
 *     GetMonitorRect @ 0x1C0066BB4 (GetMonitorRect.c)
 *     GetMonitorWorkRect @ 0x1C0066BF8 (GetMonitorWorkRect.c)
 *     GetMonitorRectForWindow @ 0x1C0073764 (GetMonitorRectForWindow.c)
 *     PtInRect @ 0x1C00749C4 (PtInRect.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     ?TryRect@@YAHIHHHHPEAUtagRECT@@PEAUtagPOINT@@PEAUtagMONITOR@@@Z @ 0x1C020A640 (-TryRect@@YAHIHHHHPEAUtagRECT@@PEAUtagPOINT@@PEAUtagMONITOR@@@Z.c)
 *     GetMonitorMenuRect @ 0x1C022B034 (GetMonitorMenuRect.c)
 *     GetMonitorMenuRectForWindow @ 0x1C022B078 (GetMonitorMenuRectForWindow.c)
 */

__int64 __fastcall FindBestPos(
        LONG a1,
        LONG a2,
        int a3,
        int a4,
        struct tagRECT *a5,
        unsigned int a6,
        unsigned int ***a7,
        struct tagMONITOR *a8,
        unsigned __int64 a9)
{
  __int128 v13; // xmm6
  __int128 *MonitorRectForWindow; // rax
  unsigned int *v15; // rcx
  const struct tagWND *v16; // r14
  unsigned int *v17; // rcx
  BOOL v18; // edx
  __int64 CurrentProcessWin32Process; // rax
  __int128 *v20; // rax
  __int128 v21; // xmm0
  unsigned int **v22; // rax
  int v23; // ecx
  __int64 v24; // r14
  bool v25; // cf
  int v26; // eax
  int v27; // r12d
  int v28; // edx
  __int64 v29; // rax
  __int64 v30; // r14
  unsigned int v31; // edx
  unsigned int v32; // edx
  unsigned int v33; // edx
  unsigned int *v34; // rcx
  unsigned int v35; // eax
  __int128 v37; // [rsp+40h] [rbp-C0h] BYREF
  int v38; // [rsp+50h] [rbp-B0h]
  struct tagMONITOR *v39; // [rsp+58h] [rbp-A8h]
  struct tagRECT v40; // [rsp+60h] [rbp-A0h] BYREF
  struct tagPOINT v41; // [rsp+70h] [rbp-90h] BYREF
  __int128 v42; // [rsp+80h] [rbp-80h] BYREF
  char v43[16]; // [rsp+90h] [rbp-70h] BYREF
  __int128 v44; // [rsp+A0h] [rbp-60h] BYREF
  __int128 v45; // [rsp+B0h] [rbp-50h] BYREF
  char v46[16]; // [rsp+C0h] [rbp-40h] BYREF
  __int128 v47; // [rsp+D0h] [rbp-30h] BYREF
  __int128 v48; // [rsp+E0h] [rbp-20h] BYREF
  __int128 v49; // [rsp+F0h] [rbp-10h] BYREF
  __int128 v50; // [rsp+100h] [rbp+0h] BYREF
  unsigned int v51[4]; // [rsp+110h] [rbp+10h]

  v39 = a8;
  if ( **a7 )
  {
    v15 = **a7;
    if ( *((_QWORD *)v15 + 7) )
      v16 = (const struct tagWND *)*((_QWORD *)v15 + 7);
    else
      v16 = (const struct tagWND *)*((_QWORD *)v15 + 2);
    v50 = *(_OWORD *)GetMonitorMenuRectForWindow(v46, v39, v16);
    v13 = *GetMonitorWorkRectForWindow(&v47, (__int64)v39, v16);
    v42 = v13;
    MonitorRectForWindow = GetMonitorRectForWindow(&v48, (__int64)v39, v16);
  }
  else
  {
    v50 = *(_OWORD *)GetMonitorMenuRect(v43, a8);
    v13 = *GetMonitorWorkRect(&v44, (__int64)a8);
    v42 = v13;
    MonitorRectForWindow = GetMonitorRect(&v45, (__int64)a8);
  }
  v49 = *MonitorRectForWindow;
  if ( (a6 & 0x10000) != 0 )
    goto LABEL_12;
  if ( PtInRect(&v42, a9) )
  {
    if ( !**a7 || (v17 = **a7, (*v17 & 0x10000000) == 0) )
    {
      v13 = v42;
LABEL_12:
      v37 = v13;
      goto LABEL_13;
    }
  }
  if ( **a7 )
  {
    v18 = ***a7 >> 31;
  }
  else
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v17);
    if ( CurrentProcessWin32Process )
      v18 = (*(_DWORD *)(CurrentProcessWin32Process + 812) & 0x30) == 0;
    else
      v18 = 0;
  }
  v20 = &v49;
  if ( v18 )
    v20 = &v50;
  v21 = *v20;
  v22 = *a7;
  v37 = v21;
  if ( *v22 )
    ***a7 |= 0x10000000u;
LABEL_13:
  if ( a5 )
  {
    v40 = *a5;
    IntersectRect(&v40, &v40.left, (int *)&v37);
  }
  else
  {
    v40.left = a1;
    v40.top = a2;
    v40.right = a1;
    v40.bottom = a2;
  }
  if ( a1 + a3 > SDWORD2(v37) )
  {
    a1 = DWORD2(v37) - a3;
    if ( **a7 )
    {
      if ( (***a7 & 0x1800000) != 0 )
        ***a7 ^= (***a7 ^ 0xFF7FFFFF) & 0x1800000;
    }
  }
  if ( a1 < (int)v37 )
  {
    a1 = v37;
    if ( **a7 )
    {
      if ( (***a7 & 0x1800000) != 0 )
        ***a7 ^= (***a7 ^ 0x800000) & 0x1800000;
    }
  }
  v38 = a6 & 8;
  if ( (a6 & 8) != 0 && a1 + a3 > SDWORD2(v37) )
    a1 = DWORD2(v37) - a3;
  v23 = HIDWORD(v37);
  if ( a4 + a2 > SHIDWORD(v37) )
  {
    if ( (a6 & 0x20010) != 0 || a2 - a4 < SDWORD1(v37) || a2 >= SHIDWORD(v37) )
      a2 = HIDWORD(v37) - a4;
    else
      a2 -= a4;
    if ( **a7 && (***a7 & 0x6000000) != 0 )
      ***a7 ^= (***a7 ^ 0xFDFFFFFF) & 0x6000000;
    v23 = HIDWORD(v37);
  }
  if ( a2 < SDWORD1(v37) )
  {
    a2 = DWORD1(v37);
    if ( **a7 && (***a7 & 0x6000000) != 0 )
      ***a7 ^= (***a7 ^ 0x2000000) & 0x6000000;
    v23 = HIDWORD(v37);
  }
  if ( (a6 & 0x20) != 0 && a4 + a2 > v23 && (a6 & 0x20000) != 0 )
    a2 = v23 - a4;
  if ( !(unsigned int)TryRect(4, a1, a2, a3, a4, &v40, &v41, v39) )
  {
    v24 = (a6 >> 5) & 2;
    v25 = v38 != 0;
    v38 = -v38;
    v26 = v25 ? 0 : 2;
    v51[v24] = v26;
    v51[(unsigned int)(v24 + 1)] = 2 - v26;
    v27 = 0;
    v28 = (a6 & 0x20) == 0 ? 2 : 0;
    v51[2 - (int)v24] = v28 + 1;
    v29 = 3 - (int)v24;
    v30 = 0LL;
    v51[v29] = 3 - v28;
    while ( !(unsigned int)TryRect(v51[v30], a1, a2, a3, a4, &v40, &v41, v39) )
    {
      ++v27;
      if ( ++v30 >= 4 )
        return (unsigned __int16)a1 | ((unsigned __int16)a2 << 16);
    }
    if ( !**a7 )
      goto LABEL_70;
    v31 = v51[v27];
    if ( v31 )
    {
      v32 = v31 - 1;
      if ( v32 )
      {
        v33 = v32 - 1;
        if ( v33 )
        {
          if ( v33 != 1 )
          {
LABEL_70:
            LOWORD(a1) = v41.x;
            LOWORD(a2) = v41.y;
            return (unsigned __int16)a1 | ((unsigned __int16)a2 << 16);
          }
          v34 = **a7;
          v35 = *v34 & 0xF07FFFFF | 0x2000000;
        }
        else
        {
          v34 = **a7;
          v35 = *v34 & 0xF07FFFFF | 0x800000;
        }
      }
      else
      {
        v34 = **a7;
        v35 = *v34 & 0xF07FFFFF | 0x4000000;
      }
    }
    else
    {
      v34 = **a7;
      v35 = *v34 & 0xF07FFFFF | 0x1000000;
    }
    *v34 = v35;
    goto LABEL_70;
  }
  return (unsigned __int16)a1 | ((unsigned __int16)a2 << 16);
}
