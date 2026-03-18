/*
 * XREFs of NtGdiEllipse @ 0x1C026A2C0
 * Callers:
 *     ?DrawSonar@@YAXPEAUHDC__@@@Z @ 0x1C01E8B40 (-DrawSonar@@YAXPEAUHDC__@@@Z.c)
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C00AB2B4 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C00AD68C (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ?bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z @ 0x1C00CD910 (-bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C00DE2F0 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ??0EBOX@@QEAA@AEAVDCOBJ@@AEAU_RECTL@@PEAU_LINEATTRS@@H@Z @ 0x1C0107758 (--0EBOX@@QEAA@AEAVDCOBJ@@AEAU_RECTL@@PEAU_LINEATTRS@@H@Z.c)
 *     ??0PATHSTACKOBJ@@QEAA@AEAVXDCOBJ@@H@Z @ 0x1C01272B4 (--0PATHSTACKOBJ@@QEAA@AEAVXDCOBJ@@H@Z.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     ?bEllipse@@YAHAEAVEPATHOBJ@@AEAVEBOX@@@Z @ 0x1C02A8FAC (-bEllipse@@YAHAEAVEPATHOBJ@@AEAVEBOX@@@Z.c)
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
  POINTL *v16[2]; // [rsp+30h] [rbp-D0h] BYREF
  struct _RECTL v17; // [rsp+40h] [rbp-C0h] BYREF
  struct _XFORMOBJ v18[2]; // [rsp+50h] [rbp-B0h] BYREF
  _DWORD v19[20]; // [rsp+60h] [rbp-A0h] BYREF
  PATHOBJ ppo; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v21; // [rsp+B8h] [rbp-48h]
  _BYTE v22[32]; // [rsp+100h] [rbp+0h] BYREF
  int v23; // [rsp+120h] [rbp+20h]

  DCOBJ::DCOBJ((DCOBJ *)v16, a1);
  if ( !v16[0] || (v16[0][4].y & 0x10000) != 0 )
  {
    EngSetLastError(6u);
    v12 = 0;
    goto LABEL_23;
  }
  v17.bottom = a5;
  v17.left = a2;
  v17.top = a3;
  v17.right = a4;
  EXFORMOBJ::vQuickInit((EXFORMOBJ *)v18, (struct XDCOBJ *)v16, 516);
  v8 = v16[0];
  v9 = v16[0][122];
  v10 = (LINEATTRS *)&v16[0][26];
  v11 = *(_DWORD *)(*(_QWORD *)&v9 + 152LL);
  if ( (v11 & 0x1000) != 0 )
  {
    GreDCSelectBrush(v16[0], *(_QWORD *)(*(_QWORD *)&v9 + 160LL));
    v8 = v16[0];
  }
  if ( (v11 & 0x2000) != 0 )
    GreDCSelectPen(v8, *(_QWORD *)(*(_QWORD *)&v8[122] + 168LL));
  v12 = 1;
  EBOX::EBOX((EBOX *)v19, (struct DCOBJ *)v16, &v17, v10, 1);
  if ( !v19[0] )
  {
    PATHSTACKOBJ::PATHSTACKOBJ((PATHSTACKOBJ *)&ppo, (DC **)v16, 1);
    if ( v21 )
    {
      if ( (unsigned int)bEllipse((struct EPATHOBJ *)&ppo, (struct EBOX *)v19) )
      {
        if ( (*(_DWORD *)(*(_QWORD *)&v18[0].ulReserved + 32LL) & 1) != 0 && ppo.cCurves == 5 )
          ppo.fl |= 2u;
        if ( (v16[0][31].x & 1) == 0 )
        {
          if ( v19[1] )
          {
            v14 = v16[0][17];
            v16[0][17] = v16[0][18];
            v16[0][39].y |= 1u;
            v13 = EPATHOBJ::bStrokeAndOrFill(&ppo, v16, 0LL, 0LL, 2u);
            v16[0][17] = v14;
            v16[0][39].y |= 1u;
          }
          else
          {
            v13 = EPATHOBJ::bStrokeAndOrFill(&ppo, v16, v10, v18, 3u);
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
    EPATHOBJ::vUnlock((EPATHOBJ *)&ppo);
    if ( v23 )
    {
      PopThreadGuardedObject(v22);
      v23 = 0;
    }
  }
LABEL_23:
  if ( v16[0] )
    XDCOBJ::vUnlockFast((XDCOBJ *)v16);
  return v12;
}
