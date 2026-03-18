/*
 * XREFs of ?bSetup@XCLIPOBJ@@IEAAHXZ @ 0x1C014DEEC
 * Callers:
 *     ?bEnumLine@XCLIPOBJ@@QEAAHKPEAU_CLIPLINE@@@Z @ 0x1C014DDA0 (-bEnumLine@XCLIPOBJ@@QEAAHKPEAU_CLIPLINE@@@Z.c)
 * Callees:
 *     ?bIntersectWall@XCLIPOBJ@@IEAAHJPEAU_POINTL@@0PEAJ@Z @ 0x1C014C62C (-bIntersectWall@XCLIPOBJ@@IEAAHJPEAU_POINTL@@0PEAJ@Z.c)
 *     ?bFindFirstScan@XCLIPOBJ@@IEAAHXZ @ 0x1C014C8C8 (-bFindFirstScan@XCLIPOBJ@@IEAAHXZ.c)
 *     ?bRecordRun@XCLIPOBJ@@IEAAHAEAJ@Z @ 0x1C014CB90 (-bRecordRun@XCLIPOBJ@@IEAAHAEAJ@Z.c)
 *     ?bFindNextScan@XCLIPOBJ@@IEAAHXZ @ 0x1C014DBA8 (-bFindNextScan@XCLIPOBJ@@IEAAHXZ.c)
 *     ?bFindNextSegment@XCLIPOBJ@@IEAAHXZ @ 0x1C014DC3C (-bFindNextSegment@XCLIPOBJ@@IEAAHXZ.c)
 *     ?vIntersectScan@XCLIPOBJ@@IEAAXJPEAU_POINTL@@0PEAJ@Z @ 0x1C014DCA4 (-vIntersectScan@XCLIPOBJ@@IEAAXJPEAU_POINTL@@0PEAJ@Z.c)
 *     ?bFindFirstSegment@XCLIPOBJ@@IEAAHXZ @ 0x1C014E680 (-bFindFirstSegment@XCLIPOBJ@@IEAAHXZ.c)
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
  _DWORD *v11; // rcx
  int v12; // r10d
  int v13; // r8d
  int v14; // edx
  int i; // eax
  int NextSegment; // eax
  struct _POINTL v18; // [rsp+40h] [rbp+10h] BYREF
  struct _POINTL v19; // [rsp+48h] [rbp+18h] BYREF

  v1 = (_DWORD *)*((_QWORD *)this + 18);
  if ( (v1[6] & 0x20000) != 0 )
  {
    XCLIPOBJ::bRecordRun(this, v1 + 8);
    NextSegment = XCLIPOBJ::bFindNextSegment(this);
    goto LABEL_23;
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
          v18 = 0LL;
          XCLIPOBJ::vIntersectScan(this, v9, 0LL, &v18, v7 + 40);
          *(struct _POINTL *)(*((_QWORD *)this + 18) + 112LL) = v18;
          v7 = (_DWORD *)*((_QWORD *)this + 18);
          v10 = *((_DWORD *)this + 4);
        }
        if ( v7[31] >= v10 )
        {
          v19 = 0LL;
          XCLIPOBJ::vIntersectScan(this, v10, &v19, 0LL, (int *)&v18);
          *(struct _POINTL *)(*((_QWORD *)this + 18) + 120LL) = v19;
        }
      }
      else
      {
        if ( v7[31] < v9 )
        {
          v19 = 0LL;
          XCLIPOBJ::vIntersectScan(this, v9, &v19, 0LL, (int *)&v18);
          *(struct _POINTL *)(*((_QWORD *)this + 18) + 120LL) = v19;
          v7 = (_DWORD *)*((_QWORD *)this + 18);
          v10 = *((_DWORD *)this + 4);
        }
        if ( v7[29] >= v10 )
        {
          v18 = 0LL;
          XCLIPOBJ::vIntersectScan(this, v10, 0LL, &v18, v7 + 40);
          *(struct _POINTL *)(*((_QWORD *)this + 18) + 112LL) = v18;
        }
      }
      v11 = (_DWORD *)*((_QWORD *)this + 18);
      v12 = *((_DWORD *)this + 1);
      v13 = v11[28];
      if ( v13 >= v12 || v11[30] >= v12 )
      {
        v14 = *((_DWORD *)this + 3);
        if ( v13 < v14 || v11[30] < v14 )
        {
          if ( (v11[6] & 0x400000) != 0 )
          {
            if ( v13 < v12 )
            {
              v18 = 0LL;
              XCLIPOBJ::bIntersectWall(this, v12, 0LL, &v18, v11 + 40);
              *(struct _POINTL *)(*((_QWORD *)this + 18) + 112LL) = v18;
              v11 = (_DWORD *)*((_QWORD *)this + 18);
              v14 = *((_DWORD *)this + 3);
            }
            if ( v11[30] >= v14 )
            {
              v19 = 0LL;
              XCLIPOBJ::bIntersectWall(this, v14, &v19, 0LL, (int *)&v18);
              *(struct _POINTL *)(*((_QWORD *)this + 18) + 120LL) = v19;
            }
          }
          else
          {
            if ( v11[30] < v12 )
            {
              v19 = 0LL;
              XCLIPOBJ::bIntersectWall(this, v12, &v19, 0LL, (int *)&v18);
              *(struct _POINTL *)(*((_QWORD *)this + 18) + 120LL) = v19;
              v11 = (_DWORD *)*((_QWORD *)this + 18);
              v14 = *((_DWORD *)this + 3);
            }
            if ( v11[28] >= v14 )
            {
              v18 = 0LL;
              XCLIPOBJ::bIntersectWall(this, v14, 0LL, &v18, v11 + 40);
              *(struct _POINTL *)(*((_QWORD *)this + 18) + 112LL) = v18;
            }
          }
          *(_DWORD *)(*((_QWORD *)this + 18) + 152LL) = *(_DWORD *)(*((_QWORD *)this + 18) + 112LL);
          *(_DWORD *)(*((_QWORD *)this + 18) + 156LL) = *(_DWORD *)(*((_QWORD *)this + 18) + 116LL);
          *(_DWORD *)(*((_QWORD *)this + 18) + 24LL) |= 0x20000u;
          for ( i = XCLIPOBJ::bFindFirstScan(this); i; i = XCLIPOBJ::bFindNextScan(this) )
          {
            NextSegment = XCLIPOBJ::bFindFirstSegment(this);
LABEL_23:
            if ( NextSegment )
              return 1LL;
          }
        }
      }
    }
  }
  return 0LL;
}
