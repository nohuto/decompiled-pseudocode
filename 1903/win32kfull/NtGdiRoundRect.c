/*
 * XREFs of NtGdiRoundRect @ 0x1C0157180
 * Callers:
 *     <none>
 * Callees:
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C006110C (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0061358 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z @ 0x1C0075DA0 (-bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z.c)
 *     ?bRoundRect@@YAHAEAVEPATHOBJ@@AEAVEBOX@@JJ@Z @ 0x1C0076710 (-bRoundRect@@YAHAEAVEPATHOBJ@@AEAVEBOX@@JJ@Z.c)
 *     NtGdiRectangle @ 0x1C00FA250 (NtGdiRectangle.c)
 *     ??0PATHSTACKOBJ@@QEAA@AEAVXDCOBJ@@H@Z @ 0x1C00FB094 (--0PATHSTACKOBJ@@QEAA@AEAVXDCOBJ@@H@Z.c)
 *     ??0EBOX@@QEAA@AEAVDCOBJ@@AEAU_RECTL@@PEAU_LINEATTRS@@H@Z @ 0x1C00FC8F8 (--0EBOX@@QEAA@AEAVDCOBJ@@AEAU_RECTL@@PEAU_LINEATTRS@@H@Z.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C0102880 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
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
  POINTL v16; // rbx
  POINTL *v17[2]; // [rsp+30h] [rbp-D0h] BYREF
  struct _RECTL v18; // [rsp+40h] [rbp-C0h] BYREF
  struct _XFORMOBJ v19; // [rsp+50h] [rbp-B0h] BYREF
  _DWORD v20[20]; // [rsp+60h] [rbp-A0h] BYREF
  PATHOBJ ppo; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v22; // [rsp+B8h] [rbp-48h]
  _BYTE v23[32]; // [rsp+100h] [rbp+0h] BYREF
  int v24; // [rsp+120h] [rbp+20h]

  v7 = a4;
  v8 = a3;
  v9 = a2;
  if ( !a6 || !a7 )
    return NtGdiRectangle(a1, a2, a3, a4, a5);
  DCOBJ::DCOBJ((DCOBJ *)v17, a1);
  v10 = v17[0];
  if ( v17[0] && (v17[0][4].y & 0x10000) == 0 )
  {
    v11 = v17[0][122];
    v12 = *(_DWORD *)(*(_QWORD *)&v11 + 152LL);
    if ( (v12 & 0x1000) != 0 )
    {
      GreDCSelectBrush(v17[0], *(_QWORD *)(*(_QWORD *)&v11 + 160LL));
      v10 = v17[0];
    }
    if ( (v12 & 0x2000) != 0 )
      GreDCSelectPen(v10, *(_QWORD *)(*(_QWORD *)&v10[122] + 168LL));
    v18.bottom = a5;
    v18.left = v9;
    v18.top = v8;
    v18.right = v7;
    EXFORMOBJ::vQuickInit((EXFORMOBJ *)&v19, (struct XDCOBJ *)v17, 516);
    v13 = 1;
    EBOX::EBOX((EBOX *)v20, (struct DCOBJ *)v17, &v18, (struct _LINEATTRS *)&v17[0][26], 1);
    if ( v20[0] )
      goto LABEL_18;
    PATHSTACKOBJ::PATHSTACKOBJ((PATHSTACKOBJ *)&ppo, (DC **)v17, 1);
    if ( v22 )
    {
      if ( (unsigned int)bRoundRect((struct EPATHOBJ *)&ppo, (struct EBOX *)v20, a6) )
      {
        if ( (v17[0][31].x & 1) == 0 )
        {
          if ( v20[1] )
          {
            v16 = v17[0][17];
            v17[0][17] = v17[0][18];
            v17[0][39].y |= 1u;
            v14 = EPATHOBJ::bStrokeAndOrFill(&ppo, v17, 0LL, 0LL, 2u);
            v17[0][17] = v16;
            v17[0][39].y |= 1u;
          }
          else
          {
            v14 = EPATHOBJ::bStrokeAndOrFill(&ppo, v17, (LINEATTRS *)&v17[0][26], &v19, 3u);
          }
          v13 = v14;
        }
        goto LABEL_16;
      }
    }
    else
    {
      EngSetLastError(8u);
    }
    v13 = 0;
LABEL_16:
    EPATHOBJ::vUnlock((EPATHOBJ *)&ppo);
    if ( v24 )
    {
      PopThreadGuardedObject(v23);
      v24 = 0;
    }
    goto LABEL_18;
  }
  EngSetLastError(6u);
  v13 = 0;
LABEL_18:
  if ( v17[0] )
    XDCOBJ::vUnlockFast((XDCOBJ *)v17);
  return v13;
}
