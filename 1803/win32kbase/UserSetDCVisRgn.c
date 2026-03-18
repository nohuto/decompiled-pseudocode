/*
 * XREFs of UserSetDCVisRgn @ 0x1C00317C0
 * Callers:
 *     <none>
 * Callees:
 *     CreateEmptyRgnPublic @ 0x1C001CD20 (CreateEmptyRgnPublic.c)
 *     GreDeleteObject @ 0x1C001E0C0 (GreDeleteObject.c)
 *     GreSetRectRgn @ 0x1C001E320 (GreSetRectRgn.c)
 *     GreCombineRgn @ 0x1C0023180 (GreCombineRgn.c)
 *     ?ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z @ 0x1C002D8E0 (-ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z.c)
 *     GreOffsetRgn @ 0x1C00347B0 (GreOffsetRgn.c)
 */

void __fastcall UserSetDCVisRgn(struct tagDCE *a1)
{
  _DWORD *v1; // rbx
  HRGN EmptyRgnPublic; // rsi
  int v4; // ebp
  HRGN v5; // rcx
  int v6; // r9d
  HRGN v7; // [rsp+40h] [rbp+8h] BYREF

  v7 = 0LL;
  v1 = (_DWORD *)((char *)a1 + 64);
  if ( (int)IsCalcVisRgnSupported() >= 0
    && (unsigned int)CalcVisRgn(&v7, *((_QWORD *)a1 + 2), *((_QWORD *)a1 + 3), (unsigned int)*v1) )
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
    EmptyRgnPublic = (HRGN)CreateEmptyRgnPublic();
    GreCombineRgn(EmptyRgnPublic, *((HRGN *)a1 + 6), 0LL, 5);
    GreOffsetRgn(EmptyRgnPublic);
    v4 = 1;
  }
  else
  {
    EmptyRgnPublic = (HRGN)*((_QWORD *)a1 + 6);
    v4 = 0;
  }
  if ( (*v1 & 0x80u) != 0 )
  {
    v5 = v7;
    if ( EmptyRgnPublic )
    {
      v6 = 1;
LABEL_13:
      GreCombineRgn(v5, v5, EmptyRgnPublic, v6);
      goto LABEL_8;
    }
  }
  else
  {
    if ( (*v1 & 0x40) == 0 )
      goto LABEL_8;
    v5 = v7;
    if ( EmptyRgnPublic != (HRGN)1 )
    {
      v6 = 4;
      goto LABEL_13;
    }
  }
  GreSetRectRgn(v5, gZero.LowPart, gZero.HighPart, 0, 0);
LABEL_8:
  ResetOrg(v7, a1, 1);
  if ( v4 )
    GreDeleteObject((HBRUSH)EmptyRgnPublic);
}
