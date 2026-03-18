/*
 * XREFs of ?vEnumPathStart@XCLIPOBJ@@QEAAXPEAU_PATHOBJ@@PEAVSURFACE@@PEAU_LINEATTRS@@@Z @ 0x1C028B874
 * Callers:
 *     ?bStrokeCosmetic@@YAHPEAVSURFACE@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_LINEATTRS@@K@Z @ 0x1C012833C (-bStrokeCosmetic@@YAHPEAVSURFACE@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_LINEATTRS@@K@Z.c)
 *     PATHOBJ_vEnumStartClipLines @ 0x1C028BA90 (PATHOBJ_vEnumStartClipLines.c)
 * Callees:
 *     ?bGetLine@XCLIPOBJ@@IEAAHPEAVEPATHOBJ@@PEAK@Z @ 0x1C028B608 (-bGetLine@XCLIPOBJ@@IEAAHPEAVEPATHOBJ@@PEAK@Z.c)
 */

void __fastcall XCLIPOBJ::vEnumPathStart(
        XCLIPOBJ *this,
        struct _PATHOBJ *a2,
        struct SURFACE *a3,
        struct _LINEATTRS *a4)
{
  FLOAT_LONG *p_elStyleState; // r8
  _DWORD *v8; // rax
  __int64 v9; // rdx
  PFLOAT_LONG pstyle; // rcx
  union _FLOAT_LONG *v11; // rdx
  LONG l; // edx
  LONG v13; // eax
  __int64 v14; // rax

  p_elStyleState = &a4->elStyleState;
  *((_QWORD *)this + 18) = *(_QWORD *)&a2[1] + 96LL;
  a2->fl &= ~8u;
  *(_QWORD *)(*(_QWORD *)&a2[1] + 72LL) = *(_QWORD *)(*(_QWORD *)&a2[1] + 32LL);
  a2[9] = (struct _PATHOBJ)this;
  *(_DWORD *)(*((_QWORD *)this + 18) + 24LL) = 0x10000;
  **((_DWORD **)this + 18) = 0;
  *(_DWORD *)(*((_QWORD *)this + 18) + 180LL) = 0;
  *(_QWORD *)(*((_QWORD *)this + 18) + 184LL) = &a4->elStyleState;
  *(_DWORD *)(*((_QWORD *)this + 18) + 192LL) = 1;
  *(_DWORD *)(*((_QWORD *)this + 18) + 196LL) = 1;
  *(_DWORD *)(*((_QWORD *)this + 18) + 200LL) = 1;
  if ( (a4->fl & 2) != 0 )
  {
    *(_DWORD *)(*((_QWORD *)this + 18) + 180LL) = 2;
    *(_DWORD *)(*((_QWORD *)this + 18) + 176LL) = HIWORD(p_elStyleState->l) & 1;
  }
  else if ( a4->pstyle )
  {
    v8 = (_DWORD *)*((_QWORD *)a3 + 6);
    v9 = *((_QWORD *)this + 18);
    if ( v8 )
    {
      *(_DWORD *)(v9 + 192) = v8[551];
      *(_DWORD *)(*((_QWORD *)this + 18) + 196LL) = v8[552];
      *(_DWORD *)(*((_QWORD *)this + 18) + 200LL) = v8[553];
    }
    else
    {
      *(_DWORD *)(v9 + 200) = 3;
    }
    pstyle = a4->pstyle;
    v11 = &pstyle[a4->cstyle];
    if ( v11 > pstyle )
    {
      do
      {
        --v11;
        *(_DWORD *)(*((_QWORD *)this + 18) + 180LL) += v11->l;
      }
      while ( v11 > a4->pstyle );
    }
    *(_DWORD *)(*((_QWORD *)this + 18) + 180LL) *= 2;
    *(_DWORD *)(*((_QWORD *)this + 18) + 180LL) *= *(_DWORD *)(*((_QWORD *)this + 18) + 200LL);
    l = p_elStyleState->l;
    v13 = p_elStyleState->l;
    p_elStyleState = (FLOAT_LONG *)*((_QWORD *)this + 18);
    p_elStyleState[44].l = (unsigned __int16)l + p_elStyleState[50].l * HIWORD(v13);
    *(_DWORD *)(*((_QWORD *)this + 18) + 176LL) %= *(_DWORD *)(*((_QWORD *)this + 18) + 180LL);
    v14 = *((_QWORD *)this + 18);
    if ( *(int *)(v14 + 176) < 0 )
      *(_DWORD *)(v14 + 176) = 0;
  }
  XCLIPOBJ::bGetLine(this, (struct EPATHOBJ *)a2, (unsigned int *)p_elStyleState);
}
