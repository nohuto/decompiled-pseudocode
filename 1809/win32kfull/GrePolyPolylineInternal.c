/*
 * XREFs of GrePolyPolylineInternal @ 0x1C0141584
 * Callers:
 *     GrePolyPolyline @ 0x1C01417E0 (GrePolyPolyline.c)
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0056C48 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C00FAE64 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ?bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z @ 0x1C013E3DC (-bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z.c)
 *     ??0PATHSTACKOBJ@@QEAA@AEAVXDCOBJ@@H@Z @ 0x1C0140FC0 (--0PATHSTACKOBJ@@QEAA@AEAVXDCOBJ@@H@Z.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ @ 0x1C015E8E8 (--1-$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ.c)
 *     ??1MDCOBJ@@QEAA@XZ @ 0x1C015EAE8 (--1MDCOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall GrePolyPolylineInternal(HDC a1, struct _POINTL *a2, int *a3, unsigned int a4, int a5)
{
  __int64 v6; // rsi
  unsigned int v7; // ebx
  int v9; // edi
  POINTL *v10; // rcx
  POINTL v11; // rdx
  int v12; // edi
  ULONG v13; // ecx
  int *v15; // r13
  __int64 v16; // rsi
  struct _XFORMOBJ v18; // [rsp+30h] [rbp-D0h] BYREF
  POINTL *v19[2]; // [rsp+40h] [rbp-C0h] BYREF
  char v20[32]; // [rsp+50h] [rbp-B0h] BYREF
  PATHOBJ v21[10]; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v22[32]; // [rsp+C0h] [rbp-40h] BYREF
  int v23; // [rsp+E0h] [rbp-20h]

  v6 = a4;
  v7 = 0;
  v9 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v19, a1);
  if ( !v19[0] || (v19[0][4].y & 0x10000) != 0 )
  {
    EngSetLastError(6u);
LABEL_26:
    v7 = v9;
    goto LABEL_27;
  }
  EXFORMOBJ::vQuickInit((EXFORMOBJ *)&v18, (struct XDCOBJ *)v19, 516);
  v10 = v19[0];
  v11 = v19[0][122];
  v12 = *(_DWORD *)(*(_QWORD *)&v11 + 152LL);
  if ( (v12 & 0x1000) != 0 )
  {
    GreDCSelectBrush(v19[0], *(_QWORD *)(*(_QWORD *)&v11 + 160LL));
    v10 = v19[0];
  }
  if ( (v12 & 0x2000) != 0 )
    GreDCSelectPen(v10, *(_QWORD *)(*(_QWORD *)&v10[122] + 168LL));
  v9 = 1;
  if ( !(_DWORD)v6 )
    goto LABEL_26;
  PATHSTACKOBJ::PATHSTACKOBJ((PATHSTACKOBJ *)v21, (DC **)v19, 1);
  if ( v21[1] )
  {
    v15 = &a3[v6];
    do
    {
      v16 = *a3;
      a5 -= v16;
      if ( a5 < 0 || (int)v16 < 2 )
      {
        v13 = 87;
        goto LABEL_22;
      }
      if ( !EPATHOBJ::bMoveTo((EPATHOBJ *)v21, (struct EXFORMOBJ *)&v18, a2)
        || !EPATHOBJ::bPolyLineTo((EPATHOBJ *)v21, (struct EXFORMOBJ *)&v18, a2 + 1, v16 - 1) )
      {
        goto LABEL_23;
      }
      ++a3;
      a2 += v16;
    }
    while ( a3 < v15 );
    if ( (v19[0][31].x & 1) == 0
      && !(unsigned int)EPATHOBJ::bStrokeAndOrFill(v21, v19, (LINEATTRS *)&v19[0][26], &v18, 1u) )
    {
      v9 = 0;
    }
    EPATHOBJ::vUnlock((EPATHOBJ *)v21);
    if ( v23 )
      PopThreadGuardedObject(v22);
    goto LABEL_26;
  }
  v13 = 8;
LABEL_22:
  EngSetLastError(v13);
LABEL_23:
  EPATHOBJ::vUnlock((EPATHOBJ *)v21);
  if ( v23 )
    PopThreadGuardedObject(v22);
LABEL_27:
  MDCOBJ::~MDCOBJ((MDCOBJ *)v19);
  UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>(v20);
  return v7;
}
