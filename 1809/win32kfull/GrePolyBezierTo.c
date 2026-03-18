/*
 * XREFs of GrePolyBezierTo @ 0x1C01407D0
 * Callers:
 *     <none>
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0056C48 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C00FAE64 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ?bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z @ 0x1C013E3DC (-bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z.c)
 *     ??0PATHSTACKOBJ@@QEAA@AEAVXDCOBJ@@H@Z @ 0x1C0140FC0 (--0PATHSTACKOBJ@@QEAA@AEAVXDCOBJ@@H@Z.c)
 *     ?ptfxGetCurrent@EPATHOBJ@@QEBA?AU_POINTFIX@@XZ @ 0x1C014133C (-ptfxGetCurrent@EPATHOBJ@@QEBA-AU_POINTFIX@@XZ.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ @ 0x1C015E8E8 (--1-$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ.c)
 *     ??1MDCOBJ@@QEAA@XZ @ 0x1C015EAE8 (--1MDCOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall GrePolyBezierTo(HDC a1, struct _POINTL *a2, unsigned int a3)
{
  POINTL *v5; // rcx
  POINTL v6; // rdx
  int v7; // ebx
  unsigned int v8; // ebx
  struct _POINTFIX Current; // rax
  POINTL *v10; // r9
  __int64 v11; // r8
  ULONG v12; // ecx
  POINTL *v14[2]; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE v15[32]; // [rsp+40h] [rbp-C0h] BYREF
  struct _XFORMOBJ v16; // [rsp+60h] [rbp-A0h] BYREF
  PATHOBJ v17[10]; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v18[32]; // [rsp+D0h] [rbp-30h] BYREF
  int v19; // [rsp+F0h] [rbp-10h]

  DCOBJ::DCOBJ((DCOBJ *)v14, a1);
  v5 = v14[0];
  if ( !v14[0] || (v14[0][4].y & 0x10000) != 0 )
  {
    v12 = 6;
    goto LABEL_19;
  }
  if ( a3 < 3 || a3 != 3 * (a3 / 3) )
  {
    v12 = 87;
LABEL_19:
    EngSetLastError(v12);
    v8 = 0;
    goto LABEL_20;
  }
  v6 = v14[0][122];
  v7 = *(_DWORD *)(*(_QWORD *)&v6 + 152LL);
  if ( (v7 & 0x1000) != 0 )
  {
    GreDCSelectBrush(v14[0], *(_QWORD *)(*(_QWORD *)&v6 + 160LL));
    v5 = v14[0];
  }
  if ( (v7 & 0x2000) != 0 )
    GreDCSelectPen(v5, *(_QWORD *)(*(_QWORD *)&v5[122] + 168LL));
  EXFORMOBJ::vQuickInit((EXFORMOBJ *)&v16, (struct XDCOBJ *)v14, 516);
  v8 = 1;
  PATHSTACKOBJ::PATHSTACKOBJ((PATHSTACKOBJ *)v17, (struct XDCOBJ *)v14, 1);
  if ( !*(_QWORD *)&v17[1] )
  {
    EngSetLastError(8u);
LABEL_14:
    v8 = 0;
    goto LABEL_15;
  }
  if ( !EPATHOBJ::bPolyBezierTo((EPATHOBJ *)v17, (struct EXFORMOBJ *)&v16, a2, a3) )
    goto LABEL_14;
  Current = EPATHOBJ::ptfxGetCurrent((EPATHOBJ *)v17);
  v10 = v14[0];
  v11 = a3 - 1;
  *(_DWORD *)(*(_QWORD *)&v14[0][122] + 152LL) &= 0xFFFFFCFF;
  *(_DWORD *)(*(_QWORD *)&v10[122] + 216LL) = a2[v11].x;
  *(_DWORD *)(*(_QWORD *)&v10[122] + 220LL) = a2[v11].y;
  *(_DWORD *)(*(_QWORD *)&v10[122] + 8LL) = *(_DWORD *)Current.x;
  *(_DWORD *)(*(_QWORD *)&v10[122] + 12LL) = *(_DWORD *)(*(_QWORD *)&Current + 4LL);
  if ( (v14[0][31].x & 1) == 0
    && !(unsigned int)EPATHOBJ::bStrokeAndOrFill(v17, v14, (LINEATTRS *)&v14[0][26], &v16, 1u) )
  {
    goto LABEL_14;
  }
LABEL_15:
  EPATHOBJ::vUnlock((EPATHOBJ *)v17);
  if ( v19 )
  {
    PopThreadGuardedObject(v18);
    v19 = 0;
  }
LABEL_20:
  MDCOBJ::~MDCOBJ((MDCOBJ *)v14);
  UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>(v15);
  return v8;
}
