/*
 * XREFs of xxxEvaluateDestRectForMonitorMigration @ 0x1C01C6F94
 * Callers:
 *     xxxDeferWindowPosAndCheckPoint @ 0x1C005B1BC (xxxDeferWindowPosAndCheckPoint.c)
 *     ?xxxApplyArrangeAction@@YAHPEAUtagWND@@W4_WARR_STATES@@W4_WARR_ACTIONS@@JPEAU_MOVESIZEDATA@@@Z @ 0x1C01C2254 (-xxxApplyArrangeAction@@YAHPEAUtagWND@@W4_WARR_STATES@@W4_WARR_ACTIONS@@JPEAU_MOVESIZEDATA@@@Z.c)
 * Callees:
 *     GetMonitorWorkRectForWindow @ 0x1C0035A78 (GetMonitorWorkRectForWindow.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     ?IsDockTargetActive@@YAEPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTION@@@Z @ 0x1C01C0EE4 (-IsDockTargetActive@@YAEPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTION@@@Z.c)
 *     ?xxxForceSizeRecToDockTarget@@YAHPEAU_MOVESIZEDATA@@W4eTHRESHOLD_MARGIN_DIRECTION@@PEAUtagMONITOR@@PEAKPEAUtagRECT@@PEAPEAUtagCHECKPOINT@@@Z @ 0x1C01C2FEC (-xxxForceSizeRecToDockTarget@@YAHPEAU_MOVESIZEDATA@@W4eTHRESHOLD_MARGIN_DIRECTION@@PEAUtagMONITO.c)
 *     MigrateRectMonitors @ 0x1C01C57E8 (MigrateRectMonitors.c)
 */

_BOOL8 __fastcall xxxEvaluateDestRectForMonitorMigration(int a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  __int64 v5; // rdi
  BOOL v8; // r10d
  __int64 v9; // r15
  __int64 v10; // r14
  int v11; // ecx
  int v12; // ecx
  int v13; // ecx
  int v15; // edx
  int v16; // eax
  int v17; // edx
  int v18; // edx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r13
  int v22; // r12d
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rdi
  unsigned int v27; // [rsp+40h] [rbp-30h] BYREF
  __int128 v28; // [rsp+48h] [rbp-28h] BYREF
  struct tagRECT v29; // [rsp+58h] [rbp-18h] BYREF

  v5 = a4;
  v27 = 0;
  v8 = 0;
  v9 = 0LL;
  v10 = 0LL;
  v11 = a1 - 1;
  if ( v11 )
  {
    v12 = v11 - 1;
    if ( v12 )
    {
      v13 = v12 - 1;
      if ( v13 )
      {
        if ( v13 == 1 )
          return MigrateRectMonitors(
                   a3,
                   (__m128i *)(*(_QWORD *)(a3 + 40) + 88LL),
                   *(_QWORD *)(a2 + 232),
                   (_DWORD *)(a2 + 40),
                   a4,
                   0LL,
                   (_DWORD *)a2,
                   32);
        return v8;
      }
      if ( a5 )
      {
        v15 = *(_DWORD *)(a2 + 196);
        if ( (v15 & 0x4200) == 0x4200 && (v15 & 0x6000) != 0x6000 && (v15 & 0x300) != 0x300 )
        {
          v16 = MigrateRectMonitors(
                  a3,
                  (__m128i *)(*(_QWORD *)(a3 + 40) + 88LL),
                  *(_QWORD *)(a2 + 232),
                  (_DWORD *)(a2 + 40),
                  a4,
                  0LL,
                  (_DWORD *)a2,
                  3);
LABEL_20:
          v8 = v16;
          *(_DWORD *)(a2 + 196) ^= (*(_DWORD *)(a2 + 196) ^ (v16 << 19)) & 0x80000;
          return v8;
        }
      }
      v17 = 2;
    }
    else
    {
      if ( a5 )
      {
        v18 = *(_DWORD *)(a2 + 196);
        if ( (v18 & 0x2100) == 0x2100 && (v18 & 0x6000) != 0x6000 && (v18 & 0x300) != 0x300 )
        {
          v16 = MigrateRectMonitors(
                  a3,
                  (__m128i *)(*(_QWORD *)(a3 + 40) + 88LL),
                  *(_QWORD *)(a2 + 232),
                  (_DWORD *)(a2 + 40),
                  a4,
                  0LL,
                  (_DWORD *)a2,
                  5);
          goto LABEL_20;
        }
      }
      v17 = 1;
    }
    v16 = xxxForceSizeRecToDockTarget(a2, v17, a4, &v27, &v29, (struct tagCHECKPOINT **)&v28);
    goto LABEL_20;
  }
  if ( IsDockTargetActive(a2, a4, 0) || IsDockTargetActive(v20, v19, 3) )
  {
    v8 = MigrateRectMonitors(
           a3,
           (__m128i *)(*(_QWORD *)(a3 + 40) + 88LL),
           *(_QWORD *)(a2 + 232),
           &v29,
           v5,
           0LL,
           (_DWORD *)a2,
           1);
    if ( v8 )
    {
      v21 = v5;
      v22 = v29.left + (v29.right - v29.left) / 2;
      do
      {
        v29 = (struct tagRECT)*GetMonitorWorkRectForWindow(&v28, v5, (const struct tagWND *)a3);
        if ( IsDockTargetActive(a2, v5, 0) && v29.left <= v22 && v22 <= v29.right )
          v9 = v5;
        if ( IsDockTargetActive(v24, v23, 3) && v29.left <= v22 && v22 <= v29.right )
          v10 = v5;
        v25 = *(_QWORD *)(v5 + 568);
        if ( v25 == gpDispInfo + 144LL )
          v25 = *(_QWORD *)(gpDispInfo + 144LL);
        v5 = v25 - 568;
      }
      while ( v5 != v21 );
      if ( !v10 || !v9 )
        return 0;
      return MigrateRectMonitors(
               a3,
               (__m128i *)(*(_QWORD *)(a3 + 40) + 88LL),
               *(_QWORD *)(a2 + 232),
               (_DWORD *)(a2 + 40),
               v9,
               v10,
               (_DWORD *)a2,
               1);
    }
  }
  return v8;
}
