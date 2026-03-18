/*
 * XREFs of ?xxxGetSizeRectFromShell@@YAHPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTION@@PEAUtagRECT@@@Z @ 0x1C01C31E0
 * Callers:
 *     ?xxxSizeRectFromHitTarget@@YAXPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTION@@@Z @ 0x1C01C4C44 (-xxxSizeRectFromHitTarget@@YAXPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTION@@.c)
 * Callees:
 *     IntersectRect @ 0x1C002D204 (IntersectRect.c)
 *     PtInRect @ 0x1C00749C4 (PtInRect.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     xxxCallIAMGetArrangementRectangleHandler @ 0x1C01A5344 (xxxCallIAMGetArrangementRectangleHandler.c)
 *     ?IsProperRectForArrangement@@YAHQEBUtagRECT@@0W4eTHRESHOLD_MARGIN_DIRECTION@@@Z @ 0x1C01C1030 (-IsProperRectForArrangement@@YAHQEBUtagRECT@@0W4eTHRESHOLD_MARGIN_DIRECTION@@@Z.c)
 *     ?TransformShellProvidedRectangles@@YAXPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTION@@PEAUtagRECT@@3PEAUtagWND@@33@Z @ 0x1C01C19D8 (-TransformShellProvidedRectangles@@YAXPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIR.c)
 */

__int64 __fastcall xxxGetSizeRectFromShell(__int64 a1, __int64 a2, int a3, int *a4)
{
  __int64 v8; // r13
  __int64 v9; // rdx
  __int64 *v10; // rcx
  int v11; // eax
  __int128 v12; // xmm0
  __int64 v13; // rsi
  __int64 v14; // rax
  struct tagRECT v16; // [rsp+40h] [rbp-40h] BYREF
  _QWORD v17[2]; // [rsp+50h] [rbp-30h] BYREF
  _QWORD v18[2]; // [rsp+60h] [rbp-20h] BYREF

  v8 = *(_QWORD *)(gptiCurrent + 448LL);
  v9 = *(_QWORD *)(v8 + 328);
  if ( v9 )
  {
    if ( (*(_DWORD *)(a1 + 340) & 0x18) == 0 )
    {
      v10 = *(__int64 **)(a1 + 16);
      if ( *(_QWORD *)(v9 + 16) != v10[2] && (unsigned int)(a3 - 1) <= 1 )
      {
        v11 = *(_DWORD *)(a1 + 280);
        if ( (v11 & 8) != 0 )
        {
          v12 = *(_OWORD *)(a1 + 248);
          *(_DWORD *)(a1 + 280) = v11 | 2;
          *(_OWORD *)a4 = v12;
        }
        else if ( (unsigned int)xxxCallIAMGetArrangementRectangleHandler(*v10, *(_QWORD *)(a1 + 308), &v16, v18) )
        {
          if ( PtInRect(v18, *(_QWORD *)(a1 + 308)) )
          {
            v13 = *(_QWORD *)(a2 + 40);
            if ( (unsigned int)IntersectRect(v17, &v16.left, (int *)(v13 + 44)) )
            {
              v14 = v17[0] - *(_QWORD *)&v16.left;
              if ( v17[0] == *(_QWORD *)&v16.left )
                v14 = v17[1] - *(_QWORD *)&v16.right;
              if ( !v14 && (unsigned int)IsProperRectForArrangement((const struct tagRECT *)(v13 + 44), &v16, a3) )
              {
                TransformShellProvidedRectangles(a1, a2, a3, &v16, (__int64)v18, *(_QWORD *)(v8 + 328), a4, a1 + 264);
                *(_DWORD *)(a1 + 280) |= 2u;
              }
            }
          }
        }
      }
    }
  }
  return (*(_DWORD *)(a1 + 280) >> 1) & 1;
}
