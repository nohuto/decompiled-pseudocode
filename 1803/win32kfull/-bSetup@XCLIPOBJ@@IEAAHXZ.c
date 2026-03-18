/*
 * XREFs of ?bSetup@XCLIPOBJ@@IEAAHXZ @ 0x1C029E798
 * Callers:
 *     ?bEnumLine@XCLIPOBJ@@QEAAHKPEAU_CLIPLINE@@@Z @ 0x1C029DF68 (-bEnumLine@XCLIPOBJ@@QEAAHKPEAU_CLIPLINE@@@Z.c)
 * Callees:
 *     ?bFindFirstScan@XCLIPOBJ@@IEAAHXZ @ 0x1C029E1F8 (-bFindFirstScan@XCLIPOBJ@@IEAAHXZ.c)
 *     ?bFindFirstSegment@XCLIPOBJ@@IEAAHXZ @ 0x1C029E2E4 (-bFindFirstSegment@XCLIPOBJ@@IEAAHXZ.c)
 *     ?bFindNextScan@XCLIPOBJ@@IEAAHXZ @ 0x1C029E594 (-bFindNextScan@XCLIPOBJ@@IEAAHXZ.c)
 *     ?bFindNextSegment@XCLIPOBJ@@IEAAHXZ @ 0x1C029E628 (-bFindNextSegment@XCLIPOBJ@@IEAAHXZ.c)
 *     ?bIntersectWall@XCLIPOBJ@@IEAAHJPEAU_POINTL@@0PEAJ@Z @ 0x1C029E6AC (-bIntersectWall@XCLIPOBJ@@IEAAHJPEAU_POINTL@@0PEAJ@Z.c)
 *     ?bRecordRun@XCLIPOBJ@@IEAAHAEAJ@Z @ 0x1C029E714 (-bRecordRun@XCLIPOBJ@@IEAAHAEAJ@Z.c)
 *     ?vIntersectScan@XCLIPOBJ@@IEAAXJPEAU_POINTL@@0PEAJ@Z @ 0x1C029EBA8 (-vIntersectScan@XCLIPOBJ@@IEAAXJPEAU_POINTL@@0PEAJ@Z.c)
 */

__int64 __fastcall XCLIPOBJ::bSetup(XCLIPOBJ *this)
{
  _DWORD *v1; // rdx
  int v3; // r9d
  _DWORD *v4; // rdx
  int v5; // ecx
  unsigned int v6; // ecx
  _DWORD *v7; // rcx
  int v8; // r8d
  int v9; // r10d
  int v10; // edx
  _DWORD *v12; // rcx
  int v13; // r10d
  int v14; // r8d
  int v15; // edx
  int i; // eax
  int NextSegment; // eax
  struct _POINTL v18; // [rsp+40h] [rbp+10h] BYREF
  struct _POINTL v19; // [rsp+48h] [rbp+18h] BYREF

  v1 = (_DWORD *)*((_QWORD *)this + 18);
  if ( (v1[6] & 0x20000) != 0 )
  {
    XCLIPOBJ::bRecordRun(this, v1 + 8);
    NextSegment = XCLIPOBJ::bFindNextSegment(this);
    goto LABEL_38;
  }
  v3 = -1;
  v1[40] = -1;
  v4 = (_DWORD *)*((_QWORD *)this + 18);
  v5 = v4[6];
  if ( v4[28] > v4[30] )
  {
    v6 = v5 & 0xFFBFFFFF;
  }
  else
  {
    v3 = 1;
    v6 = v5 | 0x400000;
  }
  v4[6] = v6;
  *((_DWORD *)this + 25) = v3;
  v7 = (_DWORD *)*((_QWORD *)this + 18);
  if ( v7[29] <= v7[31] )
  {
    v7[6] |= 0x800000u;
    v7 = (_DWORD *)*((_QWORD *)this + 18);
  }
  v8 = v7[29];
  v9 = *((_DWORD *)this + 2);
  if ( v8 >= v9 || v7[31] >= v9 )
  {
    v10 = *((_DWORD *)this + 4);
    if ( v8 < v10 || v7[31] < v10 )
    {
      if ( (v7[6] & 0x800000) != 0 )
      {
        if ( v8 < v9 )
        {
          XCLIPOBJ::vIntersectScan(this, v9, 0LL, &v18, v7 + 40);
          *(struct _POINTL *)(*((_QWORD *)this + 18) + 112LL) = v18;
          v7 = (_DWORD *)*((_QWORD *)this + 18);
          v10 = *((_DWORD *)this + 4);
        }
        if ( v7[31] >= v10 )
        {
          XCLIPOBJ::vIntersectScan(this, v10, &v19, 0LL, (int *)&v18);
          *(struct _POINTL *)(*((_QWORD *)this + 18) + 120LL) = v19;
        }
      }
      else
      {
        if ( v7[31] < v9 )
        {
          XCLIPOBJ::vIntersectScan(this, v9, &v19, 0LL, (int *)&v18);
          *(struct _POINTL *)(*((_QWORD *)this + 18) + 120LL) = v19;
          v7 = (_DWORD *)*((_QWORD *)this + 18);
          v10 = *((_DWORD *)this + 4);
        }
        if ( v7[29] >= v10 )
        {
          XCLIPOBJ::vIntersectScan(this, v10, 0LL, &v18, v7 + 40);
          *(struct _POINTL *)(*((_QWORD *)this + 18) + 112LL) = v18;
        }
      }
      v12 = (_DWORD *)*((_QWORD *)this + 18);
      v13 = *((_DWORD *)this + 1);
      v14 = v12[28];
      if ( v14 >= v13 || v12[30] >= v13 )
      {
        v15 = *((_DWORD *)this + 3);
        if ( v14 < v15 || v12[30] < v15 )
        {
          if ( (v12[6] & 0x400000) != 0 )
          {
            if ( v14 < v13 )
            {
              XCLIPOBJ::bIntersectWall(this, v13, 0LL, &v18, v12 + 40);
              *(struct _POINTL *)(*((_QWORD *)this + 18) + 112LL) = v18;
              v12 = (_DWORD *)*((_QWORD *)this + 18);
              v15 = *((_DWORD *)this + 3);
            }
            if ( v12[30] >= v15 )
            {
              XCLIPOBJ::bIntersectWall(this, v15, &v19, 0LL, (int *)&v18);
              *(struct _POINTL *)(*((_QWORD *)this + 18) + 120LL) = v19;
            }
          }
          else
          {
            if ( v12[30] < v13 )
            {
              XCLIPOBJ::bIntersectWall(this, v13, &v19, 0LL, (int *)&v18);
              *(struct _POINTL *)(*((_QWORD *)this + 18) + 120LL) = v19;
              v12 = (_DWORD *)*((_QWORD *)this + 18);
              v15 = *((_DWORD *)this + 3);
            }
            if ( v12[28] >= v15 )
            {
              XCLIPOBJ::bIntersectWall(this, v15, 0LL, &v18, v12 + 40);
              *(struct _POINTL *)(*((_QWORD *)this + 18) + 112LL) = v18;
            }
          }
          *(_DWORD *)(*((_QWORD *)this + 18) + 152LL) = *(_DWORD *)(*((_QWORD *)this + 18) + 112LL);
          *(_DWORD *)(*((_QWORD *)this + 18) + 156LL) = *(_DWORD *)(*((_QWORD *)this + 18) + 116LL);
          *(_DWORD *)(*((_QWORD *)this + 18) + 24LL) |= 0x20000u;
          for ( i = XCLIPOBJ::bFindFirstScan(this); i; i = XCLIPOBJ::bFindNextScan(this) )
          {
            NextSegment = XCLIPOBJ::bFindFirstSegment(this);
LABEL_38:
            if ( NextSegment )
              return 1LL;
          }
        }
      }
    }
  }
  return 0LL;
}
