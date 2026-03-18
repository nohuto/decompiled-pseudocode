/*
 * XREFs of UserSetDCVisRgn @ 0x1C0049B60
 * Callers:
 *     <none>
 * Callees:
 *     GreSetRectRgn @ 0x1C000F200 (GreSetRectRgn.c)
 *     CreateEmptyRgnPublic @ 0x1C0016040 (CreateEmptyRgnPublic.c)
 *     GreDeleteObject @ 0x1C0018180 (GreDeleteObject.c)
 *     ?ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z @ 0x1C0020A50 (-ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z.c)
 *     GreCombineRgn @ 0x1C00247C0 (GreCombineRgn.c)
 *     GreOffsetRgn @ 0x1C0049CF0 (GreOffsetRgn.c)
 */

void __fastcall UserSetDCVisRgn(struct tagDCE *a1)
{
  _DWORD *v1; // rbx
  struct HOBJ__ *EmptyRgnPublic; // rsi
  int v4; // ebp
  __int64 v5; // rdx
  HRGN v6; // rcx
  int v7; // r9d
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
    && GetStyleWindow(*((_QWORD *)a1 + 2), 2848LL) )
  {
    EmptyRgnPublic = (struct HOBJ__ *)CreateEmptyRgnPublic();
    GreCombineRgn((HRGN)EmptyRgnPublic, *((HRGN *)a1 + 6), 0LL, 5);
    GreOffsetRgn((HRGN)EmptyRgnPublic);
    v4 = 1;
  }
  else
  {
    EmptyRgnPublic = (struct HOBJ__ *)*((_QWORD *)a1 + 6);
    v4 = 0;
  }
  if ( (*v1 & 0x80u) != 0 )
  {
    v6 = v8;
    if ( EmptyRgnPublic )
    {
      v7 = 1;
LABEL_13:
      GreCombineRgn(v6, v6, (HRGN)EmptyRgnPublic, v7);
      goto LABEL_8;
    }
  }
  else
  {
    if ( (*v1 & 0x40) == 0 )
      goto LABEL_8;
    v6 = v8;
    if ( EmptyRgnPublic != (struct HOBJ__ *)1 )
    {
      v7 = 4;
      goto LABEL_13;
    }
  }
  GreSetRectRgn(v6, gZero.LowPart, gZero.HighPart, 0, 0);
LABEL_8:
  ResetOrg(v8, a1, 1);
  if ( v4 )
    GreDeleteObject(EmptyRgnPublic, v5);
}
