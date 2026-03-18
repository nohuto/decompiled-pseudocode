/*
 * XREFs of ?bDiagonalizeSubPath@RTP_PATHMEMOBJ@@AEAAHXZ @ 0x1C02B98CC
 * Callers:
 *     ?bDiagonalizePath@RTP_PATHMEMOBJ@@QEAAHPEAVEPATHOBJ@@@Z @ 0x1C02B9830 (-bDiagonalizePath@RTP_PATHMEMOBJ@@QEAAHPEAVEPATHOBJ@@@Z.c)
 * Callees:
 *     ?bFetchNextPoint@RTP_PATHMEMOBJ@@AEAAHXZ @ 0x1C02B9B24 (-bFetchNextPoint@RTP_PATHMEMOBJ@@AEAAHXZ.c)
 *     ?bWritePoint@RTP_PATHMEMOBJ@@AEAAHXZ @ 0x1C02B9C48 (-bWritePoint@RTP_PATHMEMOBJ@@AEAAHXZ.c)
 */

int __fastcall RTP_PATHMEMOBJ::bDiagonalizeSubPath(RTP_PATHMEMOBJ *this)
{
  int v2; // edi
  struct _POINTL *v3; // r8
  int v4; // edi
  int v5; // ebp
  int result; // eax
  int v7; // r14d
  int v8; // r15d
  int v9; // r12d
  __int64 v10; // r13
  int v11; // esi
  int v12; // eax
  int v13; // eax
  int v14; // eax
  __int64 v15; // [rsp+50h] [rbp+8h]

  *((_DWORD *)this + 40) = 0;
  *((_DWORD *)this + 47) = 0;
  if ( (unsigned int)RTP_PATHMEMOBJ::bFetchNextPoint(this)
    && (unsigned int)RTP_PATHMEMOBJ::bFetchNextPoint(this)
    && (unsigned int)RTP_PATHMEMOBJ::bFetchNextPoint(this) )
  {
    v2 = *((_DWORD *)this + 54);
    v3 = (struct _POINTL *)((char *)this + 204);
    if ( *((_DWORD *)this + 56) == v2 )
    {
      v4 = v2 - *((_DWORD *)this + 52);
      v5 = 1;
    }
    else
    {
      v5 = 0;
      v4 = *((_DWORD *)this + 53) - v3->x;
    }
    result = EPATHOBJ::bMoveTo(*((EPATHOBJ **)this + 19), 0LL, v3);
    v7 = 0;
    v8 = 1;
    v9 = 2;
    while ( 1 )
    {
      if ( !result )
        return result;
      v15 = v7;
      if ( (*((_DWORD *)this + v7 + 48) & 1) != 0 )
        return EPATHOBJ::bPolyLineTo(*((EPATHOBJ **)this + 19), 0LL, (struct _POINTL *)((char *)this + 164), 2u)
            && EPATHOBJ::bCloseFigure(*((EPATHOBJ **)this + 19));
      v10 = v9;
      if ( v5 )
      {
        v11 = *((_DWORD *)this + 2 * v9 + 51) - *((_DWORD *)this + 2 * v8 + 51);
        if ( v4 <= 0 || v4 != 16 && v11 != -16 )
        {
          result = RTP_PATHMEMOBJ::bFetchNextPoint(this);
          if ( !result )
            return result;
          v5 ^= 1u;
LABEL_28:
          v14 = v7;
          v4 = v11;
          v7 = v8;
          v8 = v9;
          v9 = v14;
          goto LABEL_29;
        }
        if ( (*((_DWORD *)this + v8 + 48) & 1) != 0 )
          return EPATHOBJ::bPolyLineTo(*((EPATHOBJ **)this + 19), 0LL, (struct _POINTL *)((char *)this + 164), 2u)
              && EPATHOBJ::bCloseFigure(*((EPATHOBJ **)this + 19));
        if ( !(unsigned int)RTP_PATHMEMOBJ::bFetchNextPoint(this)
          || !(unsigned int)RTP_PATHMEMOBJ::bFetchNextPoint(this) )
        {
          return 0;
        }
        v12 = v7;
        v7 = v9;
        v9 = v8;
        v8 = v12;
        v4 = *((_DWORD *)this + 2 * v15 + 52) - *((_DWORD *)this + 2 * v10 + 52);
      }
      else
      {
        v11 = *((_DWORD *)this + 2 * v9 + 52) - *((_DWORD *)this + 2 * v8 + 52);
        if ( v11 >= 0 || v4 != 16 && v11 != -16 )
        {
          result = RTP_PATHMEMOBJ::bFetchNextPoint(this);
          if ( !result )
            return result;
          v5 = 1;
          goto LABEL_28;
        }
        if ( (*((_DWORD *)this + v8 + 48) & 1) != 0 )
          return EPATHOBJ::bPolyLineTo(*((EPATHOBJ **)this + 19), 0LL, (struct _POINTL *)((char *)this + 164), 2u)
              && EPATHOBJ::bCloseFigure(*((EPATHOBJ **)this + 19));
        if ( !(unsigned int)RTP_PATHMEMOBJ::bFetchNextPoint(this)
          || !(unsigned int)RTP_PATHMEMOBJ::bFetchNextPoint(this) )
        {
          return 0;
        }
        v13 = v7;
        v7 = v9;
        v9 = v8;
        v8 = v13;
        v4 = *((_DWORD *)this + 2 * v15 + 51) - *((_DWORD *)this + 2 * v10 + 51);
      }
LABEL_29:
      result = RTP_PATHMEMOBJ::bWritePoint(this);
    }
  }
  return 0;
}
