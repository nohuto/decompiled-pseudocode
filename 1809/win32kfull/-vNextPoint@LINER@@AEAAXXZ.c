/*
 * XREFs of ?vNextPoint@LINER@@AEAAXXZ @ 0x1C0144BD0
 * Callers:
 *     ?vNextEvent@LINER@@QEAAXXZ @ 0x1C0144AF4 (-vNextEvent@LINER@@QEAAXXZ.c)
 * Callees:
 *     ?vInit@BEZIER@@QEAAXPEAU_POINTFIX@@PEAU_RECTFX@@PEB_J@Z @ 0x1C01447CC (-vInit@BEZIER@@QEAAXPEAU_POINTFIX@@PEAU_RECTFX@@PEB_J@Z.c)
 *     ?bNextPoint@READER@@IEAAHAEAU_POINTFIX@@@Z @ 0x1C0144F30 (-bNextPoint@READER@@IEAAHAEAU_POINTFIX@@@Z.c)
 *     ?bNextFigure@READER@@IEAAHXZ @ 0x1C0144F84 (-bNextFigure@READER@@IEAAHXZ.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 */

void __fastcall LINER::vNextPoint(LINER *this)
{
  __int64 v2; // rdx
  int v3; // eax
  int v4; // esi
  int v5; // eax
  __int64 *v6; // rbx
  int Point; // eax
  int v8; // ecx
  __int64 v9; // rdx
  int v10; // ecx
  BEZIER32 *v11; // rcx
  int *v12; // rbx
  struct _POINTFIX *v13; // rdx
  int v14; // eax
  __int64 v15; // rdx
  int v16; // ecx
  struct _RECTFX *v17; // r8
  struct _POINTFIX *v18; // rdx
  BEZIER32 *v19; // rcx
  int v20; // eax
  __int64 v21; // rdx
  int v22; // ecx
  __int64 v23; // rax
  int v24; // ecx
  __int64 v25; // xmm1_8
  int v26; // ecx
  struct _POINTFIX v27; // [rsp+20h] [rbp-30h] BYREF
  __int64 v28; // [rsp+28h] [rbp-28h]
  struct _POINTFIX v29; // [rsp+30h] [rbp-20h] BYREF
  struct _POINTFIX v30; // [rsp+38h] [rbp-18h] BYREF

  v2 = 328LL;
  v3 = *((_DWORD *)this + 126);
  if ( *((LINER **)this + 88) == (LINER *)((char *)this + 328) )
    v2 = 416LL;
  *((_QWORD *)this + 89) = (char *)this + v2;
  if ( v3 < 0 )
    goto LABEL_13;
  v4 = 1;
  if ( v3 > 1 )
  {
    switch ( v3 )
    {
      case 2:
        *((_DWORD *)this + 172) = (*((_DWORD *)this + 2) & 8) != 0 ? 2 : 8;
        *((_QWORD *)this + 89) = (char *)this + 240;
        if ( (unsigned int)READER::bNextFigure(this) )
        {
          READER::bNextPoint(this, (struct _POINTFIX *)this + 28);
          *((_QWORD *)this + 29) = *((_QWORD *)this + 28);
        }
        else
        {
          v4 = 4;
        }
        *((_DWORD *)this + 126) = v4;
        return;
      case 3:
        v11 = (LINER *)((char *)this + 48);
        *((_DWORD *)this + 172) = 4;
        v12 = (int *)((char *)this + 224);
        v13 = (struct _POINTFIX *)((char *)this + 224);
        if ( *((_DWORD *)this + 54) )
          v14 = BEZIER32::bNext(v11, v13);
        else
          v14 = BEZIER64::bNext(v11, v13);
        if ( !v14 )
        {
          *((_DWORD *)this + 126) = 0;
          v15 = *((_QWORD *)this + 89);
          *(_DWORD *)v15 = 0;
          v16 = *v12;
          *(_DWORD *)(v15 + 40) = *v12;
          *(_DWORD *)(v15 + 44) = *((_DWORD *)this + 57);
          *(_DWORD *)(v15 + 40) = v16 - *((_DWORD *)this + 173);
          *(_DWORD *)(v15 + 44) -= *((_DWORD *)this + 174);
          *(_QWORD *)(v15 + 48) = *(_QWORD *)(v15 + 40);
          *(_QWORD *)(*((_QWORD *)this + 89) + 48LL) = *((_QWORD *)this + 70);
          return;
        }
        break;
      case 4:
        *((_DWORD *)this + 172) = 9;
        return;
    }
LABEL_13:
    v9 = *((_QWORD *)this + 89);
    *(_DWORD *)v9 = 0;
    v10 = *((_DWORD *)this + 56);
    *(_DWORD *)(v9 + 40) = v10;
    *(_DWORD *)(v9 + 44) = *((_DWORD *)this + 57);
    *(_DWORD *)(v9 + 40) = v10 - *((_DWORD *)this + 173);
    *(_DWORD *)(v9 + 44) -= *((_DWORD *)this + 174);
    *(_QWORD *)(v9 + 48) = *(_QWORD *)(v9 + 40);
    return;
  }
  if ( v3 )
  {
    *((_DWORD *)this + 126) = 0;
    v5 = 0;
  }
  else
  {
    v5 = 3;
  }
  v6 = (__int64 *)((char *)this + 224);
  *((_DWORD *)this + 172) = v5;
  Point = READER::bNextPoint(this, (struct _POINTFIX *)this + 28);
  v8 = *((_DWORD *)this + 2);
  if ( !Point )
  {
    *v6 = *((_QWORD *)this + 29);
    *((_DWORD *)this + 126) = 2;
    if ( (v8 & 8) == 0 )
    {
      *((_DWORD *)this + 172) = 1;
      return;
    }
    *((_DWORD *)this + 172) = 3;
    goto LABEL_13;
  }
  if ( (v8 & 0x10) == 0 )
    goto LABEL_13;
  v27 = *(struct _POINTFIX *)((char *)this + 692);
  v28 = *v6;
  READER::bNextPoint(this, &v29);
  READER::bNextPoint(this, &v30);
  BEZIER::vInit((LINER *)((char *)this + 48), &v27, v17, gpeqErrorLow);
  v18 = (struct _POINTFIX *)((char *)this + 224);
  v19 = (LINER *)((char *)this + 48);
  if ( *((_DWORD *)this + 54) )
    v20 = BEZIER32::bNext(v19, v18);
  else
    v20 = BEZIER64::bNext(v19, v18);
  v21 = *((_QWORD *)this + 89);
  *(_DWORD *)v21 = 0;
  v22 = *((_DWORD *)this + 56);
  *(_DWORD *)(v21 + 40) = v22;
  *(_DWORD *)(v21 + 44) = *((_DWORD *)this + 57);
  *(_DWORD *)(v21 + 40) = v22 - *((_DWORD *)this + 173);
  *(_DWORD *)(v21 + 44) -= *((_DWORD *)this + 174);
  *(_QWORD *)(v21 + 48) = *(_QWORD *)(v21 + 40);
  if ( v20 )
  {
    v23 = *((_QWORD *)this + 89);
    v24 = v28 - v27.x;
    *(_OWORD *)((char *)this + 600) = *(_OWORD *)v23;
    *(_OWORD *)((char *)this + 616) = *(_OWORD *)(v23 + 16);
    *(_OWORD *)((char *)this + 632) = *(_OWORD *)(v23 + 32);
    *(_OWORD *)((char *)this + 648) = *(_OWORD *)(v23 + 48);
    *(_OWORD *)((char *)this + 664) = *(_OWORD *)(v23 + 64);
    v25 = *(_QWORD *)(v23 + 80);
    LODWORD(v23) = HIDWORD(v28);
    *((_QWORD *)this + 85) = v25;
    *((_DWORD *)this + 163) = v23;
    *((_DWORD *)this + 163) -= v27.y;
    LODWORD(v23) = v30.y;
    *((_DWORD *)this + 162) = v24;
    *((_DWORD *)this + 128) = 0;
    v26 = v30.x - v29.x;
    *((_DWORD *)this + 139) = v23;
    *((_DWORD *)this + 139) -= v29.y;
    *((_DWORD *)this + 138) = v26;
    *((_QWORD *)this + 70) = *((_QWORD *)this + 69);
    *((_QWORD *)this + 89) = (char *)this + 600;
    *((_DWORD *)this + 126) = 3;
  }
  else
  {
    *((_DWORD *)this + 126) = 0;
  }
}
