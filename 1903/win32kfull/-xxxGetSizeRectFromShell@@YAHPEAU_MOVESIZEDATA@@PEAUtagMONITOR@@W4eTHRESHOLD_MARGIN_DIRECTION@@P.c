/*
 * XREFs of ?xxxGetSizeRectFromShell@@YAHPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTION@@PEAUtagRECT@@@Z @ 0x1C01FDFBC
 * Callers:
 *     ?xxxSizeRectFromHitTarget@@YAXPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTION@@@Z @ 0x1C01FFB10 (-xxxSizeRectFromHitTarget@@YAXPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTION@@.c)
 * Callees:
 *     PtInRect @ 0x1C0026FB4 (PtInRect.c)
 *     IntersectRect @ 0x1C00C7044 (IntersectRect.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     ?IsProperRectForArrangement@@YAHQEBUtagRECT@@0W4eTHRESHOLD_MARGIN_DIRECTION@@@Z @ 0x1C01FAB74 (-IsProperRectForArrangement@@YAHQEBUtagRECT@@0W4eTHRESHOLD_MARGIN_DIRECTION@@@Z.c)
 *     ?TransformShellProvidedRectangles@@YAXPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTION@@PEAUtagRECT@@3PEAUtagWND@@33@Z @ 0x1C01FBA54 (-TransformShellProvidedRectangles@@YAXPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIR.c)
 *     ?xxxArrangementRectangleHandler@CallShell@@YA_NPEAUHWND__@@UtagPOINT@@PEAUtagRECT@@2@Z @ 0x1C023A8D4 (-xxxArrangementRectangleHandler@CallShell@@YA_NPEAUHWND__@@UtagPOINT@@PEAUtagRECT@@2@Z.c)
 */

__int64 __fastcall xxxGetSizeRectFromShell(__int64 a1, __int64 a2, int a3, int *a4)
{
  __int64 v8; // r13
  __int64 v9; // rdx
  __int64 v10; // rcx
  int v11; // eax
  __int128 v12; // xmm0
  __int64 v13; // rsi
  __int64 v14; // rax
  struct tagRECT *v16; // [rsp+20h] [rbp-60h]
  struct tagRECT v17; // [rsp+40h] [rbp-40h] BYREF
  __int64 v18; // [rsp+50h] [rbp-30h] BYREF
  __int64 v19; // [rsp+58h] [rbp-28h]
  struct tagRECT v20; // [rsp+60h] [rbp-20h] BYREF

  *(_QWORD *)&v17.left = 0LL;
  *(_QWORD *)&v17.right = 0LL;
  *(_QWORD *)&v20.left = 0LL;
  *(_QWORD *)&v20.right = 0LL;
  v8 = *(_QWORD *)(gptiCurrent + 448LL);
  v9 = *(_QWORD *)(v8 + 328);
  if ( v9 )
  {
    if ( (*(_DWORD *)(a1 + 340) & 0x18) == 0 )
    {
      v10 = *(_QWORD *)(a1 + 16);
      if ( *(_QWORD *)(v9 + 16) != *(_QWORD *)(v10 + 16) && (unsigned int)(a3 - 1) <= 1 )
      {
        v11 = *(_DWORD *)(a1 + 280);
        if ( (v11 & 8) != 0 )
        {
          v12 = *(_OWORD *)(a1 + 248);
          *(_DWORD *)(a1 + 280) = v11 | 2;
          *(_OWORD *)a4 = v12;
        }
        else if ( CallShell::xxxArrangementRectangleHandler(
                    *(CallShell **)v10,
                    *(HWND *)(a1 + 308),
                    (struct tagPOINT)&v17,
                    &v20,
                    v16)
               && PtInRect(&v20, *(_QWORD *)(a1 + 308)) )
        {
          v13 = *(_QWORD *)(a2 + 40);
          v18 = 0LL;
          v19 = 0LL;
          if ( (unsigned int)IntersectRect(&v18, &v17.left, (int *)(v13 + 44)) )
          {
            v14 = v18 - *(_QWORD *)&v17.left;
            if ( v18 == *(_QWORD *)&v17.left )
              v14 = v19 - *(_QWORD *)&v17.right;
            if ( !v14 && (unsigned int)IsProperRectForArrangement((const struct tagRECT *)(v13 + 44), &v17, a3) )
            {
              TransformShellProvidedRectangles(a1, a2, a3, &v17, (__int64)&v20, *(_QWORD *)(v8 + 328), a4, a1 + 264);
              *(_DWORD *)(a1 + 280) |= 2u;
            }
          }
        }
      }
    }
  }
  return (*(_DWORD *)(a1 + 280) >> 1) & 1;
}
