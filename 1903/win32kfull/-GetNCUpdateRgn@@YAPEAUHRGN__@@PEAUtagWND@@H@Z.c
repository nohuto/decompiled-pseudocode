/*
 * XREFs of ?GetNCUpdateRgn@@YAPEAUHRGN__@@PEAUtagWND@@H@Z @ 0x1C00B03EC
 * Callers:
 *     xxxSimpleDoSyncPaint @ 0x1C00253B4 (xxxSimpleDoSyncPaint.c)
 *     xxxBeginPaint @ 0x1C00986B0 (xxxBeginPaint.c)
 *     xxxInternalDoSyncPaint @ 0x1C00AFE00 (xxxInternalDoSyncPaint.c)
 * Callees:
 *     SetOrClrWF @ 0x1C0044F3C (SetOrClrWF.c)
 *     CalcWindowRgn @ 0x1C00B40E0 (CalcWindowRgn.c)
 *     DecPaintCount @ 0x1C0114AFC (DecPaintCount.c)
 */

unsigned __int64 __fastcall GetNCUpdateRgn(struct tagWND *a1, int a2)
{
  unsigned __int64 EmptyRgnPublic; // rdi
  int v6; // eax

  EmptyRgnPublic = *(_QWORD *)(*((_QWORD *)a1 + 5) + 136LL);
  if ( EmptyRgnPublic <= 1 )
    return EmptyRgnPublic;
  EmptyRgnPublic = CreateEmptyRgnPublic();
  if ( EmptyRgnPublic )
  {
    if ( (unsigned int)GreCombineRgn(EmptyRgnPublic, *(_QWORD *)(*((_QWORD *)a1 + 5) + 136LL), 0LL, 5LL) )
      goto LABEL_5;
    GreDeleteObject(EmptyRgnPublic);
  }
  EmptyRgnPublic = 1LL;
LABEL_5:
  if ( a2 )
  {
    CalcWindowRgn(a1, ghrgnInv2, 1LL);
    v6 = GreCombineRgn(
           *(_QWORD *)(*((_QWORD *)a1 + 5) + 136LL),
           *(_QWORD *)(*((_QWORD *)a1 + 5) + 136LL),
           ghrgnInv2,
           1LL);
    if ( v6 )
    {
      if ( v6 == 1 )
      {
        GreDeleteObject(*(_QWORD *)(*((_QWORD *)a1 + 5) + 136LL));
        *(_QWORD *)(*((_QWORD *)a1 + 5) + 136LL) = 0LL;
        SetOrClrWF(0, (__int64)a1, 0x120u, 1);
        if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 17LL) & 0x10) == 0 )
          DecPaintCount(a1);
      }
    }
    else
    {
      GreDeleteObject(*(_QWORD *)(*((_QWORD *)a1 + 5) + 136LL));
      *(_QWORD *)(*((_QWORD *)a1 + 5) + 136LL) = 1LL;
    }
  }
  return EmptyRgnPublic;
}
