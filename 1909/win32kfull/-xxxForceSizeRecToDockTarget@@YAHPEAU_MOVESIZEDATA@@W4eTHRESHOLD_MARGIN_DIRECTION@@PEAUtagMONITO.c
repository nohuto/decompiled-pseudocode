/*
 * XREFs of ?xxxForceSizeRecToDockTarget@@YAHPEAU_MOVESIZEDATA@@W4eTHRESHOLD_MARGIN_DIRECTION@@PEAUtagMONITOR@@PEAKPEAUtagRECT@@PEAPEAUtagCHECKPOINT@@@Z @ 0x1C01FDB18
 * Callers:
 *     ?xxxEvaluateDestRectForMonitorMigration@@YA_NW4_WARR_STATES@@PEAU_MOVESIZEDATA@@PEAUtagWND@@PEAUtagMONITOR@@H@Z @ 0x1C01FD7C0 (-xxxEvaluateDestRectForMonitorMigration@@YA_NW4_WARR_STATES@@PEAU_MOVESIZEDATA@@PEAUtagWND@@PEAU.c)
 *     ?xxxProgrammaticSemiMaximize@@YAHPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTION@@@Z @ 0x1C01FEB54 (-xxxProgrammaticSemiMaximize@@YAHPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTIO.c)
 * Callees:
 *     GetMonitorWorkRectForWindow @ 0x1C0037DD8 (GetMonitorWorkRectForWindow.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     ?xxxSizeOrMoveRect@@YAHPEAU_MOVESIZEDATA@@KPEAKPEAUtagRECT@@PEAPEAUtagCHECKPOINT@@@Z @ 0x1C01FEEBC (-xxxSizeOrMoveRect@@YAHPEAU_MOVESIZEDATA@@KPEAKPEAUtagRECT@@PEAPEAUtagCHECKPOINT@@@Z.c)
 */

__int64 __fastcall xxxForceSizeRecToDockTarget(
        __int64 a1,
        int a2,
        __int64 a3,
        unsigned int *a4,
        struct tagRECT *a5,
        struct tagCHECKPOINT **a6)
{
  __int64 v8; // rdi
  int v10; // r9d
  int v11; // r10d
  __int64 v12; // rax
  char *v13; // rcx
  __int64 v14; // rdi
  __int64 v15; // rsi
  char *v16; // rdi
  __int64 v17; // r8
  char *v18; // rdx
  char v19; // al
  char *v20; // rax
  __int64 v21; // rdx
  __int64 result; // rax
  char *v23; // rdx
  char v24; // cl
  __int128 v25; // [rsp+30h] [rbp-58h] BYREF
  char v26; // [rsp+40h] [rbp-48h] BYREF

  v8 = a2;
  v25 = *GetMonitorWorkRectForWindow(&v25, a3, *(const struct tagWND **)(a1 + 16));
  if ( (_DWORD)v8 == 2 )
  {
    LOWORD(v10) = WORD4(v25) - 1;
    LOWORD(v11) = WORD2(v25) + (HIDWORD(v25) - DWORD1(v25)) / 2;
  }
  else if ( (_DWORD)v8 == 1 )
  {
    LOWORD(v10) = v25;
    v11 = DWORD1(v25) + (HIDWORD(v25) - DWORD1(v25)) / 2;
  }
  else
  {
    if ( (_DWORD)v8 )
      return 0LL;
    v10 = v25 + (DWORD2(v25) - (int)v25) / 2;
    LOWORD(v11) = WORD2(v25);
  }
  v12 = v8;
  v13 = &v26;
  v14 = a3 + 248;
  v15 = 7LL;
  v16 = (char *)(v12 + v14);
  v17 = 7LL;
  v18 = v16;
  do
  {
    v19 = *v18;
    v18 += 4;
    *v13++ = v19;
    --v17;
  }
  while ( v17 );
  v20 = v16;
  v21 = 7LL;
  do
  {
    *v20 = 1;
    v20 += 4;
    --v21;
  }
  while ( v21 );
  result = xxxSizeOrMoveRect(
             (struct _MOVESIZEDATA *)a1,
             (unsigned __int16)(*(_WORD *)(a1 + 168) + v10) | ((unsigned __int16)(*(_WORD *)(a1 + 172) + v11) << 16),
             a4,
             a5,
             a6);
  v23 = &v26;
  do
  {
    v24 = *v23++;
    *v16 = v24;
    v16 += 4;
    --v15;
  }
  while ( v15 );
  return result;
}
