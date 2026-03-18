/*
 * XREFs of ?vInit@BEZIER64@@QEAAXPEAU_POINTFIX@@PEAU_RECTFX@@PEB_J@Z @ 0x1C0124F70
 * Callers:
 *     ?pprFlattenRec@EPATHOBJ@@IEAAPEAU_PATHRECORD@@PEAU2@@Z @ 0x1C0078750 (-pprFlattenRec@EPATHOBJ@@IEAAPEAU_PATHRECORD@@PEAU2@@Z.c)
 * Callees:
 *     ?vInit@HFDBASIS64@@QEAAXJJJJ@Z @ 0x1C01250EC (-vInit@HFDBASIS64@@QEAAXJJJJ@Z.c)
 */

void __fastcall BEZIER64::vInit(BEZIER64 *this, struct _POINTFIX *a2, struct _RECTFX *a3, const __int64 *a4)
{
  char *v8; // rax
  __int64 v9; // r9
  __int64 v10; // r8
  __int64 v11; // r10
  signed __int64 v12; // rcx
  signed __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // rax

  *((_DWORD *)this + 41) = 0;
  *((_DWORD *)this + 40) = 1;
  HFDBASIS64::vInit((BEZIER64 *)((char *)this + 64), a2->x, a2[1].x, a2[2].x, a2[3].x);
  HFDBASIS64::vInit((BEZIER64 *)((char *)this + 96), a2->y, a2[1].y, a2[2].y, a2[3].y);
  *((_QWORD *)this + 16) = *a4;
  if ( a3 )
  {
    v8 = (char *)this + 144;
    *((struct _RECTFX *)this + 9) = *a3;
  }
  else
  {
    v8 = 0LL;
  }
  *((_QWORD *)this + 17) = v8;
  v9 = *((_QWORD *)this + 14);
  v10 = *((_QWORD *)this + 15);
  while ( 1 )
  {
    v11 = *((_QWORD *)this + 11);
    v12 = -v11;
    v13 = abs64(*((_QWORD *)this + 10));
    if ( v11 >= 0 )
      v12 = *((_QWORD *)this + 11);
    if ( v13 <= v12 )
    {
      v13 = -*((_QWORD *)this + 11);
      if ( v11 >= 0 )
        v13 = *((_QWORD *)this + 11);
    }
    if ( v13 <= geqErrorHigh )
    {
      v14 = -v9;
      v15 = -v10;
      if ( v9 >= 0 )
        v14 = v9;
      if ( v10 >= 0 )
        v15 = v10;
      if ( v14 <= v15 )
      {
        v14 = v10;
        if ( v10 < 0 )
          v14 = -v10;
      }
      if ( v14 <= geqErrorHigh )
        break;
    }
    *((_DWORD *)this + 40) *= 2;
    v16 = *((_QWORD *)this + 11);
    v17 = *((_QWORD *)this + 9);
    v18 = (v16 + *((_QWORD *)this + 10)) >> 3;
    *((_QWORD *)this + 10) = v18;
    *((_QWORD *)this + 9) = (v17 - v18) >> 1;
    *((_QWORD *)this + 11) = v16 >> 2;
    v19 = *((_QWORD *)this + 15);
    v9 = (v19 + *((_QWORD *)this + 14)) >> 3;
    v20 = *((_QWORD *)this + 13) - v9;
    *((_QWORD *)this + 14) = v9;
    v10 = v19 >> 2;
    *((_QWORD *)this + 15) = v10;
    *((_QWORD *)this + 13) = v20 >> 1;
  }
}
