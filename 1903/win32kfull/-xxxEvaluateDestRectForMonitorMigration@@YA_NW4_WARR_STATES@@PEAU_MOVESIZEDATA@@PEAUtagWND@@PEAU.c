/*
 * XREFs of ?xxxEvaluateDestRectForMonitorMigration@@YA_NW4_WARR_STATES@@PEAU_MOVESIZEDATA@@PEAUtagWND@@PEAUtagMONITOR@@H@Z @ 0x1C01FDA70
 * Callers:
 *     xxxDeferWindowPosAndCheckPoint @ 0x1C0116898 (xxxDeferWindowPosAndCheckPoint.c)
 *     ?xxxApplyArrangeAction@@YAHPEAUtagWND@@W4_WARR_STATES@@W4_WARR_ACTIONS@@JPEAU_MOVESIZEDATA@@@Z @ 0x1C01FC310 (-xxxApplyArrangeAction@@YAHPEAUtagWND@@W4_WARR_STATES@@W4_WARR_ACTIONS@@JPEAU_MOVESIZEDATA@@@Z.c)
 * Callees:
 *     GetMonitorWorkRectForWindow @ 0x1C00970A8 (GetMonitorWorkRectForWindow.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     ?IsDockTargetActive@@YAEPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTION@@@Z @ 0x1C01FAA24 (-IsDockTargetActive@@YAEPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTION@@@Z.c)
 *     ?MigrateRectMonitors@@YA_NPEAUtagWND@@PEAUtagRECT@@PEAUtagMONITOR@@122PEAU_MOVESIZEDATA@@K@Z @ 0x1C01FACA4 (-MigrateRectMonitors@@YA_NPEAUtagWND@@PEAUtagRECT@@PEAUtagMONITOR@@122PEAU_MOVESIZEDATA@@K@Z.c)
 *     ?xxxForceSizeRecToDockTarget@@YAHPEAU_MOVESIZEDATA@@W4eTHRESHOLD_MARGIN_DIRECTION@@PEAUtagMONITOR@@PEAKPEAUtagRECT@@PEAPEAUtagCHECKPOINT@@@Z @ 0x1C01FDDC8 (-xxxForceSizeRecToDockTarget@@YAHPEAU_MOVESIZEDATA@@W4eTHRESHOLD_MARGIN_DIRECTION@@PEAUtagMONITO.c)
 */

bool __fastcall xxxEvaluateDestRectForMonitorMigration(int a1, __int64 a2, __int64 a3, struct tagMONITOR *a4, int a5)
{
  __int64 v5; // rdi
  int v8; // r10d
  struct tagMONITOR *v9; // r12
  struct tagMONITOR *v10; // r14
  int v11; // ecx
  int v12; // ecx
  int v13; // ecx
  bool v14; // al
  int v15; // edx
  int v16; // edx
  __int64 v17; // rdx
  __int64 v18; // rcx
  bool v19; // al
  __int64 v20; // r13
  int v21; // r15d
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rdi
  int v26; // [rsp+40h] [rbp-30h] BYREF
  __int128 v27; // [rsp+48h] [rbp-28h] BYREF
  struct tagRECT v28; // [rsp+58h] [rbp-18h] BYREF

  v26 = 0;
  v5 = (__int64)a4;
  *(_QWORD *)&v28.left = 0LL;
  *(_QWORD *)&v28.right = 0LL;
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
        {
          v14 = MigrateRectMonitors(
                  (struct tagWND *)a3,
                  (__m128i *)(*(_QWORD *)(a3 + 40) + 88LL),
                  *(struct tagMONITOR **)(a2 + 232),
                  (struct tagRECT *)(a2 + 40),
                  a4,
                  0LL,
                  (struct _MOVESIZEDATA *)a2,
                  32);
LABEL_38:
          v8 = v14;
        }
      }
      else
      {
        if ( !a5
          || (v15 = *(_DWORD *)(a2 + 196), (v15 & 0x4200) != 0x4200)
          || (v15 & 0x6000) == 0x6000
          || (v15 & 0x300) == 0x300 )
        {
          v8 = xxxForceSizeRecToDockTarget(a2, 2LL, a4, &v26, &v28, &v27);
        }
        else
        {
          v8 = MigrateRectMonitors(
                 (struct tagWND *)a3,
                 (__m128i *)(*(_QWORD *)(a3 + 40) + 88LL),
                 *(struct tagMONITOR **)(a2 + 232),
                 (struct tagRECT *)(a2 + 40),
                 a4,
                 0LL,
                 (struct _MOVESIZEDATA *)a2,
                 3);
        }
        *(_DWORD *)(a2 + 196) ^= (*(_DWORD *)(a2 + 196) ^ (v8 << 19)) & 0x80000;
      }
    }
    else
    {
      if ( !a5
        || (v16 = *(_DWORD *)(a2 + 196), (v16 & 0x2100) != 0x2100)
        || (v16 & 0x6000) == 0x6000
        || (v16 & 0x300) == 0x300 )
      {
        v8 = xxxForceSizeRecToDockTarget(a2, 1LL, a4, &v26, &v28, &v27);
      }
      else
      {
        v8 = MigrateRectMonitors(
               (struct tagWND *)a3,
               (__m128i *)(*(_QWORD *)(a3 + 40) + 88LL),
               *(struct tagMONITOR **)(a2 + 232),
               (struct tagRECT *)(a2 + 40),
               a4,
               0LL,
               (struct _MOVESIZEDATA *)a2,
               5);
      }
      *(_DWORD *)(a2 + 196) ^= (*(_DWORD *)(a2 + 196) ^ (v8 << 19)) & 0x80000;
    }
  }
  else if ( IsDockTargetActive(a2, (__int64)a4, 0) || IsDockTargetActive(v18, v17, 3) )
  {
    v19 = MigrateRectMonitors(
            (struct tagWND *)a3,
            (__m128i *)(*(_QWORD *)(a3 + 40) + 88LL),
            *(struct tagMONITOR **)(a2 + 232),
            &v28,
            (struct tagMONITOR *)v5,
            0LL,
            (struct _MOVESIZEDATA *)a2,
            1);
    v8 = v19;
    if ( v19 )
    {
      v20 = v5;
      v21 = v28.left + (v28.right - v28.left) / 2;
      do
      {
        v28 = (struct tagRECT)*GetMonitorWorkRectForWindow(&v27, v5, (const struct tagWND *)a3);
        if ( IsDockTargetActive(a2, v5, 0) && v28.left <= v21 && v21 <= v28.right )
          v9 = (struct tagMONITOR *)v5;
        if ( IsDockTargetActive(v23, v22, 3) && v28.left <= v21 && v21 <= v28.right )
          v10 = (struct tagMONITOR *)v5;
        v24 = *(_QWORD *)(v5 + 280);
        if ( v24 == gpDispInfo + 144LL )
          v24 = *(_QWORD *)(gpDispInfo + 144LL);
        v5 = v24 - 280;
      }
      while ( v5 != v20 );
      if ( !v10 || !v9 )
      {
        v8 = 0;
        return v8 != 0;
      }
      v14 = MigrateRectMonitors(
              (struct tagWND *)a3,
              (__m128i *)(*(_QWORD *)(a3 + 40) + 88LL),
              *(struct tagMONITOR **)(a2 + 232),
              (struct tagRECT *)(a2 + 40),
              v9,
              v10,
              (struct _MOVESIZEDATA *)a2,
              1);
      goto LABEL_38;
    }
  }
  return v8 != 0;
}
