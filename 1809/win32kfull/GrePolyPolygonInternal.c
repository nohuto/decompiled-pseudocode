/*
 * XREFs of GrePolyPolygonInternal @ 0x1C0140DE0
 * Callers:
 *     GrePolyPolygon @ 0x1C0140CC0 (GrePolyPolygon.c)
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0056C48 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C00FAE64 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ?bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z @ 0x1C013E3DC (-bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z.c)
 *     ??0PATHSTACKOBJ@@QEAA@AEAVXDCOBJ@@H@Z @ 0x1C0140FC0 (--0PATHSTACKOBJ@@QEAA@AEAVXDCOBJ@@H@Z.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ @ 0x1C015E8E8 (--1-$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ.c)
 *     ??1MDCOBJ@@QEAA@XZ @ 0x1C015EAE8 (--1MDCOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall GrePolyPolygonInternal(HDC a1, __int64 a2, __int64 a3, int a4, int a5)
{
  unsigned int v8; // ebx
  POINTL *v9; // rcx
  POINTL v10; // rdx
  int v11; // edi
  struct _XFORMOBJ v13; // [rsp+30h] [rbp-D0h] BYREF
  POINTL *v14[2]; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v15[32]; // [rsp+50h] [rbp-B0h] BYREF
  PATHOBJ v16[10]; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v17[32]; // [rsp+C0h] [rbp-40h] BYREF
  int v18; // [rsp+E0h] [rbp-20h]

  v8 = 1;
  DCOBJ::DCOBJ((DCOBJ *)v14, a1);
  v9 = v14[0];
  if ( !v14[0] || (v14[0][4].y & 0x10000) != 0 )
  {
    EngSetLastError(6u);
    v8 = 0;
    goto LABEL_18;
  }
  v10 = v14[0][122];
  v11 = *(_DWORD *)(*(_QWORD *)&v10 + 152LL);
  if ( (v11 & 0x1000) != 0 )
  {
    GreDCSelectBrush(v14[0], *(_QWORD *)(*(_QWORD *)&v10 + 160LL));
    v9 = v14[0];
  }
  if ( (v11 & 0x2000) != 0 )
    GreDCSelectPen(v9, *(_QWORD *)(*(_QWORD *)&v9[122] + 168LL));
  if ( a4 )
  {
    EXFORMOBJ::vQuickInit((EXFORMOBJ *)&v13, (struct XDCOBJ *)v14, 516);
    PATHSTACKOBJ::PATHSTACKOBJ((PATHSTACKOBJ *)v16, (struct XDCOBJ *)v14, 1);
    if ( v16[1] )
    {
      v8 = bPolyPolygon(v16, &v13, a2, a3, a4, a5);
      if ( !v8 )
        goto LABEL_15;
      v16[0].fl |= 0x4000u;
      if ( (v14[0][31].x & 1) != 0
        || (unsigned int)EPATHOBJ::bStrokeAndOrFill(v16, v14, (LINEATTRS *)&v14[0][26], &v13, 3u) )
      {
        v8 = 1;
        goto LABEL_15;
      }
    }
    else
    {
      EngSetLastError(8u);
    }
    v8 = 0;
LABEL_15:
    EPATHOBJ::vUnlock((EPATHOBJ *)v16);
    if ( v18 )
      PopThreadGuardedObject(v17);
  }
LABEL_18:
  MDCOBJ::~MDCOBJ((MDCOBJ *)v14);
  UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>(v15);
  return v8;
}
