/*
 * XREFs of GrePolyPolygonInternal @ 0x1C007BA9C
 * Callers:
 *     GrePolyPolygon @ 0x1C007C7D0 (GrePolyPolygon.c)
 * Callees:
 *     ??0MDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0078C50 (--0MDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??0PATHSTACKOBJ@@QEAA@AEAVXDCOBJ@@H@Z @ 0x1C007BC4C (--0PATHSTACKOBJ@@QEAA@AEAVXDCOBJ@@H@Z.c)
 *     ?bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z @ 0x1C007BE98 (-bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C008FC84 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C009C134 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 */

__int64 __fastcall GrePolyPolygonInternal(HDC a1, __int64 a2, __int64 a3, int a4, int a5)
{
  unsigned int v8; // ebx
  __int64 v9; // rcx
  __int64 v10; // rdx
  int v11; // edi
  _QWORD v13[2]; // [rsp+30h] [rbp-D0h] BYREF
  struct _XFORMOBJ v14; // [rsp+40h] [rbp-C0h] BYREF
  int v15; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v16; // [rsp+58h] [rbp-A8h]
  _BYTE v17[32]; // [rsp+A0h] [rbp-60h] BYREF
  int v18; // [rsp+C0h] [rbp-40h]

  v8 = 1;
  MDCOBJ::MDCOBJ((MDCOBJ *)v13, a1);
  v9 = v13[0];
  if ( !v13[0] || (*(_DWORD *)(v13[0] + 36LL) & 0x10000) != 0 )
  {
    EngSetLastError(6u);
    v8 = 0;
LABEL_14:
    v9 = v13[0];
    goto LABEL_15;
  }
  v10 = *(_QWORD *)(v13[0] + 80LL);
  v11 = *(_DWORD *)(v10 + 8);
  if ( (v11 & 0x1000) != 0 )
  {
    GreDCSelectBrush(v13[0], *(_QWORD *)(v10 + 16));
    v9 = v13[0];
  }
  if ( (v11 & 0x2000) != 0 )
  {
    GreDCSelectPen(v9, *(_QWORD *)(*(_QWORD *)(v9 + 80) + 24LL));
    v9 = v13[0];
  }
  if ( a4 )
  {
    EXFORMOBJ::vQuickInit((EXFORMOBJ *)&v14, (struct XDCOBJ *)v13, 0x204u);
    PATHSTACKOBJ::PATHSTACKOBJ((PATHSTACKOBJ *)&v15, (struct XDCOBJ *)v13, 1);
    if ( v16 )
    {
      v8 = bPolyPolygon(&v15, &v14, a2, a3, a4, a5);
      if ( !v8 )
        goto LABEL_12;
      v15 |= 0x4000u;
      if ( (*(_DWORD *)(v13[0] + 256LL) & 1) != 0
        || (unsigned int)EPATHOBJ::bStrokeAndOrFill(
                           (EPATHOBJ *)&v15,
                           (struct XDCOBJ *)v13,
                           (LINEATTRS *)(v13[0] + 216LL),
                           &v14,
                           3u) )
      {
        v8 = 1;
        goto LABEL_12;
      }
    }
    else
    {
      EngSetLastError(8u);
    }
    v8 = 0;
LABEL_12:
    EPATHOBJ::vUnlock((EPATHOBJ *)&v15);
    if ( v18 )
      PopThreadGuardedObject(v17);
    goto LABEL_14;
  }
LABEL_15:
  if ( v9 )
    XDCOBJ::vUnlockFast((XDCOBJ *)v13);
  return v8;
}
