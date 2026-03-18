/*
 * XREFs of GrePolylineTo @ 0x1C01404E0
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

__int64 __fastcall GrePolylineTo(HDC a1, struct _POINTL *a2, unsigned int a3)
{
  POINTL *v5; // rcx
  POINTL v6; // rdx
  int v7; // ebx
  unsigned int v8; // ebx
  struct _POINTFIX Current; // rax
  POINTL *v10; // r9
  __int64 v11; // r8
  POINTL *v13[2]; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE v14[32]; // [rsp+40h] [rbp-C0h] BYREF
  struct _XFORMOBJ v15; // [rsp+60h] [rbp-A0h] BYREF
  PATHOBJ v16[10]; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v17[32]; // [rsp+D0h] [rbp-30h] BYREF
  int v18; // [rsp+F0h] [rbp-10h]

  DCOBJ::DCOBJ((DCOBJ *)v13, a1);
  v5 = v13[0];
  if ( !v13[0] || (v13[0][4].y & 0x10000) != 0 )
  {
    EngSetLastError(6u);
    v8 = 0;
    goto LABEL_18;
  }
  v6 = v13[0][122];
  v7 = *(_DWORD *)(*(_QWORD *)&v6 + 152LL);
  if ( (v7 & 0x1000) != 0 )
  {
    GreDCSelectBrush(v13[0], *(_QWORD *)(*(_QWORD *)&v6 + 160LL));
    v5 = v13[0];
  }
  if ( (v7 & 0x2000) != 0 )
    GreDCSelectPen(v5, *(_QWORD *)(*(_QWORD *)&v5[122] + 168LL));
  if ( !a3 )
  {
    v8 = 1;
    goto LABEL_18;
  }
  EXFORMOBJ::vQuickInit((EXFORMOBJ *)&v15, (struct XDCOBJ *)v13, 516);
  v8 = 1;
  PATHSTACKOBJ::PATHSTACKOBJ((PATHSTACKOBJ *)v16, (struct XDCOBJ *)v13, 1);
  if ( !*(_QWORD *)&v16[1] )
  {
    EngSetLastError(8u);
LABEL_14:
    v8 = 0;
    goto LABEL_15;
  }
  if ( !EPATHOBJ::bPolyLineTo((EPATHOBJ *)v16, (struct EXFORMOBJ *)&v15, a2, a3) )
    goto LABEL_14;
  Current = EPATHOBJ::ptfxGetCurrent((EPATHOBJ *)v16);
  v10 = v13[0];
  v11 = a3 - 1;
  *(_DWORD *)(*(_QWORD *)&v13[0][122] + 152LL) &= 0xFFFFFCFF;
  *(_DWORD *)(*(_QWORD *)&v10[122] + 216LL) = a2[v11].x;
  *(_DWORD *)(*(_QWORD *)&v10[122] + 220LL) = a2[v11].y;
  *(_DWORD *)(*(_QWORD *)&v10[122] + 8LL) = *(_DWORD *)Current.x;
  *(_DWORD *)(*(_QWORD *)&v10[122] + 12LL) = *(_DWORD *)(*(_QWORD *)&Current + 4LL);
  if ( (v13[0][31].x & 1) == 0
    && !(unsigned int)EPATHOBJ::bStrokeAndOrFill(v16, v13, (LINEATTRS *)&v13[0][26], &v15, 1u) )
  {
    goto LABEL_14;
  }
LABEL_15:
  EPATHOBJ::vUnlock((EPATHOBJ *)v16);
  if ( v18 )
  {
    PopThreadGuardedObject(v17);
    v18 = 0;
  }
LABEL_18:
  MDCOBJ::~MDCOBJ((MDCOBJ *)v13);
  UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>(v14);
  return v8;
}
