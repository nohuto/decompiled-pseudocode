/*
 * XREFs of NtGdiEllipse @ 0x1C0250DD0
 * Callers:
 *     ?DrawSonar@@YAXPEAUHDC__@@@Z @ 0x1C01D3B58 (-DrawSonar@@YAXPEAUHDC__@@@Z.c)
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0056C48 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C00FAE64 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ?bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z @ 0x1C013E3DC (-bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z.c)
 *     ??0PATHSTACKOBJ@@QEAA@AEAVXDCOBJ@@H@Z @ 0x1C0140FC0 (--0PATHSTACKOBJ@@QEAA@AEAVXDCOBJ@@H@Z.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ @ 0x1C015E8E8 (--1-$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ.c)
 *     ??1MDCOBJ@@QEAA@XZ @ 0x1C015EAE8 (--1MDCOBJ@@QEAA@XZ.c)
 *     ??0EBOX@@QEAA@AEAVDCOBJ@@AEAU_RECTL@@PEAU_LINEATTRS@@H@Z @ 0x1C0293A6C (--0EBOX@@QEAA@AEAVDCOBJ@@AEAU_RECTL@@PEAU_LINEATTRS@@H@Z.c)
 *     ?bEllipse@@YAHAEAVEPATHOBJ@@AEAVEBOX@@@Z @ 0x1C0294030 (-bEllipse@@YAHAEAVEPATHOBJ@@AEAVEBOX@@@Z.c)
 */

__int64 __fastcall NtGdiEllipse(HDC a1, LONG a2, LONG a3, LONG a4, LONG a5)
{
  POINTL *v8; // rcx
  POINTL v9; // rdx
  LINEATTRS *v10; // rsi
  int v11; // ebx
  unsigned int v12; // edi
  unsigned int v13; // ecx
  POINTL v14; // rbx
  struct _RECTL v16; // [rsp+30h] [rbp-D0h] BYREF
  POINTL *v17[2]; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v18[32]; // [rsp+50h] [rbp-B0h] BYREF
  struct _XFORMOBJ v19[2]; // [rsp+70h] [rbp-90h] BYREF
  _DWORD v20[20]; // [rsp+80h] [rbp-80h] BYREF
  PATHOBJ v21[10]; // [rsp+D0h] [rbp-30h] BYREF
  _BYTE v22[32]; // [rsp+120h] [rbp+20h] BYREF
  int v23; // [rsp+140h] [rbp+40h]

  DCOBJ::DCOBJ((DCOBJ *)v17, a1);
  if ( !v17[0] || (v17[0][4].y & 0x10000) != 0 )
  {
    EngSetLastError(6u);
    v12 = 0;
    goto LABEL_23;
  }
  v16.bottom = a5;
  v16.left = a2;
  v16.top = a3;
  v16.right = a4;
  EXFORMOBJ::vQuickInit((EXFORMOBJ *)v19, (struct XDCOBJ *)v17, 516);
  v8 = v17[0];
  v9 = v17[0][122];
  v10 = (LINEATTRS *)&v17[0][26];
  v11 = *(_DWORD *)(*(_QWORD *)&v9 + 152LL);
  if ( (v11 & 0x1000) != 0 )
  {
    GreDCSelectBrush(v17[0], *(_QWORD *)(*(_QWORD *)&v9 + 160LL));
    v8 = v17[0];
  }
  if ( (v11 & 0x2000) != 0 )
    GreDCSelectPen(v8, *(_QWORD *)(*(_QWORD *)&v8[122] + 168LL));
  v12 = 1;
  EBOX::EBOX((EBOX *)v20, (struct DCOBJ *)v17, &v16, v10, 1);
  if ( !v20[0] )
  {
    PATHSTACKOBJ::PATHSTACKOBJ((PATHSTACKOBJ *)v21, (DC **)v17, 1);
    if ( v21[1] )
    {
      if ( (unsigned int)bEllipse((struct EPATHOBJ *)v21, (struct EBOX *)v20) )
      {
        if ( (*(_DWORD *)(*(_QWORD *)&v19[0].ulReserved + 32LL) & 1) != 0 && v21[0].cCurves == 5 )
          v21[0].fl |= 2u;
        if ( (v17[0][31].x & 1) == 0 )
        {
          if ( v20[1] )
          {
            v14 = v17[0][17];
            v17[0][17] = v17[0][18];
            v17[0][39].y |= 1u;
            v13 = EPATHOBJ::bStrokeAndOrFill(v21, v17, 0LL, 0LL, 2u);
            v17[0][17] = v14;
            v17[0][39].y |= 1u;
          }
          else
          {
            v13 = EPATHOBJ::bStrokeAndOrFill(v21, v17, v10, v19, 3u);
          }
          v12 = v13;
        }
        goto LABEL_20;
      }
    }
    else
    {
      EngSetLastError(8u);
    }
    v12 = 0;
LABEL_20:
    EPATHOBJ::vUnlock((EPATHOBJ *)v21);
    if ( v23 )
    {
      PopThreadGuardedObject(v22);
      v23 = 0;
    }
  }
LABEL_23:
  MDCOBJ::~MDCOBJ((MDCOBJ *)v17);
  UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>((__int64)v18);
  return v12;
}
