/*
 * XREFs of GrePolyPolygonInternal @ 0x1C01497C4
 * Callers:
 *     GrePolyPolygon @ 0x1C0149700 (GrePolyPolygon.c)
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C00AB2B4 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C00AD68C (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ?bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z @ 0x1C00CD910 (-bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C00DE2F0 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ??0PATHSTACKOBJ@@QEAA@AEAVXDCOBJ@@H@Z @ 0x1C01272B4 (--0PATHSTACKOBJ@@QEAA@AEAVXDCOBJ@@H@Z.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 */

__int64 __fastcall GrePolyPolygonInternal(HDC a1, __int64 a2, __int64 a3, int a4, int a5)
{
  unsigned int v8; // ebx
  POINTL *v9; // rcx
  POINTL v10; // rdx
  int v11; // edi
  POINTL *v13[2]; // [rsp+30h] [rbp-D0h] BYREF
  struct _XFORMOBJ v14; // [rsp+40h] [rbp-C0h] BYREF
  PATHOBJ ppo; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v16; // [rsp+58h] [rbp-A8h]
  _BYTE v17[32]; // [rsp+A0h] [rbp-60h] BYREF
  int v18; // [rsp+C0h] [rbp-40h]

  v8 = 1;
  DCOBJ::DCOBJ((DCOBJ *)v13, a1);
  v9 = v13[0];
  if ( !v13[0] || (v13[0][4].y & 0x10000) != 0 )
  {
    EngSetLastError(6u);
    v8 = 0;
LABEL_15:
    v9 = v13[0];
    goto LABEL_16;
  }
  v10 = v13[0][122];
  v11 = *(_DWORD *)(*(_QWORD *)&v10 + 152LL);
  if ( (v11 & 0x1000) != 0 )
  {
    GreDCSelectBrush(v13[0], *(_QWORD *)(*(_QWORD *)&v10 + 160LL));
    v9 = v13[0];
  }
  if ( (v11 & 0x2000) != 0 )
  {
    GreDCSelectPen(v9, *(_QWORD *)(*(_QWORD *)&v9[122] + 168LL));
    v9 = v13[0];
  }
  if ( a4 )
  {
    EXFORMOBJ::vQuickInit((EXFORMOBJ *)&v14, (struct XDCOBJ *)v13, 516);
    PATHSTACKOBJ::PATHSTACKOBJ((PATHSTACKOBJ *)&ppo, (DC **)v13, 1);
    if ( v16 )
    {
      v8 = bPolyPolygon(&ppo, &v14, a2, a3, a4, a5);
      if ( !v8 )
        goto LABEL_13;
      ppo.fl |= 0x4000u;
      if ( (v13[0][31].x & 1) != 0
        || (unsigned int)EPATHOBJ::bStrokeAndOrFill(&ppo, v13, (LINEATTRS *)&v13[0][26], &v14, 3u) )
      {
        v8 = 1;
        goto LABEL_13;
      }
    }
    else
    {
      EngSetLastError(8u);
    }
    v8 = 0;
LABEL_13:
    EPATHOBJ::vUnlock((EPATHOBJ *)&ppo);
    if ( v18 )
      PopThreadGuardedObject(v17);
    goto LABEL_15;
  }
LABEL_16:
  if ( v9 )
    XDCOBJ::vUnlockFast((XDCOBJ *)v13);
  return v8;
}
