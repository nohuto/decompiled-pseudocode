/*
 * XREFs of NtGdiRoundRect @ 0x1C02702C0
 * Callers:
 *     <none>
 * Callees:
 *     ??0MDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0078C50 (--0MDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??0PATHSTACKOBJ@@QEAA@AEAVXDCOBJ@@H@Z @ 0x1C007BC4C (--0PATHSTACKOBJ@@QEAA@AEAVXDCOBJ@@H@Z.c)
 *     ?bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z @ 0x1C007BE98 (-bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C008FC84 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C009C134 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     NtGdiRectangle @ 0x1C00F6E60 (NtGdiRectangle.c)
 *     ?bRoundRect@@YAHAEAVEPATHOBJ@@AEAVEBOX@@JJ@Z @ 0x1C01140D4 (-bRoundRect@@YAHAEAVEPATHOBJ@@AEAVEBOX@@JJ@Z.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     ??0EBOX@@QEAA@AEAVDCOBJ@@AEAU_RECTL@@PEAU_LINEATTRS@@H@Z @ 0x1C02806F8 (--0EBOX@@QEAA@AEAVDCOBJ@@AEAU_RECTL@@PEAU_LINEATTRS@@H@Z.c)
 */

__int64 __fastcall NtGdiRoundRect(HDC a1, __int64 a2, __int64 a3, __int64 a4, int a5, unsigned int a6, int a7)
{
  LONG v7; // r12d
  LONG v8; // r15d
  LONG v9; // edi
  POINTL *v10; // rcx
  POINTL v11; // rdx
  int v12; // ebx
  unsigned int v13; // edi
  unsigned int v14; // ecx
  POINTL v15; // rbx
  POINTL *v17[2]; // [rsp+30h] [rbp-D0h] BYREF
  struct _RECTL v18; // [rsp+40h] [rbp-C0h] BYREF
  struct _XFORMOBJ v19; // [rsp+50h] [rbp-B0h] BYREF
  _DWORD v20[20]; // [rsp+60h] [rbp-A0h] BYREF
  PATHOBJ v21[10]; // [rsp+B0h] [rbp-50h] BYREF
  _BYTE v22[32]; // [rsp+100h] [rbp+0h] BYREF
  int v23; // [rsp+120h] [rbp+20h]

  v7 = a4;
  v8 = a3;
  v9 = a2;
  if ( !a6 || !a7 )
    return NtGdiRectangle(a1, a2, a3, a4, a5);
  MDCOBJ::MDCOBJ((MDCOBJ *)v17, a1);
  v10 = v17[0];
  if ( v17[0] && (v17[0][4].y & 0x10000) == 0 )
  {
    v11 = v17[0][10];
    v12 = *(_DWORD *)(*(_QWORD *)&v11 + 8LL);
    if ( (v12 & 0x1000) != 0 )
    {
      GreDCSelectBrush(v17[0], *(_QWORD *)(*(_QWORD *)&v11 + 16LL));
      v10 = v17[0];
    }
    if ( (v12 & 0x2000) != 0 )
      GreDCSelectPen(v10, *(_QWORD *)(*(_QWORD *)&v10[10] + 24LL));
    v18.bottom = a5;
    v18.left = v9;
    v18.top = v8;
    v18.right = v7;
    EXFORMOBJ::vQuickInit((EXFORMOBJ *)&v19, (struct XDCOBJ *)v17, 516);
    v13 = 1;
    EBOX::EBOX((EBOX *)v20, (struct DCOBJ *)v17, &v18, (struct _LINEATTRS *)&v17[0][27], 1);
    if ( v20[0] )
      goto LABEL_22;
    PATHSTACKOBJ::PATHSTACKOBJ((PATHSTACKOBJ *)v21, (DC **)v17, 1);
    if ( v21[1] )
    {
      if ( (unsigned int)bRoundRect((struct EPATHOBJ *)v21, (struct EBOX *)v20, a6) )
      {
        if ( (v17[0][32].x & 1) == 0 )
        {
          if ( v20[1] )
          {
            v15 = v17[0][18];
            v17[0][18] = v17[0][19];
            v17[0][40].y |= 1u;
            v14 = EPATHOBJ::bStrokeAndOrFill(v21, v17, 0LL, 0LL, 2u);
            v17[0][18] = v15;
            v17[0][40].y |= 1u;
          }
          else
          {
            v14 = EPATHOBJ::bStrokeAndOrFill(v21, v17, (LINEATTRS *)&v17[0][27], &v19, 3u);
          }
          v13 = v14;
        }
        goto LABEL_19;
      }
    }
    else
    {
      EngSetLastError(8u);
    }
    v13 = 0;
LABEL_19:
    EPATHOBJ::vUnlock((EPATHOBJ *)v21);
    if ( v23 )
    {
      PopThreadGuardedObject(v22);
      v23 = 0;
    }
    goto LABEL_22;
  }
  EngSetLastError(6u);
  v13 = 0;
LABEL_22:
  if ( v17[0] )
    XDCOBJ::vUnlockFast((XDCOBJ *)v17);
  return v13;
}
