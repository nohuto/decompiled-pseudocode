/*
 * XREFs of UserSetDCVisRgn @ 0x1C007B360
 * Callers:
 *     <none>
 * Callees:
 *     GreOffsetRgn @ 0x1C0015600 (GreOffsetRgn.c)
 *     GreDeleteObject @ 0x1C0016C60 (GreDeleteObject.c)
 *     ?ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z @ 0x1C001F930 (-ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z.c)
 *     GreCombineRgn @ 0x1C00242A0 (GreCombineRgn.c)
 *     CreateEmptyRgnPublic @ 0x1C002CD20 (CreateEmptyRgnPublic.c)
 *     GreSetRectRgn @ 0x1C0053B00 (GreSetRectRgn.c)
 */

void __fastcall UserSetDCVisRgn(struct tagDCE *a1)
{
  _DWORD *v1; // rbx
  struct HOBJ__ *EmptyRgnPublic; // rsi
  int v4; // ebp
  HRGN v5; // rcx
  int v6; // r9d
  __int64 StyleWindow; // rbp
  HRGN v8; // [rsp+40h] [rbp+8h] BYREF

  v8 = 0LL;
  v1 = (_DWORD *)((char *)a1 + 64);
  if ( (int)IsCalcVisRgnSupported() >= 0
    && (unsigned int)CalcVisRgn(&v8, *((_QWORD *)a1 + 2), *((_QWORD *)a1 + 3), (unsigned int)*v1) )
  {
    *v1 &= ~0x10000000u;
  }
  else
  {
    *v1 |= 0x10000000u;
  }
  if ( *((_QWORD *)a1 + 6) > 2uLL
    && (int)IsGetStyleWindowSupported() >= 0
    && (StyleWindow = GetStyleWindow(*((_QWORD *)a1 + 2), 2848LL)) != 0 )
  {
    EmptyRgnPublic = CreateEmptyRgnPublic();
    GreCombineRgn((HRGN)EmptyRgnPublic, *((HRGN *)a1 + 6), 0LL, 5);
    GreOffsetRgn(
      (HRGN)EmptyRgnPublic,
      *(_DWORD *)(*(_QWORD *)(StyleWindow + 40) + 88LL),
      *(_DWORD *)(*(_QWORD *)(StyleWindow + 40) + 92LL));
    v4 = 1;
  }
  else
  {
    EmptyRgnPublic = (struct HOBJ__ *)*((_QWORD *)a1 + 6);
    v4 = 0;
  }
  if ( (*v1 & 0x80u) != 0 )
  {
    v5 = v8;
    if ( EmptyRgnPublic )
    {
      v6 = 1;
LABEL_13:
      GreCombineRgn(v5, v5, (HRGN)EmptyRgnPublic, v6);
      goto LABEL_8;
    }
  }
  else
  {
    if ( (*v1 & 0x40) == 0 )
      goto LABEL_8;
    v5 = v8;
    if ( EmptyRgnPublic != (struct HOBJ__ *)1 )
    {
      v6 = 4;
      goto LABEL_13;
    }
  }
  GreSetRectRgn(v5, gZero.LowPart, gZero.HighPart, 0, 0);
LABEL_8:
  ResetOrg(v8, a1, 1);
  if ( v4 )
    GreDeleteObject((HPALETTE)EmptyRgnPublic);
}
