/*
 * XREFs of GrePolyDraw @ 0x1C0269DF4
 * Callers:
 *     NtGdiPolyDraw @ 0x1C02A8720 (NtGdiPolyDraw.c)
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C00AB2B4 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C00AD630 (--1DCOBJ@@QEAA@XZ.c)
 *     ?bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z @ 0x1C00CD910 (-bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C00DE2F0 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ??0PATHSTACKOBJ@@QEAA@AEAVXDCOBJ@@H@Z @ 0x1C01272B4 (--0PATHSTACKOBJ@@QEAA@AEAVXDCOBJ@@H@Z.c)
 *     ??1XEPATHOBJ@@QEAA@XZ @ 0x1C014A204 (--1XEPATHOBJ@@QEAA@XZ.c)
 *     ?ptfxGetCurrent@EPATHOBJ@@QEBA?AU_POINTFIX@@XZ @ 0x1C014F034 (-ptfxGetCurrent@EPATHOBJ@@QEBA-AU_POINTFIX@@XZ.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 */

__int64 __fastcall GrePolyDraw(HDC a1, struct _POINTL *a2, char *a3, unsigned int a4)
{
  __int64 v4; // r15
  POINTL *v7; // rcx
  unsigned int v8; // esi
  POINTL v9; // rdx
  int v10; // ebx
  unsigned int v11; // ebx
  ULONG v12; // ecx
  char *v13; // r15
  char v14; // al
  signed __int64 v15; // r13
  signed __int64 v16; // r13
  struct _POINTFIX Current; // rax
  POINTL *v18; // rdx
  POINTL *v20[2]; // [rsp+50h] [rbp-338h] BYREF
  char *v21; // [rsp+60h] [rbp-328h]
  struct _XFORMOBJ v22; // [rsp+68h] [rbp-320h] BYREF
  __int64 v23; // [rsp+78h] [rbp-310h] BYREF
  PATHOBJ ppo; // [rsp+80h] [rbp-308h] BYREF
  __int64 v25; // [rsp+88h] [rbp-300h]

  v4 = a4;
  DCOBJ::DCOBJ((DCOBJ *)v20, a1);
  v7 = v20[0];
  v8 = 0;
  if ( !v20[0] || (v20[0][4].y & 0x10000) != 0 )
  {
    EngSetLastError(6u);
    DCOBJ::~DCOBJ((DCOBJ *)v20);
    return 0LL;
  }
  v9 = v20[0][122];
  v10 = *(_DWORD *)(*(_QWORD *)&v9 + 152LL);
  if ( (v10 & 0x1000) != 0 )
  {
    GreDCSelectBrush(v20[0], *(_QWORD *)(*(_QWORD *)&v9 + 160LL));
    v7 = v20[0];
  }
  if ( (v10 & 0x2000) != 0 )
    GreDCSelectPen(v7, *(_QWORD *)(*(_QWORD *)&v7[122] + 168LL));
  if ( !(_DWORD)v4 )
  {
    v11 = 1;
LABEL_44:
    DCOBJ::~DCOBJ((DCOBJ *)v20);
    return v11;
  }
  EXFORMOBJ::vQuickInit((EXFORMOBJ *)&v22, (struct XDCOBJ *)v20, 516);
  PATHSTACKOBJ::PATHSTACKOBJ((PATHSTACKOBJ *)&ppo, (DC **)v20, 1);
  if ( !v25 )
  {
    v12 = 8;
LABEL_11:
    EngSetLastError(v12);
LABEL_43:
    XEPATHOBJ::~XEPATHOBJ((XEPATHOBJ *)&ppo);
    v11 = 0;
    goto LABEL_44;
  }
  v13 = &a3[v4];
  while ( a3 < v13 )
  {
    v21 = a3;
    v14 = *a3++;
    switch ( v14 )
    {
      case 2:
        while ( a3 < v13 )
        {
          if ( *a3 != 2 )
          {
            if ( a3 < v13 && (*a3 & 0xFE) == 2 )
              ++a3;
            break;
          }
          ++a3;
        }
LABEL_38:
        v16 = a3 - v21;
        if ( !EPATHOBJ::bPolyLineTo((EPATHOBJ *)&ppo, (struct EXFORMOBJ *)&v22, a2, (_DWORD)a3 - (_DWORD)v21) )
          goto LABEL_43;
        a2 += v16;
        if ( (*(a3 - 1) & 1) != 0 )
          EPATHOBJ::bCloseFigure((EPATHOBJ *)&ppo);
        break;
      case 3:
        goto LABEL_38;
      case 4:
        while ( a3 < v13 )
        {
          if ( *a3 != 4 )
          {
            if ( a3 < v13 && (*a3 & 0xFE) == 4 )
              ++a3;
            break;
          }
          ++a3;
        }
        v15 = a3 - v21;
        if ( a3 - v21 != 3 * ((a3 - v21) / 3uLL) )
        {
LABEL_18:
          v12 = 87;
          goto LABEL_11;
        }
        if ( !EPATHOBJ::bPolyBezierTo((EPATHOBJ *)&ppo, (struct EXFORMOBJ *)&v22, a2, v15) )
          goto LABEL_43;
        a2 += v15;
        if ( (*(a3 - 1) & 1) != 0 )
          EPATHOBJ::bCloseFigure((EPATHOBJ *)&ppo);
        break;
      case 6:
        if ( !EPATHOBJ::bMoveTo((EPATHOBJ *)&ppo, (struct EXFORMOBJ *)&v22, a2) )
          goto LABEL_43;
        ++a2;
        break;
      default:
        goto LABEL_18;
    }
  }
  Current = EPATHOBJ::ptfxGetCurrent((EPATHOBJ *)&ppo, &v23);
  v18 = v20[0];
  *(_DWORD *)(*(_QWORD *)&v20[0][122] + 152LL) &= 0xFFFFFCFF;
  *(_DWORD *)(*(_QWORD *)&v18[122] + 216LL) = a2[-1].x;
  *(_DWORD *)(*(_QWORD *)&v18[122] + 220LL) = a2[-1].y;
  *(_DWORD *)(*(_QWORD *)&v18[122] + 8LL) = *(_DWORD *)Current.x;
  *(_DWORD *)(*(_QWORD *)&v18[122] + 12LL) = *(_DWORD *)(*(_QWORD *)&Current + 4LL);
  if ( (v20[0][31].x & 1) != 0
    || (unsigned int)EPATHOBJ::bStrokeAndOrFill(&ppo, v20, (LINEATTRS *)&v20[0][26], &v22, 1u) )
  {
    v8 = 1;
  }
  XEPATHOBJ::~XEPATHOBJ((XEPATHOBJ *)&ppo);
  DCOBJ::~DCOBJ((DCOBJ *)v20);
  return v8;
}
