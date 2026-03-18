/*
 * XREFs of ?GrePolyBezierInternal@@YAHPEAUHDC__@@PEAUtagPOINT@@K@Z @ 0x1C024FA1C
 * Callers:
 *     GrePolyBezier @ 0x1C0250790 (GrePolyBezier.c)
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0056C48 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C00FAE64 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ?bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z @ 0x1C013E3DC (-bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z.c)
 *     ??0PATHSTACKOBJ@@QEAA@AEAVXDCOBJ@@H@Z @ 0x1C0140FC0 (--0PATHSTACKOBJ@@QEAA@AEAVXDCOBJ@@H@Z.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ @ 0x1C015E8E8 (--1-$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ.c)
 *     ??1MDCOBJ@@QEAA@XZ @ 0x1C015EAE8 (--1MDCOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall GrePolyBezierInternal(HDC a1, struct _POINTL *a2, unsigned int a3)
{
  POINTL *v5; // rcx
  unsigned int v6; // ebx
  POINTL v7; // rdx
  int v8; // esi
  ULONG v9; // ecx
  struct _XFORMOBJ v11; // [rsp+30h] [rbp-D0h] BYREF
  POINTL *v12[2]; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v13[32]; // [rsp+50h] [rbp-B0h] BYREF
  PATHOBJ v14[10]; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v15[32]; // [rsp+C0h] [rbp-40h] BYREF
  int v16; // [rsp+E0h] [rbp-20h]

  DCOBJ::DCOBJ((DCOBJ *)v12, a1);
  v5 = v12[0];
  if ( !v12[0] || (v12[0][4].y & 0x10000) != 0 )
  {
    v9 = 6;
    goto LABEL_20;
  }
  if ( a3 < 4 || (v6 = 1, a3 % 3 != 1) )
  {
    v9 = 87;
LABEL_20:
    EngSetLastError(v9);
    v6 = 0;
    goto LABEL_21;
  }
  v7 = v12[0][122];
  v8 = *(_DWORD *)(*(_QWORD *)&v7 + 152LL);
  if ( (v8 & 0x1000) != 0 )
  {
    GreDCSelectBrush(v12[0], *(_QWORD *)(*(_QWORD *)&v7 + 160LL));
    v5 = v12[0];
  }
  if ( (v8 & 0x2000) != 0 )
    GreDCSelectPen(v5, *(_QWORD *)(*(_QWORD *)&v5[122] + 168LL));
  EXFORMOBJ::vQuickInit((EXFORMOBJ *)&v11, (struct XDCOBJ *)v12, 516);
  PATHSTACKOBJ::PATHSTACKOBJ((PATHSTACKOBJ *)v14, (DC **)v12, 1);
  if ( !*(_QWORD *)&v14[1] )
  {
    EngSetLastError(8u);
LABEL_15:
    v6 = 0;
    goto LABEL_16;
  }
  if ( !EPATHOBJ::bMoveTo((EPATHOBJ *)v14, (struct EXFORMOBJ *)&v11, a2)
    || !EPATHOBJ::bPolyBezierTo((EPATHOBJ *)v14, (struct EXFORMOBJ *)&v11, a2 + 1, a3 - 1)
    || (v12[0][31].x & 1) == 0
    && !(unsigned int)EPATHOBJ::bStrokeAndOrFill(v14, v12, (LINEATTRS *)&v12[0][26], &v11, 1u) )
  {
    goto LABEL_15;
  }
LABEL_16:
  EPATHOBJ::vUnlock((EPATHOBJ *)v14);
  if ( v16 )
  {
    PopThreadGuardedObject(v15);
    v16 = 0;
  }
LABEL_21:
  MDCOBJ::~MDCOBJ((MDCOBJ *)v12);
  UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>((__int64)v13);
  return v6;
}
