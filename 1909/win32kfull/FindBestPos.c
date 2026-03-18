/*
 * XREFs of FindBestPos @ 0x1C024BF34
 * Callers:
 *     xxxMenuWindowProc @ 0x1C0226F00 (xxxMenuWindowProc.c)
 *     NtUserCalculatePopupWindowPosition @ 0x1C0229800 (NtUserCalculatePopupWindowPosition.c)
 *     xxxTrackPopupMenuEx @ 0x1C024C438 (xxxTrackPopupMenuEx.c)
 * Callees:
 *     GetMonitorRect @ 0x1C00145DC (GetMonitorRect.c)
 *     GetMonitorWorkRect @ 0x1C001461C (GetMonitorWorkRect.c)
 *     PtInRect @ 0x1C002D424 (PtInRect.c)
 *     GetMonitorRectForWindow @ 0x1C0036864 (GetMonitorRectForWindow.c)
 *     GetMonitorWorkRectForWindow @ 0x1C0037DD8 (GetMonitorWorkRectForWindow.c)
 *     IntersectRect @ 0x1C0068714 (IntersectRect.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     ?TryRect@@YAHIHHHHPEAUtagRECT@@PEAUtagPOINT@@PEAUtagMONITOR@@@Z @ 0x1C024BE44 (-TryRect@@YAHIHHHHPEAUtagRECT@@PEAUtagPOINT@@PEAUtagMONITOR@@@Z.c)
 *     GetMonitorMenuRect @ 0x1C0259634 (GetMonitorMenuRect.c)
 *     GetMonitorMenuRectForWindow @ 0x1C0259674 (GetMonitorMenuRectForWindow.c)
 */

__int64 __fastcall FindBestPos(
        LONG a1,
        LONG a2,
        int a3,
        int a4,
        struct tagRECT *a5,
        int a6,
        unsigned int ***a7,
        struct tagMONITOR *a8,
        unsigned __int64 a9)
{
  unsigned int **v13; // rax
  __int128 v14; // xmm6
  __int128 *MonitorRectForWindow; // rax
  unsigned int *v16; // rcx
  const struct tagWND *v17; // r14
  __int64 v18; // rdx
  unsigned int *v19; // rcx
  BOOL v20; // edx
  __int64 CurrentProcessWin32Process; // rax
  __int128 *v22; // rax
  __int128 v23; // xmm0
  unsigned int **v24; // rax
  int v25; // ecx
  int v26; // r15d
  int v27; // r14d
  bool v28; // cf
  int v29; // r8d
  int v30; // ecx
  int v31; // r15d
  __int64 v32; // r14
  unsigned int v33; // edx
  unsigned int v34; // edx
  unsigned int v35; // edx
  unsigned int *v36; // rcx
  unsigned int v37; // eax
  __int128 v39; // [rsp+40h] [rbp-C0h] BYREF
  int v40; // [rsp+50h] [rbp-B0h]
  struct tagMONITOR *v41; // [rsp+58h] [rbp-A8h]
  struct tagRECT v42; // [rsp+60h] [rbp-A0h] BYREF
  struct tagPOINT v43; // [rsp+70h] [rbp-90h] BYREF
  __int128 v44; // [rsp+80h] [rbp-80h] BYREF
  char v45[16]; // [rsp+90h] [rbp-70h] BYREF
  __int128 v46; // [rsp+A0h] [rbp-60h] BYREF
  __int128 v47; // [rsp+B0h] [rbp-50h] BYREF
  char v48[16]; // [rsp+C0h] [rbp-40h] BYREF
  __int128 v49; // [rsp+D0h] [rbp-30h] BYREF
  __int128 v50; // [rsp+E0h] [rbp-20h] BYREF
  __int128 v51; // [rsp+F0h] [rbp-10h] BYREF
  __int128 v52; // [rsp+100h] [rbp+0h] BYREF
  unsigned int v53[4]; // [rsp+110h] [rbp+10h]

  v43 = 0LL;
  *(_QWORD *)&v42.left = 0LL;
  *(_QWORD *)&v42.right = 0LL;
  v13 = *a7;
  v41 = a8;
  if ( *v13 )
  {
    v16 = **a7;
    if ( *((_QWORD *)v16 + 7) )
      v17 = (const struct tagWND *)*((_QWORD *)v16 + 7);
    else
      v17 = (const struct tagWND *)*((_QWORD *)v16 + 2);
    v52 = *(_OWORD *)GetMonitorMenuRectForWindow(v48, v41, v17);
    v14 = *GetMonitorWorkRectForWindow(&v49, (__int64)v41, v17);
    v44 = v14;
    MonitorRectForWindow = GetMonitorRectForWindow(&v50, (__int64)v41, v17);
  }
  else
  {
    v52 = *(_OWORD *)GetMonitorMenuRect(v45, a8);
    v14 = *GetMonitorWorkRect(&v46, (__int64)a8);
    v44 = v14;
    MonitorRectForWindow = GetMonitorRect(&v47, (__int64)a8);
  }
  v51 = *MonitorRectForWindow;
  if ( (a6 & 0x10000) != 0 )
    goto LABEL_12;
  if ( PtInRect(&v44, a9) )
  {
    if ( !**a7 || (v19 = **a7, (*v19 & 0x10000000) == 0) )
    {
      v14 = v44;
LABEL_12:
      v39 = v14;
      goto LABEL_13;
    }
  }
  if ( **a7 )
  {
    v20 = ***a7 >> 31;
  }
  else
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v19, v18);
    if ( CurrentProcessWin32Process )
      v20 = (*(_DWORD *)(CurrentProcessWin32Process + 812) & 0x30) == 0;
    else
      v20 = 0;
  }
  v22 = &v51;
  if ( v20 )
    v22 = &v52;
  v23 = *v22;
  v24 = *a7;
  v39 = v23;
  if ( *v24 )
    ***a7 |= 0x10000000u;
LABEL_13:
  if ( a5 )
  {
    v42 = *a5;
    IntersectRect(&v42, &v42.left, (int *)&v39);
  }
  else
  {
    v42.left = a1;
    v42.top = a2;
    v42.right = a1;
    v42.bottom = a2;
  }
  if ( a1 + a3 > SDWORD2(v39) )
  {
    a1 = DWORD2(v39) - a3;
    if ( **a7 )
    {
      if ( (***a7 & 0x1800000) != 0 )
        ***a7 ^= (***a7 ^ 0xFF7FFFFF) & 0x1800000;
    }
  }
  if ( a1 < (int)v39 )
  {
    a1 = v39;
    if ( **a7 )
    {
      if ( (***a7 & 0x1800000) != 0 )
        ***a7 ^= (***a7 ^ 0x800000) & 0x1800000;
    }
  }
  v40 = a6 & 8;
  if ( (a6 & 8) != 0 && a1 + a3 > SDWORD2(v39) )
    a1 = DWORD2(v39) - a3;
  v25 = HIDWORD(v39);
  if ( a4 + a2 > SHIDWORD(v39) )
  {
    if ( (a6 & 0x20010) != 0 || a2 - a4 < SDWORD1(v39) || a2 >= SHIDWORD(v39) )
      a2 = HIDWORD(v39) - a4;
    else
      a2 -= a4;
    if ( **a7 && (***a7 & 0x6000000) != 0 )
      ***a7 ^= (***a7 ^ 0xFDFFFFFF) & 0x6000000;
    v25 = HIDWORD(v39);
  }
  if ( a2 < SDWORD1(v39) )
  {
    a2 = DWORD1(v39);
    if ( **a7 && (***a7 & 0x6000000) != 0 )
      ***a7 ^= (***a7 ^ 0x2000000) & 0x6000000;
    v25 = HIDWORD(v39);
  }
  v26 = a6 & 0x20;
  if ( (a6 & 0x20) != 0 && a4 + a2 > v25 && (a6 & 0x20000) != 0 )
    a2 = v25 - a4;
  if ( !(unsigned int)TryRect(4, a1, a2, a3, a4, &v42, &v43, v41) )
  {
    v27 = a6 & 0x40;
    v28 = v40 != 0;
    v40 = -v40;
    v29 = v28 ? 0 : 2;
    *(unsigned int *)((char *)v53 + (v27 != 0 ? 8 : 0)) = v29;
    *(unsigned int *)((char *)&v53[1] + (v27 != 0 ? 8 : 0)) = 2 - v29;
    *(unsigned int *)((char *)v53 + (v27 == 0 ? 8 : 0)) = v26 != 0 ? 1 : 3;
    v30 = v26 != 0 ? 3 : 1;
    v31 = 0;
    v32 = 0LL;
    *(unsigned int *)((char *)&v53[3] + (-(__int64)((a6 & 0x40) != 0) & 0xFFFFFFFFFFFFFFF8uLL)) = v30;
    while ( !(unsigned int)TryRect(v53[v32], a1, a2, a3, a4, &v42, &v43, v41) )
    {
      ++v31;
      if ( ++v32 >= 4 )
        return (unsigned __int16)a1 | ((unsigned __int16)a2 << 16);
    }
    if ( !**a7 )
      goto LABEL_70;
    v33 = v53[v31];
    if ( v33 )
    {
      v34 = v33 - 1;
      if ( v34 )
      {
        v35 = v34 - 1;
        if ( v35 )
        {
          if ( v35 != 1 )
          {
LABEL_70:
            LOWORD(a1) = v43.x;
            LOWORD(a2) = v43.y;
            return (unsigned __int16)a1 | ((unsigned __int16)a2 << 16);
          }
          v36 = **a7;
          v37 = *v36 & 0xF07FFFFF | 0x2000000;
        }
        else
        {
          v36 = **a7;
          v37 = *v36 & 0xF07FFFFF | 0x800000;
        }
      }
      else
      {
        v36 = **a7;
        v37 = *v36 & 0xF07FFFFF | 0x4000000;
      }
    }
    else
    {
      v36 = **a7;
      v37 = *v36 & 0xF07FFFFF | 0x1000000;
    }
    *v36 = v37;
    goto LABEL_70;
  }
  return (unsigned __int16)a1 | ((unsigned __int16)a2 << 16);
}
