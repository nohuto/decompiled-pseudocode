/*
 * XREFs of GrePolyPolylineInternal @ 0x1C0156964
 * Callers:
 *     GrePolyPolyline @ 0x1C01568A0 (GrePolyPolyline.c)
 * Callees:
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C006110C (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0061358 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z @ 0x1C0075DA0 (-bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z.c)
 *     ??0PATHSTACKOBJ@@QEAA@AEAVXDCOBJ@@H@Z @ 0x1C00FB094 (--0PATHSTACKOBJ@@QEAA@AEAVXDCOBJ@@H@Z.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C0102880 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 */

__int64 __fastcall GrePolyPolylineInternal(HDC a1, struct _POINTL *a2, int *a3, unsigned int a4, int a5)
{
  __int64 v6; // rdi
  unsigned int v8; // ebx
  POINTL v9; // rdx
  int v10; // ebx
  int *v12; // r12
  __int64 v13; // rdi
  ULONG v15; // ecx
  POINTL *v16[2]; // [rsp+30h] [rbp-D0h] BYREF
  struct _XFORMOBJ v17; // [rsp+40h] [rbp-C0h] BYREF
  PATHOBJ ppo; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v19; // [rsp+58h] [rbp-A8h]
  _BYTE v20[32]; // [rsp+A0h] [rbp-60h] BYREF
  int v21; // [rsp+C0h] [rbp-40h]

  v6 = a4;
  v8 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v16, a1);
  if ( !v16[0] || (v16[0][4].y & 0x10000) != 0 )
  {
    EngSetLastError(6u);
  }
  else
  {
    EXFORMOBJ::vQuickInit((EXFORMOBJ *)&v17, (struct XDCOBJ *)v16, 516);
    v9 = v16[0][122];
    v10 = *(_DWORD *)(*(_QWORD *)&v9 + 152LL);
    if ( (v10 & 0x1000) != 0 )
      GreDCSelectBrush(v16[0], *(_QWORD *)(*(_QWORD *)&v9 + 160LL));
    if ( (v10 & 0x2000) != 0 )
      GreDCSelectPen(v16[0], *(_QWORD *)(*(_QWORD *)&v16[0][122] + 168LL));
    v8 = 1;
    if ( (_DWORD)v6 )
    {
      PATHSTACKOBJ::PATHSTACKOBJ((PATHSTACKOBJ *)&ppo, (DC **)v16, 1);
      if ( v19 )
      {
        v12 = &a3[v6];
        do
        {
          v13 = *a3;
          a5 -= v13;
          if ( a5 < 0 || (int)v13 < 2 )
          {
            v15 = 87;
            goto LABEL_25;
          }
          if ( !EPATHOBJ::bMoveTo((EPATHOBJ *)&ppo, (struct EXFORMOBJ *)&v17, a2)
            || !EPATHOBJ::bPolyLineTo((EPATHOBJ *)&ppo, (struct EXFORMOBJ *)&v17, a2 + 1, v13 - 1) )
          {
            goto LABEL_26;
          }
          ++a3;
          a2 += v13;
        }
        while ( a3 < v12 );
        if ( (v16[0][31].x & 1) == 0
          && !(unsigned int)EPATHOBJ::bStrokeAndOrFill(&ppo, v16, (LINEATTRS *)&v16[0][26], &v17, 1u) )
        {
          v8 = 0;
        }
        EPATHOBJ::vUnlock((EPATHOBJ *)&ppo);
        if ( v21 )
          PopThreadGuardedObject(v20);
      }
      else
      {
        v15 = 8;
LABEL_25:
        EngSetLastError(v15);
LABEL_26:
        EPATHOBJ::vUnlock((EPATHOBJ *)&ppo);
        if ( v21 )
          PopThreadGuardedObject(v20);
        v8 = 0;
      }
    }
  }
  if ( v16[0] )
    XDCOBJ::vUnlockFast((XDCOBJ *)v16);
  return v8;
}
